#include <chrono>
#include <iostream>


class SimpleRuntimeMeter
{
public:
    SimpleRuntimeMeter(const std::string &id);
    ~SimpleRuntimeMeter();

protected:
private:
    const std::string m_id;
    const std::chrono::steady_clock::time_point m_startTime;
};
