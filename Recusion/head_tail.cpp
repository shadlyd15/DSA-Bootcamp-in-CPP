#include <iostream>

using namespace std;

void tail(int n){
	if (n == 0) return;
	cout << "Tail recursion : n = " << n << endl;
	tail(n - 1);
}

int main(int argc, char const *argv[]){
	tail(10);
	return 0;
}