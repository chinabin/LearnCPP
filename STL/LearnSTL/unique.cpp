#include "unique.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace UNIQUE{
	void test_all()
	{
		cout << "----------unique_test----------" << endl;

		test_unique1();
		test_unique2();

		cout << endl;
	}
	
	void test_unique1()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 2);
		vector<int> v;
		generate_n(back_inserter(v), 10, bind(distribution, mt_engine));
		for_each(v.begin(), v.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = unique(v.begin(), v.end());
		cout << distance(v.begin(), ret) << endl;
		v.erase(ret, v.end());

		for_each(v.begin(), v.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}

	void test_unique2()
	{
		cout << endl;
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 2);
		vector<int> v;
		generate_n(back_inserter(v), 10, bind(distribution, mt_engine));
		for_each(v.begin(), v.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = unique(v.begin(), v.end(), [](int a, int b) -> bool{
			//cout << a << " " << b << endl;		// 打开这行输出更好理解二元谓词的用法
			if (a == b)
			{
				return true;
			}
			return false;
		});
		cout << distance(v.begin(), ret) << endl;
		v.erase(ret, v.end());

		for_each(v.begin(), v.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}