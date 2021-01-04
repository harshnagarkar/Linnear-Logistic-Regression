#include <iostream>

#include <string>

#include <vector>

#include <cmath>

#include <ctime>

#include <stdlib.h>

#include <iomanip>

#include <cfloat>

using namespace std;

// vector<int> S;

// void backtracking(const vector<vector<int>> &B, int curState, int L, vector<int> &S);

int main()

{

    int num_input_vectors, input_attributes, total_iterations, alpha;

    cin >> num_input_vectors;
    cin >> input_attributes;
    cin >> total_iterations;
    cin >> alpha;

    vector<vector<int>> matrix;

    for (int i = 0; i < num_input_vectors; i++)
    {
        int read_string;
        vector<int> data;
        do
        {
            data.push_back(read_string);
            cout << read_string << " \n";
        }
        while (true); // or some co
        matrix.push_back(data);
    }
}

// cout<<"this";
/*
    vector<vector<double>> T;

    for (int i = 0; i < N; i++)

    {

        vector<double> temp;

        for (int j = 0; j < N; j++)

        {

            cin >> pr;

            pr = -(log2(pr));

            temp.push_back(pr);
        }

        T.push_back(temp);
    }

    vector<vector<double>> O; //observation matrix

    for (int i = 0; i < N; i++)

    {

        vector<double> temp;

        for (int j = 0; j < M; j++)

        {

            cin >> pr;

            pr = -(lo
*/