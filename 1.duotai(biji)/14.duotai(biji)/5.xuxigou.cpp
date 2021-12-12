//#include<iostream>
//#include<string>
//using namespace std;
////虚析构和纯虚析构
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//	virtual void speak() = 0;
//	//虚析构函数
//	/*virtual ~Animal()
//	{
//		cout << "Animal析构函数调用" << endl;
//	}*/
//	//纯虚析构函数
//	//有了纯虚函数 这个类就属于抽象类 无法实例化对象
//	virtual ~Animal() = 0;
//};
////纯虚析构函数需要有声明也需要有实现 实现的时候 
////删掉virtual 加上类名和作用域:: 加大括号 大括号里面写实现 
//Animal::~Animal() 
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//};
//
//class Cat :public Animal
//{
//public:
//	Cat() {};
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout <<*m_name<< "喵喵喵" << endl;
//	}
//	string* m_name;
//	~Cat()
//	{
//		if (m_name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal;
//	//父类的指针在析构的时候不会调用子类的析构函数，导致子类如果有堆区属性会造成内存泄漏
//}
//
//int main()
//{
//	test01();
//	return 0;
//}