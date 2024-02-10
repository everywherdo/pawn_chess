#pragma once

#include "board_handler.h"

typedef unsigned long uint64_t; 

uint64_t STARTING_POSITION_BLACK = 0xff000000000000;
uint64_t STARTING_POSITION_WHITE = 0xff00;

BoardState STARTING_BOARDSTATE = { STARTING_POSITION_BLACK,
                                   STARTING_POSITION_WHITE
                                   };
