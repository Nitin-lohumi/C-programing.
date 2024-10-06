#include<stdio.h>
int main(){
 int arr[] = {5,9,17,23,45,59,63,72,89};
 int n = sizeof(arr)/sizeof(arr[0]);
 int left =0;
 int right =n-1;
 int mid;
 int search;
 printf("Enter the data");
 scanf("%d",&search);
 int  found = 0;
 while(left<=right){
    mid= (left+right)/2;
    if(search==arr[mid]){
        printf("data found in the position of %d ",mid+1);
        found =1;
        break;
    }
    else if (search<arr[mid]){
        right = mid-1;
    }
    else {
        left = mid+1;
    }
 }
 if(found==0){
    printf("the search is not found in our array");
 }
}



