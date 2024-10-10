#include <iostream>

using namespace std;

int main() {
float metryNaSekunde;
cout << "Podaj prędkość w m/s ";
cin >>   metryNaSekunde;
float kilometryNaGodzine = metryNaSekunde * 3.6;
cout << metryNaSekunde << "m/s to " << kilometryNaGodzine << "km/h" << endl;
return 0;
}