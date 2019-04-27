#include <conio.h>
#include <iostream>

main() {
int op1, op2, pilih;
float hasil;
cout <<"operand 1: ";
cin >> op1;
cout <<"operand 2: ";
cin >> op2;
cout << "1. operator +\n";
cout << "2. operator -\n";
cout << "3. operator *\n";
cout << "4. operator /\n";
cout << "pilih operator : ";
cin >> pilih;
switch (pilih) {
case 1 : {hasil = op1 + op2; break;}
case 2 : {hasil = op1 - op2; break;}
case 3 : {hasil = op1 * op2; break;}
case 4 : {if (op2 != 0)
cout <<op1/op2;
else
cout <<"error";
break;}
}
cout<<"Hail dari perhitungan tersebut adalah "<<hasil;
getch();
return 0;
}

