#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H


#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *settings;
    lv_obj_t *stand_by_display;
    lv_obj_t *obj0;
    lv_obj_t *background;
    lv_obj_t *label01_1;
    lv_obj_t *label01_2;
    lv_obj_t *label01_3;
    lv_obj_t *label01_4;
    lv_obj_t *label01_5;
    lv_obj_t *label01_6;
    lv_obj_t *label01_7;
    lv_obj_t *label01_8;
    lv_obj_t *label01_9;
    lv_obj_t *label01_10;
    lv_obj_t *label01_11;
    lv_obj_t *background_1;
    lv_obj_t *background_2;
    lv_obj_t *label01_19;
    lv_obj_t *label01_12;
    lv_obj_t *label01_20;
    lv_obj_t *label01_13;
    lv_obj_t *label01_21;
    lv_obj_t *label01_22;
    lv_obj_t *label01_15;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_SETTINGS = 2,
    SCREEN_ID_STAND_BY_DISPLAY = 3,
};

void create_screen_main();
void tick_screen_main();

void create_screen_settings();
void tick_screen_settings();

void create_screen_stand_by_display();
void tick_screen_stand_by_display();

void create_user_widget_wyswietlacz(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_wyswietlacz(void *flowState, int startWidgetIndex);

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/