#include<iostream>
using namespace std;

void bubble_sort(int A[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
			
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			
			}
		}
	}
}
void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	int a[5]={17,14,3,21,5};
	print(a,5);
	cout<<endl;
	bubble_sort(a,5);
	print(a,5);
}
