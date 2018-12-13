#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rolladd(void);
int main(void) {
	int a, b, c,roll;
	int n[13] = {0};
	srand(time(NULL));
	for (roll = 0; roll < 36000; roll++) {
		c = rolladd();
		for (a = 0; a < 13; a++) {
			if (c == a) {
				++n[a];
			}
				
		}
	}

	printf("%d", n[7]);


	system("pause");
	return 0;
}

int rolladd(void) {
	int a, b, c=0;

	a =1+ (rand() % 6);
	b =1+ (rand() % 6);
	c = a + b;
	return c;
}