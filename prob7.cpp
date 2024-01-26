#include<bits/stdc++.h>
using namespace std;
void reversee(int arr[],int start,int end)
{
    if(start>end)return ;
    swap(arr[start],arr[end]);
    reversee(arr,start+1,end-1);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    reversee(arr,0,4);
    for(int i=0;i<5;i++)cout<<arr[i];

}