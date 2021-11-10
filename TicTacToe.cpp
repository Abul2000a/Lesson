#include <iostream>
#include "TicTacToe.hpp"
int main(){
    TicTacToe obj;
    obj.setM();
    obj.checkWin();
    if(obj.checkWin()==1){
        std::cout << "You Wins" << std::endl;
    }
    obj.printMatrix();
}