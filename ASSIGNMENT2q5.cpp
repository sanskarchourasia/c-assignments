#include<iostream>
using namespace std;
int main(){
    char _a;
    cout<<"enter first character";
    cin>>_a;
    char _b;
    cout<<"enter second character";
    cin>>_b;
    int _c;
    _c=int(_a)-int(_b);
    cout<<"the difference between ascii values of these two characters are :  "<<_c;

}