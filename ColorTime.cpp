#include<iostream>
using namespace std;
int coloringTime(string cols[], int size);
int main(){
	int size, element=1;
	cout << "Enter the size of Array: ";
	cin >> size;
	string numbers[size];
	for(int i=0; i<size; i++){
		cout << "Enter Element " << element << ": ";
		cin >> numbers[i];
		element++;
	}
	cout << "Time to color: " << coloringTime(numbers, size) << " seconds";
}
int coloringTime(string cols[], int size){
	int colorTime=2*size, switchTime=0;
	for(int i=0;i<size-1;i++){
		if(cols[i]!=cols[i+1]){
			switchTime++;
		}
	}
	return colorTime+switchTime;
}
