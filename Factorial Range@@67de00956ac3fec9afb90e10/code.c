// Your code here...
void factorialRange(int start,int end){
    if(start>end || start<0 ){
        printf("Invalid range");
    }
    else{
    for(int i=start;i<=end;i++){
        int fact=1;
        for(int j=1;j<=i;j++){
            fact*=i;
        }
        printf("%d\n",fact);
        fact=1;
    }
}
return;}
