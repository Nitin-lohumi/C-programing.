#include<stdio.h>
void findMaxMin(int arr[], int low, int high, int *max, int *min) {
   if(low==high){
     *min = *max = arr[low];
     return;
   }
   if(high == low+1){
    if(arr[high]>arr[low]){
      *min = arr[low];
      *max = arr[high];
    }else{
      *min = arr[high];
      *max = arr[low];
    }
    return;
   }
    int mid = low+(high-low)/2;
    int minleft,minright,maxleft,maxright;
    findMaxMin(arr,low,mid,&maxleft,&minleft);
    findMaxMin(arr,mid+1,high,&maxright,&maxleft);

    *max = (maxright>maxleft)? maxright:maxleft;
    *min = (minleft<minright)? minleft:minright;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
    findMaxMin(arr, 0, n - 1, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
