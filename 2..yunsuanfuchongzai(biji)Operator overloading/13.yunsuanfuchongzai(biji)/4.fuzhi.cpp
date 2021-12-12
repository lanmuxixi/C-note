//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//	Person() {};
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	int* m_Age;
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		cout << "析构函数被调用" << endl;
//	}
//
////重载赋值运算符
//	Person & operator=(Person &p)
//	{
//		//应该判断是否有属性在堆区，如果有要先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//进行深拷贝操作
//		this->m_Age= new int(*p.m_Age);
//		cout << "深拷贝完成..." << endl;
//		return *this;
//	}
//};
//
////如果没有重载赋值运算符而用系统提供的浅拷贝方法 这样做会导致堆区内存重复释放，系统崩溃
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p2.m_Age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}