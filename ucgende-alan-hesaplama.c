#include <stdio.h>
#include <conio.h>
float ucgen_alani(int a, int b)
{
	return (a * b) / 2;
}

main()
{
	int a, b; float alan;
	printf(�Ucgenin Taban�n� ve  Y�ksekli�ini  Giriniz �.:�);
	scanf(�%d %d�, &a, &b);
	alan = ucgen_alani(a, b);
	printf(�Alan = %2.f�,alan);
	getche();
}