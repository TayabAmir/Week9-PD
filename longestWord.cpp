#include <iostream>
using namespace std;
string longestWord(string arr[],int words);
main(){
	int words;
	cout << "Enter the number of words: ";
	cin >> words;
	string arr[words];
	cout << "Enter the words, one by one: " << endl;
	for(int i=0; i<words; i++){
		cin >> arr[i];
	}
	cout << "Longest 7-segment word: " << longestWord(arr,words);
}
string longestWord(string arr[],int words){
	string letter;
	for(int i=0;i<words;i++){
		letter = arr[i];
		for(int j=0;j<arr[i].length();j++){
			if(letter[j]=='k'||letter[j]=='m'||letter[j]=='v'||letter[j]=='w'||letter[j]=='x'){
				arr[i] = "ab";
				break;
			}
		}
	}
	int counter=0;
	for(int i=0; i<words;i++){
		if(arr[i]=="ab"){
			counter++;
		}
	}
	if(counter==words){
		return " ";
	}
	for(int i=0; i<words;i++){
		if(arr[i].length()==7){
			return arr[i];
		}	
	}
	string longest=arr[0];
	for(int i=1; i<words; i++){
		if(arr[i].length()>longest.length()){
			longest = arr[i];
		}
	}
	return longest;
}
