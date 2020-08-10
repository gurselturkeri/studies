#include <iostream>
#include <cmath>
using namespace std;
int main(){

system ( "Title Vucut Indexi Hesaplama" );
cout << "Hos Geldiniz" << endl;
float boy, kilo, vucut_index;
int yas;
cout << "Yas: ";
cin >> yas;
cout << "Boy (metre cinsinden ornek:1.74): ";
cin >> boy;
cout << "Kilo: ";
cin >> kilo;
vucut_index = kilo / (boy * boy);
if (0<vucut_index<18.4){
cout << "Vucut indexi:  " << vucut_index << " Biraz kilo almalisin. Hemen diyetisyene basvur.";
}
else if (18.5<vucut_index<24.9) {
cout << "Vucut indexi:  " << vucut_index << "Ideal kilo. Dengeli ve düzenli beslenmeye devam.";

}
else if (25<vucut_index<29.9){

cout << "Vucut indexi:  " << vucut_index << "Biraz kilolusun hemen diyetisyene basvur.";
}
else if (34<vucut_index<34.9) {
cout << "Vucut indexi:  " << vucut_index << "Birinci dereceden obezsin hayatýna sporu ekle ve diyetisyene kos.";

}






return 0;
}
