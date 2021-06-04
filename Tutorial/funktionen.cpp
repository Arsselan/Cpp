#include <iostream>
using namespace std;

int input(int number, int numb)
{
    cout<<("\neben sie zwei werte ein\n");
    cin >> number >> numb;
    int ergebnis;
    ergebnis = number + numb;
    return ergebnis;
}
int input() // deklaration gleichen funktionsnamen -> überladen bildet mehrere funktionsversionen und gibt eine aus
{
int input = 0;
cout << input;
}

 void ausgabe();

int main()
{
    int eingabe = 0;
    eingabe = input(3,5);
    cout << eingabe;
    ausgabe();
    eingabe = input();
    return 0;
}

void ausgabe()
{
    cout<<"vallah ich mach so und noch schlimmer";
}