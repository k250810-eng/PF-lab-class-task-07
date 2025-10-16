#include <stdio.h>

int main(){
	
	int num[10];
	int min = 10000000;
	int max = 0;
	
	for(int i =0; i<10; i++){
		printf("Enter the value %d: \n",i);
		scanf("%d", &num[i]);
	}
	
	for (int i=0; i<10; i++){
	    if (num[i]>max){
	    	max = num[i];
		}
		if (num[i]<min){
		    min = num[i];  	
		}
	}
	printf("The maximum value is %d \n", max);
	printf("The minimum value is %d \n", min);
	printf("The difference between them is %d", max - min);
}
