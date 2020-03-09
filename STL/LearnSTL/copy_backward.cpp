#include "copy_backward.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

namespace COPY_BACKWARD{
	void test_all()
	{
		cout << "----------copy_backward_test----------" << endl;

		test_copy_backward();

		cout << endl;
	}

	void test_copy_backward()
	{
		vector<int> A{1, 2, 3, 4, 5, 6, 7, 8, 9};
		vector<int> B(12);
		auto ret = copy_backward(A.begin(), A.end(), B.end());
		cout << distance(B.begin(), ret) << endl;
		for_each(B.begin(), B.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}