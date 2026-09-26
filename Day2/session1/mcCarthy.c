#include<stdio.h>
int mcCarthy91(int n){
    if(n>100){
        return n-10;
    }
    else{
        return mcCarthy91(mcCarthy91(n+11));
    }
}
    int main(){
    int n=90;
    printf("%d",mcCarthy91(n));
    return 0;
}