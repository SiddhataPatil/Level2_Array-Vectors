/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Wave Array for ex: a1 >= a2 <= a3 >= a4 <= a5.....
 ==============================================================================================================================
 */
 
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> wave(vector<int> &A);
}obj;

void swap (int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    for(int i=0; i<A.size()-1; i+=2)
    {
        swap(A[i], A[i+1]);
    }
    return A;
}


int main() {
	int A1[4] = {1, 2, 3, 4};
	vector<int> A (A1, A1 + sizeof(A1) / sizeof(A1[0]));
  vector<int> result;
	result=obj.wave(A);
	for (int i=0; i<A.size(); i++) {
		cout << A[i] << endl;
	}
	return 0;
}
