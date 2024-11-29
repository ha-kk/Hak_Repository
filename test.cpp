#include <iostream>
using namespace std;

void dec_to_bin(int decimal){
	cout << "enter num: ";
	cin decimal;
	if(decimal < 0) decimal = 0;
	if(decimal > 64) decimal = 64;

	for (int i = 6; i > 0; --i){
		int bit = decimal % 2;
		decimal /= 2;
		cout << "binary digit = ' << bit << endl;
	}
}
int main(){
	int num = 0;
	dec_to_bin(num);
	return 0;
}

