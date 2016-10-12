#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define equal z==eingabe
#define lower z<eingabe
#define bigger z>eingabe

int main() {

	srand(time(0));

	int z, eingabe, i=0;

	z = (int)(10.0*rand() / (RAND_MAX + 1.0));

	printf("%d", z);

	while (i < 4) {

		printf("\nGeben Sie eine Zahl ein\n");
		scanf_s("%d", &eingabe);

		if (equal) {
			printf("\nTreffer\n\n");
			system ("Pause");
			return 0;
		}
		if (lower) {
			printf("\ndie Zahl ist kleiner als %d\n", eingabe);
		}
		if (bigger) {
			printf("\ndie Zahl ist größer als %d\n", eingabe);
		}

		i++;
	}

	printf("Sie haben die Zahl nicht erraten, sie lutet %d", z);

	system("Pause");

	return 0;



}