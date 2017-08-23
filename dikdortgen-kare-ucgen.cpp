#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
int sekil, boyut, x, y, k, uKenar, kKenar, z = 1;

cout << “Hangi sekli cizdirmek istiyorsun ? ” << endl;
cout << “1 – Kare” << endl;
cout << “2 – Dikdortgen” << endl;
cout << “3 – Ucgen” << endl;

cin >> sekil;

switch(sekil){
case 1:
cout << “Karenin bir kenari kac karakter olsun?” << endl;
cin >> boyut;
for(x = 1; x <= boyut; ++x){
for(y = 1; y <= boyut; ++y){
if(x == 1 || x == boyut || y == 1 || y == boyut)
cout << “*”;
else
cout << ‘ ‘;
}
cout << endl;
}
case 2:
cout << “Dikdortgenin uzun kenari kac olsun? ” << endl;
cin >> uKenar;
cout << “Dikdortgenin kisa kenari kac olsun? ” << endl;
cin >> kKenar;
for(x = 1; x <= uKenar; ++x){
for(y = 1; y <= kKenar; ++y){
if(x == 1 || x == uKenar || y == 1 || y == kKenar)
cout << “*”;
else
cout << ‘ ‘;
}
cout << endl;
}
case 3:
cout << “Ucgenin uzunlugunu kac olsun?” << endl;
cin >> boyut;
for(x = 0; x < boyut-1; x++){
for(y = boyut-1; y > x; y–){
cout << ” “;
}
cout << “*”;

if(x != 0){
for(k = 1; k <= z; k++){
cout << ” “;
}
cout << “*”;
z += 2;
}
cout << endl;
}
for(x = 0; x <= z+1; x++){
cout << “*”;
}
}
getche();
}