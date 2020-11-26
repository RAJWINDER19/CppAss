#include<iostream>
#include<memory>

using namespace std;

int main(){
    int max, num;
    cout<<"enter the a number"<<endl;
    cin>>max;
    std::unique_ptr<int[]>val(new int[max]);//declaring a unique pointer with dynamically array
    //getting values for unique pointer
    for(int i =0; i<max; i++){
        cout<<" Enter values for array"<<endl;
        cin>>val[i];
        //val[i] =i;
    }
    //displaying values of array
    cout<<" The values of array are"<<endl;
    for(int i =0; i<max; i++){
        std::cout<<val[i]<<endl;
    }
    return 0;
}





