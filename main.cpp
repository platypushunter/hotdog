/**
 * @file main.cpp
 * @author Dillon D. (platypushunter00102@gmail.com)
 * @brief a program to encrypt and decrypt files using the aes algorithm
 * @version 0.1
 * @date 2022-08-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <fstream>
#include "tiny-AES-c/aes.hpp"

using namespace std;


/**
 * @brief Main function that will run. I will try to group each section up into its own function and use this as high level section.
 * 
 * @param argc argument count
 * @param argv argument values
 * @return int 
 */
int main(int argc, char* argv[]){
    argc--;
    argv++;

    string inputName;
    string outputName;

    string pass;

    // Checking arg counter to see if theres 2 arguments.
    if (argc != 2){
        cout << "Correct useage of this program is as follows: encrypto.exe [input file name] [output file name]";
        return 1;
    } else if (argc == 2){
        inputName = argv[0];
        outputName = argv[1];
    }

    cout << "Welcome to Encrypto.exe!\nPlease enter the encryption password > ";
    cin >> pass;

    if (pass.length() % 16 != 0){
            for(int i = 0; i < pass.length() % 16; i++){
                pass.append("\0");
            }
    }

    cout << " | \n | \n | \nEncrypting...\n";

    ifstream inputFile;
    inputFile.open(inputFile);

    return 0;
}