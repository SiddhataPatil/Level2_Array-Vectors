/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Spiral Array
 ==============================================================================================================================
 */
 
 #include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> spiralOrder(const vector<vector<int> > &a);
}obj;

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	int top=0;
	int bottom=A.size()-1;
	int left=0;
	int right=A[0].size()-1;
	int value=0;
    while(top<=bottom && left<=right)
    {
        if (value==0)
        {
            for(int i=left; i<=right;i++)
            result.push_back(A[top][i]);
            top++;
        }
        else if (value==1)
        {
            for(int i=top; i<=bottom;i++)
            result.push_back(A[i][right]);
            right--;
        }
        else if (value==2)
        {
            for(int i=right; i>=left;i--)
            result.push_back(A[bottom][i]);
            bottom--;
        }
        else if (value==3)
        {
            for(int i=bottom; i>=top;i--)
            result.push_back(A[i][left]);
            left++;
        }
        value=value+1;
        value=value%4;
    }
	return result;
}

int main() {
	vector<vector<int> > A;
  int count=0;
	int array1[3] = {1,2,3};
	int array2[3] = {4,5,6};
	int array3[3] = {7,8,9};
	vector<int> A1(array1, array1+sizeof(array1)/sizeof(array1[0]));
	vector<int> A2(array2, array2+sizeof(array2)/sizeof(array2[0]));
	vector<int> A3(array3, array3+sizeof(array3)/sizeof(array3[0]));
	A.push_back(A1);
	A.push_back(A2);
	A.push_back(A3);
  cout<<"Original Array: "<<endl;
  cout<< "1   2   3"<<endl;
  cout<< "4   5   6"<<endl;
  cout<< "7   8   9"<<endl;
  cout<<"Spiral Order"<<endl;
	vector<int> B = obj.spiralOrder(A);
	for (int i=0; i<B.size(); i++) {
		cout << B[i] << endl;
	}
	return 0;
}
