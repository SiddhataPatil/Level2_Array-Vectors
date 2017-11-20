/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Given an unsorted integer array, find the first missing positive integer.
 Example     : Given [1,2,0] return 3,, 5, 9}; o/p: 9534330
 ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int firstMissingPositive(vector<int> &A);
}obj;

void sort (vector<int> &A, int i)
{
  int temp=A[A[i]-1];
  A[A[i]-1]=A[i];
  A[i]=temp;
}

int Solution::firstMissingPositive(vector<int> &A) {
    int array_size= A.size();
    for(int i=0;i<array_size;i++){
            if(A[i]>0&&A[i]<=array_size){
                if(A[i]-1!=i&&A[A[i]-1]!=A[i]){
                    sort(A,i);
                    i--;
                }
            }
        }
        for(int i=0;i<array_size;i++)
            if(A[i]!=i+1)
                return i+1;
        return array_size+1;
}

int main() {
int array1[4] = {3,4,-1,1};
cout<<"Original array = {3,4,-1,1}"<<endl;
cout<<"Missing positive integer is: "<<endl;
int result=0;
vector<int> A(array1, array1+sizeof(array1)/sizeof(array1[0]));
result= obj.firstMissingPositive(A) ;
cout<<result<<endl;
	return 0;
}
