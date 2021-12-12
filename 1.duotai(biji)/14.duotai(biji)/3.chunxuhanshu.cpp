//#include<iostream>
//#include<string>
//using namespace std;
////只要类中有一个纯虚函数 这个类就被称为抽象类
////1.抽象类不能实例化对象 栈区堆区都不行
////2.抽象类的子类必须重写父类中的纯虚函数，否则子类也是抽象类
//class Base
//{
//public:
//	virtual void func() = 0;//创建纯虚函数
//	int m_a;
//	int m_b;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func函数调用" << endl;
//	}
//};
//
//void test01()
//{
//    //抽象类不能实例化对象 栈区堆区都不行
//	//Base b1;
//	//new Base;
//	Son s1;
//	new Son;
//}
//
//void test02()
//{
//	Base* p = new Son;
//	p->func();
//}
//
//int main()
//{
//	test02();
//	return 0;
//}