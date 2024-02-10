#pragma once

#include <cstdint>
#include <vector>

// Datastructure to store a BoardPosition
// black := black pawn positions
// white := white pawn positions
struct BoardState{
    uint64_t black;
    uint64_t white;
};

enum class Color{ Black, White };
enum class MoveType{ Advance, TakeRight, TakeLeft, Transform};

// Stores a single move
struct SingleMove{
    uint64_t move;
    Color color;
};

// Stores multiple moves?
struct Moves{
    uint64_t moves;
    MoveType type;
};

// Wrapper around a BoardState which can generate all possible moves in the current position
// and can make moves on the given positoin
class BoardHandler{
public:
    void makeMove(SingleMove aMove);
    std::vector<SingleMove> generateMoves(Color color);

private:
    BoardState _state;
};