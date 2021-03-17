#include <iostream>
#include "complex.h"

using namespace std;

//defination of member functions

complex::complex() //unparameterized default constructor
{

    this->real_no = 0;
    this->img_no = 0;
}

complex::complex(const int& num) //1 parameter default constructor
{

    this->real_no = num;
    this->img_no = num;
}

complex::complex(const int& real, const int& img) //2 parameters default constructor
{
    this->real_no = real;
    this->img_no = img;
}

void complex::getdata() //member function to take values from the user
{
    cout<<"Enter the real part and the imaginary part of the number: ";
    cin>>this->real_no>>this->img_no;
}

void complex::show() //member function to display the complex number
{
    cout<<"The number is: "<<this->real_no<<" + "<<this->img_no<<"i"<<endl;
}

void complex::sum(complex c1, complex c2) //member function to add two complex numbers
{
    complex c_sum;

    c_sum.real_no = c1.real_no + c2.real_no;
    c_sum.img_no = c1.img_no + c2.img_no;

    c_sum.show();
}
