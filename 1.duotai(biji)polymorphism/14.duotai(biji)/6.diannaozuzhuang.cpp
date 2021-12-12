#include<iostream>
#include<string>
using namespace std;
//-------------------CPU--------------------
//抽象CPU类
class CPU
{
public:
	virtual void calculate() = 0;
	virtual ~CPU() = 0;
};
CPU::~CPU() {};
class IntelCPU :public CPU
{
public:
	IntelCPU() {};
	virtual void calculate()
	{
		cout << "IntelCUP is running.." << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "LenovoCUP is running.." << endl;
	}
};
//-------------------显卡--------------------
//抽象显卡类
class VideoCard
{
public:
	virtual void display() = 0;
	virtual ~VideoCard() = 0;
};
VideoCard::~VideoCard() {};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel VideoCard is displaying.." << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo VideoCard is displaying.." << endl;
	}
};
//-------------------内存--------------------
//抽象内存类
class Memory
{
public:
	virtual void storage() = 0;
	virtual ~Memory() = 0;
};
Memory::~Memory() {};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "IntelMemory is storaging..." << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "LenovoMemory is storaging..." << endl;
	}
};
//--------------------装电脑!-----------------------
//电脑类
class Computer
{
public:
	Computer() {};
	Computer(CPU* p1, VideoCard* p2, Memory* p3)
	{
		m_p1 = p1;
		m_p2 = p2;
		m_p3 = p3;
	}
	void doCalculate()
	{
		m_p1->calculate();
	}
	void doDisplay()
	{
		m_p2->display();
	}
	void dostorage()
	{
		m_p3->storage();
	}
	void doWork()
	{
		doCalculate();
		doDisplay();
		dostorage();
		cout << endl;
	};
	CPU* m_p1;
	VideoCard* m_p2;
	Memory* m_p3;
};
//------------------test---------------------
void test01()
{
	Computer c1(new IntelCPU, new IntelVideoCard, new IntelMemory);
	Computer c2(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	Computer c3(new IntelCPU, new LenovoVideoCard, new LenovoMemory);
	c1.doWork();
	c2.doWork();
	c3.doWork();
}
//-------------------------------------------
int main()
{
	test01();
	return 0;
}