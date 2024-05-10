## Simple wifi connection

[![Component Registry](https://components.espressif.com/components/ucflumm/simple_wifi/badge.svg)](https://components.espressif.com/components/ucflumm/simple_wifi)

This component is here to save 50 lines of code to initiate wifi.

### Usage

Just call ``wifi_manager_init(const char*ssid, const char* password);`` in your main function.

Make sure to add ``#include "simple_wifi.h"`` in the preprocessor declarations.
