//
//  store.cpp
//  lab1

#include "store.h"
#include "calculator.h"
#include "machine.h"
#include "message.h"
#include <iostream>

const int array_size=10;
int array_pos=0;
static unsigned int store1[array_size];

int write (unsigned int input) {
    
    if (array_pos>10){
        std::cout<<"Maximum input reached! "<<std::endl;
    }
    
    store1[array_pos]=input;
    array_pos++;
    
    return 0;
}

int read (){
    unsigned int sum=0;
    
    if(array_pos>1){
        sum=add(store1[array_pos-1], store1[array_pos-2]);
        array_pos-=2;
        write(sum);
        return sum;
    }else {
        sum=add(store1[0],store1[1]);
        array_pos=0;
        write(sum);
    }
    return sum;
}
