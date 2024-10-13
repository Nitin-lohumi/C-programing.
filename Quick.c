void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partision(int arr[],int low,int high){
int pivot = arr[high];
int i = (low-1);
for(int j =low; j<high; j++){
    if(arr[j]<=pivot){
        i++;
        swap(&arr[j],&arr[i]);
    }
}
swap(&arr[i+1],&arr[high]);
return (i+1);
}
void QuickSort(int arr[],int low,int high){
  if(low<high){
    int partion = partision(arr,low,high);
    QuickSort(arr,low,partion-1);
    QuickSort(arr,partion+1,high);
  }
 }
int main(){
 int arr [] = {10, 7, 8, 9, 1, 5};
 int n = sizeof(arr)/sizeof(arr[0]);//6
 QuickSort(arr,0,n-1);
 for(int i =0; i<n; i++){
    printf("%d\n",arr[i]);
 }

}
