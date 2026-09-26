#include<stdio.h>
#define N 4
int findingPath(int maze[N][N],int x,int y,char path[],int index){
if(x==N-1 && y==N-1){
    printf("%s\n",path);
}
if(x>=N || y>=N||maze[x][y]==0){
return 0;
}
maze[x][y]=0;
//down
path[index]='D';
if(findingPath(maze,x+1,y,path,index+1)){
    return 1;
}
//right
path[index]='R';
if(findingPath(maze,x,y+1,path,index+1)){
    return 1;
}
//back
maze[x][y]=1;
return 0;
}
int main(){
int maze[N][N]={
    {1,0,0,0},
    {1,1,0,1},
    {0,1,0,0},
    {1,1,1,1}
};
char path[N*N];
findingPath(maze,0,0,path,0);
//print("%s",result);
return 0;
}

