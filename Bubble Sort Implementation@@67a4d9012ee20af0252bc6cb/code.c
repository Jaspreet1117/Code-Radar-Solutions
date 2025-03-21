// Your code here...
bubbleSort(int arr,n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
printArray(arr,n){
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}