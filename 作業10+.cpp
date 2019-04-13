
#include <stdio.h>
#include<stdlib.h>
int main() {
	int p;  
	int o;  
	printf("輸入一個整數：");
	scanf("%d", &p);
	printf("%d=", p);
	
	for (o = 2; o <= p; o++) {
		while (p != o) {
			if (p%o == 0) {
				printf("%d*", o);
				p = p / o;
			}
			else
				break;
		}
	}
	printf("%d\n", p);
	system("pause");
	return 0;
}
