#include<iostream>
using namespace std;
#include <string>
//类模板对象做函数参数
template <class T1,class T2>
class Person {
public:
	Person(T1 name,T2 age)
	{
		m_age = age;
		m_name = name;
	}

	T1 m_name;
	T2 m_age;

	void show() {
	
		cout << "name= " << m_name << " age= " << m_age << endl;
	}
};

//1、指定传入类型,最为常用

void showPrint(Person<string, int>&p1) {
	p1.show();
}
void test1() {
	Person<string, int>p1("小二", 99);
	showPrint(p1);

}

//2、参数模板化
template <class T1,class T2>
void showPrint2(Person<T1,T2>&p2) {
	p2.show();
	//如果想查看class T1的类型，则可以用typeid（T1）.name()
	//cout << typeid(T1).name() << endl;
}
void test2() {
	Person <string, int>p2("原配", 55);
	showPrint2(p2);

}
//3、整个类模板化
template <class T>
void showPrint3(T &p) {
	p.show();
}
void test3() {
	Person <string, int>p3("小黑",77);
	showPrint3(p3);

}
int main6() {

	//test1();
	//test2();
	test3();
	system("pause");
	return 0; 
}