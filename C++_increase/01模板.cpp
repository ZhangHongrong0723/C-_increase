#include <iostream>
using namespace std;
/*
	ģ����ص㣺
		��ģ�岻����ֱ��ʹ�ã���ֻ��һ�����
		��ģ���ͨ�ò��������ܵ�

	C++����һ�ֱ��˼��Ϊ���ͱ�̣���Ҫ���õļ�������ģ��
	C++�к�������ģ����ƣ�����ģ�����ģ��

	�﷨��
	template<typename T> 
	������������
	���ͣ�
		template	��������ģ��
		typename	���������ķ�����һ���������ͣ�������class����
		T			ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ


*/

/*
	�龰����������Ҫ������������ʱ��һ����doubleһ����int��������д������ͬ�ķ�������ͬ���Ĳ���
	ģ���Ŀ����Ϊ����߸����ԣ������Ͳ�����
*/
//����ģ��
template <typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap(T &a,T&b) {
	T temp = a;
	a = b;
	b = temp;
}
template <class T> //typename �����滻Ϊclass ���ǿ���ѡ��������class ������typename �������ʶ������滻
void sswap(T &a,T&b) {
	T temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

template <typename T>
void func() {

	cout << "hello" << endl;
	}
int main1()
{
	int a = 10;
	int b = 20;
	//���ַ���ʹ�ú���ģ��
	//�Զ������Ƶ�
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	/* ���������Ͳ�һ�µ�ʱ�򣬼���ʹ���Զ��Ƶ�������ʾ�Զ����ͣ����ᱨ��
	int c = 30;
	double d = 52.3;
	sswap(c, d);
	sswap<double>(c, d);
	*/

	//��ʾָ������
	//mySwap<int>(a, b);

	//�����õķ�����û����ص��β�ʱ��������Ҫ����ʾָ�����͵ķ�����������int��void�ȵȶ���
	func<void>();
	system("pause");
	return 0;
}