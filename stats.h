#include <vector>

class Stats
{
    float Avg = 0.0f;
    float Max = 0.0f;
    float Min = 0.0f;
 };
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&Vector_elements);
}
