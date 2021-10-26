#include <vector>

class stats
{
    float Avg = 0f;
    float Max = 0f;
    float Min = 0f;
 };
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&Vector_elements);
}
