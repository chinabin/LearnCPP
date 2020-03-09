#include "transform.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace TRANSFORM{
	void test_all()
	{
		cout << "----------transform_test----------" << endl;

		test_transform();

		cout << endl;
	}
	
	void test_transform()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6 };
		vector<int> B(A.size());		// 大小设置是必须的
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
		transform(A.begin(), A.end(), B.begin(), [](int a){
			return a * a;
		});
		for_each(B.begin(), B.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;


		vector<int> M{ 1, 2, 3, 4, 5 };
		vector<int> N{ 10, 11, 12, 13, 14 };
		vector<int> X(M.size());
		transform(M.begin(), M.end(), N.begin(), X.begin(), [](int a, int b){
			return a + b;
		});
		for_each(X.begin(), X.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}