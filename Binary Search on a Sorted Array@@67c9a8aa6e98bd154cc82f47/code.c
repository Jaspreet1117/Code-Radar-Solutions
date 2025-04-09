// Your code here...
int binarySearch(int *arr,int n,int target){
    int m=-1;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            m=i;
        }
    }
    return m;
}