////1.动态多态需满足的条件:
////(1).必须有继承关系
////(2).子类要重写父类的虚函数
////重写:函数返回值类型 函数名 参数列表完全相同
////2.动态多态使用
////(1).父类的引用或指针指向子类对象
//
//#include<iostream>
//#include<string>
//using namespace std;
//class Animal
//{
//public:
//	Animal() {};
//    virtual void speak()  //加了virtual,speak就变成了虚函数
//	{
//		cout << "动物在说话";	
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	Cat() {};
//	void speak()
//	{
//		cout << "喵喵喵";
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	Dog() {};
//	void speak()
//	{
//		cout << "汪汪汪";
//	}
//};
//
//
////执行说话的函数
////这种写法属于地址早绑定，在编译阶段就确定了函数的地址
////如果想执行让猫说话，这个函数的地址就不能早绑定
//void doSpeak(Animal&animal) //Animal&anilam=cat 
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << sizeof(Animal);
//}
//
//int main()
//{
//	test02();
//	return 0;
//}