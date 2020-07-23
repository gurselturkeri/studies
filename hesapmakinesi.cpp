#include <iostream>
using namespace std;
int main ()
{
 int sayi1, sayi2, sonuc, islem;
 
 cout << "Ilk sayiyi gir: ";
 cin >> sayi1;
 cout <<"Ikinci sayiyi gir: ";
 cin >> sayi2;

 cout << "Hangi islemi yapmak istiyorsunuz? (+,-,/,*)";
 cin >> islem;
 if (islem == '+') {
 sonuc = sayi1 + sayi2;
 cout << "Sonucunuz: " << sonuc << endl;
 }
else if (islem == '-') {
sonuc = sayi1 - sayi2;
cout << "Sonucunuz: " << sonuc << endl;
}
else if (islem == '*') {
sonuc = sayi1 * sayi2;
cout << "Sonucunuz: " << sonuc << endl;
}
 else if (islem == '/') {
 sonuc = sayi1 / sayi2;
 cout << "Sonucunuz: " << sonuc << endl;
 }
 
 else 
 cout << "Hatali islem!" << endl;



}
