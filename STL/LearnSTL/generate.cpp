#include "generate.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace GENERATE{
	void test_all()
	{
		cout << "----------generate_test----------" << endl;

		test_generate();

		cout << endl;
	}
	
	void test_generate()
	{
		vector<int> A(12);
		generate(A.begin(), A.end(), []() -> int{
			return rand() % 10 + 1;
		});
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}