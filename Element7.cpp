#include<iostream>
using namespace std;
string containsSeven(int numbers[], int size);
int main(){
	int num, element=1;
	cout << "Enter the size of Array: ";
	cin >> num;
	int numbers[num];
	for(int i=0; i<num; i++){
		cout << "Enter Element " << element << ": ";
		cin >> numbers[i];
		element++;
	}
	cout << containsSeven(numbers, num);
}
string containsSeven(int numbers[], int size){
	int rem = 0;
	for(int i=0; i<size; i++){
		while(numbers[i]>0){
			rem = numbers[i] % 10;
			if(rem==7){
				return "Boom!";
			}
			numbers[i] = numbers[i]/10;
		}
	}
	return "there is no 7 in the array";
}
