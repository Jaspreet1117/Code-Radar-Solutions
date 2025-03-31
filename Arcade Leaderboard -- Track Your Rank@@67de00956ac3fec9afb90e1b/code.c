// Your code here...
void trackPlayerRanks(int *ranked,int n,int *player,int m,int *result){
    for(int i=0;i<m;i++){
        if(player[i]==player[i+1]){
            for(int j=i+1;j<m;j++){
                player[j]=player[j+1];
            }
            m=m-1;
        }
    }

    for(int i=0;i<m;i++){
        printf("%d",player[i]);

    }
}