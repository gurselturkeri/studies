#include <iostream> // Serbest düşüş yapan cisim
#include <string>                    // Hava sürtünmesi yok - ilk hız = 0
using namespace std;
int main () {
	system ( "Title Serbest Dusus Yapan Cisim (gurselturkeri)");
double sure;
double yukseklik, hiz, kutle, ek;
float yercekimi = 9.80665;

string uyari1 = "Serbest dusus yapan cisim.";
string uyari2 = "Hava surtunmesi ihmal edilecek ve ilk hiz sifir.";

cout << "Cismin kutlesi: ";
cin >> kutle;
cout << "Cismin dusus suresi: ";
cin >> sure;
yukseklik = (yercekimi * sure * sure) / 2;
hiz = yercekimi * sure;
ek = (kutle * hiz * hiz) / 2;

cout << "Cismin yuksekligi: " << yukseklik << endl;
cout << "Cismin hizi: " << hiz << endl;
cout << "Cismin kinetik enerjisi: " << ek << endl;

system ("pause");
return 0;
}
