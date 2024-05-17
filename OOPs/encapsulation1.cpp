#include <iostream>
using namespace std;
class A {
    private:
    int age=9;
    protected:
    int weight=20;
    public:
    char ch='a';
    void speak(){
        cout << "He is speaking " << endl; 
    }
    int setAge(){
        return age;
    }
};

class B: public A {
    public:
    // void setAge(){
    //     age=10;
    //     cout << age << endl;
    // }
    int height=112;
    long roll=29834798327;
    
};

class C : public A {
    public:
    // void setAge(){
    //     age=11;
    //     cout << age << endl;
    // }
    void bark(){
        cout << "dogs are barking " << endl;
    }
    
};
int main() {
    
    A movie;
    movie.setAge();
    
    B hero;
    // cout << "age is " << hero.age << endl;
    // cout << "age is set to "<< hero.setAge(20) << endl;
    // hero.setAge();
    cout << "roll no. "<<hero.roll << endl;
    
    C villain;
    // villain.setAge();
    // cout << "age is set to "<< villain.setAge(30) << endl;
    cout << "weight is set to " << villain.weight << endl;
    villain.speak();
    villain.bark();


    return 0;
}