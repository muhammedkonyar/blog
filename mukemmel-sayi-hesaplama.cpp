#include <stdio.h>
#include <conio.h>
main()
{
    int sayi, i, toplam = 0;
    printf("Bir Sayi Giriniz...:");
    scanf("%d",&sayi);
    for(i = 1; i < sayi; i++)
    {
        if(sayi % i == 0)   toplam += i;
    }
    if(toplam == sayi)  printf("Mukemmel Sayidir.");
    else    printf("Mukemmel Sayi Degildir.");
    getche();
}
