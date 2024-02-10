#pragma once

#include "board_handler.h"
#include "evaluation.h"
#include <vector>

// This function does a minmax search to a max depth aDepth 
// and then returns the list of possible moves from the current
// position sorted from best to worst
std::vector<SingleMove> minmax(BoardState aBoardState, Color aNextPlayer,  int aDepth);

