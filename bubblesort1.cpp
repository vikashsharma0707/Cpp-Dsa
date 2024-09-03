/*#include<iostream>
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
void print(int arr[],int n ){
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[5] = {1,5,4,3,6};
	print(arr,5);
	cout<<endl;
	bubble(arr,5);
	print(arr,5);
	
}*/

/*#include<iostream>
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
	int arr[5] = {3,2,3,5,7};
	print(arr,5);
	cout<<endl;
	bubble(arr,5);
    print(arr,5);
	
}*/

#include<iostream>
using namespace std;

void bubble(int arr[],int n){
	int temp;
	int flag=0;
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
			if(flag==0){
				break;
			}
		}
	}
	
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array should have at least two elements.";
        return -1; // Invalid case
    }

    bubbleSort(arr, n);

    // The second largest element will be the second last element
    return arr[n-2];
}

int main(){
	int arr[5]= {1,2,3,4,6};
	print(arr,5);
	cout<<endl;
	bubble(arr,5);
	print(arr,5);
}
