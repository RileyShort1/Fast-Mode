//
// modester.cpp
//
//#include <string>
#include <vector>
//#include <iostream>
//#include <map>
//#include <chrono>
//#include <unordered_map>
//#include <bits/stdc++.h>
//using namespace std::chrono;

//using namespace std;

long find_mode(std::vector<long>& nums) 
{
	// max vector size 99999
	int vec[99999] = { 0 };
	
	long currentMax = 0; 
	long numToReturn = 0;
	int  s = nums.size();
	for (int i = 0; i < s; ++i) 
	{
        if (++vec[nums[i]] > currentMax) 
        {
            numToReturn = nums[i];
            currentMax = vec[nums[i]];
        }
	}
	return numToReturn;
}

/*
int main()
{
	std::vector<long> num;

	for (long i = 0; i < 99990; i++)
	{
		num.push_back(i);
	}
	num.push_back(5);
	num.push_back(6);
	num.push_back(14);

	num.push_back(14);

	//cout << "DONE GENERATING LIST" << endl;
	//auto start = high_resolution_clock::now();
	find_mode(num);
	//auto stop = high_resolution_clock::now();

	//auto duration = duration_cast<microseconds>(stop - start);

	//cout << duration.count() << endl;

	return 0;
}
 */