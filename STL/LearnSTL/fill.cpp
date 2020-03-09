#include "fill.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace FILL{
	void test_all()
	{
		cout << "----------fill_test----------" << endl;

		test_fill();

		cout << endl;
	}
	
	void test_fill()
	{
		vector<int> A(5);
		fill(A.begin(), A.end(), 2);
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}