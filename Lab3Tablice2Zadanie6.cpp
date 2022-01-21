#include <iostream>
#include <string>
using namespace std;
int main()
{
	string tekst;
	int samogloska = 0;
	int spolgloska = 0;
	cout << " Wpisz tekst bez polskich znakow: ";
	getline(cin,tekst);
  
	for (int i = 0; i < tekst.length(); i++)
	{
	
		if (tekst[i] == 'a' || tekst[i] == 'e' || tekst[i] == 'i' || tekst[i] == 'o' || tekst[i] == 'u' || tekst[i] == 'y')
		{
			samogloska += 1;
		}
		else if (tekst[i]!=' ')

		{
			spolgloska += 1;
		}
		
	}
	cout << "Liczba samoglosek w tekscie: " << samogloska << endl;
	cout << "Liczba spolglosek w tekscie: " << spolgloska;
}
