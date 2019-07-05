/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: root
 *
 * Created on June 21, 2019, 12:03 AM
 */

#include <cstdlib>
#include "LDPC.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i = 0;
    while (1) 
    {
        LDPC *ptr = NULL;
        ptr = new LDPC;
        ptr->set_difficulty(3);
        ptr->initialization();
        ptr->generate_seed(i++);
        ptr->generate_H();
        ptr->generate_Q();
        ptr->generate_hv((const unsigned char*)"cdexff12fff3ffff3f3ff3fff3f3f3feeeed");
        ptr->decoding();
        ptr->print_word(NULL,1);
        ptr->print_word(NULL,2);
        ptr->decision();
        delete ptr;
    }
    
    
    
    

    return 0;
}

