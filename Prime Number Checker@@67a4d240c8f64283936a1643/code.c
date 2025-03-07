int isPrime(int num){
    int prime=1;
    if(num=1){
        prime=0;
        return 0;
    }
    else{
        for(int i=2;i<=num-1;i++){
            if(num%i==0){
                prime=0;
            }
            else {
                prime=1;
            }
        }
    }
}