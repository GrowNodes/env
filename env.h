#pragma once

// Hardware controller ID for I2C
#define HWC_I2C_ID 45

// Pin assignments
#define GROW_LIGHT 4
#define PELTIER 9
#define PELTIER_FAN 6
#define WATER_PUMP 5
#define AIR_SENSOR 2

struct AirSensorData {
  float temperature;
  float humidity;
  unsigned long last_read;
  bool last_read_success;
};
