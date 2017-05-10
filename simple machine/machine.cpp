//
//  machine.cpp
//  lab1
#include <string>
#include <iostream>
#include "store.h"
#include "message.h"

int machine(){
    
    
    char add_string[4]="add";
    char msg[100]="";
    std::string prompt="Enter a positive integer, or type 'add' : ";
    
    // continuous loop
    
    while (true) {
        
        std::cout<<prompt;
        std::cin>>msg;
        
        if (isdigit(*msg)) {
            
            unsigned int msg_int=0;
            msg_int = std::stoi(msg); // converts char* to integer
            
            write(msg_int);
        }
        
        // compares the input 'msg' to the string "add", held in the variable
        // "add_string". if true, calls add() and displays the result
        
        else if(!strcmp(add_string, msg)){
            
            std::cout<<read()<<std::endl;
        }
        
        else {
            
            // prompt error and clear buffer
            std::cout<<"Error! Try again \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
    return 0;
}

void message(char* input){
    std::cout<<input;
}

