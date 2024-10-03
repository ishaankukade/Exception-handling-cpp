#include<iostream>
using namespace std;
int main()
{
float n1, n2, ans;
cout<<"enter the values of 1 and 2: ";
cin>>n1>>n2;
try{
    if(n2==0){
        throw n2;
    }
    else{
        ans=n1/n2;
        cout<<"answer is: "<<ans<<endl;
    }
}
catch(float num){
    cout<<"\nERROR: division by "<<num<<endl;
}
}
/* OUTPUT
enter the values of 1 and 2: 2 3
answer is: 0.666667*/