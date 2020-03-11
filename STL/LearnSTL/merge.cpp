#include "merge.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace MERGE{
	void test_all()
	{
		cout << "----------merge_test----------" << endl;

		test_merge1();
		test_merge2();

		cout << endl;
	}

	struct val
	{
		val(int a, char b) :i(a), c(b){}
		int i;
		char c;
	};
	bool operator<(const val & lhs, const val & rhs)
	{
		return lhs.i < rhs.i;
	}
	
	void test_merge1()
	{
		const int N = 10;
		int r_i[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		char r_c[26];
		for (int i = 0; i < 26; ++i)
		{
			r_c[i] = 'a' + i;
		}
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> d1(0, 9), d2(0, 25);
		vector<val> A, B, C;
		generate_n(back_inserter(A), 5, [&]() -> val{
			return val{ r_i[d1(mt_engine)], r_c[d2(mt_engine)] };
		});
		generate_n(back_inserter(B), 5, [&]() -> val{
			return val{ r_i[d1(mt_engine)], r_c[d2(mt_engine)] };
		});

		sort(A.begin(), A.end(), [](val& a, val& b){
			return a.i < b.i;
		});
		sort(B.begin(), B.end(), [](val& a, val& b){
			return a.i < b.i;
		});
		
		cout << "A: ";
		for_each(A.begin(), A.end(), [](val& a){
			cout << a.i << " " << a.c << endl;
		});
		cout << endl;
		cout << "B: ";
		for_each(B.begin(), B.end(), [](val& a){
			cout << a.i << " " << a.c << endl;
		});
		cout << endl;
		

		merge(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));
		cout << "C: ";
		for_each(C.begin(), C.end(), [](val& a){
			cout << a.i << " " << a.c << endl;
		});
		cout << endl;
	}

	// 注意，这个函数的比较都是用 c
	void test_merge2()
	{
		const int N = 10;
		int r_i[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		char r_c[26];
		for (int i = 0; i < 26; ++i)
		{
			r_c[i] = 'a' + i;
		}
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> d1(0, 9), d2(0, 25);
		vector<val> A, B, C;
		generate_n(back_inserter(A), 5, [&]() -> val{
			return val{ r_i[d1(mt_engine)], r_c[d2(mt_engine)] };
		});
		generate_n(back_inserter(B), 5, [&]() -> val{
			return val{ r_i[d1(mt_engine)], r_c[d2(mt_engine)] };
		});

		sort(A.begin(), A.end(), [](val& a, val& b){
			return a.c < b.c;
		});
		sort(B.begin(), B.end(), [](val& a, val& b){
			return a.c < b.c;
		});

		cout << "A: ";
		for_each(A.begin(), A.end(), [](val& a){
			cout << a.i << " " << a.c << endl;
		});
		cout << endl;
		cout << "B: ";
		for_each(B.begin(), B.end(), [](val& a){
			cout << a.i << " " << a.c << endl;
		});
		cout << endl;


		merge(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C), [](val& a, val& b){
			return a.c < b.c;
		});
		cout << "C: ";
		for_each(C.begin(), C.end(), [](val& a){
			cout << a.i << " " << a.c << endl;
		});
		cout << endl;
	}
}