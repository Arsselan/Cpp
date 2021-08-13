#include<iostream>
 
/*
/Definition of the class tempurature
You can create an object and initialize the object with an own number or it get automatically
initialised by the contructor. 
The destructor destroys the object 
*/

using namespace std;

//I could improve this class by using only one variable in order to save the number instead of two

class Temperature
{
    private:
        double celcius;
        double fahrenheit;
    public:
        ~Temperature();
        Temperature(int i = 4); //If i don't initialize an objekt it will get initialized with 4 by the constructor
        double readF();
        double readC(void); //no need to write void, no call paramter
        void safeC(void);
        void convertCintoF(); //Convert Celcius into Fahrenheit
};
Temperature::Temperature(int i)
{
    cout<<"\nContructor"<<endl;
    celcius = i;
}

Temperature::~Temperature()
{
    cout<<"\nDestructor"<<endl;
}


void Temperature::safeC(void)
{
    cout <<"\nEnter Celcius "<<endl;
    cin >> celcius;
}

double Temperature::readC(void)
{
    return celcius;
}

void Temperature::convertCintoF()
{
    fahrenheit = 9.0/5.0 * celcius + 32.0;
}

double Temperature::readF()
{
    return fahrenheit;
}

int main()
{ 
    Temperature temp1;
    temp1.safeC();
    cout <<"\ntemperature= " << temp1.readC() <<endl;
    int i = 0;
    cout <<"choose between mode 1 and to \n mode 1: conversion from Celcius to F \n mode 2: nothing to do \n mode 3: new object"<<endl;
    cin >> i;
    switch (i)
    {
    case 1:
    {
        temp1.convertCintoF();
        cout<<"Celcius in Fahrenheit = " <<temp1.readF() <<endl;
        break;
    }
    case 2:
    {
        cout <<"nothing to do"<<endl;
        break;
    }
    case 3:
    {
        Temperature temp2;   //If i create a new object in the switch statement it won't work. I can fix the problem by enclosing the case statements with {}
        temp2.safeC();
        cout <<"temperature temp2 =" << temp2.readC(); 
    }
    temp1.readC();
    default:
        break;
    }
    Temperature temp3;
    cout<<"\n" << temp3.readC() <<endl;;
    return 0;
}