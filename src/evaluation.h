#pragma once
#include "board_handler.h"


// Class for calculating the evaluation of a position. Can be 
// constructed with a set of parameters to adjust the evaluation
// -> call eval() to evaluate a BoardState
class Evaluation{
public:
    // Construct the eval function with specific parameters
    Evaluation(double aIsolationParameter,
               double aXPositionParameter,
               double aYPositionParameter) :
               _isolationParameter(aIsolationParameter),
               _xPositionParameter(aXPositionParameter),
               _yPositionParameter(aYPositionParameter) {}

    Evaluation() = default;

    // Takes as argument a BoardState and returns a double;
    //  - positive is better for white
    //  - negative is better for black
    //  - 0 is even
    //  - +INF / -INF means there is a forced win for white / black
    double eval(BoardState aBoardState);

private:
    double _isolationParameter{ 1.0 };
    double _xPositionParameter{ 1.0 };
    double _yPositionParameter{ 1.0 };
};