Bug 1
Q1. The incorrect original code or code snippit that you wrote:

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
    
     void print_f(){ // function for printing data memeber'values
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
     
      void print_f(){ //overridden print_f function
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
      
       void print_f(){
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

Q2. What bug does the original code have?

In the above code in every print_f did not include virtual that is why it displayed same information in the first class.

Q3. What misunderstanding of C++ concepts lead you to this incorrect code?

Actually i know it but forget to make virtual print_f function.

Q4. How to correct the bug?

Make every overridden function virtual by adding virtual keyword before function data type.

Q5.  The corresponding bug-free code or code snippet is:


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

Q6. What is the take-away message from this bug?

In overridden function put virtual before it other wise you will get unexpected output.

Bug 2

Q1. The incorrect original code or code snippit that you wrote:

int main() // main function
{
   Student info; //object for acessing variables of classes but first base class constructor will be called
   Student *array[3] = {p1,p2,p3}; //array of pointers
   for(int i = 0; i<3; i++){ 
       array[i]-> print_f();
   }
   return 0;
}

Q2. What bug does the original code have?

In the above code i forget to initialize pointer.

Q3. What misunderstanding of C++ concepts lead you to this incorrect code?

Not a misunderstanding but i forget in hurry.

Q4. How to correct the bug?

Initialize each pointer before using it.

Q5. The corresponding bug-free code or code snippet is:

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

Q6. What is the take-away message from this bug?

Write code very carefully and avoid silly mistakes.

Bug 3

Q1. The incorrect original code or code snippit that you wrote:

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
          cout<<"Student name is "<< info.getname()<<endl;
          cout<<" Student house affilation is "<< HogwartsStudent::gethouse_aff()<<endl;
      }
      };

Q2. What bug does the original code have?

In the above code in print_f function i called the getname function with object info.

Q3. What misunderstanding of C++ concepts lead you to this incorrect code?

Actually i had a misunderstanding that like in main function i can call public function with class object in the class but it shows info is not declared in this scope.

Q4. How to correct the bug?

In class it is easy to use scope resolution operator with class name to call the class functions inside the class.

Q5. The corresponding bug-free code or code snippet is:

class HogwartsStudent: public Student{
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



Q6. What is the take-away message from this bug?

Always call the function inside the class with scope resolution.

