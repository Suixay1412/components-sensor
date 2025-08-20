#ifndef SENSOR_H
#define SENSOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

/**
 * @brief Sensor data structure
 */
typedef struct {
    float temperature;
    float humidity;
} sensor_data_t;

/**
 * @brief Initialize sensor module
 */
void sensor_init(void);

/**
 * @brief Read data from sensors
 * 
 * @return sensor_data_t  Latest sensor readings
 */
sensor_data_t sensor_read_data(void);

/**
 * @brief Check sensor status
 * 
 * @return true  if sensor is OK
 * @return false if sensor has an issue
 */
bool sensor_check_status(void);

#ifdef __cplusplus
}
#endif

#endif // SENSOR_H
