#include<iostream>
#include<queue>
using namespace std;
void BFS(int arr[][8],int *visited,int i)
{
    queue<int> q;
    cout<<i<<" ";
    q.push(i);
    visited[i]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int t=1;t<8;t++)
        {
            if(arr[x][t]==1&&visited[t]==0)
            {
                visited[t]=1;
                cout<<t<<" ";
                q.push(t);
            }
        }
    }
}
int main()
{
    int arr[8][8]={{0,0,0,0,0,0,0,0},{0,0,1,1,1,0,0,0},{0,1,0,1,0,0,0,0},{0,1,1,0,1,1,0,0},{0,1,0,1,0,1,0,0},{0,0,0,1,1,0,1,1},{0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0}};
    int *visited=new int[8]{0};
    BFS(arr,visited,1);
    return 0;
}