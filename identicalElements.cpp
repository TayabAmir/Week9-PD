#include<iostream>
using namespace std;
bool areEqual(string numbers[], int num);
int main(){
	int num, element=1;
	cout << "Enter the size of Array: ";
	cin >> num;
	string numbers[num];
	for(int i=0; i<num; i++){
		cout << "Enter Element " << element << ": ";
		cin >> numbers[i];
		element++;
	}
	cout << areEqual(numbers, num);
}
bool areEqual(string numbers[], int num){
	for(int i=0; i<num-1; i++){
		if(numbers[i]!=numbers[i+1]){
			return false;
		}
	}
	return true;
}
