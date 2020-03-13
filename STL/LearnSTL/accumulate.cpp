#include "accumulate.h"
#include <vector>
#include <string>
#include <iostream>
#include <numeric>

using namespace std;

namespace ACCUMULATE{
	void test_all()
	{
		cout << "----------accumulate_test----------" << endl;

		test_accumulate();

		cout << endl;
	}
	
	void test_accumulate()
	{
		vector<int> A(10);
		iota(A.begin(), A.end(), 1);

		auto ret = accumulate(A.begin(), A.end(), 0, [](int a, int b){
			cout << a << " " << b << endl;
			return a + b;
		});
		cout << ret << endl;
	}
}