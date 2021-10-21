#include<iostream>
using namespace std;
int RBinSearch(int l,int h,int key,int a[])
{
    if(l==h){
        if(a[l]==key) return l;
        else return -1;
    }
    else
    {
        int mid=int((l+h)/2);
        if(a[mid]==key) return mid;
        else if(a[mid]<key) return RBinSearch(mid+1,h,key,a);
        else return RBinSearch(l,mid+1,key,a);
    }

}


int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;
    cout<<"Enter array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter key: ";
    int key;
    cin>>key;
    int ele1=RBinSearch(0,n-1,key,arr);
}