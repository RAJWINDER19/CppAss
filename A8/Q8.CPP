
#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string name;
    string e_year; //enrollment year is private member
  public:
  
   inline Student(){   // constructor use for assigning values to class members
        setname(name);
    }
    
    void setname (string n){ // mutator for assigning value to private member
        name = "Rajwinder";
        e_year = "2020";
    }
    
    string getname () // accessor for acessing private member of class
    {
        return name;
    }
    
    string get_e_year(){
        return e_year;
    }
    
    virtual void print_f(){ // function for printing data memeber'values
        cout<<" student name is "<<Student::getname()<<endl;
        cout<<" student enrollment year is "<<Student::get_e_year()<<endl;
    }
    
};


class KpuStudent : public Student //derived class from student
{ // a derived class from Student base class is construct for adding more variables
  private:
    string campus;
  public:
    
    KpuStudent() 
     {
         setcampus(campus);
     }
     
     void setcampus (string camp){  //mutator 
         campus = "Surrey";
     }
     
     string getcampus (){ //acessor
         return campus;
     }
     
     virtual void print_f(){ //overridden print_f function
         cout<<" student name is "<< Student::getname()<<endl;
         cout<<"student campus is in "<<KpuStudent::getcampus()<<endl;
     }
};

class HogwartsStudent: public Student{  //another derived class
    private:
        string house_aff;
    public:
       HogwartsStudent(){
           sethouse(house_aff);
       }
       
      void sethouse(string house){
          house_aff ="Ravenclaw";
      }
      
      string gethouse_aff(){
          return house_aff;
      }
      
      virtual void print_f(){
          cout<<"Student name is "<< Student::getname()<<endl;
          cout<<" Student house affilation is "<< HogwartsStudent::gethouse_aff()<<endl;
      }
};

int main() // main function
{
   Student info; //object for acessing variables of classes but first base class constructor will be called
   Student *p1 = new Student();
   Student *p2 = new KpuStudent(); //pointer initializer
   Student *p3 = new HogwartsStudent();
   Student *array[3] = {p1,p2,p3}; //array of pointers
   for(int i = 0; i<3; i++){ 
       array[i]-> print_f();
   }
   return 0;
}
