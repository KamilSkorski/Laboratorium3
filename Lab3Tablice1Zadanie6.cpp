#include <iostream>
using namespace std;
int main()
{
	int tab[2][10];

	for (int i = 0; i < 10; i++)
		tab[0][i] = i + 2;


	for (int i = 0; i < 10; i++)
		tab[1][i] = tab[0][i];


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << tab[i][j] << endl;
		}
		cout << endl;
	}
}

