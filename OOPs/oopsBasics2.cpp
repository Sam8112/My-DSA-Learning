#include<iostream>
using namespace std;

// class is Person there is an example of this class ram
class Person {
    private:
    int height=180;
    public:
    char weight='O';

    int getHeight(){
        return height;
    }

    //non-parameterised constructor
    Person() {
    cout << "Constructor is called " << endl;
    }
    
    int print(){
        cout << "this one " << endl;
        return height;
    }

    //parametrised constructor
    Person(int height,char weight){
        cout << "Parametrised constructor is called " << endl;
        this-> height=height;
        this-> weight=weight;
    }
    char setWeight(){
        cout << "THIS ONE " << endl;
        weight= 'F';
        return weight; 
    }

};
      
int main(){
    // object is shyam
    Person shyam(175,'P');
    Person *radha = new Person;
    cout << "Hi" << endl;
    cout << shyam.weight<< endl;
    cout << shyam.getHeight() << endl;
    cout << "Address of this is " << &shyam << endl;
    cout << "shyam height is " << shyam.getHeight() << endl;
    cout << "shyam weight is " <<shyam.weight << endl;
    cout << "radha weight is "<<radha->setWeight() << endl;
    cout << "radha weight: " << radha->weight << endl;
    cout << "radha height: " << radha->print() << endl;
    
     

    return 0;
}