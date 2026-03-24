#include <stdio.h>
int main(){
    void merg_sort(int*A,int n){
    int*B,*c;
    if(n>1){
    k=h/2;m=n-k;
    B=(int*)maclloc(k*sizeof(int));
    c=(int*)maclloc(m*sizeof(int));
    for(i=0;i<k;i++) B[i]=A [i];
    for(j=0;j<k;j++) C[j-k]=A [J];
    merge_sort(B,k);
    merge_sort(C,m);
    merge(B,C,A,k,m);
    free(B);
    free(C);
    }
    }
