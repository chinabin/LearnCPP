#include <memory>
#include <iostream>

using namespace std;


struct Foo {
	Foo() { std::cout << "Foo...\n"; }
	~Foo() { std::cout << "~Foo...\n"; }
};

struct D {
	void operator()(Foo* p) const {
		std::cout << "Call delete from function object...\n";
		delete p;
	}
};

/*
���� shared_ptr �ļ��ַ���:
1. ���湹��
2. make_shared
*/
void test1()
{
	cout << "---------------------------- test1 ----------------------------" << endl;
	// ���湹��
	{
		shared_ptr<Foo> shp1;
		shared_ptr<Foo> shp2(new Foo);
		shp1 = shp2;
		shared_ptr<Foo> shp3(shp2);
		shared_ptr<Foo> shp4(new Foo, D());

		// ����ָ�������ֻ��ָ�빹�캯����explicit�ģ���ˣ����ܽ�һ������ָ����ʽת��Ϊһ��ֻ��ָ�룬����ʹ��ֱ�ӳ�ʼ����ʽ
		// shared_ptr<Foo> s1 = new Foo;

		cout << shp2.use_count() << " " << shp3.use_count() << endl;
	}

	// make_shared
	{
		shared_ptr<Foo> shp5 = make_shared<Foo>();
	}

	cout << endl;
}

void test2()
{
	cout << "---------------------------- test1 ----------------------------" << endl;
	shared_ptr<Foo> shp1(new Foo);
	shp1.reset();
	
}

void test_all()
{
	test1();
	test2();
}

int main()
{	
	test_all();

	return 0;
}