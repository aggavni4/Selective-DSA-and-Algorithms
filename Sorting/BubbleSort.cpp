#include<iostream>
#include<vector>
using namespace std;
//Kpasses give useful results
//They give k max elements
void bubbleSort(vector<int> &v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
int main()
{
    vector<int> arr{8,5,7,3,2};
    bubbleSort(arr);
    for(int a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}