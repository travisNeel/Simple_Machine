//main
#include "machine.h"
#include <iostream>

int main() {
    
    while (machine()){
        std::cout<<"error! \n";
        machine();
        if (!machine()) break;
    }
    
    return 0;
}
