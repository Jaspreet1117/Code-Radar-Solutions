// Your code here...
int maxGadgetSpend(int *keyboards,int n,int *headsets,int n,int budget){
    int re=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]+arr[j]<=budget){
               if(re<arr[i]+arr[j]){
                  re=arr[i]+arr[j];
               }
            }
        
        }
    
    }
    return re;
}