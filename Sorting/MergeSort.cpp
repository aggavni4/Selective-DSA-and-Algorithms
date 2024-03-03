#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &v,int l,int mid,int h)
{
    vector<int> b;
    int i=l,j=mid+1;
    while(i<=mid&&j<=h)
    {
        if(v[i]<v[j])
        {
            b.push_back(v[i++]);
        }
        else
        {
            b.push_back(v[j++]);
        }
    }
    while(i<=mid)
    {
        b.push_back(v[i++]);
    }
    while(j<=h)
    {
        b.push_back(v[j++]);
    }
    int k=0;
    for(i=l;i<=h&&k<b.size();i++)
    {
        v[i]=b[k++];
    }
}
void mergeSort(vector<int> &v,int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergeSort(v,l,mid);
        mergeSort(v,mid+1,h);
        merge(v,l,mid,h);
    }
}
int main()
{
    vector<int> arr{8,5,7,3,2};
    mergeSort(arr,0,arr.size()-1);
    for(int a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}