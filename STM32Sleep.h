#include <libmaple/gpio.h>
#include <RTClock.h>

typedef enum SleepMode {
  STOP,
  STANDBY
} SleepMode;

void sleepAndWakeUp(SleepMode mode, RTClock *rt, uint32_t seconds);

void goToSleep(SleepMode mode);

void disableAllPeripheralClocks();

void setGPIOModeToAllPins(gpio_pin_mode mode);

void switchToPLLwithHSE(rcc_pll_multiplier pllMultiplier);
