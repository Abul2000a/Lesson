#include "TicTacToe.h"
TicTacToe::TicTacToe(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix[i][j]='\0';
        }
    }
}
void TicTacToe::setX(){
    std::cout << "Enter 1 coordinate >> ";
    std::cin >> x;
}
void TicTacToe::setY(){
    std::cout << "Enter 2 coordinate >> ";
    std::cin >> y;
}
void TicTacToe::setM(){
    int count = 0;
     while(checkWin()==0 && count!=9){
         setX();
         setY();      
         setTurn();
         setmatrix();
         printMatrix();
         count++;
     }
    if(checkWin()==0 && count==9){
        std::cout << "\n\n\nNichya";
    }
}
void TicTacToe::setTurn(){
    std::cout << "Enter X or O >> ";
    std::cin >> turn; 
}
void TicTacToe::setmatrix(){
    matrix[x][y] = turn;
}
void TicTacToe::printMatrix()const{
    std::cout << "-----------"<<std::endl;
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            
            std::cout << matrix[i][j] << " | ";
        }
        std::cout << "\n-----------"<<std::endl;
    }
}
bool TicTacToe::checkWin(){
            if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X'){
            return true;
    }
    else if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O'){
            return true;
    }
    else if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O'){
            return true;
    }
    else if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X'){
            return true;
    }
    else if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O'){
            return true;
    }
    else if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X'){
            return true;
    }
    else if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='0'){
            return true;
    }
    else if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X'){
            return true;
    }
    else if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='0'){
            
            return true;
    }
    else if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X'){
            return true;
    }
    else if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O'){
            return true;
    }
    else if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X'){
            return true;
    }
    else if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O'){
            return true;
    }
    else if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X'){
            return true;
    }
    else if(matrix[2][0]=='O' && matrix[1][1]=='O' && matrix[0][2]=='O'){
            return true;
    }
    else if(matrix[2][0]=='O' && matrix[1][1]=='O' && matrix[0][2]=='X'){
            return true;
    }
    return false;
}