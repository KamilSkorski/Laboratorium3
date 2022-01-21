#include <iostream>
using namespace std;
int main()
{
    int tab[3][3] = { 2,3,4, 5,6,8, 7,5,6 };
    int a = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                a += tab[i][j];
            }
        }
    }
    cout << a;
   
}
