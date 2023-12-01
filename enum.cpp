#include <iostream>

using namespace std;

enum day {mon, tue, wed=6, thr, fri, sat, sun};
// An enum is a special "class" that represents a group of constants
// we use enum when we require set of constants

// Defining Constants :
// Constants in C++ are the tokens which are defined at the time of initialization and the assigned value cannot be altered or updated after that. There are two methods to define constants in C++.

// 1.#define preprocessor directive method
// 2.'const' keyword method


// 1. #define preprocessor directive method 
// #define PI 3.14


// 2.'const' keyword method
// const datatype constantName = value
// const int PI=3.14;

int main()
{   
    int d;
    d = mon;
    cout<<d<<endl; // 0
    cout<<tue<<endl; // 1
    cout<<wed<<endl; // 6
    cout<<thr<<endl; // 7
    cout<<fri<<endl; // 8
    cout<<sat<<endl; // 9
    cout<<sun<<endl; // 10
    
    // we cannot increment the expression of enum type (num++)

    return 0;
}
