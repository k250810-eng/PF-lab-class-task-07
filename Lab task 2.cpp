#include <stdio.h>

int main(){
	
	int num[10] = {0};
	int val;
	int compare;
	int count =0;
	
	for(int i=0; i<10; i++){
		printf("Enter the value: \n");
		scanf("%d",&val);
		num[i] = val;
	}
	
	printf("Enter a value that you want to see how many of it are there: \n");
	scanf("%d",&compare);
	
	for(int i = 0; i<10 ; i++){	
	
	 if(compare == num[i]){
	 	count ++;
	 }	
}	 
     if (count == 0){
     	printf("Number not found \n");
	 }
	 
	 else{
	 	printf("The number %d was entered %d time", compare, count);
	 }
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	



