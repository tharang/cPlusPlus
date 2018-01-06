//
//  main.cpp
//  cpp
//
//  Created by VISHWANATH CHUNCHULA on 1/3/18.
//  Copyright © 2018 VISHWANATH CHUNCHULA. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

//typedefs for datatypes for frequent use
typedef char int8;
typedef unsigned char uint8;
typedef short int int16;
typedef short unsigned int uint16;
typedef int int32;
typedef unsigned int uint32;
typedef long int int64;
typedef long unsigned int uint64;
typedef float float32;
typedef double float64;
typedef long double float128;


int main(int argc, const char * argv[])
{
    // insert code here...
    cout << "Hello, World!\n" << endl;
    
    //data types
    cout << "Size of int8 = " << sizeof(int8)
    << endl;
    cout << "Size of uint8 = " << sizeof(uint8)
    << endl;
    cout << "Size of int16 = " << sizeof(int16)
    << endl;
    cout << "Size of uint16 = " << sizeof(uint16)
    << endl;
    cout << "Size of int32 = " << sizeof(int32)
    << endl;
    cout << "Size of uint32 = " << sizeof(uint32)
    << endl;
    cout << "Size of int64= " << sizeof(int64)
    << endl;
    cout << "Size of uint64 = " << sizeof(uint64)
    << endl;
    cout << "Size of float32 = " << sizeof(float32)
    << endl;
    cout << "Size of float64 = " << sizeof(float64)
    << endl;
    cout << "Size of float128 = " << sizeof(float128)
    << endl;
    
    //strings and user input
    string eulersGuess;
    double eulersGuessDouble = 0;
    double eulersConstant = 0.5772;
    
    cout << "What is Euler's Constant: " ;
    getline(cin, eulersGuess);
    eulersGuessDouble = stod(eulersGuess);
    if(eulersGuessDouble == eulersConstant)
    {
        cout << "You are right" << endl;
    }
    else
    {
        cout << "You are wrong" << endl;
    }
        //string methods
    cout << "Size of String = " << eulersGuess.size() << endl;
    cout << "isEmpty String = " << eulersGuess.empty() << endl;
    cout << eulersGuess.append(" was your guess") << endl;
    return 0;
}
