#include "move.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace MOVE{

	class MyClass
	{
	public:
		MyClass(int a) :m_val(a){};
		~MyClass();

		MyClass(MyClass &&a)
		{
			cout << "移动构造函数" << endl;
			m_val = a.m_val;
			a.m_val = -1;
		}

		MyClass& operator=(MyClass &&a)
		{
			cout << "移动赋值函数" << endl;
			m_val = a.m_val;
			a.m_val = -1;
			return *this;
		}

		int m_val;
	};


	MyClass::~MyClass()
	{
	}

	void test_all()
	{
		cout << "----------move_test----------" << endl;

		test_move();

		cout << endl;
	}
	
	void test_move()
	{
		vector<MyClass> A{ 1, 2, 3 };
		vector<MyClass> B{ 4, 5, 6 };

		cout << "before move: " << endl;
		for_each(A.begin(), A.end(), [](const MyClass& a){
			cout << "A: " << a.m_val << " ";
		});
		cout << endl;
		for_each(B.begin(), B.end(), [](const MyClass& a){
			cout << "B: " << a.m_val << " ";
		});
		cout << endl;

		auto ret = move(A.begin(), A.end(), B.begin());

		cout << "after move: " << endl;
		cout << "距离=" << distance(B.begin(), ret) << endl;
		for_each(A.begin(), A.end(), [](const MyClass& a){
			cout << "A: " << a.m_val << " ";
		});
		cout << endl;
		for_each(B.begin(), B.end(), [](const MyClass& a){
			cout << "B: " << a.m_val << " ";
		});
		cout << endl;
	}
}