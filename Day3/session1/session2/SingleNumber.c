#include<stdio.h>
int singleNumber(int *nums, int n){
    int result=0;
    for(int i=0;i<n;i++){
        result=result^nums[i];
    }
    return result;
}

int main(){
    int nums[]={2,1,2};
    int n=3;
    printf("%d",singleNumber(nums,n));
    return 0;
}