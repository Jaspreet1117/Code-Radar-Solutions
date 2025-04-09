// Your code here...
void selectionSort(char *arr,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            char temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    return;
}
void printArray(char *arr,int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}