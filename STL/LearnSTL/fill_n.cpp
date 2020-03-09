#include "fill_n.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace FILL_N{
	void test_all()
	{
		cout << "----------fill_n_test----------" << endl;

		test_fill_n();

		cout << endl;
	}
	
	void test_fill_n()
	{
		vector<int> A(10);
		fill(A.begin(), A.end(), 0);
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
		fill_n(A.begin(), 6, 2);
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}