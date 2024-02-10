#include <iostream>

#include "src/utils.h"
#include "src/io_manager.h"
#include "src/board_handler.h"
#include "src/minmax.h"
#include "src/evaluation.h"

int main() {
    
    std::cout << std::endl << "Here is the starting position: \n";
    BoardState boardState = STARTING_BOARDSTATE;
    printBoardState(boardState);

    return 0;
}