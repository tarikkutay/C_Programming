#include <stdio.h>
#include <stdlib.h>

int main() {
	int deg = 0;
	int* pdeg;

	deg = 10;
	pdeg = &deg;// pdeg pointeri deg de�i�keninin adresini tutuyor.

	printf("de�i�kenin de�eri %d\n", deg);

	*pdeg = 20;//pdeg in g�sterdi�i adresin i�indeki de�er 20 olsun

	printf("*pdeg in g�sterdi�i yeni de�er: %d\n", deg);

	//degin ad�n� hi� kullanmadan de�erini de�i�tirdik dolayl� eri�tik

	printf("pointerin tuttu�u de�er : %d\n", pdeg);//bu adres g�sterir ama i�lemcinin �n belle�inde 
	printf("pointerin g�sterdi�i adresteki de�er %d\n", *pdeg);

	pdeg = pdeg + 2;

	printf("pointerin yeni de�eri 2 eklenmis hali %d\n", pdeg);

	printf("pdeg + 2 deki adresin g�sterdi�i yerde bu var : %d \n", *pdeg);
}