#include <iostream>
#include <ctime>
using namespace std; 

void print_s(int n, string s) {
	int ans = (((n + 1) * ceil(log2(n + 1))) - pow(2, ceil(log2(n + 1))) + 1);
	for (int i = 1; i <= ans; i++)
		cout << s << " | " << i << endl;
}

void print_s2(int n, string s) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j = j* 2) {
			cout << s << endl ;
			count++; 
		} 
	}
	cout << count << endl; 
}
int main(){
	clock_t begin = clock();
	print_s(10, "hello");
	clock_t end = clock();

	clock_t begin2 = clock();
	print_s2(10, "hello");
	clock_t end2 = clock();

	double process1 =  (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
	double process2 = (double)((double)end2 - (double)begin2) / CLOCKS_PER_SEC;
	cout << "Process(1) Time(s): " << process1 << "s"<< endl ; 
	cout << "Process(1) Time(ms): " << 1000 * process1 << "ms" << endl;
	cout << "Process(2) Time(s): " << process2 << "s" << endl;
	cout << "Process(2) Time(ms): " << 1000 * process2 << "ms" << endl;
} 


/*
Non Optimized

for(int i =0; i < n; i++){
	for(int j = 1; j <=i; j = j * 2) {
	cout << "hello class 510\n";
	}
}
*/