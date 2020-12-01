#include<iostream>
#include<fstream> // fstream preprocessor directive for file operations

using namespace std;

void readfile(string fname, int num)
    {// function for reading a file
      int a =0, count =0;
      string line;
      ifstream infile; // object for reading a file
      
      infile.open(fname.c_str()); //opening the file
      
        while(!infile.eof()){  // read the file till end for counting lines
            getline(infile, line);
        count++; // counting lines in files
        }
      
       infile.clear(); //clear the flags set at end of file
        infile.seekg(0);  // and move the file at beginning again for reading and displaying
  
   
 if (num > count) 
 {
     while(!infile.eof())
    {
     getline(infile,line); // reading file
     cout<<line<<endl; //displaying line by line of file 
    }
 cout<<" entire file has been displayed"<< endl;
 }
 
 else
     {
 
 while (a<= num)
        {   getline (infile,line);
            cout<<line<<endl;
            a++;
        }
        
} 

  infile.close();  // closing the file
  }
int main()
{
    int num;
    string fname;
    
    cout<<" enter the file name "<<endl;
    cin>>fname;
    cout<< " enter the positive num"<<endl;
    cin>>num;
    readfile(fname,num); // calling the function
    return 0;
}
