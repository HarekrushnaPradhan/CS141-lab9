//include library

#include<iostream>
using namespace std;

//function
bool check(char *p,char c)
{
    while(*p!='\0')
    {
        if(*p==c)
        {
            return 1;
        }
        p++;
    }
    return 0;
}

int main()
{
    char string[50],c;
    cout<<"Enter a  string: ";
    cin>>string;
    cout<<"Enter the character which you want to check: ";
    cin>>c;
    char *p=string;
    bool t=check(p,c);
    if(t==1)
    {
        cout<<c<<" is present in "<<string;
    }
    else
        cout<<c<<" is not present in "<<string;
        return 0;
}