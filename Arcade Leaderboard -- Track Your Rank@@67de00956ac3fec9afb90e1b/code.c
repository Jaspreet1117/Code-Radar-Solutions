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
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            if(ranked[j]>player[i]){
                count+=1;
                }
            else{
                break;
            }
        
        }
        result[check]=count+1;}
        
        check+=1;

    }
