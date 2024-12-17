#include<iostream>
using namespace std;

char before(char x){
	int i = 0,j = 0;
	char a[26] = {}, y = x;
	while(i < 26){
		a[i] = 'A' + i;
		i++;
	}

	// ทำการเช็ก
	while (j < 26){
		if (x == a[j]){
			x -= 1;
		}
		j++;
	}

	// output
	if (y == x){
		return'0';

	}else if(x == '@'){
		return 'Z';

	}else{
		return x;
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
