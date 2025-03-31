// Your code here...
void trackPlayerRanks(int *ranked,int n,int *player,int m,int *result){
    for(int i=0;i<n;i++){
        if(ranked[i]==ranked[i+1]){
            for(int j=i+1;j<n;j++){
                ranked[j]=ranked[j+1];
            }
            n=n-1;
        }
    }
    int check=0;
        for(int j=0;j<n;j++){
            int count=0;
            if(ranked[j]>player[check]){
                count+=1;
                }

                break;

        }
        result[check]=count;
        check+=1;

    }
