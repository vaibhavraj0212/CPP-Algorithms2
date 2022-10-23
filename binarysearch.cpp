#include<iostream>
using namespace std;
int binary_search(int arr[],int key,int n)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int n,i,j,a[50],temp,key,index;
    cout<<"Enter the Number of elements in Array : ";
    cin>>n;
    cout<<"Enter the value of each element in Array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array"<<endl;
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Enter the element to be searched : ";
    cin>>key;
    index=binary_search(a,key,n);
    cout<<"Element "<<key<<" found at Index : "<<index;
    return 0;
}