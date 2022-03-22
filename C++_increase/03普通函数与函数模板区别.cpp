#include<iostream>
using namespace std;
/*
	普通函数与函数模板的区别
	·普通函数调用可以发生隐式类型转换
	·函数模板用自动类型推导，不可以发生隐式类型转换
	·函数模板用显示指定类型，可以发生隐式类型转换


	普通函数和函数模板的调用规则：
	·如果函数模板和普通函数都可以实现，优先调用普通函数
	·可以通过空模板参数列表来强制调用函数模板 
			空模板参数列表即为ss<>(int a,int b);
	·函数模板也可以发生重载（普通函数和函数模板名字可以一样）
	·如果函数模板可以产生更好的匹配，优先调用函数模板  (即调用函数模板不需要隐式转换，而普通函数需要隐式转换)

*/

//普通函数
int add1(int a,int b) 
{
	return a + b;

}
//函数模板
template <typename T>
T add2(T a,T b) 
{
	return a + b;

}
int main3() 
{
	int a = 10;
	char c = 'a';
	cout << add1(a, c) << endl;//会发生自动类型转换

	//cout << add2(a, c) << endl;//报错
	add2<int>(a, c);//可以，但是如果在上面函数模板用引用，也会报错，指针没有隐式转换，没有类型的

	system("pause");
	return 0;

}