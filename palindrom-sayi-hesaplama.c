#include <stdio.h>
#include <conio.h>
main()
{
int a, b, c, d, i, sayac = 0;
for(i=1000;i<=9999;i++)
{
a = i / 1000;
b = (i%1000) / 100;
c = (i%100) / 10;
d = i%10;
if(a == d && b == c)
{
printf(“%5d”, i);
sayac ++;
}
}
printf(“\n\n4 Basamakli Palindrom Sayi Adeti = %d”, sayac);
getche();
}