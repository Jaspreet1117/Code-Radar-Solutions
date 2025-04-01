// Your code here...
//minmum difference pa
#include <stdio.h>
#include <limits.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d",-1);
    }else{
    int diff=INT_MAX;
    int pair1;
    int pair2;
    //sort 
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }

        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            pair1 = arr[i];
            pair2 = arr[i + 1];
        }
    }
}
pair1>pair2?printf("%d %d",pair2,pair1):printf("%d %d",pair1,pair2);

}