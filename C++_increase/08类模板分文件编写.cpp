#include <iostream>
using namespace std;
//�������һ��������.h������.cpp�ļ��������ã�
//#include "Person.cpp"

//�������������ͷ�ļ���CPP�ļ�д��һ�𣬳�Ϊ.hpp�ļ������ã�Լ����ɣ�������ģ���ļ���
#include "Person.hpp"
//#include "Person.h"
/*
	��ģ��ķ��ļ���д
	��������ģ���ǵ��ú������ɣ����Բ���ֱ�Ӱ���.h�ļ���
*/


int main8() {
	//Person <int> per(10);//���ú������ɣ�����
	//per.show();//����ԭ������

	Person <int> per(10);//����.cpp�ļ�֮��,�Լ�����hpp��
	per.show();
	return 0;
}