// Your code here..
int strcmp(const char *str1,const char *str2);
char *strcpy(char *dest, const char *src);
void selectionSort(char *arr[],int n){
    char temp[100];
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[min])>0){
                min=j;
            }
        }
        if(min!=i){
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[min]);
            strcpy(arr[min],temp);      
            }
    }
    return ;
}
void printArray(char *arr,int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    return;
}