#include<iostream>
using namespace std;
int binary(int ar[],int b,int l,int r,int c)
{
    if(r>=l)
    {
        int mid=l+(r-1)/2;
        if(b==ar[mid])
        {
            cout<<"No. of comparison\n"<<c+1;
            return mid;
        }
        else if(ar[mid]>b)
            {
                c++;
                return binary(ar,b,l,mid-1,c);
            }
        else
        {
            c++;
            return binary(ar,b,mid+1,r,c);
        }
    }
    else
    {
        cout<<"No. of comparison\n"<<c+1;
        return -1;
    }
    return 0;
}
int main()
{
    int a,l=0;
    cout<<"how many elements \n";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements\n";
    for(int i=0;i<a;i++)
        cin>>arr[i];
    cout<<"What you want to search\n";
    int b,c=0;
    cin>>b;
    int result=binary(arr,b,l,a,c);
    if(result!=-1)
    {
        cout<<"Elements found at\n"<<result+1;
    }
    else
    {
        cout<<"Element not found\n";
    }
    return 0;
}
