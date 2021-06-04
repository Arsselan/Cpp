#include <iostream>
using namespace std;

int main()
{
    float groese = 1.0f;
    cout << "gebe deine größe ein";
    cin >> groese;
    if(groese <= 1.80)
    {
        cout <<"drei backpfeifen patch patch patch ";
    }
    else if(groese >1.80)
    {
        cout << "Mashalla ale";
    }
    int alter = 0;
    cout << "\ngebe dein alter ein\n";
    cin >> alter;
    switch (alter)
    {
    case 1:
        cout <<"ich mach so und noch schlimmer";
        break;
    case 2:
        cout <<"ich mache NRW zu";
        break;
    default:
        cout <<"lachschu binde jaselime was willst du von meine eier";
        break;    
    }
    return 0;
}