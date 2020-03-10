#include "replace.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>

using namespace std;

namespace REPLACE{
	void test_all()
	{
		cout << "----------replace_test----------" << endl;

		test_replace();

		cout << endl;
	}
	
	void test_replace()
	{
		vector<int> A(10);
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 3);
		generate(A.begin(), A.end(), [&](){
			return distribution(mt_engine);
		});

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
		replace(A.begin(), A.end(), 2, 5);
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		replace_if(A.begin(), A.end(), [](int a){
			if (a == 5)
			{
				return true;
			}
			return false;
		}, 2);
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}