// local class : the class which is defined in the manin function is called local class.
#include<iostream>
using namespace std;

int main(){
    class student{
        int rollno;
        float marks[4];
    public:
        void get_data(){
            cout<<"Enter rollno:";
            cin>>rollno;
            cout<<"Enter marks:";
            for(int i=0;i<4;i++){
                cin>>marks[i];
            }
        }
        void show(){
            cout<<"rollno:"<<rollno<<endl;
            for(int i=0;i<4;i++){
            cout<<"Marks:"<<marks[i]<<endl;
         }
        }
    };
    student st[2];
    for(int i=0;i<2;i++){
        st[i].get_data();
        st[i].show();
    }

}