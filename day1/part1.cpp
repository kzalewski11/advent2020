#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int expenses[1000];
	int cur = 0;
	int expense;
	ifstream in ("./input.txt");

	while (in >> expense) {	expenses[cur++] = expense; }
	in.close();

	int solution;
	for (int i=0; i<cur-1; i++) {
		for (int j=i+1; j<cur; j++) {
			if (expenses[i] + expenses[j] == 2020) {
				solution = expenses[i] * expenses[j];
				break;
			}
		}
	}
	cout << solution << endl;
			
	return 0;
}
