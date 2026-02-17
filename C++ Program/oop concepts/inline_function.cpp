//inline function : 
#include<iostream>
using namespace std;

inline int square(int side){
 return side*side;
}
inline int sum (int a,int b){
    return a+b;

}

int main(){
    int a=20,b=30,c=10;
    cout<<"Square of c="<<square(c)<<endl;
    cout<<"Sum ="<<sum(a,b);
}