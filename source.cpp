#include <iostream>

void sikur(int n) {
	int v = n;
	int k = 0;
	while (n!=1) {
		++k;
		int p0 = n / 2;
		int p1 = n * 3 + 1;
		n = (n % 2 == 0) ? p0 : p1;
		v = (n > v) ? n : v;
	}
	std::cout << k << ' ' << v <<std::endl;
	system("pause");
}

int main() {
	int n;
	std::cin >> n;
	sikur(n);
	return 0;
}