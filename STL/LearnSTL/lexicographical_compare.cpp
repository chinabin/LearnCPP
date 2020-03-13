#include "lexicographical_compare.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace LEXICOGRAPHICAL_COMPARE{
	void test_all()
	{
		cout << "----------lexicographical_compare_test----------" << endl;

		test_lexicographical_compare();

		cout << endl;
	}
	
	void test_lexicographical_compare()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 10);
		string A = { 'a', 'b', 'c', 'd', 'e', 'f' };
		string B = { 'a', 'b', 'c', 'd', 'e', 'f' };

		while (!lexicographical_compare(A.begin(), A.end(), B.begin(), B.end()))
		{
			for_each(A.begin(), A.end(), [](char a){
				cout << a << " ";
			});

			cout << " >= ";

			for_each(B.begin(), B.end(), [](char a){
				cout << a << " ";
			});

			cout << endl;

			shuffle(A.begin(), A.end(), mt_engine);
			shuffle(B.begin(), B.end(), mt_engine);
		}

		for_each(A.begin(), A.end(), [](char a){
			cout << a << " ";
		});

		cout << " < ";

		for_each(B.begin(), B.end(), [](char a){
			cout << a << " ";
		});

		cout << endl;

	}
}