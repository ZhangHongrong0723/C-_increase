#pragma once
#include<iostream>
using namespace std;
template <class T>
class Person {
public:
	void show();
	Person(T age);
	T m_age;
};
template <class T>
Person<T>::Person(T age) {
	this->m_age = age;
}
template <class T>
void Person<T>::show() {
	cout << "ÄêÁäÊÇ" << this->m_age << endl;
}