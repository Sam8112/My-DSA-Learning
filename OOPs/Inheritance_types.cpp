// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A{
    public:
    int age=10;
    char color='b';
    void setAge(){
        cout << "age is " << age << endl;
    }
};
class B{
    public:
    int height=123;
    int weight=24;
    void setWeight(){
        cout << "weight is " << weight << endl;
    }
};
class C: public A,public B{
    public:
    char sex='m';
    
};
int main() {
    // Write C++ code here
    C c;
    cout << c.weight << endl;
    cout << c.height << endl;
    cout << c.sex << endl;
    return 0;
}