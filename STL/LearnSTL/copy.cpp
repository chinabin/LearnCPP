#include "copy.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

namespace COPY{
	void test_all()
	{
		cout << "----------copy_test----------" << endl;

		test_copy();
		test_copy_if();

		cout << endl;
	}

	void test_copy()
	{
		vector<int> A{1, 2, 3, 4, 5, 6};
		vector<int> B(A.size());
		vector<int> C;
		auto ret1 = copy(A.begin(), A.end(), B.begin());
		cout << distance(B.begin(), ret1) << endl;
		auto ret2 = copy(A.begin(), A.end(), back_inserter(C));
		cout << C.size() << endl;
	}

	void test_copy_if()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6 };
		vector<int> B;
		auto ret = copy_if(A.begin(), A.end(), back_inserter(B), [](int a){
			if ((a % 2) == 0)
			{
				return true;
			}
			return false;
		});

		for_each(B.begin(), B.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}