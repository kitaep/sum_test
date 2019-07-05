#include <iostream>
#include "sum.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	int s = sum(n);
	cout << "sum = " << s;
}
