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
#include <streambuf>
#include "tiny-AES-c/aes.hpp"

using namespace std;


void encryption(string inputName, string outputName){
    ifstream in(inputName);
    string inBuf;

    // Allocating the buffersize beforehand is faster than on the fly allocation
    in.seekg(0, ios::end);
    inBuf.reserve(in.tellg());
    in.seekg(0, ios::beg);

    // Filling the buffer
    inBuf.assign((istreambuf_iterator<char>(in)), istreambuf_iterator<char>());

    
};

void decryption();

int main(int argc, char* argv[]){
    argc--;
    argv++;

    string inputName;
    string outputName;
    bool encrypt = false;

    // Checking arguments
    if (argc != 3){
        cerr << "Correct useage of hotdog.exe: hotdog.exe [options] [input file] [output file]" << endl;
        cerr << left << setw(6) << "-e" << right << "Encryption Mode" << endl;
        cerr << left << setw(6) << "-d" << right << "Dencryption Mode" << endl;
        exit(1);
    } else {
        inputName = argv[0];
        outputName = argv[1];
        encrypt = (argv[2] == "-e");
    }

    if (encrypt){
        encryption(inputName, outputName);
    } else {
        decryption();
    }

    return 0;
}