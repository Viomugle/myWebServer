#include <string_view>
#include <cstdlib>
#include <cstdio>
#include <string>
namespace tools
{
    void assert(bool condition,std::string sv)
    {
        if(condition)
        {
            printf("%s\n",sv.c_str());
            exit(-1);
        }
    }
} // namespace tools
