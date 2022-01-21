#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand (time(NULL));
    int tab[10];
    int a;
    for (int i = 0; i < 10; i++)
        tab[i] = rand() % 74 - 23;

    for (int i = 0; i < 10; i++)
    {
        if (tab[0] > tab[i])
            tab[0] = tab[i];
    }
    cout << tab[0];

}
