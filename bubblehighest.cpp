#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int temp;
    bool flag;

    for(int i = 0; i < n - 1; i++) {
        flag = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag) {
            break; // No swapping means the array is already sorted
        }
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int second(int arr[], int n) {
//    if (n < 2) {
//        cout << "Array should have at least two elements." << endl;
//        return -1; // Invalid case
//    }



    // The second largest element will be the second last element
    cout<<"second largest number is"<<arr[1];
    //return arr[0];
}

int main() {
    int arr[5] = {1, 2, 3, 4, 6};
    print(arr, 5);
    bubbleSort(arr, 5);
    print(arr, 5);

    //int result = findSecondLargest(arr, 5);
//    if (secondLargest != -1) {
//        cout << "Second Largest Element: " << secondLargest << endl;
//    }
//cout<<"second lowest number"<<result;
second(arr,5);

    return 0;
}
