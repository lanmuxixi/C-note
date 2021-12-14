//#include<iostream>
//using namespace std;
////深拷贝与浅拷贝
////浅拷贝带来的问题是 堆区内存重复释放
////要自己实现一个拷贝构造函数来解决浅拷贝带来的问题 利用深拷贝的方法
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_age = age;
//		m_height=new int(height);
//		cout << "Person的有参构造函数被调用" << endl;
//	}
//	~Person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Person的析构函数被调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数被调用" << endl;
//		m_age = p.m_age;//浅拷贝
//		this->m_height = new int(*p.m_height);//深拷贝
//	}
//	int* m_height;
//	int m_age;
//};
//void test01()
//{
//	Person p1(18,180);
//	cout << "p1的年龄为: " << p1.m_age << endl<< "p1的身高为: " <<*p1.m_height<< endl;
//	Person p2(p1);
//	cout << "p2的年龄为: " << p2.m_age << endl << "p2的身高为: " << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}