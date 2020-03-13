#include "inner_product.h"
#include <vector>
#include <string>
#include <iostream>
#include <numeric>

using namespace std;

namespace INNER_PRODUCT{
	void test_all()
	{
		cout << "----------inner_product_test----------" << endl;

		test_inner_product();

		cout << endl;
	}
	
	void test_inner_product()
	{
		vector<int> A(10);
		iota(A.begin(), A.end(), 1);
		vector<int> B(10);
		iota(B.begin(), B.end(), 11);

		auto ret = inner_product(A.begin(), A.end(), B.begin(), 0
			, [](int a, int b){
				cout << "from sum func: " << a << " " << b << endl;
				return a + b;
			}
			, [](int a, int b){
				cout << "from product func: " << a << " " << b << endl;
				return a * b;
			});

		cout << ret << endl;
	}
}