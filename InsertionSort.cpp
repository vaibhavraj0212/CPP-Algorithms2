#include<iostream>
using namespace std;
int main()
{
    int a[]={34,12,76,31,21,98};
    cout<<"Array Before Sorting"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<endl;
    }
    int temp,j,k;
    for(k=1;k<=6;k++)
    {
        temp=a[k];
        j=k-1;
        while(j>=0&&temp<=a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"Array after Sorting"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}