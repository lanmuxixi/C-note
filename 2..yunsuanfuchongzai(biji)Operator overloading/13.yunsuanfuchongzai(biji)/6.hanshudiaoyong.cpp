//#include <iostream>
//#include <string>
//using namespace std;
////函数调用运算符重载
////仿函数非常灵活 没有固定写法
////匿名函数对象
//
//class Myprint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void Myprint02(string text)
//{
//	cout << text << endl;
//}
//
//void test01()
//{
//	Myprint myPrint;
//	myPrint("hi1");//由于使用起来非常像函数调用,因此成为仿函数
//	Myprint02("hi2");
//	
//	//匿名函数对象
//	Myprint()("hi3");
//}
//
//int main()
//{
//	test01();
//	return 0;
//}