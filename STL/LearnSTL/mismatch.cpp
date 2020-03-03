#include "mismatch.h"
#include <vector>
#include <iostream>

using namespace std;

namespace MISMATCH{
	void test_all()
	{
		cout << "----------mismatch_test----------" << endl;

		test_mismatch();

		cout << endl;
	}

	void test_mismatch()
	{
		vector<int> A1{ 1, 2, 3, 4, 5 };
		vector<int> B1{ 1, 2, 3, 5, 4 };

		auto ret1 = mismatch(A1.begin(), A1.end(), B1.begin());
		cout << "first=" << *(ret1.first) << " second=" << *(ret1.second) << endl;


		vector<int> A2{ 1, 2, 3, 4, 5 };
		vector<int> B2{ 1, 2, 3, 5, 4 };
		auto ret2 = mismatch(A2.begin(), A2.end(), B2.begin(), [](int a, int b) -> bool{
			if (a > 0 && b > 0)
			{
				return true;
			}
			return false;
		});

		cout << (ret2.first == A2.end() ? "µ½´ïA2Î²¶Ë" : "´íÎó")
			<< (ret2.second == B2.end() ? " µ½´ïB2Î²¶Ë" : " ´íÎó")
			<< endl;
	}
}