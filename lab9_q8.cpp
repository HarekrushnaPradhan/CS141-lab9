//include library
#include<iostream>

using namespace std;

//return length parameter to ctsring.
int myStrlen(char *p)
{
    int count;
    count=0;
    while(*p!='\0')
    {
        p++;
        count++;
    }
    return count;
}

//print and ask
int main()
{
    char string[50];
    cout<<"Enter a string: ";
    cin>>string;
    char *p=string;
    cout<<"The length of the string is: "<<myStrlen(p);
    return 0;
}