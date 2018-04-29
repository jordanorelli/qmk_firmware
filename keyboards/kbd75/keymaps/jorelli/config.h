#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

// jorelli overrides start here
#define KEYMAP( \
    K000, K001,  K002,  K003, K004,  K005,  K006, K007,  K008,  K009,  K010, K011,  K012,  K013, K014, K015, \
    K100, K101,  K102,  K103, K104,  K105,  K106, K107,  K108,  K109,  K110, K111,  K112,  K113, K114, K115, \
    K200,        K202,  K203, K204,  K205,  K206, K207,  K208,  K209,  K210, K211,  K212,  K213, K214, K215, \
    K300,        K302,  K303, K304,  K305,  K306, K307,  K308,  K309,  K310, K311,  K312,  K313,       K315, \
    K400,        K402,  K403, K404,  K405,  K406, K407,  K408,  K409,  K410, K411,         K413, K414, K415, \
    K500, K501,         K503,               K506,                      K510,        K512,  K513, K514, K515  \
) { \
  { K000, K001,  K002,  K003, K004,  K005,  K006, K007,  K008,  K009,  K010, K011,  K012,  K013, K014,  K015 }, \
  { K100, K101,  K102,  K103, K104,  K105,  K106, K107,  K108,  K109,  K110, K111,  K112,  K113, K114,  K115 }, \
  { K200, KC_NO, K202,  K203, K204,  K205,  K206, K207,  K208,  K209,  K210, K211,  K212,  K213, K214,  K215 }, \
  { K300, KC_NO, K302,  K303, K304,  K305,  K306, K307,  K308,  K309,  K310, K311,  K312,  K313, KC_NO, K315 }, \
  { K400, KC_NO, K402,  K403, K404,  K405,  K406, K407,  K408,  K409,  K410, K411,  KC_NO, K413, K414,  K415 }, \
  { K500, K501,  KC_NO, K503, KC_NO, KC_NO, K506, KC_NO, KC_NO, KC_NO, K510, KC_NO, K512,  K513, K514,  K515 }  \
}

#endif
