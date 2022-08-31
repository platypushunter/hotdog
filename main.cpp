/**
 * @file main.cpp
 * @author dillon driskill (dillondriskill2@gmail.com)
 * @brief a program to encrypt and decrypt files using the aes algorithm
 * @version 0.1
 * @date 2022-08-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include "tiny-AES-c/aes.h"

using namespace std;

int main(int argc, char* argv[]){
    argc--;
    argv++;

    if (argc > 2){
        cout << "Must declare exactly 2 arguments!";
        return 1;
    }

    string inputName = argv[0];
    string outputName = argv[1];

    return 0;
}