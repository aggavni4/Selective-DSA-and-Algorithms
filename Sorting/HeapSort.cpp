#include<iostream>
using namespace std;
void maxHeapify(int *arr,int n,int root)
{
    int left=2*root+1;
    int right=2*(root+1);
    int largest=root;
    if(left<n&&arr[root]<arr[left])
    {
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=root)
    {
        swap(arr[largest],arr[root]);
        maxHeapify(arr,n,largest);
    }
}
void heapSort(int *arr,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[i],arr[0]);
        maxHeapify(arr,i,0);
    }
}
int main()
{
    int arr[]={5,10,30,20,35,40,15};
    int n=sizeof(arr)/sizeof(int);
    for(int i=n/2-1;i>=0;i--)         // as lead nodes=(n+1)/2, so nodes from n-1 to n/2-1+1 index are leaf nodes
    {
        maxHeapify(arr,n,i);
    }
    heapSort(arr,n);
    // maxHeapify(arr,7,0);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}