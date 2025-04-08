// Your code here...
int fibonacciSeries(int n){
    int a=0;
       int b=1;
    for(int i=0;i<n;i++){if(i==0){
        printf("0 ");
    }
    else if(i==1){
        printf("1 ");
    }
    
    else{
       
       int res=a+b;
       
       printf("%d ",res); 
       a=b;
       b=res;
    }}
}