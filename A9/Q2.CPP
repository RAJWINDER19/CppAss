
#include<iostream>

using namespace std;

class StockPrices //declaring a class
{
  public:
     int *price; //pointer
     int i, total =0;
     StockPrices(int *values) //constructor accepting array of arguments
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
