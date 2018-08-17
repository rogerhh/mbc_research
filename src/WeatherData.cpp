#include "WeatherData.hpp"

#include <stdexcept>
#include <string>
#include <sstream>

namespace MBC
{

WeatherData::WeatherData()
{
    time = 0;
    data = std::vector<double>(SIZE_OF_DATA_FIELDS, -1000);
}

WeatherData::WeatherData(std::time_t time_in)
: time(time_in)
{
    data = std::vector<double>(SIZE_OF_DATA_FIELDS, -1000);
}

std::ostream& operator<<(std::ostream& os, WeatherData& weatherdata)
{
    os << weatherdata.time;
    for(int i = 0; i < WeatherData::SIZE_OF_DATA_FIELDS; i++)
    {
        os << ",";
        double data_val = weatherdata.data[i];
        if(data_val != -1000)
        {
            os << data_val;
        }
    }
    return os;
}

} // namespace MBC