#pragma once

#include <Baz.hpp>
#include <Alpha_EXPORT.h>
#include "spdlog/spdlog.h"

namespace Demo
{

class ALPHA_EXPORT Ba
	{
 public:
  static void say() {
    Baz::say();
#if (FOO_Demo_DEBUG)
    const char* m = "Demo.hpp (Debug)";
#else
    const char* m = "Demo.hpp (Not debug)";
#endif
    SPDLOG_INFO("{}", m);
    cpp_say();
  }

 private:
  static void cpp_say();
};

}

