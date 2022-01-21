#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nazwa_ulicy, nr_domu;
    int ocena, staz;
    cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
    getline(cin, nazwa_ulicy);
    cout << "Podaj nr domu: ";
    cin >> nr_domu;
    cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ";
    cin >> ocena;
    cout << "Twoj staz programistyczny: ";
        cin >> staz;
    cout << "Adres: " << nazwa_ulicy << " " << nr_domu << endl;
    cout << "Ocena: " << ocena - 1 << endl;
    cout << "Staz: " << staz << " " << "dni";
        
}

