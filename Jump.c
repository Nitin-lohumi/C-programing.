#include<stdio.h>
int Jump(int arr[],int n, int key){
  int i;
  int start =0;
  int end = sqrt(n);
  while(arr[end]<key && start<n){
    start = end;
    end = end+ sqrt(n);
    if(end>n-1) end=n;
  }
  for(i =start; i<end; i++){
    if(arr[i]==key){
        return i;
    }
  }
  return -1;
}
int main(){
  int arr[] = {1,2,3,4,5,6,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  int key = 8;

  int index = Jump(arr,n,key);
  if(index ==-1){
    printf("the elements is not found");
  }
  else{
    printf("position of the element is %d",index+1);
  }
}
