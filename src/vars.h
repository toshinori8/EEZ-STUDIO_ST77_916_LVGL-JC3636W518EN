#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations



// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_TEMP_CURRENT_01 = 0,
    FLOW_GLOBAL_VARIABLE_TEMP_CURRENT_02 = 1,
    FLOW_GLOBAL_VARIABLE_DESCR_01 = 2,
    FLOW_GLOBAL_VARIABLE_DESCR_02 = 3,
    FLOW_GLOBAL_VARIABLE_RELAY_01 = 4,
    FLOW_GLOBAL_VARIABLE_RELAY_02 = 5,
    FLOW_GLOBAL_VARIABLE_START_TEMP01 = 6,
    FLOW_GLOBAL_VARIABLE_START_TEMP02 = 7,
    FLOW_GLOBAL_VARIABLE_CURRENT_OUTSIDE_TEMP = 8
};

// Native global variables



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/