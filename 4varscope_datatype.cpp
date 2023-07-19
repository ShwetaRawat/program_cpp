#include<iostream> 
using namespace std;  
int glo= 45;
void sum(){

    cout<<glo;

} 
int main(){
    int glo=23;
    glo=2;
    int a=3, b=34;

    cout<<"The value of glo is "<<glo<<".\nThe value of a is "<<a<<".\nThe value of b is "<<b<<".\n";
    sum();
    cout<<"\n";
    cout<<"This is local variable : "<<glo<<".";
   
    return 0;
}