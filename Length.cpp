#include<iostream>
using namespace std;
bool isLengthEven(string word);
int main(){
	string word;
	cout << "Enter a String: ";
	cin >> word;
	cout << isLengthEven(word);
}
bool isLengthEven(string word){
	int counter=0;
	for(int idx=0;word[idx]!='\0';idx++){
		counter++;
	}
	if(counter%2==0)
		return true;
	
	return false;
}
