#include "Formm.h"

int fnum = 0;

Formm::Formm(string nn, string a, string b, int m)
{
	++fnum;
	num = nn;
	sta = a;
	des = b;
	n = m;
	fn = fnum;
	return;
}

Formm::~Formm()
{
}

void Formm::print()
{

}

void Formm::out(ofstream* fout)
{
	if (fn < 10) *fout << "00" << fn << "\t" << num << "\t" << sta << "\t\t\t" << des << "\t\t\t" << n << "\n";
	else if (fn<100) *fout << "0" << fn << "\t" << num << "\t" << sta << "\t\t\t" << des << "\t\t\t" << n << "\n";
	else *fout << fn << "\t" << num << "\t" << sta << "\t\t\t" << des << "\t\t\t" << n << "\n";
	return;
}

vector<Formm*> Formms;