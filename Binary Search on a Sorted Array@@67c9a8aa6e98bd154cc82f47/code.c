// Your code here...
void binarySearch(int *arr,int n,int target){
    int m;
    for(int i=0,i<n;i++){
        if(target==arr[i]){
            m=i;
        }
    }
    return m;
}