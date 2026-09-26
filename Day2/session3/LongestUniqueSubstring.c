#include<stdio.h>
#include<math.h>

int longestUniqueSubstring(char *s){
   int set[127]={0};
   int left=0,right=0,maxLen=0;
for(right=0;s[right]!='\0';right++){
   char current=s[right];
  
   if(set[current]==1){
      left++;

   }
   set[current]=1;
   maxLen=fmax(right-left+1,maxLen);
}
return maxLen;

}

int main()
{
   char s[]="abcabc";
   printf("%d", longestUniqueSubstring(s)); 
return 0;   
}


