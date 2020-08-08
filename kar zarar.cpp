#include <iostream>
using namespace std;
int main() {
double kazanc, gider1, gider2, gider3, gider4, gider5, net;


cout << "Aylik kazanc: ";
cin >> kazanc;
cout << "Mutfak harcamalari: ";
cin >> gider1;
cout << "Elektrik: ";
cin >> gider2;
cout << "Su: ";
cin >> gider3;
cout << "Dogalgaz: ";
cin >> gider4;
cout << "Internet: ";
cin >> gider5;
net = kazanc - (gider1 + gider2 + gider3 + gider4 + gider5);

if ( net > 0 ) {
cout << net << "TL kar";

}
else if (net < 0){
 
cout << net << "TL zarar";
}

else 
cout << "Ne kar ne zarar!";








} 
