#include <iostream>
using namespace std;

class Temp
{
private:
    double warme;
public:
    void speicherC();
    //void speicherF();
    double leseC(void);
};

void Temp::speicherC()
{
    cout << "Geben sie einen wert ein  ";
    cin >> warme;
    warme = warme * 0.4;
}

double Temp::leseC(void)
{
    return warme;
}

int main()
{
    Temp *objekt = new Temp; //speicher reservieren
    objekt->speicherC();
    cout <<"\nDie Temperatur heute beträgt" << objekt->leseC() << endl;
    delete objekt;
    return 0;
}