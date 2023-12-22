#include<stdio.h>
int main(){
    int j,i,m,n,k;
    scanf("%d %d %d",&m , &n, &k);
    for (i=0;i<m;i++)
    {
        int *p;
        *p = malloc(m*sizeof(int));
        int t;
        scanf("%d",&t);
        p[i]=t;
    }
}