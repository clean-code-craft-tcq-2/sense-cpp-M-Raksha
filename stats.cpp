#include "stats.h"
#include <bits/stdc++.h>

Stats Statistics::ComputeStatistics(const std::vector<flaot>vect ) {
    
    Stats s;
    float sum = 0f;
    float avg, max,min;
    for (int i=0; i<vect.size(); i++)
    {
        sum = sum+vect[i];
        s.avg = sum/vect.size();
    }
    s.min=*min_element(vect.begin(), vect.end());
    s.max =*max_element(vect.begin(), vect.end());
    
    return s;
    //Implement statistics here
}
