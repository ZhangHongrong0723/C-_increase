#include <iostream>
using namespace std;
#include<string>

//紧跟着一个数据类型
/*
	类模板没有自动类型推导的方式
	类模板在模板参数列表中可以有默认参数，例如class AgeType=int

	类模板的创建时机和普通类中的成员函数创建时机的区别：
	·普通类中的成员函数在一开始的时候就可以创建
	·类模板中的成员函数在调用的时才创建
*/
template <class NameType,class AgeType>
class Person {
public:
	Person(NameType name,AgeType age) {
		this->m_age = age;
		this->m_name = name;
		//cout << m_age <<"   "<<m_name<< endl;

	}

	NameType m_name;
	AgeType m_age;


};
int main5() {
	Person<string, int> p1("小黑",18);
	Person<string, double>p2("小绿",99.2); 

	system("pause");
	return 0;
}