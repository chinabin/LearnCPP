#include "iota.h"
#include <vector>
#include <string>
#include <iostream>
#include <numeric>

using namespace std;

namespace IOTA{
	void test_all()
	{
		cout << "----------iota_test----------" << endl;

		test_iota();

		cout << endl;
	}
	
	void test_iota()
	{
		vector<int> A(10);
		iota(A.begin(), A.end(), 0);
		
		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}