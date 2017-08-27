#include <stdio.h>
#include <conio.h>
main()
{
      int i, a, b, c;
      for(i = 100; i <= 999; i++)
      {
            a = i / 100;
            b = (i % 100) / 10;      //Yerine     b = (i/10) % 10;       yazýlabilir.
            c = i % 10;
            if (a*a*a + b*b*b + c*c*c == i)
            printf("Armstany Sayilar = %d\n", i);
      }
      getche();
}