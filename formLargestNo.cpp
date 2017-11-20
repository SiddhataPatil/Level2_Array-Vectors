/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Form Largest number from the given array for ex: Given array: {3, 30, 34, 5, 9}; o/p: 9534330
 ==============================================================================================================================
 */
 
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  string largestNumber(const vector<int> &A);
}obj;

bool compare(int begin, int end) {
	return to_string(end)+to_string(begin) < to_string(begin)+to_string(end);
}

string Solution::largestNumber(const vector<int> &A)
{
  vector<int> B = A;
  sort( B.begin(), B.end(), compare);
	string largest;
	for (int i = 0; i < B.size(); i++) {
	 	largest += to_string(B[i]);
	}
	while(largest[0] == '0'){
		largest.erase(largest.begin());
	}
	if (!largest.length()) {
		largest = '0';
	}
  return largest;
}

int main() {
	int A1[] = {3, 30, 34, 5, 9};
  cout<<"Given Array = {3, 30, 34, 5, 9}"<<endl;
	vector<int> A(A1, A1 + sizeof(A1) / sizeof(A1[0]));
  string result;
	result=obj.largestNumber(A);
	cout << result << endl;
	return 0;
}
