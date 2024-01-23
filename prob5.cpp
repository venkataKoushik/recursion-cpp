// functional recursion
#include<bits/stdc++.h>
using namespace std;
int print(int i)
{
    if(i<0)return 0;
    return i+print(i-1);


}
int main()
{
    cout<<print(5+5);
    return 0;
}