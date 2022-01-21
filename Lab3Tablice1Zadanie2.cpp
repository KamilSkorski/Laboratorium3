#include <iostream>
using namespace std;
int main()
{
	int tab[10];
	int a = 3;
	for (int i = 0; i < 10; i++)
	{
		tab[i] = a;
		a += 3;
	}

	for (int i = 0; i < 10; i += 2)
		cout << tab[i] << endl;

}