#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// bool checkAnagram(string s1,string s2);
/*An anagram is a word or phrase formed by rearranging the letters 
of a different word or phrase, typically using all the original letters exactly once.*/
// bool checkAnagram(string s1,string s2);
// {
//     int n1 = s1.length();
//     int n2 = s2.length();

//     if(n1!=n2)
//         return false;
    
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());

//     for(int i=0;i<n1;i++)
//     {
//         if(s1[i] != s2[i])
//             return false;
//     }
//     return true;
// }
//
//O(n) approach implementing count arrays
// bool checkAnagram(char *str1,char *str2)
// {
//     // Create 2 count arrays and initialize all values as 0
//     vector<int> cnt1(256,0);

//     vector<int> cnt2(256,0);
//     int i;
  
//     // For each character in input strings, increment count
//     // in the corresponding count array
//     for (i = 0; str1[i] && str2[i]; i++) {
//         cnt1[str1[i]]++;
//         cnt2[str2[i]]++;
//     }
  
//     // If both strings are of different length. Removing
//     // this condition will make the program fail for strings
//     // like "aaca" and "aca"
//     if (str1[i] || str2[i])
//         return false;
  
//     // Compare count arrays
//     for (i = 0; i < 256; i++)
//         if (cnt1[i] != cnt2[i])
//             return false;
  
//     return true;

// }
//O(n) approach implementing only one count array
bool checkAnagram(char *str1,char *str2)
{
    vector<int> count(256,0);
    int i;

    for(i=0;str1[i] && str2[i];i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    //if both the strings are not of equal length
    if(str1[i] || str2[i])
        return false;

    //compare the values in both the count arrays
    //if both the values are 0 then the strings are anagram of each other
    for(int i=0;i<256;i++)
    {
        if(count[i])//this means if(cnt[i] == 1(or true))
            return false;//strings are not anagram
    }

    return true;
}
// bool checkAnagram(string s1,string s2)
// {
//     int n = s1.size();
//     int m = s2.size();

//     if(n!=m) return false;
    
//     unordered_map<char,int> mp;
//     //if the strings are not of equal length
//     if(n!=m)    return false;
//     for(int i=0;i<n;i++)
//     {
//         mp[s1[i]]++;
//     }
    
//     for(int i=0;i<m;i++)
//     {   
//         //if the character is not found in the hashmap
//         //which means that the character is not present in the other string
//         //and the strings are not an anagram of each other
//         if(mp.find(s2[i]) == mp.end())//the pointer reaches the end of the hashmap
//         {
//             return false;
            
//         }
//         else 
//         {   mp[s2[i]]--;//we reduce the frequency of the element in the hashmap
//             if(mp[s2[i]] == 0)//and if the frequency comes down to zero
//                 mp.erase(s2[i]);//we erase the element
//         }
//     }

//     return mp.size()==0;
   
// }
int main()
{   
    char str1[] = "geeksforgeeks";
    char str2[] = "forgeeksgeeks";

    if(checkAnagram(str1,str2))
        cout<<"The two strings are anagram of each other";
    else
        cout<<"They are not";


    return 0;
}