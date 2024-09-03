#include<iostream>
using namespace std;

void partition(int arr[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}



 void print(int arr[],int n){
 	for(int i=0;i<n;i++){
 		cout<<arr[i]<<" ";
	 }
 }


int main(){
	int arr[5]={34,3,45,43,4};
	print(arr,5);
	partition(arr,5);
	print(arr,5);
}
