#include<stdio.h>
int main(){
int n;
printf("Enter the size\n");
scanf("%d",&n);

int arr[n];
for(int  i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
printf("reverse the array\n");
rev(arr,n);
}
void rev(int arr[],int n){
while(arr[0]<arr[n-1]){
    int temp= arr[0];
     arr[0]=arr[n-1];
    arr[n-1]=temp;
    // arr[0]++;
//arr[n-1]--;
 }
 for(int i=0; i<n; i++){
    printf("%d\n",arr[i]);
}
}
