#include "scr_st77916.h"
#include <lvgl.h>

/// EEZ-Studio 
#include "src/screens.h"
#include "src/ui.h"
#include "src/images.h"
#include "src/actions.h"
#include "src/fonts.h"
#include "src/styles.h"
#include "src/vars.h"
#include "src/structs.h"


void setup()
{
  delay(200);
  Serial.begin(115200);
  scr_lvgl_init();
  ui_init();    // UI INIT
}

void loop()
{
  lv_timer_handler();
  vTaskDelay(5);
  ui_tick();     // UI TICK
}
