#include <iostream>
using namespace std;
int main(){
	srand(time(NULL));
	cout<<rand()<<endl;
	cout<<rand()<<endl;

//losowanie w zakresie
int ile_liczb_w_przedziale = 7;
int startowa_liczba = 1;
int wylosowana = rand()% ile_liczb_w_przedziale + startowa_liczba;
cout<<wylosowana;
	return 0;

}
