
//include library
#include <iostream>
using namespace std;

int main () {

// declarations of variables
    int a ;
    char b ;
    bool c ;
    double d ;
    float e ;
	
//declaration of pointers
    int *pint = &a ;
    char *pchar = &b ;
    bool *pbool = &c ;
    double *pdouble = &d ;
    float *pfloat = &e ;
	
//printing size of all the above


        cout << "Welcome to question no 11" << endl;
        
        cout << "The size of integer variable is " << sizeof(a) << " and the size of int pointer varible is " << sizeof(pint) << endl;
        cout << "The size of character variable is " << sizeof(b) << " and the size of char pointer varible is " << sizeof(pchar) << endl;
        cout << "The size of bool variable is " << sizeof(c) << " and the size of bool pointer varible is " << sizeof(pbool) << endl;
        cout << "The size of double variable is " << sizeof(d) << " and the size of double pointer varible is " << sizeof(pdouble) << endl;
        cout << "The size of float variable is " << sizeof(e) << " and the size of float pointer varible is " << sizeof(pfloat) << endl;
}