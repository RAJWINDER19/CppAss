```
1. The incorrect original code or code snippit that you wrote:

#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string number; //number is private member
  public:
    string name; //name is declared public
    int age;
    
   inline Student(){   // constructor use for assigning values to class members
        setnumber(number);
        name = "Rajwinder";
        age = 19;
    }
    
    void setnumber (string num){ // mutator for assigning value to private member
        number = "100398472";
    }
    
};


class KpuStudent : public Student 
{ // a derived class from Student base class is construct for adding more variables
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

2. What bug does the original code have?

In the above code for both classes i am trying to acess private memeber of class by class object.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

I had a misunderstanding that like other public members private members can be access through class object.

4. How to correct the bug?

Private members of a class can be access by public members of a class thata is why write an acessors for getting private members.

5. The corresponding bug-free code or code snippet is:

#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string number; //number is private member
  public:
    string name; //name is declared public
    int age;
    
   inline Student(){   // constructor use for assigning values to class members
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


class KpuStudent : public Student 
{ // a derived class from Student base class is construct for adding more variables
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

6. What is the take-away message from this bug?

Private members cannot be access through class object they need public functions for accessing.

Bug 2

Q1. The incorrect original code or code snippit that you wrote:code with bugs or code snippet with bug goes here

#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string number; //number is private member
  public:
    string name; //name is declared public
    int age;
    
   inline Student(){   // constructor use for assigning values to class members
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
    
}


class KpuStudent : public Student 
{ // a derived class from Student base class is construct for adding more variables
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
}


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

Q2. What bug does the original code have?

In both classes i did not put terminating statement at the end of class

Q3. What misunderstanding of C++ concepts lead you to this incorrect code?

I think like functions definition we do not put semicolon at the last of class.

Q4. How to correct the bug?

Just put semicolon at the end of both classes.

Q5. The corresponding bug-free code or code snippet is:

#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string number; //number is private member
  public:
    string name; //name is declared public
    int age;
    
   inline Student(){   // constructor use for assigning values to class members
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


class KpuStudent : public Student 
{ // a derived class from Student base class is construct for adding more variables
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


Q6. What is the take-away message from this bug?

Classes are end with semicolon.
 
 Bug 3
 
Q1. The incorrect original code or code snippit that you wrote:

#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string number; //number is private member
  public:
    string name; //name is declared public
    int age;
    
   inline Student(){   // constructor use for assigning values to class members
        setnumber(number);
        name = "Rajwinder";
        age = 19;
    }
    
    void setnumber (string num){ // mutator for assigning value to private member
        number = "100398472";
    }
    
    void getnumber () // accessor for acessing private member of class
    {
        return number;
    }
    
};


class KpuStudent : public Student 
{ // a derived class from Student base class is construct for adding more variables
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

Q2. What bug does the original code have?

In the original code i had made biggest silly mistake. Actually in base class for getnumber i have to put string datatype but mistakenly put void for that i get 73 warnings.

Q3. What misunderstanding of C++ concepts lead you to this incorrect code?

Not a misunderstanding actually it was silly mistake.

Q4. How to correct the bug?

Change the datatype of getnumber function from void to string.

Q5. The corresponding bug-free code or code snippet is:

#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string number; //number is private member
  public:
    string name; //name is declared public
    int age;
    
   inline Student(){   // constructor use for assigning values to class members
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


class KpuStudent : public Student 
{ // a derived class from Student base class is construct for adding more variables
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

Q6. What is the take-away message from this bug?

Be very careful while writing mistake a little silly mistake would interrupt the code to run successfully or can create a lot of warnings and sometimes it becomes very difficult to recognize the mistake.

```
