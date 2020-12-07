#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	uintmax_t n, density;
	cin >> n >> density;
	uintmax_t mass = 0;
	for (uint64_t i = 0; i < n; i++) {
		uintmax_t w, h, d;
		cin >> w >> h >> d;
		uintmax_t vol = static_cast<uintmax_t>(w * h * d);
		mass = mass + vol * density;
	}

	cout << mass << endl;


	return 0;
}