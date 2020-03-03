#include "for_each.h"
#include <iostream>
#include <vector>

using namespace std;

namespace FOR_EACH{
	void test_all()
	{
		cout << "----------for_each_test----------" << endl;

		test_for_each();

		cout << endl;
	}

	void test_for_each()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6, 7, 9 };
		for_each(A.begin(), A.end(), [](int a){
			cout << a * 2 << " ";
		});
		cout << endl;
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}