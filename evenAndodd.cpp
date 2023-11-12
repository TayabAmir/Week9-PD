#include<iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
int main(){
	int size, element=1, n;
	cout << "Enter the size of Array: ";
	cin >> size;
	int numbers[size];
	for(int i=0; i<size; i++){
		cout << "Enter Element " << element << ": ";
		cin >> numbers[i];
		element++;
	}
	cout << "Enter number of times even-odd transformation need to be done: ";
	cin >> n;
	evenOddTransform(numbers,size,n);
}

void evenOddTransform(int arr[], int size, int n){
	
	for(int i=0; i<size; i++){
		if(arr[i]%2==0){
			arr[i] = arr[i] - (2*n);
		}
		else{
			arr[i] = arr[i] + (2*n);
		}
	}
	cout << "[" << arr[0];
	for(int i=1; i<size; i++){
		cout << ", " << arr[i];
	}
	cout << "]";
}
