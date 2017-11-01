#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <QtCore>


class gameboard
{
public:
    gameboard();
    void populate_board(int cell_number , QString player);
private:
    bool win_condition();
    QString board[9];
};

#endif // GAMEBOARD_H
