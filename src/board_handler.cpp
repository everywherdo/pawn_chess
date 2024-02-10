#include "board_handler.h"

void BoardHandler::makeMove(SingleMove aMove)
{
    if(aMove.color == Color::Black)
        _state.black = _state.black^aMove.move;
    else
        _state.white = _state.white^aMove.move;

    // todo capture
    return;
}

std::vector<SingleMove> BoardHandler::generateMoves(Color color)
{
    return std::vector<SingleMove>();
}
