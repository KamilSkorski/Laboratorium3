#include <iostream>
using namespace std;
int main()
{
    int tab[20], n = 20, a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;


    for (int i = 19; i >= 0; i--)
    {
        tab[i] = a;
        a -= 5;
    }
    for (int i = 0; i < 20; i++)
        cout<< tab[i] << endl;
}
