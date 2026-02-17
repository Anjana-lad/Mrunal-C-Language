#include<iostream>
using namespace std;

class Person {
    private:
    int pid;
    string name;
    public:
    void get_data(){
        cout<<"Enter id";
        cin>>pid;
        cout<<"Enter name:";
       // cin>>name;
        cin.ignore();
        getline(cin,name);
    }
    void show(){
        cout<<"Pid="<<pid<<endl<<"NAme"<<name<<endl;
    }
};
int main(){
    Person p;
    p.get_data();
    p.show();
    return 0;
}