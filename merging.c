#include<stdio.h>
int main(){
int a[5];
int b[5];
printf("enter the elment in array 1");
for(int i=0; i<5; i++){
    scanf("%d",&a[i]);
}

printf("enter the element for arry 2");
for(int i=0; i<5; i++){
    scanf("%d",&b[i]);
}

int mix[5];

    printf("printing the elements of array merge\n");
for(int i=0; i<5; i++){
    if (a[i]>b[i]){
        mix[i]=a[i];
    }
    else{
        mix[i]=b[i];
    }
}

for (int i=0; i<5; i++){
    printf("%d\t\n",mix[i]);
}


}
