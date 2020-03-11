#include "sort.h"
#include <vector>
#include <string>
#include <iostream>
#include <functional>
#include <array>

using namespace std;

namespace SORT{
	void test_all()
	{
		cout << "----------sort_test----------" << endl;

		test_sort();

		cout << endl;
	}
	
	void test_sort()
	{
		array<int, 10> s = { 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };

		// sort using the default operator<
		sort(s.begin(), s.end());
		for (auto a : s) {
			cout << a << " ";
		}
		cout << '\n';

		// sort using a standard library compare function object
		sort(s.begin(), s.end(), greater<int>());
		for (auto a : s) {
			cout << a << " ";
		}
		cout << '\n';

		// sort using a custom function object
		struct {
			bool operator()(int a, int b) const
			{
				return a < b;
			}
		} customLess;
		sort(s.begin(), s.end(), customLess);
		for (auto a : s) {
			cout << a << " ";
		}
		cout << '\n';

		// sort using a lambda expression 
		sort(s.begin(), s.end(), [](int a, int b) {
			return a > b;
		});
		for (auto a : s) {
			cout << a << " ";
		}
		cout << '\n';
	}
}