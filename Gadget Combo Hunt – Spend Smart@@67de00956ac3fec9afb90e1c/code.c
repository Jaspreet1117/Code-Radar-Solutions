// Your code here...
int maxGadgetSpend(int *keyboards,int n,int *headsets,int m,int budget){
    int re=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(keyboards[i]+headsets[j]<=budget){
               if(re<keyboards[i]+headsets[j]){
                  re=keyboards[i]+headsets[j];
               }
            }
        
        }
    
    }
    return re;
}