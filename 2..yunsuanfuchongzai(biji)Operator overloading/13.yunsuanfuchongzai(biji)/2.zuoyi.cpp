//#include <iostream>
//#include <string>
//using namespace std;
///*
//2.左移运算符重载 <<
//作用:可以输出自定义数据类型
//(1)利用成员函数重载左移运算符  一般不会利用这种方法 因为无法实现cout在左侧
//(2)利用全局函数重载左移运算符
//-------------------------------------------------------------------
//e.m. Person1类
//*/
//
//class Person
//{
//public:
//	Person() {};
//	int m_A;
//	int m_B;
//	friend ostream& operator<<(ostream& cout, Person& p);
//};
//
//void test01()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//	operator<<(cout,p); //如果没有重定义<<运算符，则这句话会报错
//	cout << p;//和上面的代码含义相同
//}
//
//ostream& operator<<(ostream & cout, Person & p)   //本质:operator<<(cout,Person p) 简化为cout << p
//{
//	cout << "p.m_A=" << p.m_A;
//	cout << "p.m_B=" << p.m_B;
//	return cout;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
