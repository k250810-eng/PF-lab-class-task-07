#include <stdio.h>

int main(){

char str_arr[100] = {0};
int vowel_count = 0 ,cons_count = 0;

printf("Enter a single word text: ");
scanf("%s", str_arr);

int size = sizeof(str_arr)/sizeof(str_arr[0]);

for(int i=0; i< size; i++){

if(str_arr[i]>= '0' && str_arr[i]<= '9')
{
continue;
}

if(str_arr[i] == '\0')
{
    break;
}

if((str_arr[i] !='A' && str_arr[i] !='a') && (str_arr[i] !='e' && str_arr[i] != 'E') && (str_arr[i] != 'I' && str_arr[i] != 'i') && (str_arr[i] !='o' && str_arr[i] != 'O') && (str_arr[i] != 'U' && str_arr[i] != 'u'))
{
    cons_count ++;
}

else 
{
  vowel_count++;
}

}

printf("The count of vowels is: %d \n", vowel_count);
printf("The count of consonants is: %d \n", cons_count);

}