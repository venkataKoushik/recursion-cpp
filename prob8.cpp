#include<bits/stdc++.h>
using namespace std;
bool check(string s,int start,int end)
{
    
    if(start>=end)return true;
    if(s[start]!=s[end])return false;
    start++;
    end--;
    return  check(s,start,end);

}
int main()
{
    string s="madan";
    if(check(s,0,s.length()-1))
    cout<<"Polindrome string";
    else
    cout<<"Not a Polindrome string";
    return 0;
}
