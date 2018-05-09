// tesvq.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream file;

	char A[10][64][64];
	char filename[6]="0.raw";
	char tmp;
	int i,j,k;
	for(k=0;k<10;k++)
	{
		filename[0]='0'+k;
		file.open(filename);
		for(i=0;i<64;i++)
		{
			for(j=0;j<64;j++)
			{
				file>>tmp>>tmp>>tmp;
				A[k][i][j]='0';
				if(tmp) A[k][i][j]=' ';
			}
			cout<<endl;
		}
		file.close();
	}
	for(k=0;k<1000;k++)
	{
		for(i=0;i<64;i++)
		{
			for(j=0;j<64;j++)
				cout<<A[k%10][i][j];
			cout<<endl;
		}
		for(j=0;j<10000;j++);
		system("cls");
	}
	return 0;
}

