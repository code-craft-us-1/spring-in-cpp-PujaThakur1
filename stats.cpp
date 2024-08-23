#include "stats.h"
#include<iostream>
#include <numeric>
using namespace Statistics;
using  namespace std;

Stats Statistics::ComputeStatistics(const std::vector<float>& v ) {
    //Implement statistics here
    Stats ret;
     int n = v.size(); 
    if (n == 0) 
        ret.average = 0;
  
    else { 
        // sum of the vector elements 
        double sum = accumulate(v.begin(), v.end(), 0.0); 
  
        // average of the vector elements 
        double avg = sum / n; 
    ret.average = avg;


}
