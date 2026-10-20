#include <cmath>
#include <numeric>

std::vector<double> distancesFromAverage(std::vector<int> input)
{
    double avg = std::accumulate(input.begin(), input.end(), 0.0) / (input.size() );
    std::vector<double> diffs;
    for (int i = 0; i < input.size(); i++){
        diffs.push_back(avg - input[i]);
    }
    return diffs;
}