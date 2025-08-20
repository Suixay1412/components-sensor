#include <stdio.h>
#include <stdlib.h>
#include "esp_system.h"
#include "esp_random.h"
#include "esp_log.h"
#include "sensor.h"

static const char *TAG = "SENSOR";

void sensor_init(void)
{
    ESP_LOGI(TAG, "🔧 Sensor initialized (file: %s, line: %d)", __FILE__, __LINE__);
    ESP_LOGI(TAG, "📡 Sensor module ready for operation");
}

sensor_data_t sensor_read_data(void)
{
    ESP_LOGI(TAG, "📊 Reading sensor data (file: %s, line: %d)", __FILE__, __LINE__);

    sensor_data_t data;
    data.temperature = 25.5f + (float)(esp_random() % 100) / 10.0f;  // 25.5 - 35.4
    data.humidity    = 60.0f + (float)(esp_random() % 400) / 10.0f;  // 60.0 - 99.9

    ESP_LOGI(TAG, "🌡️  Temperature: %.1f °C", data.temperature);
    ESP_LOGI(TAG, "💧 Humidity: %.1f %%", data.humidity);

    return data;
}

bool sensor_check_status(void)
{
    ESP_LOGI(TAG, "✅ Sensor status check (file: %s, line: %d)", __FILE__, __LINE__);
    ESP_LOGI(TAG, "📈 All sensors operating normally");

    return true;  // mock ว่าเซนเซอร์ปกติ
}
