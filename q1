/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Dry run and find the output
 ==============================================================================================================================
 */
 
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > performOps(vector<vector<int> > &A) {
    vector<vector<int> > B;
    B.resize(A.size());
    for (int i = 0; i < A.size(); i++) {
        B[i].resize(A[i].size());
        for (int j = 0; j < A[i].size(); j++) {
            B[i][A[i].size() - 1 - j] = A[i][j];
        }
    }
    return B;
}

int main() {
	vector<vector<int> > A;
	int A1[4] = {1,2,3,4};
	int A2[4] = {5,6,7,8};
	int A3[4] = {9,10,11,12};
	vector<int> array1(A1, A1+sizeof(A1)/sizeof(A1[0]));
	vector<int> array2(A2, A2+sizeof(A2)/sizeof(A2[0]));
	vector<int> array3(A3, A3+ sizeof(A3)/sizeof(A3[0]));
	A.push_back(array1);
	A.push_back(array2);
	A.push_back(array3);
  vector<vector<int> > B = performOps(A);
  for (int i = 0; i < B.size(); i++) {
      for (int j = 0; j < B[i].size(); j++) cout<<B[i][j]<<" ";
  }
	return 0;
}
