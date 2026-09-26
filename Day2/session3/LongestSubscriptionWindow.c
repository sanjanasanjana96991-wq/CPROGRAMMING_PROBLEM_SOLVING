#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int LongestWindow(int days[],int n,int k){
    int left=0;
    int right=0;
    int maxLen=0;
    for(right=0;right<n;right++){
        if(days[right]-days[left]>k)
            {
                left++;
        }
        maxLen=fmax(right-left+1,maxLen);
    }
    return maxLen;
}

int main(){
    int days[] = {1, 3, 5, 7, 9};
    int n = sizeof(days)/sizeof(days[0]);
    int k = 4;
    printf("The longest window is %d\n", LongestWindow(days, n, k));
    return 0;
}
