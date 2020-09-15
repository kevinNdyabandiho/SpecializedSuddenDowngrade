#include<iostream>
using namespace std;

struct customer{
  char name[70];
  char email[80];
  int age[80];
  char address[80];
  char nationality[80];
};

int main(){
  customer cust[10];

  for(int i=0; i<10; i++){
    cout<<"Please enter customer details"<<endl;
  //Name
  cout<<"Name :"<<endl;
  cin>>cust[i].name;

  //email
  cout<<"Email address :"<<endl;
  cin>>cust[i].email;

  //age
  for(int j=0; j<1; j++){
    cout<<"Age :"<<endl;
    cin>>cust[i].age[j];
  }
  

  //address
  cout<<"Current address :"<<endl;;
  cin>>cust[i].address;
  
  //nationality
  cout<<"Nationality :"<<endl;;
  cin>>cust[i].nationality;


  }
return 0;
}