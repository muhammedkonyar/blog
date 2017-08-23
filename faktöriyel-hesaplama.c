#include <stdio.h>
#include <conio.h>
main()
{
	int sayi, f = 1;
	printf(“Bir Sayi Giriniz : “);
	scanf(“%d”,&sayi);
	while (sayi>0)
	{
		f *= sayi;
		sayi–;
	}
	printf(“Faktoryel = %d”, f);
	getche();
}