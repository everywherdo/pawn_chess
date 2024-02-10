#include "io_manager.h"



void printBoardState(BoardState aBoardState)
{   
    uint64_t mask = 1UL << (63);

    std::cout << "\n";
    for(int i = 0; i < 8 ; ++i) {
        for(int j = 0; j < 8; ++j) {
            if(aBoardState.black & mask) {
                std::cout << "\u25CF";
            } 
            else if(aBoardState.white & mask) {
                std::cout << "\u25CB";
            }
            else {
                std::cout << "\u2395";
            }
            std::cout << " ";
            mask = mask >> 1;
        }
        std::cout << "\n";
    }
}

SingleMove inputMove()
{
    return SingleMove();
}
