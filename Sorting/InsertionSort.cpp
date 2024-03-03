#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &v)
{
    int n=v.size();
    for(int i=1;i<n;i++)
    {
        int elem=v[i];
        int j=i-1;
        for(;j>-1&&v[j]>elem;j--)
        {
            v[j+1]=v[j];
        }
        v[j+1]=elem;
    }
}
int main()
{
    vector<int> arr{8,5,7,3,2};
    insertionSort(arr);
    for(int a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}