#include<iostream>
using namespace std;

void bubble(int arr[],int n){
	int temp;
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
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
	int arr[5]={1,3,2,5,4};
	print (arr,5);
	cout<<endl;
	bubble(arr,5);
	print (arr,5);
}
