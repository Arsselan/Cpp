#include<iostream>
using namespace std;

class Temperaturen
{
private:
    double celcius;
    double fahrenheit;
public:
    double leseC(void);
    double leseF(void);
    void speicherC();
    void speicherF();
};

void Temperaturen::speicherC()
{
    cout<<"Gebe temperatur ein";
    cin >> celcius;
}

void Temperaturen::speicherF()
{
    cout<< "Gebe temperatur ein";
    cin >> fahrenheit;
}
double Temperaturen::leseC(void)
{
    return celcius;
}
double Temperaturen::leseF(void)
{
    return fahrenheit;
}


int main()
{
Temperaturen temp;
temp.speicherC();
cout <<temp.leseC();
}