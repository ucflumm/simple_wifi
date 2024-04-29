#ifndef WIFI_MANAGER_H
#define WIFI_MANAGER_H

#include "esp_err.h"

void wifi_manager_init(const char* ssid, const char* password);

#endif