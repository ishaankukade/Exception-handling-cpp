#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"Age: "<<age<<"\nAPPROVED"<<endl;
        }
    }
    catch(int a){
        cout<<"\nERROR: underage!"<<age<<""<<endl;
    }
}
/* OUTPUT
enter age: 2

ERROR: underage!2
*/