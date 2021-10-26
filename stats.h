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
