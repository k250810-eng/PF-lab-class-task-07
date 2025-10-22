#include <stdio.h>

int main(){
char text[100] = {0};   

printf("Enter the text: \n");
scanf("%99[^\n]", text);

int size = sizeof(text)/sizeof(text[0]);

for (int i=0; i<size; i++){

   if (text[i] == '\0'){
    break;
   }
  if(text[i]>= 'a' && text[i]<= 'z'){
    text[i] = text[i] - 32;   
   } 
  else if(text[i]>= 'A' && text[i]<= 'Z'){
    text[i] = text[i] + 32;
   }
 }
   printf("New Text is %s \n" , text);
   return 0;
}
