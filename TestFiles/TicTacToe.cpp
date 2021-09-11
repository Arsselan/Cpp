#include<iostream>
#include<string>
char Feld[3][3] = {'*','*','*','*','*','*','*','*','*'};

bool checkEmptyPosition(int a,int b)
{
    if(Feld[a][b] == '*')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkRow()
    {
        for (int i = 0; i < 3; i++)
        {
            if ((Feld[i][0] =='x' && Feld[i][1] == 'x' && Feld[i][2] == 'x') || (Feld[i][0] =='o' && Feld[i][1] == 'o' && Feld[i][2] == 'o'))
            {
                return true;
            }
        }
        return false;
    }

bool checkColumn()
    {
        for (int i = 0; i < 3; i++)
        {
            if ((Feld[0][i] =='x' && Feld[1][i] == 'x' && Feld[2][i] == 'x') || (Feld[0][i] =='o' && Feld[1][i] == 'o' && Feld[2][i] == 'o'))
            {
                return true;
            }
        }
        return false;
    }

bool checkCross()
    {
        if((Feld[0][0] == 'x' && Feld[1][1] == 'x' && Feld[2][2] == 'x') || (Feld[0][0] == 'o' && Feld[1][1] == 'o' && Feld[2][2] == 'o') || (Feld[2][0] == 'x' && Feld[1][1] == 'x' && Feld[0][2] == 'x') || (Feld[2][0] == 'o' && Feld[1][1] == 'o' && Feld[0][2] == 'o'))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

bool checkWin() //cheack three options for a win Cross, Coloumn and Row
    {  
        if((checkRow() || checkColumn() || checkCross()) == true)
        {
            std::cout<<"Gewonnen";
            return true;
        } 
        else 
        {
            return false;
        }
    }
bool FieldIsFull() 
    {
          for (int i = 0; i < 3; i++)
        {
            for (int a = 0; a < 3; a++)
            {
                if(Feld[i][a] != '*')
                {
                    continue;
                }
                else 
                {
                    return false;
                }
            }
        }
        return true;
    }
bool checkDraw() // check if field is emtpy and no player can put in any letter
    {
        if(checkWin() == false && FieldIsFull() == true)
        {
            std::cout<<"Unentschieden";
            return true;
        }
        else
        {
            return false;
        }
    }

void printField() //printing the field 
    {
        for (int i = 0; i < 3; i++)
        {
            for (int a = 0; a < 3; a++)
            {
                std::cout<< Feld[i][a]<<" ";
            }
            std::cout<<"\n";
        }
    }

void setField1(int a, int b)
{
     Feld[a][b] = 'x'; 
}

void setField2(int a, int b)
{
    Feld[a][b] = 'o';
}

void checkPositionDigits(int &x, int &y)
{
    if(x > 2)
    {
        std::cout<<"Out of field enter new digit for a\n";
        std::cin>> x;
    }
     if(y > 2)  
    {
        std::cout<<"Out of field enter new digit for b\n";
        std::cin>> y;
    }
}

int main()
{
    printField();
    int i = 1;
    int a = 0;
    int b = 0;
    while(i < 6)
    {
       std::cout<< "\nPlayer 1 initialize Field with x enter Position ";
       std::cout<< "\nRow ";
       std::cin >> a;
       std::cout<<"\nColumn ";
       std::cin >> b;
       checkPositionDigits(a,b); 	
       while (checkEmptyPosition(a,b) != true)
           {
    	       std::cout<< "\nNew Position";
               std::cout<<"\nField not free\n";
               std::cout<<"Row ";
               std::cin >> a;
               std::cout<<"Column ";
               std::cin >> b;
           }
       setField1(a,b);
       if(checkWin() == true)
       {
           std::cout<<" hat Player 1\n";
           printField();
           break;
       }
       if(checkDraw() == true)
       {
           printField();
           std::cout<<"\n";
           break;
       }
       printField();

       std::cout<< "\nPlayer 2 initialize Field with o enter Position ";
       std::cout<<"\nRow ";
       std::cin >> a;
       std::cout<<"\nColumn ";
       std::cin >> b;
       checkPositionDigits(a,b);
       while (checkEmptyPosition(a,b) != true)
           {
                {
                   std::cout<<"\nNew Position";
                   std::cout<<"\nField not free\n";
                   std::cout<<"\nRow ";
                   std::cin >> a;
                   std::cout<<"\nColumn ";
                   std::cin >> b;
                } 
           }
       setField2(a,b);
       if(checkWin() == true)
       {
           std::cout<<" hat Player 2\n";
           printField();
           break;
       }
       if(checkDraw() == true)
       {
           break;
       }
       printField();
       i++;
    }
    return 0;
}