#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button1_clicked()
{
    if(Player == 0 && ui->Button1->text() != "X") // this player is "O"
    {
        ui->Button1->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->Button1->text() != "O"){ // this player is "X"
        ui->Button1->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->Button1->text() == "X" ){
            ui->Button1->setText("O");
        }else{
            ui->Button1->setText("X");

        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(Player == 0 && ui->pushButton_2->text() != "X") // this player is "O"
    {
        ui->pushButton_2->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->pushButton_2->text() != "O"){ // this player is "X"
        ui->pushButton_2->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->pushButton_2->text() == "X" ){
            ui->pushButton_2->setText("O");
        }else{
            ui->pushButton_2->setText("X");

        }
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(Player == 0 && ui->pushButton_3->text() != "X") // this player is "O"
    {
        ui->pushButton_3->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->pushButton_3->text() != "O"){ // this player is "X"
        ui->pushButton_3->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->pushButton_3->text() == "X" ){
            ui->pushButton_3->setText("O");
        }else{
            ui->pushButton_3->setText("X");

        }
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(Player == 0 && ui->pushButton_4->text() != "X") // this player is "O"
    {
        ui->pushButton_4->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->pushButton_4->text() != "O"){ // this player is "X"
        ui->pushButton_4->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->pushButton_4->text() == "X" ){
            ui->pushButton_4->setText("O");
        }else{
            ui->pushButton_4->setText("X");

        }
    }

}

void MainWindow::on_pushButton_5_clicked()
{
    if(Player == 0 && ui->pushButton_5->text() != "X") // this player is "O"
    {
        ui->pushButton_5->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->pushButton_5->text() != "O"){ // this player is "X"
        ui->pushButton_5->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->pushButton_5->text() == "X" ){
            ui->pushButton_5->setText("O");
        }else{
            ui->pushButton_5->setText("X");

        }
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if(Player == 0 && ui->pushButton_6->text() != "X") // this player is "O"
    {
        ui->pushButton_6->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->pushButton_6->text() != "O"){ // this player is "X"
        ui->pushButton_6->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->pushButton_6->text() == "X" ){
            ui->pushButton_6->setText("O");
        }else{
            ui->pushButton_6->setText("X");

        }
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if(Player == 0 && ui->pushButton_7->text() != "X") // this player is "O"
    {
        ui->pushButton_7->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->pushButton_7->text() != "O"){ // this player is "X"
        ui->pushButton_7->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->pushButton_7->text() == "X" ){
            ui->pushButton_7->setText("O");
        }else{
            ui->pushButton_7->setText("X");

        }
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if(Player == 0 && ui->pushButton_8->text() != "X") // this player is "O"
    {
        ui->pushButton_8->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->pushButton_8->text() != "O"){ // this player is "X"
        ui->pushButton_8->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->pushButton_8->text() == "X" ){
            ui->pushButton_8->setText("O");
        }else{
            ui->pushButton_8->setText("X");

        }
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(Player == 0 && ui->pushButton_9->text() != "X") // this player is "O"
    {
        ui->pushButton_9->setText("O");
        PrevPlayer = 0;
        Player = 1;
    }else if(Player == 1 && ui->pushButton_9->text() != "O"){ // this player is "X"
        ui->pushButton_9->setText("X");
        PrevPlayer = 1;
        Player = 0;
    }else if(Player == 3 ){ // this player is "God mode"
        if(PrevPlayer == 0){
            Player = 1;
        }
        else if(PrevPlayer == 1){
            Player = 0;
        }

        if (ui->pushButton_9->text() == "X" ){
            ui->pushButton_9->setText("O");
        }else{
            ui->pushButton_9->setText("X");

        }
    }
}

bool MainWindow::check_win(int button_number )
{
    /* I am using the switch statement because it will give a run time advantage to the user for checking the if someone won;
     * I am also thinking about using a counter to make sure it only starts checking after the third turn (also runtime advantage)
     */
    QString one , two , three , four , five , six , seven , eight , nine;
    bool winner = false;
    one = ui->Button1->text();
    two = ui->pushButton_2->text();
    three = ui->pushButton_3->text();
    four = ui->pushButton_4->text();
    five = ui->pushButton_5->text();        // this is all just for cleanlyness
    six = ui->pushButton_6->text();
    seven = ui->pushButton_7->text();
    eight = ui->pushButton_8->text();
    nine = ui->pushButton_9->text();

    switch (button_number) {
    case 1:
        if (  ((one == two) && (two == three)) || ((one == four ) && ( four == seven )) || ((one == five ) && (five == nine))  ){
            winner = true;
            break;
        }
    case 2 :
        if (  ((one == two) && (two == three)) || ((two == five ) && (five == eight))  ){
            winner = true;
            break;
        }
    case 3:
        if(  ((one == two) && (two == three))  || ((three == five) && ( five == seven)) || ((three == six ) && (six == nine))  ){
            winner = true;
            break;
        }
    case 4:
        if (  ((one == four ) && ( four == seven ))  && ((four == five )&& (five == six)) ){
            winner = true;
            break;
        }
    case 5:
        if( ((four == five )&& (five == six)) || ((one == five ) && (five == nine)) || ((three == five) && ( five == seven)) || ((two == five ) && (five == eight))  ){
            winner = true;
            break;
        }
    case 6:
        if( ((four == five )&& (five == six)) ||  ((three == six ) && (six == nine)) ){
            winner = true;
            break;
        }
    case 7:
        if(((one == four ) && ( four == seven )) || ((three == five) && ( five == seven)) || (( seven == eight ) && (eight == nine )) ){
            winner = true;
            break;

        }
    case 8:
        if( (( seven == eight ) && (eight == nine ))  || ((two == five ) && (five == eight))){
            winner = true;
            break;
        }
    case 9:
        if((( seven == eight ) && (eight == nine ))  || ((one == five ) && (five == nine)) || ((three == six ) && (six == nine)) ){
            winner = true;
            break;
        }

    default:
        return false;
        break;
    }
    return winner;

}

void MainWindow::on_actionGodMode_triggered()
{
    Player = 3;
}

