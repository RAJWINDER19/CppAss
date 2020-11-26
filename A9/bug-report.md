```BUG 1
1.	The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

int main(){
    int max;
    cout<<"enter the a number"<<endl;
    cin>>max;
    std::unique_ptr<int[]>val(new int[max]);

2.	What bug does the original code have?

In the above code i did not include memeory header file and i get five errors.

3.	What misunderstanding of C++ concepts lead you to this incorrect code?

I do not know that i have to include memory header file for unique pointer.

4.	How to correct the bug?

Include the memory header file in the code.

5.	The corresponding bug-free code or code snippet is:

#include<iostream>
#include<memory>

using namespace std;

int main(){
    int max;
    cout<<"enter the a number"<<endl;
    cin>>max;
    std::unique_ptr<int[]>val(new int[max]);

6.	What is the take-away message from this bug?

Should remember header file for diffrent functions
________________________________________
Bug 2

1.	The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

class StockPrices //declaring a class
{
  public:
     int *price; //pointer
     int i, total =0;
     StockPrices() //constructor accepting array of arguments
     {
         price = values;
     }
     
     double average()
        {
         for(int i =0; i<5; i++)
        {
           try{
       
         if(price[i] <0 ||price[i]>5000) //code for throw an exception according to question
             throw price[i];
   } 
   catch(int values[i]){
       cout<<values[i];
   }
         
         total = total+ price[i];
        }
       
         double avg= total/5;
         return avg;
        }
}; 
int main()
{ 
    int values[5];
    
  for(int i =0; i<5; i++) //getting values
      {
        cout<<" Enter values for array"<<endl;
        cin>>values[i];
        
      }

  StockPrices sp(values); //class object passing values to constructor
   
   
  cout<<sp.average()<<" "<<" is the average of stockprices"; //function calling
  
  return 0;
}



2.	What bug does the original code have?

In the original code i had make wrong constructor declaration.

3.	What misunderstanding of C++ concepts lead you to this incorrect code?

It was first time i had made a constructor that was accepting array so i do not know that how to constrcutor should be declared for accepting values.

4.	How to correct the bug?

Declare constructor with arguments.

5.	The corresponding bug-free code or code snippet is:

 StockPrices(int *values) //constructor accepting array of arguments
     {
         price = values;
     }

6.	What is the take-away message from this bug?

Should understand concept clearly before writing code.
________________________________________
Bug 3

1.	The incorrect original code or code snippit that you wrote:

double average()
        {
         for(int i =0; i<5; i++)
        {   
        total = total+ price[i];
        double avg = total/5;
        
           try{
       
         if(price[i] <0 ||price[i]>5000) //code for throw an exception according to question
             throw price[i];
   } 
   catch(int values[i]){
       cout<<values[i];
   }
         
        
        }}
       

2.	What bug does the original code have?

The original code is displaying the average even if the num is negative or greater than 5000 and throwing exception later.

3.	What misunderstanding of C++ concepts lead you to this incorrect code?

Not a misunderstanding but in hurry i write the code wrong.

4.	How to correct the bug?

first of all write the code for exceptional values and count average later.

5.	The corresponding bug-free code or code snippet is:


double average()
        {
         for(int i =0; i<5; i++)
        {   
        total = total+ price[i];
        double avg = total/5;
        
           try{
       
         if(price[i] <0 ||price[i]>5000) //code for throw an exception according to question
             throw price[i];
   } 
   catch(int price[i]){
       cout<<price[i];
   }
         
    total = total +price[i];    
}
   double avg = total/5;
   return avg;
}


6.	What is the take-away message from this bug?

write the code carefully to avoid silly  mistakes

```
