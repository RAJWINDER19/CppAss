#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string number; //number is private member
  public:
    string name; //name is declared public
    int age;
    
   inline Student( ){   // constructor use for assigning values to class members
        setnumber(number);
        name = "Rajwinder";
        age = 19;
    }
    
    void setnumber (string num){ // mutator for assigning value to private member
        number = "100398472";
    }
    
    string getnumber () // accessor for acessing private member of class
    {
        return number;
    }
    
};


class KpuStudent : public Student { // a derived class from Student base class is construct for adding more variables
  private:
    string Major;
  public:
     string Campus;
     int year;
     
    KpuStudent() 
     {
         setMajor(Major);
         Campus = "Surrey";
         year = 2020;
     }
     
     void setMajor (string maj){  //mutator 
         Major = "CIS";
     }
     
     string getMajor (){ //acessor
         return Major;
     }
};


int main() // main function
{
   KpuStudent info; //object for acessing variables of classes but first base class constructor will be called
   cout<<" The student data is"<<endl;
   cout<<" the student id is "<<" "<< info.getnumber()<<endl;
   cout<< " the student name is " <<" "<<info.name<<endl;
   cout<<"student age is " <<" "<< info.age<<endl;
   cout<<" Major is "<<" "<<info.getMajor()<<endl;  // printing the student data
   cout<<" Campus is " <<" "<<info.Campus<<endl;
   cout<<"enrolled in year" <<" "<<info.year<<endl;
   return 0;
}
