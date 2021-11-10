#include "Calculator.h"
void Calculator::set(double m_x,double m_y){
    x = m_x;
    y = m_y;
}
double Calculator::add()const{
    return x + y;
}
double Calculator::sub()const{
    return x - y;
}
double Calculator::mul()const{
    return x * y;
}
double Calculator::div()const{
    if(y==0){
        return 0;
    }
    return x / y;
}