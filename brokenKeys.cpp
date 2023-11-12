#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
int main(){
	string correctPhrase, actualTyped;
	cout << "Enter the correct phrase: ";
	getline(cin, correctPhrase);
	cout << "Enter what you actually typed: ";
	getline(cin, actualTyped);
	cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);	
}

string findBrokenKeys(string correctPhrase, string actualTyped){
	string broken;
		for(int i=0; i<correctPhrase.length();i++){

			if(correctPhrase[i] != actualTyped[i])
			{
            	bool isAlreadyAdded = false;
				for(int j = 0 ; j < i ; j++)
				{
					if(correctPhrase[j] == correctPhrase[i])
						isAlreadyAdded = true;
				}
				if(!isAlreadyAdded)
					broken = broken + correctPhrase[i];
			}
		}
	return broken;
}
