#include <iostream>
using namespace std;

int main()
{
    int array[3] = {5,7,8};
    for (int i = 0; i <3 ; i++)
    {
        cout << array[i] << "\n";
    }
    
    int num;
    for(int i=0; i<3; i++)
    {
        cin >> num;
        array[i] = num;
        cout << "\n" << array[i] <<"\n";
    }
    return 0;
}






















