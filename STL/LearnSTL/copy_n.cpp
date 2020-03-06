#include "copy_n.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

namespace COPY_N{
	void test_all()
	{
		cout << "----------copy_n_test----------" << endl;

		test_copy_n();

		cout << endl;
	}

	void test_copy_n()
	{
		string A{ "123456789" };
		string B;
		copy_n(A.begin(), 5, back_inserter(B));
		for_each(B.begin(), B.end(), [](char a){
			cout << a;
		});
		cout << endl;
	}
}