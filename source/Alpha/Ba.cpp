#pragma once
#include <Ba.hpp>
#include "spdlog/spdlog.h"
namespace Demo
{

void Ba::cpp_say() {
#if (FOO_Demo_DEBUG)
  const char* m = "Demo.cpp (Debug)";
#else
  const char* m = "Demo.cpp (Not debug)";
#endif
  SPDLOG_INFO(m);
}

} // namespace foo
