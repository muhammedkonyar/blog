#include <stdio.h>
#include <conio.h>
main()
{
      int i, sayi, asal=1;
      printf("Bir Sayi Giriniz : ");
      scanf("%d",&sayi);
      for(i = 2; i < sayi; i++)
      {
            if(sayi %i == 0)
            {
                 asal = 0;
                 break;
            }
      }
      if (asal == 1) printf("Asal Sayidir");
      else printf("Asal Sayi Degildir");
      getche();
}
