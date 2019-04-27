#include <conio.h>
#include <iostream>

main() {
int A, B, C,maks;
cout << "A : ";
cin >>A;
cout <<"B : ";
cin >>B;
cout <<"C : ";
cin >>C;
if ((A>B) && (B>C))
maks = B;
else
maks = C;
cout <<"bilangan terbesar adalah " << maks;
getch();
return 0;
}