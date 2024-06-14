#include <string_view>
#include <cstdlib>
#include <cstdio>
namespace tools
{
    void assert(bool condition,std::string_view sv)
    {
        if(condition)
        {
            printf("%s\n",sv.data());
            exit(-1);
        }
    }
} // namespace tools
