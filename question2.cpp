#include <iostream>
using namespace std;

int main()
{
    int intvariable;
    char charvariable;
    float floatvariable;
    double doublevariable;
    bool boolvariable;
    cout << "Size of int: " << sizeof(intvariable) << " bytes" << endl;
    cout << "Size of char: " << sizeof(charvariable) << " bytes" << endl;
    cout << "Size of float: " << sizeof(floatvariable) << " bytes" << endl;
    cout << "Size of double: " << sizeof(doublevariable) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(boolvariable) << " bytes" << endl;

    return 0;
}