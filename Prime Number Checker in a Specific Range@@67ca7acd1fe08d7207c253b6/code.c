// Your code here...
int printPrimesInRange(int a,int b){
    int flag=1;
    for(int i=a;i<=b;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                
                flag=0;
                break;
            }
          
        }
        if(flag=1){
            printf("%d ",i);
        }
    }
    flag=0;
    return 0;
}