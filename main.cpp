//Name: Mihir Bapat
//Enrollment Number: BT19CSE065
//Assignment 1, Question 9
//Date: 3/2/2020
//Description: A program that can store and add complex numbers

#include <iostream>
#include "complex.h"
#include "complex.cpp"

using namespace std;

int main()
{
    complex c; //class complex variable; invokes unparameterized constructor
    c.getdata(); //calls member function getdata() that takes and stores user inputed values into the class complex variable
    cout<<"Test Number"<<endl;
    c.show(); //calls member function show() that display the complex number stored in the class complex variable

    cout<<'\n';
    cout<<"Sum of complexes"<<endl;
    complex c1(5); //class complex variable; invokes 1 parameter constructor
    c1.show(); //calls member function show() that display the complex number stored in the class complex variable
    complex c2(7,12); //class complex variable; invokes 2 parameters constructor
    c2.show(); //calls member function show() that display the complex number stored in the class complex variable
    cout<<'\n';
    c.sum(c1,c2); //calls member function sum() that adds the two complex numbers
}
