#include<iostream>
#include<string>
using namespace std;
//全局函数做友元
//类做友元
class Building;
class Goodgay
{
public:
	Goodgay();
	void visit()
	{
		//		cout << "Goodgay正在访问.." << building->m_SittingRoom << endl;
		//		cout << "Goodgay正在访问.." << building->m_BedRoom<<endl;
	}
	void visit1();//让visit1可以访问Building中的私有成员

	void visit2();//让visit2不可以访问Building中的私有成员

	Building* building;
};

class Building
{
//	friend class Goodgay;//声明友元类
//	friend void goodGay(Building* buliding);//声明友元函数
	friend void Goodgay::visit1();//成员函数做友元
public:
	Building()
	{
		m_SittingRoom = "keting";
		m_BedRoom = "woshi";
	}
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit1()
{
	cout << "visit1正在访问.." << building->m_SittingRoom << endl;
	cout << "Goodgay正在访问.." << building->m_BedRoom << endl;
}
void Goodgay::visit2()
{
	cout << "visit2正在访问.." << building->m_SittingRoom << endl;
	//		cout << "Goodgay正在访问.." << building->m_BedRoom << endl;
}
//void goodGay(Building* buliding)
//{
//	cout << "goodGay全局函数正在访问.." << buliding->m_SittingRoom << endl;
//	cout << "goodGay全局函数正在访问.." << buliding->m_BedRoom << endl;
//}
//

void test01()
{
	Goodgay* g1 = new Goodgay;
	g1->visit();
}

void test02()
{
	Goodgay* g2 = new Goodgay;
	g2->visit1();
	g2->visit2();
}
int main()
{
//	test01();
	test02();
	return 0;
}