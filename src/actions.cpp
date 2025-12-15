#include <Arduino.h>
#include "ui/ui.h"
#include "ui/actions.h"
#include "ui/screens.h"
#include "ui/styles.h"

void action_change_screen(lv_event_t *e)
{
    int screenData = (int)lv_event_get_user_data(e);
    /* Clear all toolbar button checked states for home */
    lv_obj_clear_state(objects.obj0__bottom_nav_bar_button_home, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj1__bottom_nav_bar_button_home, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj2__bottom_nav_bar_button_home, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj4__bottom_nav_bar_button_home, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj5__bottom_nav_bar_button_home, LV_STATE_CHECKED);
    /* Clear all toolbar button checked states for trailer */
    lv_obj_clear_state(objects.obj0__bottom_nav_bar_button_trailer, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj1__bottom_nav_bar_button_trailer, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj2__bottom_nav_bar_button_trailer, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj4__bottom_nav_bar_button_trailer, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj5__bottom_nav_bar_button_trailer, LV_STATE_CHECKED);
    /* Clear all toolbar button checked states for power */
    lv_obj_clear_state(objects.obj0__botttom_nav_bar_button_power, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj1__botttom_nav_bar_button_power, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj2__botttom_nav_bar_button_power, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj4__botttom_nav_bar_button_power, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj5__botttom_nav_bar_button_power, LV_STATE_CHECKED);
    /* Clear all toolbar button checked states for fridge */
    lv_obj_clear_state(objects.obj0__botttom_nav_bar_button_fridge, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj1__botttom_nav_bar_button_fridge, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj2__botttom_nav_bar_button_fridge, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj4__botttom_nav_bar_button_fridge, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj5__botttom_nav_bar_button_fridge, LV_STATE_CHECKED);
    /* Clear all toolbar button checked states for settings */
    lv_obj_clear_state(objects.obj0__botttom_nav_bar_button_settings, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj1__botttom_nav_bar_button_settings, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj2__botttom_nav_bar_button_settings, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj4__botttom_nav_bar_button_settings, LV_STATE_CHECKED);
    lv_obj_clear_state(objects.obj5__botttom_nav_bar_button_settings, LV_STATE_CHECKED);

    if (screenData == 0)
    {
        lv_scr_load_anim(objects.home, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, false);
        /* Set toolbar icons on home to checked state */
        lv_obj_add_state(objects.obj0__bottom_nav_bar_button_home, LV_STATE_CHECKED);
    }
    else if (screenData == 1)
    {
        lv_scr_load_anim(objects.trailer, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, false);
        /* Set toolbar icons on home to checked state */
        lv_obj_add_state(objects.obj1__bottom_nav_bar_button_trailer, LV_STATE_CHECKED);
    }
    else if (screenData == 2)
    {
        lv_scr_load_anim(objects.power, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, false);
        /* Set toolbar icons on home to checked state */
        lv_obj_add_state(objects.obj2__botttom_nav_bar_button_power, LV_STATE_CHECKED);
    }
    else if (screenData == 3)
    {
        lv_scr_load_anim(objects.solar, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, false);
        /* Set toolbar icons on home to checked state */
        lv_obj_add_state(objects.obj4__botttom_nav_bar_button_fridge, LV_STATE_CHECKED);
    }
    else if (screenData == 4)
    {

    } else if (screenData == 5)
    {
        lv_scr_load_anim(objects.settings,LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, false);
        /* Set toolbar icons on home to checked state */
        lv_obj_add_state(objects.obj5__botttom_nav_bar_button_settings, LV_STATE_CHECKED);
    }
}
