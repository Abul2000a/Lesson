class TicTacToe{
    private:
    int x;
    int y;
    char turn;
    char matrix[3][3];
    void setmatrix();
    void setX();
    void setY();
    void setTurn();
    public:
    TicTacToe();
    void setM();
    void printMatrix()const;
    bool checkWin();
};