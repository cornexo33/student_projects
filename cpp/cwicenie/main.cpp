#include <iostream>

using namespace std;

int main(){
double odległośćKm, liczbaOsób, cenaPaliwaZaLitr, spalanie;

cout << "Podaj odleglosc trasy (w km):" ;
cin >> odległośćKm;

cout << "Podaj ilość osób w aucie: ";
cin >> liczbaOsób;

cout << "Podaj cene paliwa za litr:";
cin >> cenaPaliwaZaLitr;

cout << "Spalanie na 100km(w litrach): ";
cin >> spalanie;

double zużyciePaliwa = (odległośćKm / spalanie) * 1.0;
double kosztCałkowity = zużyciePaliwa * cenaPaliwaZaLitr;
double kosztNaOsobę = kosztCałkowity / liczbaOsób;

cout << "Zużycie paliwa: " << zużyciePaliwa << "litrów" << endl;
cout << "Koszt wyjazdu: " << kosztCałkowity << "zł" << endl;
cout << "Koszt na osobę" <<kosztNaOsobę << "zł" << endl;
return 0;
}
