#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto abc = vi(n);
	for (int i = 0; i < n; ++i) {
		cin >> abc[i];
	}

	sort(abc.begin(), abc.end(), greater<int>());

	auto isTri = bool{ false };
	auto sum = int{ 0 };
	for (int i = 0; i < n - 2; ++i) {
		const auto& a = abc[i];
		const auto& b = abc[i + 1];
		const auto& c = abc[i + 2];

		if (a < b + c) {
			isTri = true;
			sum = a + b + c;
			break;
		}
	}

	if (isTri) {
		cout << sum;
	}
	else {
		cout << -1;
	}

	return 0;
}