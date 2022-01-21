
#include <iostream>
#include <string>
using namespace std;
int main()
{
//Inicjalizacja zmiennej

	string tekst = "Tekst";

//Przechowywanie danych użytkownika

	string tekst1;
	cout << "Podaj napis: ", cin >> tekst1;

	//Kopiowanie tekstu
	string tekst3 = "TEKST3";
	string tekst4 = "TEKST4";
	tekst3 = tekst4;
	cout<<"Wartosc zmiennej tekst3 po skopiowaniu: " << tekst3<<endl;

	tekst3 = "TEKST3";

		cout << "Wartosc zmiennej tekst3 po laczeniu ze zmienna tekst4: " << tekst3 + tekst4<<endl;

		//Określanie długości ciągu tekstowego
		cout << "Dlugosc ciagu tekstowego tekst3: " << size(tekst3);
}
