#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[100];
  scanf("%99[^\n]",s);
  int i;
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(strlen(s)>5 && strlen(s)%2==1){
  for(i=strlen(s)/2-2;i<=strlen(s)/2+2;i++) printf("%c",s[i]);
	}



  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
