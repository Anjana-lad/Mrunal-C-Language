// write a program to print message welcome to oop programing.
#include<iostream>
using namespace std;

class msg{
    public:
  void show(){
        cout<<"Welcome to oop programming"<<endl;
    }
};
int main(){
    msg sh;  
    msg sh2;

    sh.show();
    sh2.show();
    return 0;
}

/* write a program to print student info :
having data member rollno,name;
member funtion setinfo(), showinfo();
*/