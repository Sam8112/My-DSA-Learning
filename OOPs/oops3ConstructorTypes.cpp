#include<iostream>
#include "class.txt"
using namespace std;

//Person is class
class Person{
    public:
    //properties
    int seat;
    char gender;
    static int timeToComplete;
    

    Person(){
        cout << "simple constructor is called " << endl;
    }

    Person(int seat,char gender){
        cout << "parametrised constructor is called " << endl;
        this-> seat=seat;
        this-> gender=gender;
    }

    Person(Person &temp){
        cout << "copy constructor is called " << endl;
        this->seat=temp.seat;
        this->gender=temp.gender;
    }
    ~Person(){
        cout << "Destructor is called " << endl;
    }
    static int random(){
        return timeToComplete;
    }
};

int Person::timeToComplete=5;

int main(){
    //three objects ram and shyam and radhe in stack and a object in 
    Person radhe;
    Person ram(70,'F');
    cout << ram.seat << " " << ram.gender << endl;
    Person shyam(ram);
    cout << shyam.seat << " " << shyam.gender << endl;
    Person *a =new Person;
    delete a;
    cout << Person::random()<< endl; 

   
    return 0;
}