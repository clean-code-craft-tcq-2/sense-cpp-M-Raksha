#include "stats.h"
#include "math.h"
#include "algorithm"

Stats Statistics::ComputeStatistics(const std::vector<float>&vect ) {
    Stats Calcualtion;
    float sum = 0.0f;
    if(vect.empty())
    {
        Calcualtion.average  = NAN;
        Calcualtion.min= NAN;
        Calcualtion.max =NAN;
    }
    else
    {
        for (int i=0; i<vect.size(); i++)
        {
            sum = sum+vect[i];
        }
        Calcualtion.average = sum/vect.size();
        Calcualtion.min=*std::min_element(vect.begin(), vect.end());
        Calcualtion.max =*std::max_element(vect.begin(), vect.end());
    }
    return Calcualtion;
}
