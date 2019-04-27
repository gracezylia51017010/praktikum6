#include <iostream.h>
#include <conio.h>
void main ()
{
int bil;
clrscr();
cout<<"Masukkan bilangan:";
cin>>bil;
switch(bil)
{
case 1 : cout<<"Anda masukkan bil.satu";
break;
case 2 : cout<<"Anda memasukkan bil.dua";
break;
default: cout<<"Anda memasukkan bil selain 1,2,dan 3";
break;
}
getch();
}
