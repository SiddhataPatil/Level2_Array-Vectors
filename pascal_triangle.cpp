/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Pascal Triangle
               For ex: 
               1
               11
               121
               1331
               14641
 ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<vector<int> > generate(int A);
}obj;

int binomial_coefficient(int line, int line_no)
{
    int result = 1;
    if (line_no > line - line_no)
       line_no = line - line_no;
    for (int i = 0; i < line_no; ++i)
    {
        result *= (line - i);
        result /= (i + 1);
    }
    return result;
}

vector<vector<int> > Solution::generate(int A)
{
vector<vector<int> > B;
    int data;
    for (int line = 0; line < A; line++)
    {
      int A1[line+1];
      for (int i = 0; i <= line; i++)
      {
        int data = binomial_coefficient(line, i);
        A1[i]=data;
      }
        vector<int> array1(A1, A1+sizeof(A1)/sizeof(A1[0]));
        B.push_back(array1);
    }
    return B;
}

int main() {
  vector<vector<int> > B;
  B = obj.generate(5);
  for (int i = 0; i < B[i].size(); i++)
  {
      for (int j = 0; j < B[i].size(); j++)
      {
        cout<< B[i][j];
      }
      cout<<endl;
  }
	return 0;
}
