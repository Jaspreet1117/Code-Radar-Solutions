// Your code here...
int fibonacciSeries(int n){
    for(int i=0;i<n;i++){if(i==0){
        printf("0 ");
    }
    else if(i==1){
        printf("1 ");
    }
    
    else{
       int a=0;
       int b=1;
       int res=a+b;
       
       printf("%d ",res); 
       a=b;
       b=res;
    }}
}