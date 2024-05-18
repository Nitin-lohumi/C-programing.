#include<stdio.h>
#include<string.h>

int main(){
 int i, len;
 int flag=0;
 char string[100];
 printf("enter the string");
 scanf("%s",string);
 len=strlen(string);
 for(i=0; i<len/2; i++){
    if(string[i]!=string[len-i-1]){
        flag=1;
        break;
    }

 }
 if(flag==0){
    printf("the string is a palindrom %s=%s",string,string);
 }
 else{
    printf("the string is not a palindrom %s=%s",string,string);
 }
}

