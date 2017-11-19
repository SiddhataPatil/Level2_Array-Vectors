/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Find the bug in below function
 
 vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret; 
	for (int i = 0; i < A.size(); i++) {
		ret.push_back(A[i + B]);
	}
	return ret; 
}
 ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public: 
  vector<int> rotateArray(vector<int>&a,int);
}obj;

vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret;
	int result = B%A.size();
	for (int i = 0; i < A.size(); i++) {
	    if ((i+result)>=A.size())
	    {
	        ret.push_back(A[i + result - A.size()]);
	    }
	    else
		ret.push_back(A[i + result]);
	}
	return ret;
}

int main()
{
    int A1[7]={1,2,3,4,5,6,7};
    int i;
    vector<int> A(A1,A1+sizeof(A1)/sizeof(A1[0]));
    int B = 3;
    vector <int> result = obj.rotateArray(A,B);
    for(i=0; i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}

