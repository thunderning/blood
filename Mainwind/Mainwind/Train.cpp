#include "Train.h"

vector<Train*> traindata;

Train::Train(string s)
{
	int i = s.find(',');
	int j = s.find('|');
	num = s.substr(0, i);
	string x = s.substr(i + 1, j - i - 1);
	istringstream(x) >> max;
	flag = 0;
	i = j;
	j = s.find('|', i + 1);
	while (j != -1)
	{
		x = s.substr(s.find('|', i) + 1, s.find('|', j) - s.find('|', i) - 1);
		station.push_back(x);
		leave.push_back(max);
		i = j;
		j = s.find('|', i + 1);
	}
	leave[leave.size() - 1] = 0;
	return;
}

Train::~Train()
{
}

bool Train::find(string sta, string des)
{
	int size = station.size();
	for (int i = 0; i < size - 1; i++)
	{
		if (station[i] == sta)
			for (int j = i + 1; j < size; j++)
				if (station[j] == des) return true;
	}
	return false;
}

bool Train::sell(string sta, string des, int n)
{
	int possta, posdes;
	for (possta = 0; possta < station.size(); possta++) if (station[possta] == sta) break;
	for (posdes = 0; posdes < station.size(); posdes++) if (station[posdes] == des) break;
	for (int i = possta; i < posdes; i++) if (leave[i] < n) return false;
	for (int i = possta; i < posdes; i++) leave[i] -= n;
	flag = 1;
	return true;
}

bool Train::getin(string sta, string des, int n)
{
	int possta, posdes;
	for (possta = 0; possta < station.size(); possta++) if (station[possta] == sta) break;
	for (posdes = 0; posdes < station.size(); posdes++) if (station[posdes] == des) break;
	for (int i = possta; i < posdes; i++) if (leave[i] + n>max) return false;
	for (int i = possta; i < posdes; i++) leave[i] += n;
	for (int i = possta; i < posdes; i++) if (leave[i] != 0) return true;
	flag = 0;
	return true;
}

void Train::print()
{

}

void Train::out(ofstream* fout)
{
	(*fout) << num << "," << max << "|";
	for (int i = 0; i < station.size(); i++) *fout << station[i] << ","<<leave[i]<<"|";
	*fout << endl;
	return;
}


