#include "SimpleRuntimeMeter.h"


SimpleRuntimeMeter::SimpleRuntimeMeter(const std::string &id)
    : m_id(id)
    , m_startTime(std::chrono::steady_clock::now())
{

}

SimpleRuntimeMeter::~SimpleRuntimeMeter()
{
    const auto endTime = std::chrono::steady_clock::now();
    const auto duration = endTime - m_startTime;
    std::cout << m_id << ": ";
    std::cout << "operation time"
              << ": " << std::chrono::duration_cast<std::chrono::milliseconds>(duration).count()
              << " ms" << std::endl;
}
