/*wap to crrate a link list to create a folloeing operation 
 opertaion 1. insertion at begin 
           2. insertion at the end 
		   3. insertion at random place 
		   4.deletiion at the start
		   5.deletion at the end
		   6.deletion at the random 
		   7.traversing 
		   8. accress front element 
		   9.accesss back element
		   */
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		
    Node(int d){
    	data=d;
    	next=NULL;
	}
};


class Linkedlist{
	public:
		Node *head;
		
		Linkedlist(){
			head=NULL;
		}
		
		void insert_end(int d){
			if(head==NULL){
				head=new Node(d);
			}
		}
	
};


int main(){
	Linkedlist obj;
	obj.insert_end(24);
	cout<<obj.head->next;
}
             
