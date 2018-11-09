/*Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method.*/

//using library 

#include <iostream> 
using namespace std;

int main () {
    char Arr [] = {'G','i','r','i','s','h','\0'} ; //Declaring character array or a string with my name
    char *p; ;  // Declaring a pointer that point to the char array 
    int i, j;

        cout << "Welcome to question no 14" << endl; 
        cout << "The character array or string has my name as elements that is G i r i s h " << endl;
        cout << "Printing the character array or a string using normal index method " << endl;
        
        for (i=0 ; i < 6 ; i++) {
            cout << Arr [i] << " " ;
        }

        cout << endl;

        cout << "Printing the character array or a string using pointer method" << endl;

        p = Arr;

        while (*p != '\0') {
            cout << *p << " " ;
            p++;
            }
        
        cout << endl ;
    
}