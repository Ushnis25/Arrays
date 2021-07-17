#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(string arr[],int n);

int findminlength(string arr[],int n);

int main()
{   
    //In C/C++, a string is an 1-D array of characters
    //while an array of string is a 2-D array fo characters
    string arr[]={"GeeksForGeeks","Geeks","Geek","Geezer"};

    int n=sizeof(arr[0])/sizeof(arr);

    string ans=LongestCommonPrefix(arr,n);

    if(ans.length())
        cout<<"The Longest Common Prefix is: "<<ans;
    else
    {
        cout<<"There is no LCP in the above array of strings";
    }
    return 0;    
}

int findminlength(string arr[],int n)
{
    int min=arr[0].length();
    for(int i=0;i<min;i++)
    {
        if(arr[i].length()<min)
        min=arr[i].length();

    }
    return min;
}

string LongestCommonPrefix(string arr[],int n)
{
    int minlen=findminlength(arr,n);

    string result;
    char current;

    for(int i=0;i<minlen;i++)
    {
        current=arr[0][i];

        for(int j=1;j<n;j++)
        {
            if(current!=arr[j][i])
                return result;
        }

        result.push_back(current);
    }
    return result;
}