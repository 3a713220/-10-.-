#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
	
	int num,i;
	
	printf("請輸入一個數字:");
	scanf("%d",&num);
	
	printf("此數字的質因數為");
	i=2; 
	
	while(num>1){
	    while(num%i==0){
	    	printf("%d ",i);
	    	num=num/i;
		}	
		i++;
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
