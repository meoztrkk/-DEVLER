// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "ilkSinifim.h"

using namespace std;

int main()
{
    int i=123;
    string yazi = "jasd�asdle";
    cout << i ;
    cout << "\nHello World!\n";
    cout << "i yi giriniz:";
    cin >> i;
    cout << "\ni kare ="<<i<<"*"<<i<<"=";
    cout <<  i * i ;
    cout << "\n" << yazi << endl;
    ilkSinifim snf;
    snf.harf = 'a';
    snf.sayi = 12;
    cout << "\n" << snf.harf << endl;
    cout << "\n" << snf.sayi << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
