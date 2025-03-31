// Your code here...
void trackPlayerRanks(int *ranked,int n,int *player,int m,int *result){
    int newd=1;
    for(int i=1;i<n;i++){
        if(ranked[i]!= ranked[i-1]){
            ranked[newd++]=ranked[i];
        }
    }
    for(int i=0;i<m;i++){
    int count=0;

        for(int j=0;j<newd;j++){
            
            if(ranked[j]>player[i]){
                count+=1;
                }
            else{
                break;
            }}
            result[i]=count+1;
    
        
        }
        
    

    }
