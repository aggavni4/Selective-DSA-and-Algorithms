#include<iostream>
using namespace std;
void DFS(int arr[][8],int *visited,int i)
{
    if(visited[i]==0)
    {
        cout<<i<<" ";
        visited[i]=1;
        for(int t=1;t<8;t++)
        {
            if(visited[t]==0&&arr[i][t]==1)
            {
                DFS(arr,visited,t);
            }
        }
    }
}
int main()
{
    int arr[8][8]={{0,0,0,0,0,0,0,0},{0,0,1,0,0,0,0,0},{0,0,0,1,0,0,0,0},{0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0},{0,0,0,0,1,0,1,1},{0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0}};
    int *visited=new int[8]{0};
    DFS(arr,visited,1);
    return 0;
}