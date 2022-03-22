#include<iostream>
using namespace std;
#include <string>
/*
	全局函数类内实现：直接在类内声明友元即可
	全局函数类外实现：需要提前让编译器知道全局函数的存在

*/
template <class T1,class T2>
class Student {
public:
	
	T1 m_name;
	T2 m_age;
	Student(T1 name,T2 age) {
		this->m_name = name;
		this->m_age = age;
	}
	void showPrin(T1 m_name,T2 m_age);
	//全局函数类内实现
	friend void showPrintf(Student<T1, T2> p) {
		cout << "年纪是" << p.m_age << "\t 名字是" << p.m_name << endl;
	}
	//全局函数类外实现
	//加空模板参数列表
	//如果全局函数是类外实现，需要让编译器提前知道这个函数
};
template <class T1,class T2>
void showPri(Student <T1,T2>s) {
	cout << s.m_name << "\t" << s.m_age << endl;
}
void test01() {
	Student <string, int>p1("jack",22);
	showPrintf(p1);
	
}

void test02() {
	Student<string, int>p2("json",22);
	showPri(p2);
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}