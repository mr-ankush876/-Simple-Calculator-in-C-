// SIMPLE CALCULATER
//Develop a calculater program  that performs basic arithmetic oprerartions such a addition, subtraction, multiplication, and division.Allow the user to inpute two numbers and choose an operation to perform.    
#include<iostream>
using namespace std;
int main(){
 char op;
float n1;
float n2;
cout<<"enter the operator:+,-,*,/,%:" <<" " <<endl;
cin>>op;
cout<<"enter the value of n1:"<< " " << endl;
cin>>n1;
cout<<"enter the value of n2:"<< " "<< endl;
cin>>n2;
switch (op){
case '+':
cout<<n1<<"+"<<n2<<"="<<n1+n2;
break;
case '-':
cout<<n1<<"-"<<n2<<"="<<n1-n2;
break;
case '*':
cout<<n1<<"*"<<n2<<"="<<n1*n2;
break;
case'/':
if(n1/n2 != 0.0){
cout<<n1<<"/"<<n2<<"="<<n1/n2;
}else{
 cout<<"not define:" << " " << endl;
}
}
}






































