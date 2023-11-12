#include<iostream>
using namespace std;
int commonChar(string s1, string s2);
int main(){
	string s1, s2;
	cout << "Enter the first string: ";
	cin >> s1;
	cout << "Enter the second string: ";
	cin >> s2;
	cout << "Number of common characters: " << commonChar(s1,s2);
}
int commonChar(string s1, string s2){
	int counter = 0;
	for(int i=0; i<s1.length();i++){
		for(int j=0; j<s2.length();j++){
			if(s1[i]==s2[j]){
				s2[j] = '_';
				counter++;
				break;
			}
		}
	}
	return counter;
}
