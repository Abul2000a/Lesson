#include "Counter.h"

int Counter::counter = 0;
Counter::Counter(){count = ++counter;}
void Counter::getCount(){
    std::cout << "I am " << count << " object "<< std::endl;
}