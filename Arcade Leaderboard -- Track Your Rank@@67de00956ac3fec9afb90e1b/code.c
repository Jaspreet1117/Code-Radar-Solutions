// Your code here...
void trackPlayerRanks(int *ranked,int n,int *player,int m,int *result){
    for(int i=0;i<n;i++){
        if(ranked[i]==ranked[i+1]){
            for(int j=i+1;j<m;j++){
                ranked[j]=ranked[j+1];
            }
            n=n-1;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",ranked[i]);

    }
}