#include <iostream>
#include <cstdlib>
#include <time.h>

int *sort_array(int array[], int size)
{
    int a = 1;
    while(a != size)
    {
        for (int i = 0; i < size; i++)
            {    
                if(array[i] > array[i+1])
                     {
                        int temp = array[i];
                        array[i] = array[i+1];
                        array[i+1] = temp;
                     }
            }
    a++;
    }
    return array;
}

int main()
{
    int numb = 0;
    std::cout << "Enter Size of Array" << std::endl;
    std::cin >> numb;
    std::cout << "\n----------------------------------------------------------------";
    int array[numb];
    for(int a = 0; a < numb; a++ )
    {
        array[a] = (rand() %100) +1;
    }
    for(int a = 0; a < numb; a++)
    {
        std::cout << array[a] <<"\n";
    }
    int *ptr= sort_array(array,numb);
    std::cout << "----------------Sort algorithm------------------" << std::endl;
    for(int a = 0; a < numb; a++)
    {
        std::cout << *(ptr+a) <<"\n";
    }
    return 0;
}