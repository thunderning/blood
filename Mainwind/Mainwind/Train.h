#pragma once
#include<iostream>
#include <fstream>
#include<string>
#include<vector>
#include <sstream>
#include "Formm.h"
using namespace std;
class Train
{
public:
	Train(string s);                     //���캯��
	~Train();					//��������
	bool find(string sta, string des); //��ʼ��վ���� �ҵ��򷵻�true
	bool sell(string sta, string des, int n);             //��Ʊ����Ʊ�����㷵��false
	bool getin(string sta, string des, int n);            //��Ʊ
	void print();                           //��Ϣ��ӡ
	void out(ofstream* fout);                                          //��Ϣ����
	string num;                  //string�� �洢��κ�
	vector<string> station;      //���� �洢��վ
	int flag;                   //��¼�Ƿ�����
	vector<int> leave;              //max��Ʊ��  leave��Ʊ��
	int max;
	
	
};

void saveit(string train, string form);

extern vector<Train*> traindata;







