#include "gameboard.h"

gameboard::gameboard()
{


}
void gameboard::populate_board(int cell_number , QString player)
{
    board[cell_number-1] = player;
}
bool gameboard::win_condition()
{

    return false;
}
