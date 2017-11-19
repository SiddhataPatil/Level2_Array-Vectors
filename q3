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

vector<int> performOps(vector<int> A) {
    vector<int> B(2 * A.size(), 0);
    for (int i = 0; i < A.size(); i++) {
        B[i] = A[i];
        B[i + A.size()] = A[(A.size() - i) % A.size()];
    }
    return B;
}

int main()
{
	int A1[4] = {5,10,2,1};
	vector<int> A(A1, A1+sizeof(A1)/sizeof(A1[0]));
  vector<int> B = performOps(A);
  for (int i = 0; i < B.size(); i++) {
      cout<<B[i]<<" ";
  }
    return 0;
}
