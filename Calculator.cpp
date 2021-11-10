#include <iostream>
#include "Calculator.hpp"
int main(){
    Calculator objCalc;
    objCalc.set(10,0);
    std::cout << objCalc.add() << std::endl;
    std::cout << objCalc.sub() << std::endl;
    std::cout << objCalc.mul() << std::endl;
    std::cout << objCalc.div() << std::endl;
}