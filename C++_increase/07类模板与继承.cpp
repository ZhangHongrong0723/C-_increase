#include <iostream>
using namespace std;
/*
	��ģ�������̳�ʱ��
	��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������
	�������ָ�����������޷�����������ڴ�
	����������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��

	��ģ���еĳ�Ա��������ʵ��

*/
template <class T1>
class Base {
	T1 m;

};

class Son :public Base<int> {


};


//����Ϊָ��������T������

template <class T>
class fa {
	T s;

};
template <class T,class T2>
class daughter:public fa<T2>{
public:
	T daug;
	daughter(T daug,T2 s);
};
template <class T,class T2>
daughter<T,T2>::daughter(T daug,T2 s) {

}
//����Ϊ�����Ϊ��ģ��
int main7() {
	//daughter <int, char>da(1,"ss");


	system("pause");
	return 0;
}