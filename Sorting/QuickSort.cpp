#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v,int l,int h)
{
    if(l>=h)
    {
        return l;
    }
    int count=0;
    int pivot=v[l];
    for(int i=l+1;i<=h;i++)
    {
        if(v[i]<pivot)
        {
            count++;
        }
    }
    int countt=l+count;
    swap(v[countt],v[l]);
    int i=l,j=h;
    while(i<countt&&j>countt)
    {
        if(v[i]<v[countt])
        {
            i++;
        }
        else if(v[j]>v[countt])
        {
            j--;
        }
        else
        {
            swap(v[i],v[j]);
        }
    }
    return countt;
}
void quickSort(vector<int> &v,int l,int h)
{
    if(l>=h)
    {
        return;
    }
    int index=partition(v,l,h);
    quickSort(v,l,index);
    quickSort(v,index+1,h);
}
int main()
{
    vector<int> arr{8,5,7,3,2};
    quickSort(arr,0,arr.size()-1);
    for(int a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}
