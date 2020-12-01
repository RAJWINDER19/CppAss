```

BUG 1

1. The incorrect original code or code snippit that you wrote:

void readfile(string fname, int num)
    {// function for reading a file
      int a =0, count =0;
      string line;
      ifstream infile; // object for reading a file
      //infile.open(fname);
      infile.open(fname.c_str()); //opening the file
      
        while(!infile.eof()){  // read the file till end for counting lines
            getline(infile, line);
        count++; // counting lines in files
        }
  
 if (num > count) 
 {
     while(!infile.eof())
    {
     getline(infile,line); // reading file
     cout<<line<<endl; //displaying line by line of file 
    }
 cout<<" entire file has been displayed"<< endl;
 }
 
2. What bug does the original code have?

In the above code after while loop counting the lines i did not include seek.g() function for reading the file that is why while running the program it was displaying only spaces.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

Not a misunderstanding i forgot to add functions and on compilation the function without any error and displaying white spaces then i get to know.

4. How to correct the bug?

Put the seek.g function after clear() function.

5. The corresponding bug-free code or code snippet is:

void readfile(string fname, int num)
    {// function for reading a file
      int a =0, count =0;
      string line;
      ifstream infile; // object for reading a file
      //infile.open(fname);
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

6. What is the take-away message from this bug?

Should remember all the concepts of c++.

Bug 2

1. The incorrect original code or code snippit that you wrote:

 if (num > count) 
 {
    
     getline(infile,line); // reading file
     cout<<line<<endl; //displaying line by line of file 
    
 cout<<" entire file has been displayed"<< endl;
 }

2. What bug does the original code have?

In the above code if number enter by user is greater than file lines then instead of displaying the whole file it wil display only one line. Because i did not write while loop here to continue until end of file.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

I had write while loop once but forget to write it again.

4. How to correct the bug?

Just write a loop statement of while to make sure that read the file until end.

5. The corresponding bug-free code or code snippet is:

 if (num > count) 
 {
     while(!infile.eof())
    {
     getline(infile,line); // reading file
     cout<<line<<endl; //displaying line by line of file 
    }
 cout<<" entire file has been displayed"<< endl;
 }

6. What is the take-away message from this bug?

For reading all the file always write a while loop to read until end.


Bug 3

1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

2. What bug does the original code have?

I did not write the preprocessor directive for file input/ output operation.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

I did not know that i have to write a different preprocessor for file operation.

4. How to correct the bug?

Write fstream preprocessor directive.

5. Bug free code is


#include<iostream>
#include<fstream> // fstream preprocessor directive for file operations

using namespace std;

6. What is the take-away message from this bug?

Use all the required header files for different opearions.

```

