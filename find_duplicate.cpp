/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Find duplicates in an Array
 WARNING     : Solution give below is not the most efficient
 ==============================================================================================================================
 */
 
#include <iostream>
#include <vector>
using namespace std;
int repeatedNumber(const vector<int> &A)
{
  vector<int>B=A;
    int duplicate=-1;
    sort(B.begin(),B.end());
for(int i=0; i<B.size(); i++)
{
  if(B[i]==B[i+1])
  {
    duplicate = B[i];
    cout << B[i]<<endl;
  }
}
return duplicate;
}

int main() {
int array1[8] = {1,2,3,4,2,7,3,7};
cout<<"Original array = {1,2,3,4,2,7,3,7}"<<endl;
cout<<"Repeated nos are: "<<endl;
int duplicate=0;
vector<int> A(array1, array1+sizeof(array1)/sizeof(array1[0]));
duplicate= repeatedNumber(A) ;
//cout<<duplicate<<endl;
	return 0;
}
