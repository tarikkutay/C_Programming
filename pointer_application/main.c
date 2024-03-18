#include <stdio.h>
#include <stdlib.h>

int main() {
	int deg = 0;
	int* pdeg;

	deg = 10;
	pdeg = &deg;// pdeg pointeri deg deðiþkeninin adresini tutuyor.

	printf("deðiþkenin deðeri %d\n", deg);

	*pdeg = 20;//pdeg in gösterdiði adresin içindeki deðer 20 olsun

	printf("*pdeg in gösterdiði yeni deðer: %d\n", deg);

	//degin adýný hiç kullanmadan deðerini deðiþtirdik dolaylý eriþtik

	printf("pointerin tuttuðu deðer : %d\n", pdeg);//bu adres gösterir ama iþlemcinin ön belleðinde 
	printf("pointerin gösterdiði adresteki deðer %d\n", *pdeg);

	pdeg = pdeg + 2;

	printf("pointerin yeni deðeri 2 eklenmis hali %d\n", pdeg);

	printf("pdeg + 2 deki adresin gösterdiði yerde bu var : %d \n", *pdeg);
}