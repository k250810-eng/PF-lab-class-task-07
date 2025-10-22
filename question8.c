#include <stdio.h>
int main(){

char text[25] = {0};

printf("Enter the text: ");
scanf("%[^A-Za-Z]",text);


printf("%s",text);
}