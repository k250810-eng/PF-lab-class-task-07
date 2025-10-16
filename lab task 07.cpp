#include <stdio.h>

int main(){
	int arr[10];
	int dup[101]={0};
	
	for(int i=0; i<10; i++){
		printf("Enter a value: \n");
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<10; i++){
		if (dup[arr[i]]==0){
			dup[arr[i]]=1;
		}
		else{
			arr[i]=-1;
		}
	}
	
	for (int i=0; i<10; i++){
	
		printf("%d , ", arr[i]);
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
