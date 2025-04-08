// Your code here...
int printPrimesInRange(int a,int b){
    int flag=1;
    for(int i=a;i<=b;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
                flag=0;
            }
          
        }
        if(flag=1){
            printf("%d ",i);
        }
    }
    return 0;
}