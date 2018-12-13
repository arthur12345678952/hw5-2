#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a, b, c;
	int len=10;

	char string1[20] = {" "};

	printf("enter the string¡G");
	scanf_s("%s", string1,20);

	len = strlen(string1);
	char t[100] = {" "};


	

	printf("\n\nafter change the order\n\n");

	for (a = 0; a < len; a++) {
		
	  t[(len-1) - a] = string1[a];
	}
	
		printf("%s", t);
	

	system("pause");
	return 0;
}