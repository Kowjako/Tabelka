#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double wiersz, minr, maxr;
 cout<<"Wiersze = ";
 cin>>wiersz;
 cout<<"MAXR = ";
 cin>>maxr;
 cout<<"MINR = ";
 cin>>minr;
 //Rysowanie naglowka//
 for(int i=0;i<42;i++) printf("%c",'=');
 printf("\n");
 printf("%s","| Lp ");
 printf("%s","| promien |");
 printf("%s"," obwod kola |");
 printf("%s\n"," pole kola  |");
for(int i=0;i<42;i++) printf("%c",'=');
 printf("\n");
 double krok = (maxr-minr)/(double)(wiersz-1);
 for(int i=1;i<wiersz+1;i++) {
       printf("%c%2d",'|',i);
       printf("%3c%7.2f",'|',minr);
       printf("%3c%10.2f",'|',2*minr*M_PI);
       printf("%3c%10.2f",'|',M_PI*minr*minr/2);
       printf("%3c\n",'|');
       minr+=krok;
 }
 for(int i=0;i<42;i++) printf("%c",'=');
 return 0;
}

