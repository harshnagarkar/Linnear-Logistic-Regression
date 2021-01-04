#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{

	int M, D, N;
	double alpha;
	cin >> M >> D >> N;
	cin >> alpha;

	vector<vector<int>> x;
	vector<int> y;
	int xSize = D + 1;
	for (int i = 0; i < M; i++)
	{
		vector<int> temp;
		temp.push_back(1); //dummy attribute;
		for (int j = 0; j < D; j++)
		{
			int attr;
			cin >> attr;
			temp.push_back(attr);
		}
		x.push_back(temp);
		int yLabel;
		cin >> yLabel;
		y.push_back(yLabel);
	}

	vector<double> w(D + 1, 1.0);
	vector<double> h(M, 0.0);
	for (int iter = 0; iter < N; iter++)
	{
		//calculate M values for h
		for (int j = 0; j < M; j++)
		{
			//calculate dot product of weights and input vectors x_j
			double sum = 0.0;
			for (int i = 0; i < xSize; i++)
			{
				sum += (double)(x[j][i] * w[i]);
			}
			h[j] = sum;
		}
		 //for all input vectos
		  //for iterations

		//for each weight out of D+ weights:
		//for each vector xj;
		//(yj-h(xij))*xji
		//multiply by alpha Sadd wij

		for (int i = 0; i < xSize; i++)
		{
			double sum = 0.0;
			for (int j = 0; j < M; j++)
			{
				sum += (y[j] - h[j]) * (double)x[j][i];
			}
			w[i] += alpha * sum;
		}
	}
	for (int i = 0; i < xSize; i++)
	{
		cout << std::fixed << std::showpoint << std::setprecision(12) << w[i] << endl;
	}
	return 0;
}
