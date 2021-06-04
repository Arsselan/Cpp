#include <iostream>
using namespace std;

void callbyreferenz(int &hurensohn,int&nute)
{
    int temp = hurensohn;
    hurensohn = nute;
    nute = temp;
}
int main()
{
    int a = 5;
    int b = 6;
    cout <<"\nvorher "<<a<<" und "<<b << endl;
    callbyreferenz(a,b);
    cout<<"\nNacher "<<a << " und " <<b<< endl;
    return 0;
}