// Your code here...
void trackPlayerRanks(int *ranked,int n,int *player;int m;int *result){
    for(int i=0;i<m;i++){
        if(arr[i]==arr[i+1]){
            for(int j=i+1;j<m;j++){
                arr[j]=arr[j+1];
            }
            m=m-1;
        }
    }

    for(int i=0;i<m;i++){
        printf("%d",arr[i]);

    }
}