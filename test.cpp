#include<iostream>
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>

using namespace std;
extern "C" {
    int square(int n);
	long long calculate(int* in_array, int length);
	long long fibonacci(int n);
 }
 
 
 int square(int n){
	std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    int sum = std::accumulate(v.begin(), v.end(), 0);
	return sum;
}

long long calculate(int* in_array, int length){
	double res = 0;
	  for(int i=0; i<length; i++)
		res += in_array[i];
	  return res;
}
 
 long long fibonacci(int n) {
	if (n == 0 || n == 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
 }