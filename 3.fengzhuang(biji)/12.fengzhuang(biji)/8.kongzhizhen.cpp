//#include<iostream>
//using namespace std;
////空指针调用成员函数
//class Person
//{
//public:
//	void showclassname()
//	{
//		cout << "this is Person" << endl;
//	}
//	void showage()
//	{
//		if (this == NULL)  //加这行代码可以预防空指针 防止代码崩溃
//		{
//			return;
//		}
//		cout << "the age is" << this->m_age << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showclassname();//这样访问这个函数不会崩溃
//	p->showage();//这样访问这个函数会崩溃 因为传入的指针为NULL(空)
//}
//int main()
//{
//	test01();
//	return 0;
//}