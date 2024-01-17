int Sum_array(int[]);
int main(){
     //int a[]={1,2,3,4,5};
     int a[5];
     int sum;
     for(int i=0;i<5;i++){
        scanf("%d",&a[i]); }
    sum=Sum_array(a); //function call
    printf("The sum=%d\n",sum);
    for(int i=0;i<5;i++){
        printf(" %d ",a[i]);}
     return 0;}
int Sum_array(int x[]){
        int temp=0;
    for(int i=0;i<5;i++){
        x[i]=x[i]+10;
        temp=temp+x[i];  }
    return temp;
}
