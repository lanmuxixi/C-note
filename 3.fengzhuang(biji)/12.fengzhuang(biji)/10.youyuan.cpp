#include<iostream>
#include<string>
using namespace std;
//ȫ�ֺ�������Ԫ
//������Ԫ
class Building;
class Goodgay
{
public:
	Goodgay();
	void visit()
	{
		//		cout << "Goodgay���ڷ���.." << building->m_SittingRoom << endl;
		//		cout << "Goodgay���ڷ���.." << building->m_BedRoom<<endl;
	}
	void visit1();//��visit1���Է���Building�е�˽�г�Ա

	void visit2();//��visit2�����Է���Building�е�˽�г�Ա

	Building* building;
};

class Building
{
//	friend class Goodgay;//������Ԫ��
//	friend void goodGay(Building* buliding);//������Ԫ����
	friend void Goodgay::visit1();//��Ա��������Ԫ
public:
	Building()
	{
		m_SittingRoom = "keting";
		m_BedRoom = "woshi";
	}
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit1()
{
	cout << "visit1���ڷ���.." << building->m_SittingRoom << endl;
	cout << "Goodgay���ڷ���.." << building->m_BedRoom << endl;
}
void Goodgay::visit2()
{
	cout << "visit2���ڷ���.." << building->m_SittingRoom << endl;
	//		cout << "Goodgay���ڷ���.." << building->m_BedRoom << endl;
}
//void goodGay(Building* buliding)
//{
//	cout << "goodGayȫ�ֺ������ڷ���.." << buliding->m_SittingRoom << endl;
//	cout << "goodGayȫ�ֺ������ڷ���.." << buliding->m_BedRoom << endl;
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