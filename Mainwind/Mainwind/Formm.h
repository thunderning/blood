#pragma once
#include<iostream>
#include <fstream>
#include<string>
#include<vector>
using namespace std;
class Formm
{
public:
	Formm(string nn, string a, string b, int m);
	~Formm();
	void print();                 //��Ϣ��ӡ
	void out(ofstream* fout);      //��Ϣ����
	int fn;       //����
	string num;                     //����
	string sta, des;             //ʼ��վ
	int n;                       //����
};

extern int fnum;

extern vector<Formm*> Formms;

