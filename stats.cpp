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

StatsAlerter::StatsAlerter(float Threshold,std::vector<IAlerter*>&Alert)
    {
        Threshold_local = Threshold;
        Alert_local = Alert;
    }
    
 void StatsAlerter::checkAndAlert(const std::vector<float>&vect) 
    {
        if(*std::min_element(vect.begin(), vect.end()))
        {
            Alert_local[0]->emailSent = 1;
            Alert_local[1]->ledGlows =1;
        }
        else
        {
        Alert_local[0]->emailSent = 0;
        Alert_local[1]->ledGlows =0;
        }
    }
