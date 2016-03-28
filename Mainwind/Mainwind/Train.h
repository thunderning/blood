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
	Train(string s);                     //构造函数
	~Train();					//析构函数
	bool find(string sta, string des); //按始终站查找 找到则返回true
	bool sell(string sta, string des, int n);             //卖票，若票数不足返回false
	bool getin(string sta, string des, int n);            //退票
	void print();                           //信息打印
	void out(ofstream* fout);                                          //信息导出
	string num;                  //string类 存储班次号
	vector<string> station;      //容器 存储车站
	int flag;                   //记录是否被买下
	vector<int> leave;              //max总票数  leave余票数
	int max;
	
	
};

void saveit(string train, string form);

extern vector<Train*> traindata;







