#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;
// Also handles -ve numbers
void countSort(vector<int> &v)
{
    int maxi=*max_element(v.begin(),v.end());
    int mini=*min_element(v.begin(),v.end());
    int diff=0;
    if(mini<0)
    {
        diff=abs(mini);
        maxi+=diff;
    }
    int *arr=new int[maxi+1]{0};
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        arr[v[i]+diff]++;
    }
    int i=mini+diff;
    int k=0;
    while(i<maxi+1)
    {
        if(arr[i]>0)
        {
            v[k++]=i-diff;
            arr[i]--;
        }
        if(arr[i]==0)
        {
            i++;
        }
    }
}
int main()
{
    vector<int> arr{8,5,7,3,68,-4};
    countSort(arr);
    for(int a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}
