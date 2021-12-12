//#include <iostream>
//#include <string>
//using namespace std;
////重载递增运算符
////重载递减运算符
//class Myinteger
//{
//public:
//	friend ostream& operator<<(ostream& cout, Myinteger Num); //使用友元类让该函数可以访问Myinteger类的私有成员
//	Myinteger()
//	{
//		m_Num = 0;//初始化m_Num
//	}
//	//重载前置++运算符
//	Myinteger& operator++()//前置递增要返回一个引用 返回引用是为了一直对一个数据进行递增操作
//	{
//		m_Num++;
//		return *this;
//	}
//	//重载后置++运算符
//	Myinteger operator++(int) //后置递增要返回一个值 int代表占位参数 可以用于前置和后置递增
//	{
//		//先返回结果
//		Myinteger temp;
//		temp = *this;
//		//后递增
//		m_Num++;
//		//最后返回之前的临时值
//		return temp;
//	}
//
//	//重载前置--运算符
//	Myinteger& operator--()
//	{
//		this->m_Num--;
//		return *this;
//	}
//
//	//重载后置--运算符
//	Myinteger operator--(int)
//	{
//		Myinteger temp;
//		temp = *this;
//		this->m_Num--;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////重载左移运算符
//ostream& operator<<(ostream& cout, Myinteger Num) //返回引用是为了一直对一个数据进行递增操作
//{
//	cout << Num.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	Myinteger myint;
//	cout << myint << endl;
//	cout << ++myint<<endl;
//	cout << ++myint<<endl;
//
//}
//
//void test02()
//{
//	Myinteger myint;
//	cout << myint++ << endl;
//	cout << myint++ << endl;
//	cout << myint++ << endl;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//void test03()
//{
//	Myinteger myint;
//	cout << myint << endl;
//	cout << --myint << endl;
//	cout << --myint << endl;
//
//}
//
//void test04()
//{
//	Myinteger myint;
//	cout << myint-- << endl;
//	cout << myint-- << endl;
//	cout << myint-- << endl;
//	cout << myint-- << endl;
//	cout << myint << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	cout << "--------------------------" << endl;
//	test03();
//	test04();
//	return 0;
//}