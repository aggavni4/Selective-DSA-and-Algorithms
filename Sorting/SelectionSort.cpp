#include<iostream>
#include<vector>
using namespace std;
//K passes give useful results
//They give k min elements
void selectionSort(vector<int> &v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        int mini=i+1;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[mini])
            {
                mini=j;
            }
        }
        swap(v[i],v[mini]);
    }
}
int main()
{
    vector<int> arr{8,5,7,3,2};
    selectionSort(arr);
    for(int a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}