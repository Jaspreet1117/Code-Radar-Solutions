int isPrime(int num){
    int prime=1;
    if(num=1){
        prime=0;
    }
    else if(num==2){
        prime=1;
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