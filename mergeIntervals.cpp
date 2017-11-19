/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : merge Intervals For ex: [1,3],[6,9] merge with [2,5] Output should be: [1,5],[6,9]
 Given       :
  struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};
 ==============================================================================================================================
 */
 
 #include <iostream>
#include <vector>
using namespace std;

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};

class Solution
{
public:
  vector<Interval> insert(vector<Interval> &intervals, Interval);
}obj;

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval)
{
  vector<Interval> result;
	if (!intervals.size())
  {
		result.push_back(newInterval);
	}
	else if (newInterval.end < intervals[0].start)
  {
		result.push_back(newInterval);
		for (int i=0; i<intervals.size(); i++)
    {
			result.push_back(intervals[i]);
		}
	}
  else if (newInterval.start > intervals[intervals.size()-1].end)
  {
    	for (int i=0; i<intervals.size(); i++)
      {
			  result.push_back(intervals[i]);
		  }
		result.push_back(newInterval);
	}
  else
  {
		int replace = 0;
		for (int i=0; i<intervals.size(); i++)
    {
			if (max(intervals[i].start, newInterval.start) > min(intervals[i].end, newInterval.end))
      {
				if (replace)
        {
					result.push_back(newInterval);
					replace = 0;
				}
        else if (i > 0 && intervals[i-1].end < newInterval.start && intervals[i].start > newInterval.end)
        {
					result.push_back(newInterval);
				}
				result.push_back(intervals[i]);
			  }
        else
        {
				replace = 1;
				newInterval.start = min(intervals[i].start, newInterval.start);
				newInterval.end = max(intervals[i].end, newInterval.end);
			  }
		}
		if (replace)
    {
			result.push_back(newInterval);
		}
	}
return result;
}

int main() {
	Interval input[2], merge;
  input[0].start = 1;
  input[0].end = 3;
  input[1].start = 6;
  input[1].end = 9;
  cout<<endl;
  cout<<"Original:"<<endl;
  cout<<"[ 1 , 3 ]"<<endl;
  cout<<"[ 6 , 9 ]"<<endl;
  cout<<endl;
  cout<<"Insert and merge [ 2 , 5 ]"<<endl;
  cout<<endl;
	vector<Interval> intervals(input, input + sizeof(input) / sizeof(input[0]));
	merge.start = 2;
	merge.end = 5;
	vector<Interval> result = obj.insert(intervals, merge);
	for (int i=0; i<result.size(); i++){
		cout <<"[ "<< result[i].start << " , " << result[i].end <<" ]"<< endl;
	}
	return 0;
}
