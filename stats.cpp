#include "stats.h"
#include<iostream>
#include <numeric>
#include<algorithm>
using namespace Statistics;
using  namespace std;

Stats Statistics::ComputeStatistics(const std::vector<float>& v ) {
    //Implement statistics here
    Stats ret;
     int n = v.size(); 
    if (n == 0) 
    {
        ret.average = 0;
        ret.max = 0;
        ret.min = 0;
    }
  
    else { 
        // sum of the vector elements 
        double sum = accumulate(v.begin(), v.end(), 0.0); 
  
        // average of the vector elements 
        double avg = sum / n; 
    ret.average = avg;
    ret.max = *max_element(v.begin(), v.end());
    ret.min = *min_element(v.begin(), v.end());


}
return ret;
}
