#include "generate_n.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace GENERATE_N{
	void test_all()
	{
		cout << "----------generate_n_test----------" << endl;

		test_generate_n();

		cout << endl;
	}
	
	void test_generate_n()
	{
		vector<int> A(12);
		fill(A.begin(), A.end(), 0);
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
		generate_n(A.begin(), 10, []() -> int{
			return rand() % 10 + 1;
		});
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}