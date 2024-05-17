#include<iostream>
using namespace std;

class Car{
    //properties
    private:
    int year;
    public:
    char model;
    long chassis_no;
    
    void setYear(){
        year=2009;
    }
    int getYear(){
        return year;
    }
};
int main(){
      Car alto;
    //   alto.year=2009;
      alto.model='K';
      alto.chassis_no=79563208489797745;
      alto.setYear();
      cout << "Model is " << alto.model << endl;
      cout << "Chassis no. is " << alto.chassis_no << endl;
      cout << "Year is " << alto.getYear() << endl;
      cout << "size is "<< sizeof(alto) << endl;
          
    return 0;
}