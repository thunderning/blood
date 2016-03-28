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
	void print();                 //信息打印
	void out(ofstream* fout);      //信息导出
	int fn;       //表单号
	string num;                     //车次
	string sta, des;             //始终站
	int n;                       //张数
};

extern int fnum;

extern vector<Formm*> Formms;

