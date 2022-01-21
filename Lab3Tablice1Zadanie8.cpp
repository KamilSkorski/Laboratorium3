#include <iostream>
using namespace std;
int main()
{
	int tabma[3][3] = { 2,5,4, 5,4,8, 6,9,4 };
	int tabmb[3][3] = { 6,9,4, 9,4,7, 6,5,1 };
	int tabsuma[3][3]{0};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			tabsuma[i][j] = tabma[i][j] + tabmb[i][j];
			
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << tabsuma[i][j]<<" ";
		}
		cout << endl;
	}
	
}

