#include <stdio.h>
#include <string.h>
/* if your OS is Windows Append To this Header <conio.h> Header File */
int main(){
  char buffer[15];
  int i = 0;
  printf("Enter Your String: ");
  gets(buffer);
    if(strcmp(buffer,"admin")){
     printf("Successfull");
  }else{
      printf("FALED");
      i=1;
  } 
 if(i){
   printf("You Are ROOT");
 }
return 0;
}
