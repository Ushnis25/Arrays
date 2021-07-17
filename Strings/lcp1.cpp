
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

//LCP through Word by Word matching
string CommonPrefix(string character,string str);

string LongestCommonPrefix(string arr[],int n);

int main()
{
    string arr[]={"geeksforgeeks","geeks","geek","geezer"};//an array of strings is a 2D array of characters
    
    int n=sizeof(arr)/sizeof(arr[0]);

    string ans= LongestCommonPrefix(arr,n);

    if(ans.length())
        cout<<"The longest common prefix is - "<<ans;
    else
    {
        cout<<"Ther is no common prefix";
    }
    return 0;
}

string CommonPrefix(string character,string arr)
{
    string result;
    int n1=character.length(),n2=arr.length();
    int i,j;
    for(i=0,j=0;i<=n1-1&&j<=n2-1;i++,j++)
    {
        if(character[i]!=arr[j])
            break;
        result.push_back(character[i]);

    }
    return result;
}

string LongestCommonPrefix(string arr[],int n)
{
    string prefix=arr[0];
    for(int i=0;i<n-1;i++)
        prefix=CommonPrefix(prefix,arr[i]);
    return prefix;
}