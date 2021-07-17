//5 different ways of creating an array fo string sin cpp
//In C/C++ , a string is a 1-D array of characters 
//and an array of strings is a 2D array of characters.
#include<iostream>
#include<vector>
using namespace std;

//#1. using a constant array of pointers
/*
int main()
{
    const char *color[4]={"Blue","red","Orange","Yellow"};

    for(int i=0;i<4;i++)
    {
        cout<<color[i]<<endl;
    }
}
*/
//#2.Using 2D array
/*
int main()
{
    //int arr[Number_of_strings][MaxSize of a string]
    char color[4][10]={"Blue","Red","Ornage","Yellow"};
    color[1][1]='b';
    for(int i=0;i<4;i++)
    {
        cout<<color[i]<<endl;
    }
}
*/
//#3. Using strings
//In this method the size of the string is not fixed, hence the space is saved.
//string <nameofstring>[<sizeofstring>]

int main()
{
    string color[]={"Blue","Green","Yellow","Orange"};
    color[1]="Violet";
    for(int i=0;i<4;i++)
    {
        cout<<color[i]<<endl;
    }
}


//#4.Using Vectors- C++ STL COntainer scan be used to dynamically allocate array
/*int main()
{
    vector<string> color;

    color.push_back("Blue");
    color.push_back("Green");
    color.push_back("Yellow");
    color.push_back("Violet");
    for(int i=0;i<color.size();i++)
    {
        cout<<color[i]<<endl;
    }
}*/