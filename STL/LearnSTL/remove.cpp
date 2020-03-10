#include "remove.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>

using namespace std;

namespace REMOVE{
	void test_all()
	{
		cout << "----------remove_test----------" << endl;

		test_remove();

		cout << endl;
	}
	
	void test_remove()
	{
		random_device rd;
		mt19937 generator(rd());
		uniform_int_distribution<int> distribution(1, 3);

		vector<int> A(10);
		generate(A.begin(), A.end(), [&](){
			return distribution(generator);
		});
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		// ���ﲢ�����Ƴ������ǰ���������λ�ú����Ԫ����ǰŲ������ remove ����һ����������� erase ����
		auto ret = remove(A.begin(), A.end(), 1);
		cout << distance(A.begin(), ret) << endl;

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;


		cout << endl;
		string S{ "this is a test." };
		cout << S << "size=" << S.size() << endl;
		auto ret1 = remove_if(S.begin(), S.end(), [](char a){
			if (a == ' ')
			{
				return true;
			}
			return false;
		});
		cout << distance(S.begin(), ret1) << endl;
		S.erase(ret1, S.end());
		cout << S << "size=" << S.size() << endl;
	}
}