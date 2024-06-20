#ifndef _TOOLS_HPP_
#define _TOOLS_HPP_
#pragma once
#include <string_view>
#include <cstdlib>
#include <cstdio>
#include <string>
namespace tools
{
    void assert(bool condition,const char* mess);
} // namespace tools
#endif