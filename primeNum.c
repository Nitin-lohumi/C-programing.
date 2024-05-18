#include<stdio.h>
int DisplayPrime(int i);
int main(){
 int n1,n2, flag,i;
 printf("Enter the frist number\n");
 scanf("%d",&n1);
 printf("Enter the second number \n");
 scanf("%d",&n2);

 if(n1>n2){
    n1=n1+n2;//suppose n1=10,n2=20 then n1= 20+10 n1=30;
    n2=n1-n2;//n2= 30-10=20
    n1=n1-n2;//n1=30-20=10
 }
for(i=n1+1;i<=n2; ++i){
    flag=DisplayPrime(i);
    if(flag==1){
        printf("%d\n",i);
    }
}
return 0;


}
int DisplayPrime(int i){
  int flag = 1;
  for(int j =2; j<=i/2; ++j){
    if(i%j==0){
        flag=0;
        break;
    }
  }
return flag;

}

