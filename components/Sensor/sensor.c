#include <stdio.h>
#include <stdlib.h>
#include "esp_system.h"
#include "esp_random.h"
#include "esp_log.h"
#include "sensor.h"

static const char *TAG = "SENSOR";

void sensor_init(void)
{
    ESP_LOGI(TAG, "🔧 Sensor initialized");
}

sensor_data_t sensor_read_data(void)
{
    sensor_data_t data;
    data.temperature = 25.5f + (float)(esp_random() % 100) / 10.0f;
    data.humidity    = 60.0f + (float)(esp_random() % 400) / 10.0f;

    ESP_LOGI(TAG, "🌡️ Temp: %.1f °C, 💧 Humidity: %.1f %%", data.temperature, data.humidity);

    return data;
}

bool sensor_check_status(void)
{
    ESP_LOGI(TAG, "✅ Sensor check OK");
    return true;
}
