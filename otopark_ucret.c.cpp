#include <stdio.h>
int main()
{
	int ucret;
	int kalinanSure;    //değişkenler 

	printf("Otoparkta kalinan sureyi yaziniz:");
	scanf_s("%d", &kalinanSure); printf("\n");            //kullanıcıdan "kalinanSure" yi iste 

	if (kalinanSure <= 1 & kalinanSure > 0) {             //kalinanSure 0 dan küçük olmaması için
		ucret = 3;
	}

	else if (kalinanSure < 0) {
		printf("Gecersiz sure");
	}

	else if (kalinanSure > 1 & kalinanSure <= 4) {
		ucret = 9;
	}

	else if (kalinanSure > 4 & kalinanSure <= 6) {
		ucret = 17;

	}
	else if (kalinanSure > 6 & kalinanSure <= 10) {
		ucret = 27;
	}

	else if (kalinanSure > 10) {
		kalinanSure = kalinanSure - 10;
		ucret = kalinanSure + 27;
	}
	printf("Odemeniz gereken ucret: %d", ucret);

	return 0;

}
