#include "remove_copy.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>

using namespace std;

namespace REMOVE_COPY{
	void test_all()
	{
		cout << "----------remove_copy_test----------" << endl;

		test_remove_copy();

		cout << endl;
	}
	
	void test_remove_copy()
	{
		vector<int> A(10);
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 3);
		generate(A.begin(), A.end(), [&](){
			return distribution(mt_engine);
		});

		vector<int> B(10);
		fill(B.begin(), B.end(), 0);

		auto ret = remove_copy(A.begin(), A.end(), B.begin(), 1);
		cout << distance(B.begin(), ret) << endl;
		for_each(B.begin(), B.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		string S{ "this is a test." };
		string C(S.size(), ' ');
		auto ret1 = remove_copy_if(S.begin(), S.end(), C.begin(), [](char c){
			if (c == ' ' || c == '.')
			{
				return true;
			}
			return false;
		});
		cout << distance(C.begin(), ret1) << endl;
		cout << C << endl;
	}
}