#include "goBilda_Prism.h"

#pragma region Predefined Colors
const Color Color::Amber                (255, 191, 0);
const Color Color::Maroon               (128,  0,  0);
const Color Color::DarkRed              (139,  0,  0);
const Color Color::Brown                (165, 42, 42);
const Color Color::Firebrick            (178, 34, 34);
const Color Color::Crimson              (220, 20, 60);
const Color Color::Red                  (255,  0,  0);
const Color Color::Tomato               (255, 99, 71);
const Color Color::Coral                (255,127, 80);
const Color Color::IndianRed            (205, 92, 92);
const Color Color::LightCoral           (240,128,128);
const Color Color::DarkSalmon           (233,150,122);
const Color Color::Salmon               (250,128,114);
const Color Color::LightSalmon          (255,160,122);
const Color Color::OrangeRed            (255, 69,  0);
const Color Color::DarkOrange           (255,140,  0);
const Color Color::Orange               (255,165,  0);
const Color Color::Gold                 (255,215,  0);
const Color Color::DarkGoldenRod        (184,134, 11);
const Color Color::GoldenRod            (218,165, 32);
const Color Color::PaleGoldenRod        (238,232,170);
const Color Color::DarkKhaki            (189,183,107);
const Color Color::Khaki                (240,230,140);
const Color Color::Olive                (128,128,  0);
const Color Color::Yellow               (255,255,  0);
const Color Color::YellowGreen          (154,205, 50);
const Color Color::DarkOliveGreen       ( 85,107, 47);
const Color Color::OliveDrab            (107,142, 35);
const Color Color::LawnGreen            (124,252,  0);
const Color Color::Chartreuse           (127,255,  0);
const Color Color::GreenYellow          (173,255, 47);
const Color Color::DarkGreen            (  0,100,  0);
const Color Color::Green                (  0,128,  0);
const Color Color::ForestGreen          ( 34,139, 34);
const Color Color::Lime                 (  0,255,  0);
const Color Color::LimeGreen            ( 50,205, 50);
const Color Color::LightGreen           (144,238,144);
const Color Color::PaleGreen            (152,251,152);
const Color Color::DarkSeaGreen         (143,188,143);
const Color Color::MediumSpringGreen    (  0,250,154);
const Color Color::SpringGreen          (  0,255,127);
const Color Color::SeaGreen             ( 46,139, 87);
const Color Color::MediumAquaMarine     (102,205,170);
const Color Color::MediumSeaGreen       ( 60,179,113);
const Color Color::LightSeaGreen        ( 32,178,170);
const Color Color::BlueGreen            ( 13,152,186);
const Color Color::DarkSlateGray        ( 47, 79, 79);
const Color Color::Teal                 (  0,128,128);
const Color Color::DarkCyan             (  0,139,139);
const Color Color::Aqua                 (  0,255,255);
const Color Color::Cyan                 (  0,255,255);
const Color Color::LightCyan            (224,255,255);
const Color Color::DarkTurquoise        (  0,206,209);
const Color Color::Turquoise            ( 64,224,208);
const Color Color::MediumTurquoise      ( 72,209,204);
const Color Color::PaleTurquoise        (175,238,238);
const Color Color::AquaMarine           (127,255,212);
const Color Color::PowderBlue           (176,224,230);
const Color Color::CadetBlue            ( 95,158,160);
const Color Color::SteelBlue            ( 70,130,180);
const Color Color::CornFlowerBlue       (100,149,237);
const Color Color::DeepSkyBlue          (  0,191,255);
const Color Color::DodgerBlue           ( 30,144,255);
const Color Color::LightBlue            (173,216,230);
const Color Color::SkyBlue              (135,206,235);
const Color Color::LightSkyBlue         (135,206,250);
const Color Color::MidnightBlue         ( 25, 25,112);
const Color Color::Navy                 (  0,  0,128);
const Color Color::DarkBlue             (  0,  0,139);
const Color Color::MediumBlue           (  0,  0,205);
const Color Color::Blue                 (  0,  0,255);
const Color Color::RoyalBlue            ( 65,105,225);
const Color Color::BlueViolet           (138, 43,226);
const Color Color::Indigo               ( 75,  0,130);
const Color Color::DarkSlateBlue        ( 72, 61,139);
const Color Color::SlateBlue            (106, 90,205);
const Color Color::MediumSlateBlue      (123,104,238);
const Color Color::MediumPurple         (147,112,219);
const Color Color::DarkMagenta          (139,  0,139);
const Color Color::DarkViolet           (148,  0,211);
const Color Color::DarkOrchid           (153, 50,204);
const Color Color::MediumOrchid         (186, 85,211);
const Color Color::Purple               (128,  0,128);
const Color Color::Thistle              (216,191,216);
const Color Color::Plum                 (221,160,221);
const Color Color::Violet               (238,130,238);
const Color Color::Magenta              (255,  0,255);
const Color Color::Orchid               (218,112,214);
const Color Color::MediumVioletRed      (199, 21,133);
const Color Color::PaleVioletRed        (219,112,147);
const Color Color::DeepPink             (255, 20,147);
const Color Color::HotPink              (255,105,180);
const Color Color::LightPink            (255,182,193);
const Color Color::Pink                 (255,192,203);
const Color Color::AntiqueWhite         (250,235,215);
const Color Color::Beige                (245,245,220);
const Color Color::Bisque               (255,228,196);
const Color Color::BlanchedAlmond       (255,235,205);
const Color Color::Wheat                (245,222,179);
const Color Color::CornSilk             (255,248,220);
const Color Color::LemonChiffon         (255,250,205);
const Color Color::LightGoldenRodYellow (250,250,210);
const Color Color::LightYellow          (255,255,224);
const Color Color::SaddleBrown          (139, 69, 19);
const Color Color::Sienna               (160, 82, 45);
const Color Color::Chocolate            (210,105, 30);
const Color Color::Peru                 (205,133, 63);
const Color Color::SandyBrown           (244,164, 96);
const Color Color::BurlyWood            (222,184,135);
const Color Color::Tan                  (210,180,140);
const Color Color::RosyBrown            (188,143,143);
const Color Color::Moccasin             (255,228,181);
const Color Color::NavajoWhite          (255,222,173);
const Color Color::PeachPuff            (255,218,185);
const Color Color::MistyRose            (255,228,225);
const Color Color::LavenderBlush        (255,240,245);
const Color Color::Linen                (250,240,230);
const Color Color::OldLace              (253,245,230);
const Color Color::PapayaWhip           (255,239,213);
const Color Color::SeaShell             (255,245,238);
const Color Color::MintCream            (245,255,250);
const Color Color::SlateGray            (112,128,144);
const Color Color::LightSlateGray       (119,136,153);
const Color Color::LightSteelBlue       (176,196,222);
const Color Color::Lavender             (230,230,250);
const Color Color::FloralWhite          (255,250,240);
const Color Color::AliceBlue            (240,248,255);
const Color Color::GhostWhite           (248,248,255);
const Color Color::Honeydew             (240,255,240);
const Color Color::Ivory                (255,255,240);
const Color Color::Azure                (240,255,255);
const Color Color::Snow                 (255,250,250);
const Color Color::DimGray              (105,105,105);
const Color Color::Gray                 (128,128,128);
const Color Color::DarkGray             (169,169,169);
const Color Color::Silver               (192,192,192);
const Color Color::LightGray            (211,211,211);
const Color Color::Gainsboro            (220,220,220);
const Color Color::WhiteSmoke           (245,245,245);
const Color Color::White                (255,255,255);
const Color Color::goBILDA_Yellow       (255,209,  0);
const Color Color::Transparent          (  0,  0,  0);
const Color Color::Black                (  0,  0,  0);
#pragma endregion

#define DELAY_BETWEEN_I2C_COMMANDS 5 // in ms
static bool use_delay_between_commands = false;

enum class MainRegister : uint8_t {
    DeviceID         = 0x00,
    FirmwareVersion  = 0x01,
    HardwareVersion  = 0x02,
    PowerCycleCount  = 0x03,
    RuntimeInMinutes = 0x04,
    Status           = 0x05,
    Control          = 0x06,
    EnableOrSaveSlot = 0x07,
    AnimationSlot0   = 0x08,
    AnimationSlot1   = 0x09,
    AnimationSlot2   = 0x0A,
    AnimationSlot3   = 0x0B,
    AnimationSlot4   = 0x0C,
    AnimationSlot5   = 0x0D,
    AnimationSlot6   = 0x0E,
    AnimationSlot7   = 0x0F,
    AnimationSlot8   = 0x10,
    AnimationSlot9   = 0x11,
};

// ===== AnimationBase Implementation =====
goBILDA::AnimationBase::AnimationBase(AnimationType type) 
    : animationType(type), brightness(100), startIndex(0), stopIndex(255), 
      layerHeight(LayerHeight::LAYER_DISABLED), driver(nullptr) {}

void goBILDA::AnimationBase::writeColorToRegister(AnimationRegisters subRegister, const Color& color)
{
    if (!driver) 
        return;
    uint8_t data[] = {
        static_cast<uint8_t>(subRegister), 
        color.red, 
        color.green, 
        color.blue
    };
    driver->writeRegister(driver->getRegisterAddress(layerHeight), data, sizeof(data));
}

void goBILDA::AnimationBase::writeIntToRegister(AnimationRegisters subRegister, uint32_t data)
{
    if (!driver) 
        return;
    uint8_t packet[] = {
        static_cast<uint8_t>(subRegister),
        static_cast<uint8_t>(data & 0xFF),
        static_cast<uint8_t>((data >> 8) & 0xFF),
        static_cast<uint8_t>((data >> 16) & 0xFF),
        static_cast<uint8_t>((data >> 24) & 0xFF)
    };
    driver->writeRegister(driver->getRegisterAddress(layerHeight), packet, sizeof(packet));
}

void goBILDA::AnimationBase::writeFloatToRegister(AnimationRegisters subRegister, float data)
{
    if (!driver) return;
    union {
        float f;
        uint32_t i;
    } u;
    u.f = data;
    writeIntToRegister(subRegister, u.i);
}

void goBILDA::AnimationBase::writeByteToRegister(AnimationRegisters subRegister, uint8_t data)
{
    if (!driver)
        return;
    uint8_t packet[] = {
        static_cast<uint8_t>(subRegister), 
        data
    };
    driver->writeRegister(driver->getRegisterAddress(layerHeight), packet, sizeof(packet));
}

void goBILDA::AnimationBase::writeDirectionToRegister(AnimationRegisters subRegister, Direction dir) 
{
    writeByteToRegister(subRegister, (dir == Direction::Forward) ? 1 : 0);
}

void goBILDA::AnimationBase::writeColorsToRegister(AnimationRegisters subRegister, const Color* colors, uint8_t count)
{
    if (!driver) 
        return;
    uint8_t packet[(sizeof(Color) * count) + 1] = {
        static_cast<uint8_t>(subRegister)
    }; // Max: 1 byte subregister + 10 colors * 3 bytes

    uint8_t idx = 1;
    for (uint8_t i = 0; i < count && i < 10; i++) {
        packet[idx++] = colors[i].red;
        packet[idx++] = colors[i].green;
        packet[idx++] = colors[i].blue;
    }
    driver->writeRegister(driver->getRegisterAddress(layerHeight), packet, idx);
}

void goBILDA::AnimationBase::updateAnimationOverI2C(void)
{
    if (!driver || layerHeight == LayerHeight::LAYER_DISABLED)
        return;
    
    if (!has_been_inserted){
        writeByteToRegister(AnimationRegisters::AnimationSelection, (uint32_t)animationType);
        has_been_inserted = true;
    }
    writeByteToRegister(AnimationRegisters::Brightness, brightness);
    writeByteToRegister(AnimationRegisters::StartIndex, startIndex);
    writeByteToRegister(AnimationRegisters::StopIndex, stopIndex);
    updateAnimationSpecificValues();
}

// ===== Solid Implementation =====
goBILDA::Solid::Solid(const Color& color) : AnimationBase(AnimationType::SOLID), primaryColor(color) {}

void goBILDA::Solid::updateAnimationSpecificValues(void)
{
    writeColorToRegister(AnimationRegisters::PrimaryColor, primaryColor);
}

// ===== Blink Implementation =====
goBILDA::Blink::Blink(const Color& primary, const Color& secondary) 
    : AnimationBase(AnimationType::BLINK), primaryColor(primary), 
      secondaryColor(secondary), period(2000), primaryColorPeriod(1000) {}

void goBILDA::Blink::updateAnimationSpecificValues(void) 
{
    writeColorToRegister(AnimationRegisters::PrimaryColor, primaryColor);
    writeColorToRegister(AnimationRegisters::SecondaryColor, secondaryColor);
    writeIntToRegister(AnimationRegisters::Period, period);
    writeIntToRegister(AnimationRegisters::PrimaryColorPeriod, primaryColorPeriod);
}

// ===== Pulse Implementation =====
goBILDA::Pulse::Pulse(const Color& primary, const Color& secondary) 
    : AnimationBase(AnimationType::PULSE), primaryColor(primary), 
      secondaryColor(secondary), period(1000) {}

void goBILDA::Pulse::updateAnimationSpecificValues(void)
{
    writeColorToRegister(AnimationRegisters::PrimaryColor, primaryColor);
    writeColorToRegister(AnimationRegisters::SecondaryColor, secondaryColor);
    writeIntToRegister(AnimationRegisters::Period, period);
}

// ===== SineWave Implementation =====
goBILDA::SineWave::SineWave(const Color& primary, const Color& secondary) 
    : AnimationBase(AnimationType::SINE_WAVE), primaryColor(primary), 
      secondaryColor(secondary), direction(Direction::Forward), 
      offset(0.5f), speed(0.5f), period(1000) {}

void goBILDA::SineWave::updateAnimationSpecificValues(void)
{
    writeColorToRegister(AnimationRegisters::PrimaryColor, primaryColor);
    writeColorToRegister(AnimationRegisters::SecondaryColor, secondaryColor);
    writeIntToRegister(AnimationRegisters::Period, period);
    writeDirectionToRegister(AnimationRegisters::Direction, direction);
    writeFloatToRegister(AnimationRegisters::Offset, offset);
    writeFloatToRegister(AnimationRegisters::Speed2, speed);
}

// ===== DroidScan Implementation =====
goBILDA::DroidScan::DroidScan(const Color& primary) 
    : AnimationBase(AnimationType::DROID_SCAN), primaryColor(primary), 
      secondaryColor(Color::Transparent), style(DroidScanStyle::BOTH_TAIL), 
      speed(0.4f), eyeWidth(3), trailWidth(3) {}

void goBILDA::DroidScan::updateAnimationSpecificValues(void)
{
    writeColorToRegister(AnimationRegisters::PrimaryColor, primaryColor);
    writeColorToRegister(AnimationRegisters::SecondaryColor, secondaryColor);
    writeFloatToRegister(AnimationRegisters::Speed1, speed);
    writeByteToRegister(AnimationRegisters::DroidEyeWidth, eyeWidth);
    writeByteToRegister(AnimationRegisters::DroidEyeTrailWidth, trailWidth);
    writeByteToRegister(AnimationRegisters::AnimationStyle, (uint8_t)style);
}

// ===== Rainbow Implementation =====
goBILDA::Rainbow::Rainbow() 
    : AnimationBase(AnimationType::RAINBOW), startHue(0.0f), stopHue(360.0f), 
      speed(0.5f), repeatAfter(25), direction(Direction::Forward) {}

void goBILDA::Rainbow::updateAnimationSpecificValues(void)
{
    writeFloatToRegister(AnimationRegisters::StartHue, startHue);
    writeFloatToRegister(AnimationRegisters::StopHue, stopHue);
    writeFloatToRegister(AnimationRegisters::Speed1, speed);
    writeDirectionToRegister(AnimationRegisters::Direction, direction);
    writeByteToRegister(AnimationRegisters::RepeatAfter, repeatAfter);
}

// ===== Snakes Implementation =====
goBILDA::Snakes::Snakes() 
    : AnimationBase(AnimationType::SNAKES), colorCount(3), snakeLength(5), 
      spacingBetween(2), repeatAfter(15), backgroundColor(Color::Transparent), 
      speed(0.5f), direction(Direction::Backward) {
    colors[0] = Color::Red;
    colors[1] = Color::White;
    colors[2] = Color::Blue;
}

void goBILDA::Snakes::setColors(const Color* colorArray, uint8_t count)
{
    colorCount = (count > 10) ? 10 : count;
    for (uint8_t i = 0; i < colorCount; i++)
        colors[i] = colorArray[i];
}

void goBILDA::Snakes::updateAnimationSpecificValues(void)
{
    writeByteToRegister(AnimationRegisters::ColorsUsed, colorCount);
    writeColorsToRegister(AnimationRegisters::Colors, colors, colorCount);
    writeFloatToRegister(AnimationRegisters::Speed1, speed);
    writeDirectionToRegister(AnimationRegisters::Direction, direction);
    writeByteToRegister(AnimationRegisters::SpacingBetween, spacingBetween);
    writeByteToRegister(AnimationRegisters::RepeatAfter, repeatAfter);
    writeColorToRegister(AnimationRegisters::BackgroundColor, backgroundColor);
    writeByteToRegister(AnimationRegisters::SnakeLength, snakeLength);
}

// ===== RandomAnimation Implementation =====
goBILDA::RandomAnimation::RandomAnimation() 
    : AnimationBase(AnimationType::RANDOM), startHue(0.0f), 
      stopHue(360.0f), speed(0.1f) {}

void goBILDA::RandomAnimation::updateAnimationSpecificValues(void)
{
    writeFloatToRegister(AnimationRegisters::StartHue, startHue);
    writeFloatToRegister(AnimationRegisters::StopHue, stopHue);
    writeFloatToRegister(AnimationRegisters::Speed1, speed);
}

// ===== Sparkle Implementation =====
goBILDA::Sparkle::Sparkle(const Color& primary) 
    : AnimationBase(AnimationType::SPARKLE), primaryColor(primary), 
      secondaryColor(Color::Transparent), sparkleProbability(16), period(100) {}

void goBILDA::Sparkle::updateAnimationSpecificValues(void)
{
    writeColorToRegister(AnimationRegisters::PrimaryColor, primaryColor);
    writeColorToRegister(AnimationRegisters::SecondaryColor, secondaryColor);
    writeIntToRegister(AnimationRegisters::Period, period);
    writeByteToRegister(AnimationRegisters::SparkleProbability, sparkleProbability);
}

// ===== SingleFill Implementation =====
goBILDA::SingleFill::SingleFill()
    : AnimationBase(AnimationType::SINGLE_FILL), colorCount(3), period(750), 
      speed(0.5f), pixelLength(3), direction(Direction::Backward), 
      style(SingleFillStyle::FillIn) {
    colors[0] = Color::White;
    colors[1] = Color::Green;
    colors[2] = Color::Blue;
}

void goBILDA::SingleFill::setColors(const Color* colorArray, uint8_t count)
{
    colorCount = (count > 10) ? 10 : count;
    for (uint8_t i = 0; i < colorCount; i++)
        colors[i] = colorArray[i];
}

void goBILDA::SingleFill::updateAnimationSpecificValues(void)
{
    writeByteToRegister(AnimationRegisters::ColorsUsed, colorCount);
    writeColorsToRegister(AnimationRegisters::Colors, colors, colorCount);
    writeIntToRegister(AnimationRegisters::Period, period);
    writeDirectionToRegister(AnimationRegisters::Direction, direction);
    writeByteToRegister(AnimationRegisters::PixelLength, pixelLength);
    writeFloatToRegister(AnimationRegisters::Speed2, speed);
    writeByteToRegister(AnimationRegisters::AnimationStyle, (uint8_t)style);
}

// ===== RainbowSnakes Implementation =====
goBILDA::RainbowSnakes::RainbowSnakes() 
    : AnimationBase(AnimationType::RAINBOW_SNAKES), numberOfSnakes(3), 
      snakeLength(5), spacingBetween(2), repeatAfter(15), startHue(0.0f), 
      stopHue(360.0f), backgroundColor(Color::Transparent), speed(0.5f), 
      direction(Direction::Backward) {}

void goBILDA::RainbowSnakes::updateAnimationSpecificValues(void)
{
    writeFloatToRegister(AnimationRegisters::StartHue, startHue);
    writeFloatToRegister(AnimationRegisters::StopHue, stopHue);
    writeFloatToRegister(AnimationRegisters::Speed1, speed);
    writeDirectionToRegister(AnimationRegisters::Direction, direction);
    writeByteToRegister(AnimationRegisters::SpacingBetween, spacingBetween);
    writeByteToRegister(AnimationRegisters::RepeatAfter, repeatAfter);
    writeColorToRegister(AnimationRegisters::BackgroundColor, backgroundColor);
    writeByteToRegister(AnimationRegisters::SnakeLength, snakeLength);
    writeByteToRegister(AnimationRegisters::NumberOfSnakes, numberOfSnakes);
}

// ===== PoliceLights Implementation =====
goBILDA::PoliceLights::PoliceLights() 
    : AnimationBase(AnimationType::POLICE_LIGHTS), red(Color::Red), 
      white(Color::White), blue(Color::Blue), period(1000), 
      style(PoliceLightsStyle::Style1) {}

void goBILDA::PoliceLights::updateAnimationSpecificValues(void)
{
    writeIntToRegister(AnimationRegisters::Period, period);
    writeColorToRegister(AnimationRegisters::PoliceRedColor, red);
    writeColorToRegister(AnimationRegisters::PoliceWhiteColor, white);
    writeColorToRegister(AnimationRegisters::PoliceBlueColor, blue);
    writeByteToRegister(AnimationRegisters::AnimationStyle, (uint8_t)style);
}

// ===== Prism Implementation =====
goBILDA::Prism::Prism(TwoWire* wirePort, uint8_t address) 
    : wire(wirePort), i2cAddress(address) {
    for (uint8_t i = 0; i < MAX_ANIMATIONS; i++) {
        animations[i] = nullptr;
    }
}

goBILDA::Prism::~Prism()
{
    for (uint8_t i = 0; i < MAX_ANIMATIONS; i++) {
        if (animations[i]) {
            delete animations[i];
            animations[i] = nullptr;
        }
    }
}

bool goBILDA::Prism::begin()
{
    wire->begin();
    wire->setClock(400000); // 400kHz I2C (Fast mode)
    
    // Verify device is present by checking device ID
    uint8_t deviceID = getDeviceID();
    uint8_t major, minor, patch;
    getFirmwareVersion(&major, &minor, &patch);
    if(major == 1 && minor == 0 && patch <= 5){
        use_delay_between_commands = true;
        if(Serial)
            Serial.print("Please Updated the firmware on your goBILDA Prism to the latest version\n");
    }
        
    return (deviceID == 3); // Device ID should be 3
}

uint8_t goBILDA::Prism::getRegisterAddress(LayerHeight height)
{
    if (height == LayerHeight::LAYER_DISABLED)
        return 0;
    return ANIMATION_SLOT_0 + (uint8_t)height;
}

void goBILDA::Prism::writeRegister(uint8_t reg, const uint8_t* data, uint8_t len)
{
    wire->beginTransmission(i2cAddress);
    wire->write(reg);
    wire->write(data, len);
    wire->endTransmission();
    if(use_delay_between_commands)
        delay(DELAY_BETWEEN_I2C_COMMANDS);
}

void goBILDA::Prism::readRegister(uint8_t reg, uint8_t* data, uint8_t len)
{
    Wire.beginTransmission(i2cAddress);
    Wire.write(reg);
    Wire.endTransmission(true);
    Wire.requestFrom(i2cAddress, len, static_cast<uint32_t>(true));

    uint8_t bytes_to_read = std::min(Wire.available(), static_cast<int>(len));
    for(int i = 0; i < bytes_to_read; i++)
        data[i] = Wire.read();
}

uint8_t goBILDA::Prism::readInt8(uint8_t reg)
{
    uint8_t data;
    readRegister(reg, &data, 1);
    return data;
}

uint16_t goBILDA::Prism::readInt16(uint8_t reg)
{
    uint8_t data[2];
    readRegister(reg, data, 2);
    return data[0] | ((uint16_t)data[1] << 8);
}

uint32_t goBILDA::Prism::readInt32(uint8_t reg)
{
    uint8_t data[4];
    readRegister(reg, data, 4);
    return data[0] | ((uint32_t)data[1] << 8) | ((uint32_t)data[2] << 16) | ((uint32_t)data[3] << 24);
}

uint8_t goBILDA::Prism::getDeviceID()
{
    return readInt8(DEVICE_ID);
}

void goBILDA::Prism::getFirmwareVersion(uint8_t* major, uint8_t* minor, uint8_t* patch)
{
    uint8_t data[3];
    readRegister(FIRMWARE_VERSION, data, 3);
    *patch = data[0];
    *minor = data[1];
    *major = data[2];
}

String goBILDA::Prism::getFirmwareVersionString(void)
{
    uint8_t major, minor, patch;
    getFirmwareVersion(&major, &minor, &patch);
    return String(major) + "." + String(minor) + "." + String(patch);
}

void goBILDA::Prism::getHardwareVersion(uint8_t* major, uint8_t* minor)
{
    uint8_t data[2];
    readRegister(HARDWARE_VERSION, data, 2);
    *minor = data[0];
    *major = data[1];
}

String goBILDA::Prism::getHardwareVersionString(void)
{
    uint8_t major, minor;
    getHardwareVersion(&major, &minor);
    return String(major) + "." + String(minor);
}

uint32_t goBILDA::Prism::getPowerCycleCount()
{
    return readInt32(POWER_CYCLE_COUNT);
}

uint32_t goBILDA::Prism::getRunTimeMinutes()
{
    return readInt32(RUNTIME_IN_MINUTES);
}

uint8_t goBILDA::Prism::getNumberOfLEDs()
{
    uint8_t data[4];
    readRegister(STATUS, data, 4);
    return data[0];
}

uint16_t goBILDA::Prism::getCurrentFPS()
{
    uint8_t data[4];
    readRegister(STATUS, data, 4);
    return data[1] | ((uint16_t)data[2] << 8);
}

bool goBILDA::Prism::insertAnimation(LayerHeight height, AnimationBase* animation)
{
    if (height == LayerHeight::LAYER_DISABLED || !animation) 
        return false;
    
    uint8_t idx = (uint8_t)height;
    if (idx >= MAX_ANIMATIONS) 
        return false;
    
    // Clean up existing animation if present
    if (animations[idx])
        delete animations[idx];
    
    animations[idx] = animation;
    animation->layerHeight = height;
    animation->driver = this;

    return true;
}

bool goBILDA::Prism::insertAndUpdateAnimation(LayerHeight height, AnimationBase* animation)
{
    if (!insertAnimation(height, animation))    
        return false;
    
    if(use_delay_between_commands)
        delay(DELAY_BETWEEN_I2C_COMMANDS);
    
    return updateAnimationFromIndex(height);
}

bool goBILDA::Prism::updateAllAnimations()
{
    for (uint8_t i = 0; i < MAX_ANIMATIONS; i++) {
        if (animations[i] && animations[i]->layerHeight != LayerHeight::LAYER_DISABLED)
        {
            if(use_delay_between_commands)
                delay(DELAY_BETWEEN_I2C_COMMANDS);
            animations[i]->updateAnimationOverI2C();
        }
    }
    return true;
}

bool goBILDA::Prism::updateAnimationFromIndex(LayerHeight height)
{
    if (height == LayerHeight::LAYER_DISABLED)
        return false;
    
    uint8_t idx = (uint8_t)height;
    if (idx >= MAX_ANIMATIONS || !animations[idx]) 
        return false;
    
    animations[idx]->updateAnimationOverI2C();
    return true;
}

void goBILDA::Prism::clearAllAnimations()
{
    uint8_t data[4] = {0x00, 0x00, 0x00, 0x02}; // Bit 25 set (1 << 25)
    writeRegister(CONTROL, data, sizeof(data));
    
    for (uint8_t i = 0; i < MAX_ANIMATIONS; i++) {
        if (animations[i]) {
            delete animations[i];
            animations[i] = nullptr;
        }
    }
}

void goBILDA::Prism::setTargetFPS(uint16_t fps)
{
    uint8_t top8 = ((fps >> 8) | 0x80) & 0xff;
    uint8_t btm8 = (fps >> 0) & 0xff;

    uint8_t data[4] = {
        btm8,
        top8,
        0,
        0
    };
    writeRegister(CONTROL, data, sizeof(data));
}

void goBILDA::Prism::setStripLength(uint8_t length)
{
    uint32_t command = 0x01000000 | ((uint32_t)length << 16); // Bit 24 set + length
    uint8_t data[4] = {
        0,
        0,
        length,
        0x01
    };
    writeRegister(CONTROL, data, 4);
}

void goBILDA::Prism::saveCurrentAnimationsToArtboard(Artboard artboard)
{
    uint8_t data[4] = {
        (uint8_t)(1 << (uint8_t)artboard), 
        0,
        0,
        0
    };
    writeRegister(ARTBOARD_CONTROL, data, 4);
}

void goBILDA::Prism::loadAnimationsFromArtboard(Artboard artboard)
{
    uint8_t data[4] = {
        0,
        (uint8_t)(1 << (uint8_t)artboard),
        0,
        0
    };
    writeRegister(ARTBOARD_CONTROL, data, 4);
}

void goBILDA::Prism::setDefaultBootArtboard(Artboard artboard)
{
    uint8_t data[4] = {
        0,
        0,
        (uint8_t)(1 << (uint8_t)artboard),
        0
    };
    writeRegister(ARTBOARD_CONTROL, data, 4);
}

void goBILDA::Prism::enableDefaultBootArtboard(bool enable)
{
    uint8_t data[4] = {
        0,
        0,
        0,
        static_cast<uint8_t>(enable ? 0x01 : 0x02)
    };
    writeRegister(ARTBOARD_CONTROL, data, 4);
}