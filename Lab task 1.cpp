#include <stdio.h>
int main(){

int arr[5] = {};
int val;

for (int i=0; i<5; i++){
	printf("Enter the value : \n");
	scanf("%d", &val);
	arr[i] += val;
}

int last_number = arr[4];


for(int i=4; i>0; i--){
    arr[i]=arr[i-1];	
}

arr[0]= last_number;

for(int i=0; i<5 ; i++){
	printf("%d", arr[i]);	
}

printf("\n");

   return 0;
}


