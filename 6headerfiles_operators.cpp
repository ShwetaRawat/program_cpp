//There are two types of header files in cpp:
//1. System header files
#include<iostream>
//2. User Defined header files
// #include<tibbme.h>
// This will throw an error if the file isn't already present in the directory.
using namespace std;
int main(){
    int a=2, b=4;

    cout<<"Just casually explaining header files and operators in cpp."<<endl;

    
    //ARITHEMATIC OPERATORS

    cout<<"The value of a+b is "<<a+b<<endl; //It is endl not end1, also it doesn't have to be included in double quotes.
    
    cout<<"The value of a-b is "<<a-b<<"\n"; //It is \n not /n and this is included inside double quotes.
    
    cout<<"The value of a*b is "<<a*b<<"\n";
   
    cout<<"The value of a/b is "<<a/b<<"\n";
   
    cout<<"The value of a%b is "<<a%b<<"\n";
   
    cout<<"The value of a++ is "<<a++<<"\n"; 
    //Here the value of a printed is 2 and it has become 3 now(2+1).{First print then increment}
   
    cout<<"The value of a-- is "<<a--<<"\n";
    //Here the value of a printed is 3 and it has become 2 now(3-1).{First print then decrement}
   
    cout<<"The value of ++a is "<<++a<<"\n";
    //Here the value of a becomes 3 and 3 is printed as an output (2+1).{First increment then print}
   
    cout<<"The value of --a is "<<--a<<"\n";
    //Here the value of a becomes 2 and 2 is printed as an output (3-1).{First decrement then print}

    cout<<endl;
    cout<<endl;

    //COMPARISON OPERATORS
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    
 
    return 0;

}