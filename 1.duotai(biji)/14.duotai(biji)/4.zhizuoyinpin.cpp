//#include<iostream>
//#include<string>
//using namespace std;
////多态案例2 制作饮品
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入佐料
//	virtual void PutSomething() = 0;
//	//制作饮品
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class cofe :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入佐料
//	virtual void PutSomething()
//	{
//		cout << "加糖" << endl;
//	}
//};
//
//class tea :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮百岁山" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中!" << endl;
//	}
//	//加入佐料
//	virtual void PutSomething()
//	{
//		cout << "加柠檬" << endl;
//	}
//};
//
//void DoWork(AbstractDrinking& d1)
//{
//	d1.makeDrink();
//}
//
//void test01()
//{
//	cofe c1;
//	tea t1;
//	DoWork(c1);
//	DoWork(t1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}