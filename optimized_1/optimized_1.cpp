#include <iostream>
using namespace std; 

/*
Non Optimized

for(int i =0; i < n; i++){
	for(int j = 1; j <=i; j = j * 2) {
	cout << "hello class 510\n";
	}
}
*/
void print_s(int n, string s) {
	int ans = (((n + 1) * ceil(log2(n + 1))) - pow(2, ceil(log2(n + 1))) + 1);
	for (int i = 1; i <= ans; i++) 
		cout << s << " | " << i << endl;
}

int main(){
	print_s(4, "hello");
} 