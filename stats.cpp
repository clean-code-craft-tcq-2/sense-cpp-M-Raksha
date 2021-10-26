#include "stats.h"
#include "math.h"
#include "algorithm"

Stats Statistics::ComputeStatistics(const std::vector<float>&vect ) {
    Stats Calcualtion;
    float sum = 0.0f;
    if(vect.empty())
    {
        Calcualtion.Avg = NAN;
        Calcualtion.Min= NAN;
        Calcualtion.Max =NAN;
    }
    else
    {
        for (int i=0; i<vect.size(); i++)
        {
            sum = sum+vect[i];
        }
        Calcualtion.Avg = sum/vect.size();
        Calcualtion.Min=*min_element(vect.begin(), vect.end());
        Calcualtion.Max =*max_element(vect.begin(), vect.end());
    }
    return Calcualtion;
}
