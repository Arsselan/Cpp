#include <iostream>

int main()
{
    const bool wert = false;
    int number = 10;
    //int neu  {7.2};
   // std::cout << neu;
   char buch;
   std::cout << "gib deinen ersten buchstaben deines namen ein";
   std::cin >> buch;
   std::cout << buch;
    std::cout<< number <<"\n";
    float numb = 23.3;
    std::cout<< numb;
    int a,b = 0;
    std::cout <<"\nGib eine zahl ein\n";
    std::cin>> a;
    std::cout <<"\nGib eine weiter zahl ein\n";
    std::cin >> b;
    std::cout << " a = " << a << " b = " << b << "  a * b = " << a*b;
    system("\npause");
    return 0;
}