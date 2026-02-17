/*
class syntax:
class classname{
   data members;
   member function;
};

object syntax:
classname objectname;

*/


#include<iostream>
using namespace std;
class A{
    int a,b;  // data member
  public:
    int getdata(int i,int j){  // member function
        a=i;
        b=j;
    }
    int show(){   // member function
    cout<<"\n value of a= "<<a;
    cout<<"\n value of b= "<<b;
    }
};

int main(){
    A obj;
    obj.getdata(12,54);
    obj.show();
    return 0;
}