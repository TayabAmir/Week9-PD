#include <iostream>
#include <string>
using namespace std;
void convertPintoDance(string pin);
int main(){
	string pin;
	cout << "Enter your PIN (4 digits): ";
	cin >> pin;
	convertPintoDance(pin);
	
}
void convertPintoDance(string pin){
string Moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    if (pin.length() != 4 || !isdigit(pin[0]) || !isdigit(pin[1]) || !isdigit(pin[2]) || !isdigit(pin[3])){
        cout << "Invalid input." << endl;
    }
    else{
    	int numPin = stoi(pin);
    	int i=0, rem = 0, n = 1000;
		while(i<=3){
			rem = numPin / n;
			rem += i;
			rem %= 10;
			cout << Moves[rem];
			if(i<3)
				cout << ", ";
			i++;
			numPin = numPin % n;
			n /= 10;
		}
	}
}

