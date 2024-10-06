#include<stdio.h>
void swap(int *a, int *b){
  int temp;
  temp =*a;
  *a= *b;
  *b = temp;
}
int main(){
int temp;
int arr[] = {11,1,2,3,12,31,22};
int n  = sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<n-1; i++){
    int min = i;
    for(int j =i+1; j<n; j++){
        if(arr[j]<arr[min]){
            min = j;
        }
    }
      if(min!=i){
       swap(&arr[min],&arr[i]);
      }
}
for(int i=0; i<n; i++){
    printf("%d\n",arr[i]);
}
}
