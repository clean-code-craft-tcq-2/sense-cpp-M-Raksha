#include <vector>

class Stats
{
    public:
    float average = 0.0f;
    float max = 0.0f;
    float min = 0.0f;
 };
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&Vector_elements);
}
class IAlerter
{
   public:
    bool emailSent;
    bool ledGlows;

};

class EmailAlert:public IAlerter
{
  
};  

class LEDAlert :public IAlerter
{
   
};
class StatsAlerter
{
    private:
    float Threshold_local;
    std::vector<IAlerter*>Alert_local;
    public:
    StatsAlerter(float Threshold,std::vector<IAlerter*>&Alert);
    void checkAndAlert(const std::vector<float>&vect);
};
