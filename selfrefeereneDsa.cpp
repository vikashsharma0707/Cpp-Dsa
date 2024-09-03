/*#include<iostream>
using namespace std;

class Employee{
	  public:
	  	int data;
	  	Employee *next;  // seif reference class 
	  	                 // tract all object
};

struct Employee{
	int data;
	Employee *next;   //self referencer class 
};*/


// wap to demonstrate to self reference class

#include<iostream>
using namespace std;
 
 class P25{
 	 public:
 	   string name;
 	   P25 *next;
 	   
 	   P25(string n){
 	   	name=n;
 	   	next =NULL;
		}
 };
 
 int main(){
 	P25 s1("arun"),s2("Rahul"),s3("Mohit");
 	s1.next= &s2;
 	s2.next= &s3;
 	
 	cout<<s1.name<<endl;
 	cout<<s1.next<<endl;
 	cout<<s1.next<<endl;
 	cout<<s1.next->name;
 	cout<<s1.next->next;
 	cout<<s1.next->next->name;
 }
