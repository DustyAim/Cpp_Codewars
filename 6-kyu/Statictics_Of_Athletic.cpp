#include <string>
#include <vector>
#include <climits>
#include <algorithm>
#include <sstream>
#include <iomanip>

class Stat
{
public:
  static std::vector<int> parse_times (const std::string& input){
    std::vector<int> results;
    int temp = 0;

    if (input.empty()) return {};

    for (char c: input){
      if (c >= '0' && c <= '9')
          temp = temp * 10 + (c - '0');
      else if ((c == '|') || (c == ',')) {
        results.push_back(temp);
        temp = 0; }
    }
    results.push_back(temp);

    std::vector<int> ready_data;
    for (size_t runner = 0; runner + 2 < results.size(); runner += 3) {
    int seconds = results[runner] * 3600 + results[runner + 1] * 60 + results[runner + 2];
    ready_data.push_back(seconds);
    }
    return ready_data;
  }

  static int average(const std::vector<int>& times){
    int sum = 0;
    for (size_t i = 0; i < times.size(); i++)
      sum += times[i];
    return sum/static_cast<int>(times.size());
    }

  static int range(const std::vector<int>& times){
    int max = INT_MIN;
    int min = INT_MAX;
    for (size_t i = 0; i < times.size(); i++){
      if (times[i] > max) max = times[i];
      if (times[i] < min) min = times[i];
    }
    return max - min;
  }

  static int median(std::vector<int> times){
    std::sort(times.begin(), times.end());
    int n = times.size();
    if (n % 2 == 1)
    return times[n / 2];
    return (times[n / 2 - 1] + times[n / 2]) / 2;
  }

  static std::string formatTime(int totalSeconds) {
    int h = totalSeconds / 3600;
    int m = (totalSeconds % 3600) / 60;
    int s = totalSeconds % 60;

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << h << "|"
        << std::setw(2) << std::setfill('0') << m << "|"
        << std::setw(2) << std::setfill('0') << s;
    return oss.str();
  }


  static std::string stat(const std::string& strg) {

    if (strg.empty()) return "";
    std::vector<int> times = parse_times(strg);

    return "Range: "   + formatTime(range(times))   +
           " Average: " + formatTime(average(times)) +
           " Median: "  + formatTime(median(times));
  }
};
