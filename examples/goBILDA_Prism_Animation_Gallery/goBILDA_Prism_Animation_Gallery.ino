/*
 * goBILDA Prism RGB LED Driver Example
 * 
 * This example demonstrates basic usage of the Prism LED driver library.
 * Connect the Prism to your Arduino via I2C:
 * - SDA to SDA
 * - SCL to SCL
 * - VCC to 3.3V or 5V
 * - GND to GND
 */

#include "main.h"
#include <GoBilda_Prism.h>

#define SECONDS_BEFORE_CHANGING_ANIMATION 10
#define PRISM_NUMBER_OF_LEDS_CONNECTED 60
#define PRISM_DESIRED_STRIP_FRAMERATE  60

goBILDA::Prism prism; // Create Prism driver object
unsigned long next_animation_time = 0;

void setup()
{
    Serial.begin(115200);
    while (!Serial)
      delay(10);
    
    Serial.println("goBILDA Prism RGB LED Driver Example");
    
    // Initialize the Prism driver
    Wire.setPins(42, 41); // V2 CodeBox
    if (!prism.begin()) {
        Serial.println("Failed to initialize Prism driver! Please Check I2C connections");
        while (1) 
          delay(100);
    } else {
      Serial.println("Device Connected!\n");
    }
    
    // Configure the strip
    prism.setStripLength(PRISM_NUMBER_OF_LEDS_CONNECTED); // Set to your LED strip length
    prism.setTargetFPS(PRISM_DESIRED_STRIP_FRAMERATE);    // Set desired frame rate

    showPrismInfo();
    
    Serial.println("\nSetup complete! Animations running...");
}

void loop()
{
    if(millis() > next_animation_time){
      next_animation_time = millis() + (SECONDS_BEFORE_CHANGING_ANIMATION * 1000);
      showNextAnimation();
    }
}

void showPrismInfo(void)
{
    // Read and display device information
    Serial.print("Device ID: ");
    Serial.println(prism.getDeviceID());
    
    Serial.print("Firmware Version: ");
    Serial.println(prism.getFirmwareVersionString());
    
    Serial.print("Hardware Version: ");
    Serial.println(prism.getHardwareVersionString());
    
    Serial.print("Number of LEDs: ");
    Serial.println(prism.getNumberOfLEDs());
}

/* ===== Additional Examples ===== */

int current_animation = 0;
void showNextAnimation(void)
{
  std::function<void()> functionArray[] = {
    exampleSolidColorAnimation,
    exampleBlinkAnimation,
    exampleDroidScan,
    exampleSnakes,
    examplePoliceLights,
    examplePulse,
    exampleSineWave,
    exampleLayers
  };
  const int number_of_funcs = sizeof(functionArray) / sizeof(*functionArray);

  int index = current_animation % number_of_funcs;
  if(index == 0){
    prism.clearAllAnimations();
    Serial.println();
  }
  Serial.print(index);
  Serial.print(": ");
  functionArray[index]();

  current_animation++;
}

void exampleSolidColorAnimation(void)
{
    Serial.println(__func__);

    goBILDA::Solid* solidRed = new goBILDA::Solid(Color::Red);      // Solid Reds
    solidRed->setBrightness(50);                                    // 50% brightness
    prism.insertAndUpdateAnimation(LayerHeight::LAYER_0, solidRed); // Layer 0
}

void exampleBlinkAnimation(void)
{
    Serial.println(__func__);

    goBILDA::Blink* blink = new goBILDA::Blink(Color::Blue, Color::Green);  // Blink Blue & Green
    blink->setPeriod(1000);                                                 // 1 second total period
    blink->setPrimaryColorPeriod(500);                                      // Blue for 0.5s & Green for the rest
    prism.insertAndUpdateAnimation(LayerHeight::LAYER_0, blink);            // Layer 0
}

void exampleDroidScan()
{
    Serial.println(__func__);

    goBILDA::DroidScan* scanner = new goBILDA::DroidScan(Color::Red); // Red Droid Scanner
    scanner->setSpeed(0.6f);                                          // Speed at 60%
    scanner->setEyeWidth(5);                                          // Eye Width at 5 pixels
    scanner->setTrailWidth(10);                                       // Trail Width at 10 pixels
    scanner->setIndexes(0, 23);                                       // Bounce between pixels 0 to 23
    scanner->setDroidScanStyle(goBILDA::DroidScanStyle::BOTH_TAIL);   // Tail should be on the front and back of the eye
    prism.insertAndUpdateAnimation(LayerHeight::LAYER_0, scanner);    // Layer 0
}

void exampleSnakes()
{
    Serial.println(__func__);

    Color snakeColors[] = {Color::Red, Color::Orange, Color::Yellow, Color::Green, Color::Blue, Color::Indigo, Color::Violet};
    goBILDA::Snakes* snakes = new goBILDA::Snakes();              // Snakes with the colors above
    snakes->setColors(snakeColors, 7);                            // Colors above and the number of colors to display (0-10)
    snakes->setSnakeLength(3);                                    // Length of each individual snake
    snakes->setSpacingBetween(1);                                 // Spacing between each snake
    snakes->setRepeatAfter(8);                                    // After all snakes have gone through restart after 8 pixels
    snakes->setSpeed(0.3f);                                       // Speed at 30%
    snakes->setBackgroundColor(Color::Transparent);               // Set the background to Black/Transparent
    snakes->setDirection(Direction::Forward);                     // Make the snake move forward
    prism.insertAndUpdateAnimation(LayerHeight::LAYER_0, snakes); // Layer 0
}

void examplePoliceLights()
{
    Serial.println(__func__);

    goBILDA::PoliceLights* police = new goBILDA::PoliceLights();      // Police Lights Animation
    police->setPeriod(1000);                                          // Period for the Animation
    police->setIndexes(0, 23);                                        // Show on pixels 0-23
    police->setPoliceLightsStyle(goBILDA::PoliceLightsStyle::Style1); // Use Style 1
    prism.insertAndUpdateAnimation(LayerHeight::LAYER_0, police);     // Layer 0
}

void examplePulse()
{
  Serial.println(__func__);

  goBILDA::Pulse* pulse = new goBILDA::Pulse(Color::Cyan, Color::Purple); // Cyan & Purple Pulse
  pulse->setPeriod(2000);                                                 // Fades between Cyan & Purple every 2 seconds
  pulse->setBrightness(90);                                               // 90% brightness 
  prism.insertAndUpdateAnimation(LayerHeight::LAYER_0, pulse);            // Layer 0
}

void exampleSineWave()
{
  Serial.println(__func__);

  goBILDA::SineWave* wave = new goBILDA::SineWave(Color::Yellow, Color::Transparent); // Yellow & Black Sinewave
  wave->setPeriod(100);                                                               // 100ms Period
  wave->setSpeed(0.75f);                                                              // sin(speed)
  prism.insertAndUpdateAnimation(LayerHeight::LAYER_0, wave);                         // Layer 0
}

void exampleLayers(void)
{
  Serial.println(__func__);
  
  goBILDA::SingleFill *sf1 = new goBILDA::SingleFill();
  goBILDA::SingleFill *sf2 = new goBILDA::SingleFill();
  goBILDA::DroidScan *ds   = new goBILDA::DroidScan();

  sf1->setIndexes( 0, 5);
  sf1->setPixelLength(1);
  sf1->setDirection(Direction::Forward);

  sf2->setIndexes(18, 23);
  sf2->setPixelLength(1);
  sf2->setDirection(Direction::Backward);

  ds->setIndexes(6, 17);
  ds->setEyeWidth(1);
  ds->setTrailWidth(3);
  ds->setSpeed(.35);

  prism.insertAnimation(LayerHeight::LAYER_0, ds);
  prism.insertAnimation(LayerHeight::LAYER_1, sf1);
  prism.insertAnimation(LayerHeight::LAYER_2, sf2);
  prism.updateAllAnimations();
}

void exampleArtboards()
{
    // Save current animations to artboard 0
    prism.saveCurrentAnimationsToArtboard(goBILDA::Artboard::ARTBOARD_0);
    
    // Load different animations...
    // ...then save to artboard 1
    prism.saveCurrentAnimationsToArtboard(goBILDA::Artboard::ARTBOARD_1);
    
    // Load artboard 0 back
    prism.loadAnimationsFromArtboard(goBILDA::Artboard::ARTBOARD_0);
    
    // Set artboard 0 as default boot animation
    prism.setDefaultBootArtboard(goBILDA::Artboard::ARTBOARD_0);
    prism.enableDefaultBootArtboard(true);
}