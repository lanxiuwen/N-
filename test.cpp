#include<iostream>
#include<fstream>
#include<algorithm>
#include<math.h>
#include<vector>

using namespace std;
int main()
{
	ifstream infile("in.txt");
	if (!infile)
		return -1;
	char ch[100][1024];
	infile.getline(ch[0], 1024);
	int N = atoi(ch[0]);

	vector<int> v;
	int a;
	int i = 0;
	int result=N-1;
	while (!infile.eof())
	{
		infile >> a;
		v.push_back(a);
		i++;
	}
	int LengTH = v.size();
	for (int i = 0;i < v.size();i++)
	{
		int j = 0;
		int current = v[i];
		if ((i + j) >= LengTH)
			break;


		for (j=0;j <= N;j++)
		{
			if ((i + j) >= LengTH)
				break;

			if (abs(v[i + j] - current) < N)
				continue;
			else
			{
				break;
			}
		}
		if (j != N)
		{
			if ((N - j) < result)
				result = N - j;
		}
		

	}

	return 0;

}