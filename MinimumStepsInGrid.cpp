/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Minimum Steps in Infinite grid
               You are given a sequence of points and the order in which you need to cover the points. 
               Give the minimum number of steps in which you can achieve it.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
 int coverPoints(vector<int> &X, vector<int> &Y);
}obj;

int Solution::coverPoints(vector<int> &X, vector<int> &Y)
{
    int minSteps=0;
    for(int i=0; i<X.size()-1;i++)
    {
        int stepsX = X[i] > X[i+1] ? X[i] - X[i+1] : X[i+1] - X[i];
        int stepsY = Y[i] > Y[i+1] ? Y[i] - Y[i+1] : Y[i+1] - Y[i];
        if (stepsX < stepsY) {
            minSteps += stepsX + (stepsY - stepsX);
        } else {
            minSteps += stepsY + (stepsX - stepsY);
        }
    }
    return minSteps;
}

int main() {
    int x[] = {0, 1, 1};
    int y[] = {0, 1, 2};
    int steps=0;
    vector<int> X(x, x+sizeof(x)/sizeof(x[0]));
    vector<int> Y(y, y+sizeof(y)/sizeof(y[0]));
    steps=obj.coverPoints(X, Y);
    cout<<"Minimum Steps required = "<<steps<<endl;
    return 0;
}
