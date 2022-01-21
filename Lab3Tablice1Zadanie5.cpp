#include <iostream>
using namespace std;

int main()
{
	int tab[10];
	tab[0] = 2;
	tab[1] = 3;
	for (int i = 2; i < 10; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
		cout << tab[i] << endl;
	}
}
