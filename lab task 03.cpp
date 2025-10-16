#include <stdio.h>

int main(){
	
	int students[10];
	int pass[10];
	int passindex = 0;
	int failindex = 0;
	int fail[10];
	int count;
	int passtotal = 0,failtotal = 0;
	float pass_avg=0; float fail_avg=0;
	
	for(int i=0; i<10 ; i++){
		printf("Enter the marks of student %d: \n", i);
		scanf("%d",&students[i]);
		
		if(students[i] == -1){
			break;
		}
		count++;
	}
	
	for(int i = 0; i<count ; i++){
		if (students[i] >= 60){
			pass[passindex] = students[i];
			passtotal += pass[passindex];
			passindex++; 
		}
		
		else if (students[i] < 60){
			fail[failindex] = students[i];
			failtotal += fail[failindex];
			failindex++;
		}
	}
	
	    if (passindex > 0) {
        pass_avg = (float)passtotal / passindex;
    }

       if (failindex > 0) {
        fail_avg = (float)failtotal / failindex;
    }

	
	printf("The pass average is %.2f \n", pass_avg);
	printf("The fail average is %.2f \n", fail_avg);     
	
}
