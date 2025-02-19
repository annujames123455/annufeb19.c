#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("enter the first string:");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0){
      printf("the two strings are equal\n");
    } else{
        printf("the two strings are not equal\n");
    } 
  return 0;
}
