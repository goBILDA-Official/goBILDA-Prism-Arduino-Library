#ifndef GOBILDA_PRISM_H
#define GOBILDA_PRISM_H

#include <Arduino.h>
#include <Wire.h>
#include <memory>

    // Direction enum
enum class Direction {
    Forward,
    Backward
};

class Color {
public:
    uint8_t red;
    uint8_t green;
    uint8_t blue;

    Color(uint8_t r = 0, uint8_t g = 0, uint8_t b = 0) : red(r), green(g), blue(b) {}

    // Predefined colors
    static const Color Amber;
    static const Color Maroon;
    static const Color DarkRed;
    static const Color Brown;
    static const Color Firebrick;
    static const Color Crimson;
    static const Color Red;
    static const Color Tomato;
    static const Color Coral;
    static const Color IndianRed;
    static const Color LightCoral;
    static const Color DarkSalmon;
    static const Color Salmon;
    static const Color LightSalmon;
    static const Color OrangeRed;
    static const Color DarkOrange;
    static const Color Orange;
    static const Color Gold;
    static const Color DarkGoldenRod;
    static const Color GoldenRod;
    static const Color PaleGoldenRod;
    static const Color DarkKhaki;
    static const Color Khaki;
    static const Color Olive;
    static const Color Yellow;
    static const Color YellowGreen;
    static const Color DarkOliveGreen;
    static const Color OliveDrab;
    static const Color LawnGreen;
    static const Color Chartreuse;
    static const Color GreenYellow;
    static const Color DarkGreen;
    static const Color Green;
    static const Color ForestGreen;
    static const Color Lime;
    static const Color LimeGreen;
    static const Color LightGreen;
    static const Color PaleGreen;
    static const Color DarkSeaGreen;
    static const Color MediumSpringGreen;
    static const Color SpringGreen;
    static const Color SeaGreen;
    static const Color MediumAquaMarine;
    static const Color MediumSeaGreen;
    static const Color LightSeaGreen;
    static const Color BlueGreen;
    static const Color DarkSlateGray;
    static const Color Teal;
    static const Color DarkCyan;
    static const Color Aqua;
    static const Color Cyan;
    static const Color LightCyan;
    static const Color DarkTurquoise;
    static const Color Turquoise;
    static const Color MediumTurquoise;
    static const Color PaleTurquoise;
    static const Color AquaMarine;
    static const Color PowderBlue;
    static const Color CadetBlue;
    static const Color SteelBlue;
    static const Color CornFlowerBlue;
    static const Color DeepSkyBlue;
    static const Color DodgerBlue;
    static const Color LightBlue;
    static const Color SkyBlue;
    static const Color LightSkyBlue;
    static const Color MidnightBlue;
    static const Color Navy;
    static const Color DarkBlue;
    static const Color MediumBlue;
    static const Color Blue;
    static const Color RoyalBlue;
    static const Color BlueViolet;
    static const Color Indigo;
    static const Color DarkSlateBlue;
    static const Color SlateBlue;
    static const Color MediumSlateBlue;
    static const Color MediumPurple;
    static const Color DarkMagenta;
    static const Color DarkViolet;
    static const Color DarkOrchid;
    static const Color MediumOrchid;
    static const Color Purple;
    static const Color Thistle;
    static const Color Plum;
    static const Color Violet;
    static const Color Magenta;
    static const Color Orchid;
    static const Color MediumVioletRed;
    static const Color PaleVioletRed;
    static const Color DeepPink;
    static const Color HotPink;
    static const Color LightPink;
    static const Color Pink;
    static const Color AntiqueWhite;
    static const Color Beige;
    static const Color Bisque;
    static const Color BlanchedAlmond;
    static const Color Wheat;
    static const Color CornSilk;
    static const Color LemonChiffon;
    static const Color LightGoldenRodYellow;
    static const Color LightYellow;
    static const Color SaddleBrown;
    static const Color Sienna;
    static const Color Chocolate;
    static const Color Peru;
    static const Color SandyBrown;
    static const Color BurlyWood;
    static const Color Tan;
    static const Color RosyBrown;
    static const Color Moccasin;
    static const Color NavajoWhite;
    static const Color PeachPuff;
    static const Color MistyRose;
    static const Color LavenderBlush;
    static const Color Linen;
    static const Color OldLace;
    static const Color PapayaWhip;
    static const Color SeaShell;
    static const Color MintCream;
    static const Color SlateGray;
    static const Color LightSlateGray;
    static const Color LightSteelBlue;
    static const Color Lavender;
    static const Color FloralWhite;
    static const Color AliceBlue;
    static const Color GhostWhite;
    static const Color Honeydew;
    static const Color Ivory;
    static const Color Azure;
    static const Color Snow;
    static const Color DimGray;
    static const Color Gray;
    static const Color DarkGray;
    static const Color Silver;
    static const Color LightGray;
    static const Color Gainsboro;
    static const Color WhiteSmoke;
    static const Color White;
    static const Color goBILDA_Yellow;
    static const Color Transparent;
    static const Color Black;
};

// Layer height enum
enum class LayerHeight : uint8_t {
    LAYER_0 = 0,
    LAYER_1 = 1,
    LAYER_2 = 2,
    LAYER_3 = 3,
    LAYER_4 = 4,
    LAYER_5 = 5,
    LAYER_6 = 6,
    LAYER_7 = 7,
    LAYER_8 = 8,
    LAYER_9 = 9,
    LAYER_DISABLED = UINT8_MAX
};

namespace goBILDA{
    // Animation types
    enum class AnimationType {
        NONE = 0,
        SOLID = 1,
        BLINK = 2,
        PULSE = 3,
        SINE_WAVE = 4,
        DROID_SCAN = 5,
        RAINBOW = 6,
        SNAKES = 7,
        RANDOM = 8,
        SPARKLE = 9,
        SINGLE_FILL = 10,
        RAINBOW_SNAKES = 11,
        POLICE_LIGHTS = 12
    };

    // Artboard enum
    enum class Artboard {
        ARTBOARD_0 = 0,
        ARTBOARD_1 = 1,
        ARTBOARD_2 = 2,
        ARTBOARD_3 = 3,
        ARTBOARD_4 = 4,
        ARTBOARD_5 = 5,
        ARTBOARD_6 = 6,
        ARTBOARD_7 = 7
    };

    class Prism;

    class AnimationBase {
    protected:
        enum class AnimationRegisters : int8_t{
            AnimationSelection = 0x00,
            Brightness         = 0x01,
            StartIndex         = 0x02,
            StopIndex          = 0x03,

            PrimaryColor       = 0x04,
            StartHue           = 0x04,
            ColorsUsed         = 0x04,

            SecondaryColor     = 0x05,
            StopHue            = 0x05,
            Colors             = 0x05,

            Period             = 0x06,
            Speed1             = 0x06,

            Direction          = 0x07,
            PoliceRedColor     = 0x07,
            SparkleProbability = 0x07,
            PrimaryColorPeriod = 0x07,
            DroidEyeWidth      = 0x07,

            Offset             = 0x08,
            SpacingBetween     = 0x08,
            PixelLength        = 0x08,
            PoliceWhiteColor   = 0x08,
            DroidEyeTrailWidth = 0x08,

            Speed2             = 0x09,
            RepeatAfter        = 0x09,
            PoliceBlueColor    = 0x09,

            BackgroundColor    = 0x0A,
            Restart            = 0x0A,

            AnimationStyle     = 0x0B,
            SnakeLength        = 0x0B,

            NumberOfSnakes     = 0x0C,
        };

        AnimationType animationType;
        bool has_been_inserted = false;
        uint8_t brightness;
        uint8_t startIndex;
        uint8_t stopIndex;
        LayerHeight layerHeight;
        Prism* driver;

        // Helper methods for I2C communication
        void writeColorToRegister(AnimationRegisters subRegister, const Color& color);
        void writeIntToRegister(AnimationRegisters subRegister, uint32_t data);
        void writeFloatToRegister(AnimationRegisters subRegister, float data);
        void writeByteToRegister(AnimationRegisters subRegister, uint8_t data);
        void writeDirectionToRegister(AnimationRegisters subRegister, Direction dir);
        void writeColorsToRegister(AnimationRegisters subRegister, const Color* colors, uint8_t count);

    public:
        AnimationBase(AnimationType type);
        virtual ~AnimationBase() {}

        // Getters
        uint8_t getBrightness() const { return brightness; }
        uint8_t getStartIndex() const { return startIndex; }
        uint8_t getStopIndex() const { return stopIndex; }

        // Setters
        void setBrightness(uint8_t b) { brightness = (b > 100) ? 100 : b; }
        void setStartIndex(uint8_t idx) { startIndex = idx; }
        void setStopIndex(uint8_t idx) { stopIndex = idx; }
        void setIndexes(uint8_t start, uint8_t stop) { startIndex = start; stopIndex = stop; }

        virtual void updateAnimationOverI2C(void);
        virtual void updateAnimationSpecificValues(void) = 0;

        friend class Prism;
    };

    // Solid animation
    class Solid : public AnimationBase {
    private:
        Color primaryColor;

    public:
        Solid(const Color& color = Color::Red);
        void setPrimaryColor(const Color& color) { primaryColor = color; }
        Color getPrimaryColor() const { return primaryColor; }
        void updateAnimationSpecificValues(void) override;
    };

    // Blink animation
    class Blink : public AnimationBase {
    private:
        Color primaryColor;
        Color secondaryColor;
        uint32_t period;
        uint32_t primaryColorPeriod;

    public:
        Blink(const Color& primary = Color::Blue, const Color& secondary = Color::Red);
        void setPeriod(uint32_t p) { period = p; }
        void setPrimaryColorPeriod(uint32_t p) { primaryColorPeriod = p; }
        void setPrimaryColor(const Color& color) { primaryColor = color; }
        void setSecondaryColor(const Color& color) { secondaryColor = color; }
        void updateAnimationSpecificValues(void) override;
    };

    // Pulse animation
    class Pulse : public AnimationBase {
    private:
        Color primaryColor;
        Color secondaryColor;
        uint32_t period;

    public:
        Pulse(const Color& primary = Color::Green, const Color& secondary = Color::Red);
        void setPeriod(uint32_t p) { period = p; }
        void setPrimaryColor(const Color& color) { primaryColor = color; }
        void setSecondaryColor(const Color& color) { secondaryColor = color; }
        void updateAnimationSpecificValues(void) override;
    };

    // SineWave animation
    class SineWave : public AnimationBase {
    private:
        Color primaryColor;
        Color secondaryColor;
        Direction direction;
        float offset;
        float speed;
        uint32_t period;

    public:
        SineWave(const Color& primary = Color::Red, const Color& secondary = Color::Blue);
        void setPeriod(uint32_t p) { period = p; }
        void setSpeed(float s) { speed = s; }
        void setOffset(float o) { offset = o; }
        void setDirection(Direction d) { direction = d; }
        void setPrimaryColor(const Color& color) { primaryColor = color; }
        void setSecondaryColor(const Color& color) { secondaryColor = color; }
        void updateAnimationSpecificValues(void) override;
    };

    // DroidScan animation
    enum class DroidScanStyle {
        NO_TAIL = 0,
        FRONT_TAIL = 1,
        BACK_TAIL = 2,
        BOTH_TAIL = 3
    };

    class DroidScan : public AnimationBase {
    private:
        Color primaryColor;
        Color secondaryColor;
        DroidScanStyle style;
        float speed;
        uint8_t eyeWidth;
        uint8_t trailWidth;

    public:
        DroidScan(const Color& primary = Color::Red);
        void setSpeed(float s) { speed = s; }
        void setEyeWidth(uint8_t w) { eyeWidth = w; }
        void setTrailWidth(uint8_t w) { trailWidth = w; }
        void setDroidScanStyle(DroidScanStyle s) { style = s; }
        void setPrimaryColor(const Color& color) { primaryColor = color; }
        void setSecondaryColor(const Color& color) { secondaryColor = color; }
        void updateAnimationSpecificValues(void) override;
    };

    // Rainbow animation
    class Rainbow : public AnimationBase {
    private:
        float startHue;
        float stopHue;
        float speed;
        uint8_t repeatAfter;
        Direction direction;

    public:
        Rainbow();
        void setStartHue(float h) { startHue = h; }
        void setStopHue(float h) { stopHue = h; }
        void setSpeed(float s) { speed = s; }
        void setRepeatAfter(uint8_t r) { repeatAfter = r; }
        void setDirection(Direction d) { direction = d; }
        void updateAnimationSpecificValues(void) override;
    };

    // Snakes animation
    class Snakes : public AnimationBase {
    private:
        Color colors[10];
        uint8_t colorCount;
        uint8_t snakeLength;
        uint8_t spacingBetween;
        uint8_t repeatAfter;
        Color backgroundColor;
        float speed;
        Direction direction;

    public:
        Snakes();
        void setColors(const Color* colorArray, uint8_t count);
        void setSnakeLength(uint8_t len) { snakeLength = len; }
        void setSpacingBetween(uint8_t spacing) { spacingBetween = spacing; }
        void setRepeatAfter(uint8_t repeat) { repeatAfter = repeat; }
        void setBackgroundColor(const Color& color) { backgroundColor = color; }
        void setSpeed(float s) { speed = s; }
        void setDirection(Direction d) { direction = d; }
        void updateAnimationSpecificValues(void) override;
    };

    // Random animation
    class RandomAnimation : public AnimationBase {
    private:
        float startHue;
        float stopHue;
        float speed;

    public:
        RandomAnimation();
        void setStartHue(float h) { startHue = h; }
        void setStopHue(float h) { stopHue = h; }
        void setSpeed(float s) { speed = s; }
        void updateAnimationSpecificValues(void) override;
    };

    // Sparkle animation
    class Sparkle : public AnimationBase {
    private:
        Color primaryColor;
        Color secondaryColor;
        uint8_t sparkleProbability;
        uint32_t period;

    public:
        Sparkle(const Color& primary = Color::White);
        void setPrimaryColor(const Color& color) { primaryColor = color; }
        void setSecondaryColor(const Color& color) { secondaryColor = color; }
        void setSparkleProbability(uint8_t prob) { sparkleProbability = prob; }
        void setPeriod(uint32_t p) { period = p; }
        void updateAnimationSpecificValues(void) override;
    };

    // SingleFill animation
    enum class SingleFillStyle {
        FillIn = 0,
        FillOut = 1
    };

    class SingleFill : public AnimationBase {
    private:
        Color colors[10];
        uint8_t colorCount;
        uint32_t period;
        float speed;
        uint8_t pixelLength;
        Direction direction;
        SingleFillStyle style;

    public:
        SingleFill();
        void setColors(const Color* colorArray, uint8_t count);
        void setPeriod(uint32_t p) { period = p; }
        void setSpeed(float s) { speed = s; }
        void setPixelLength(uint8_t len) { pixelLength = len; }
        void setDirection(Direction d) { direction = d; }
        void setStyle(SingleFillStyle s) { style = s; }
        void updateAnimationSpecificValues(void) override;
    };

    // RainbowSnakes animation
    class RainbowSnakes : public AnimationBase {
    private:
        uint8_t numberOfSnakes;
        uint8_t snakeLength;
        uint8_t spacingBetween;
        uint8_t repeatAfter;
        float startHue;
        float stopHue;
        Color backgroundColor;
        float speed;
        Direction direction;

    public:
        RainbowSnakes();
        void setNumberOfSnakes(uint8_t num) { numberOfSnakes = num; }
        void setSnakeLength(uint8_t len) { snakeLength = len; }
        void setSpacingBetween(uint8_t spacing) { spacingBetween = spacing; }
        void setRepeatAfter(uint8_t repeat) { repeatAfter = repeat; }
        void setStartHue(float h) { startHue = h; }
        void setStopHue(float h) { stopHue = h; }
        void setBackgroundColor(const Color& color) { backgroundColor = color; }
        void setSpeed(float s) { speed = s; }
        void setDirection(Direction d) { direction = d; }
        void updateAnimationSpecificValues(void) override;
    };

    // PoliceLights animation
    enum class PoliceLightsStyle {
        Style1 = 0,
        Style2 = 1,
        Style3 = 2
    };

    class PoliceLights : public AnimationBase {
    private:
        Color red;
        Color white;
        Color blue;
        uint32_t period;
        PoliceLightsStyle style;

    public:
        PoliceLights();
        void setPeriod(uint32_t p) { period = p; }
        void setPoliceLightsStyle(PoliceLightsStyle s) { style = s; }
        void setPrimaryColor(const Color& color) { red = color; }
        void setSecondaryColor(const Color& color) { white = color; }
        void setTertiaryColor(const Color& color) { blue = color; }
        void updateAnimationSpecificValues(void) override;
    };

    class Prism{
    private:
        static const uint8_t DEFAULT_ADDRESS = 0x38;
        static const uint8_t MAX_ANIMATIONS = 10;
        
        TwoWire* wire;
        uint8_t i2cAddress;        
        AnimationBase* animations[MAX_ANIMATIONS];

        // Register addresses
        enum Register {
            DEVICE_ID = 0,
            FIRMWARE_VERSION = 1,
            HARDWARE_VERSION = 2,
            POWER_CYCLE_COUNT = 3,
            RUNTIME_IN_MINUTES = 4,
            STATUS = 5,
            CONTROL = 6,
            ARTBOARD_CONTROL = 7,
            ANIMATION_SLOT_0 = 8,
            ANIMATION_SLOT_1 = 9,
            ANIMATION_SLOT_2 = 10,
            ANIMATION_SLOT_3 = 11,
            ANIMATION_SLOT_4 = 12,
            ANIMATION_SLOT_5 = 13,
            ANIMATION_SLOT_6 = 14,
            ANIMATION_SLOT_7 = 15,
            ANIMATION_SLOT_8 = 16,
            ANIMATION_SLOT_9 = 17
        };

        uint8_t getRegisterAddress(LayerHeight height);
        void writeRegister(uint8_t reg, const uint8_t* data, uint8_t len);
        void readRegister(uint8_t reg, uint8_t* data, uint8_t len);
        uint32_t readInt32(uint8_t reg);
        uint16_t readInt16(uint8_t reg);
        uint8_t readInt8(uint8_t reg);

    public:
        /// @brief Constructor for Prism LED driver
        /// @param wirePort Pointer to TwoWire object for I2C communication (default: &Wire)
        /// @param address I2C address of the Prism device (default: 0x38)
        Prism(TwoWire* wirePort = &Wire, uint8_t address = DEFAULT_ADDRESS);
        ~Prism();

        /// @brief Initialize the Prism driver and verify device communication
        /// @return True if initialization successful and device responds, false otherwise
        bool begin();

        /// @brief Get the device ID register value
        /// @return Device ID (should be 3 for valid Prism device)
        uint8_t getDeviceID();

        /// @brief Get the firmware version of the Prism device
        /// @param major Pointer to store major version number
        /// @param minor Pointer to store minor version number
        /// @param patch Pointer to store patch version number
        void getFirmwareVersion(uint8_t* major, uint8_t* minor, uint8_t* patch);

        /// @brief Get the firmware version as a formatted string
        /// @return Firmware version in format "major.minor.patch"
        String getFirmwareVersionString(void);

        /// @brief Get the hardware version of the Prism device
        /// @param major Pointer to store major version number
        /// @param minor Pointer to store minor version number
        void getHardwareVersion(uint8_t* major, uint8_t* minor);

        /// @brief Get the hardware version as a formatted string
        /// @return Hardware version in format "major.minor"
        String getHardwareVersionString(void);

        /// @brief Get the total number of power cycles the device has experienced
        /// @return Number of times the device has been powered on
        uint32_t getPowerCycleCount();

        /// @brief Get the total runtime of the device since manufacturing
        /// @return Total runtime in minutes
        uint32_t getRunTimeMinutes();

        /// @brief Get the configured number of LEDs in the connected strip
        /// @return Number of LEDs (0-255)
        uint8_t getNumberOfLEDs();

        /// @brief Get the current animation refresh rate
        /// @return Current frames per second being rendered
        uint16_t getCurrentFPS();

        /// @brief Insert an animation into a specific layer without sending an update to the Prism
        /// @param height Layer slot to insert animation into (LAYER_0 through LAYER_9)
        /// @param animation Pointer to animation object to insert
        /// @return True if insertion successful, false if height is DISABLED or animation is null
        bool insertAnimation(LayerHeight height, AnimationBase* animation);

        /// @brief Insert an animation into a layer and immediately send it to the Prism
        /// @param height Layer slot to insert animation into (LAYER_0 through LAYER_9)
        /// @param animation Pointer to animation object to insert and update
        /// @return True if both insertion and update successful, false otherwise
        bool insertAndUpdateAnimation(LayerHeight height, AnimationBase* animation);

        /// @brief Send all currently stored animations to the Prism via I2C
        /// @return True when update process completes
        bool updateAllAnimations();

        /// @brief Update a specific animation layer on the Prism
        /// @param height Layer slot to update (LAYER_0 through LAYER_9)
        /// @return True if update successful, false if height is DISABLED or no animation exists
        bool updateAnimationFromIndex(LayerHeight height);

        /// @brief Clear all animations that are currently running on the Prism
        void clearAllAnimations();

        /// @brief Set the target frame rate for animation rendering
        /// @param fps Desired frames per second (0-32767, clamped internally)
        /// @note If the desired fps is too high it will automatically adjust to the maximum possible fps
        void setTargetFPS(uint16_t fps);

        /// @brief Configure the number of LEDs in the connected strip
        /// @param length Number of LEDs (0-255)
        void setStripLength(uint8_t length);
        
        /// @brief Save the current animation configuration to a non-volatile artboard slot
        /// @param artboard Artboard slot to save to (ARTBOARD_0 through ARTBOARD_7)
        void saveCurrentAnimationsToArtboard(Artboard artboard);

        /// @brief Load a previously saved animation configuration from an artboard slot
        /// @param artboard Artboard slot to load from (ARTBOARD_0 through ARTBOARD_7)
        void loadAnimationsFromArtboard(Artboard artboard);

        /// @brief Set which artboard should load automatically when device powers on
        /// @param artboard Artboard slot to use as default (ARTBOARD_0 through ARTBOARD_7)
        void setDefaultBootArtboard(Artboard artboard);
        
        /// @brief Enable or disable automatic loading of the default boot artboard on power-up
        /// @param enable True to enable boot artboard, false to disable
        void enableDefaultBootArtboard(bool enable);

        friend class AnimationBase;
    };
};

#endif