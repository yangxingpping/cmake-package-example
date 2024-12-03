#include <Bar.hpp>
#include "spdlog/spdlog.h"

int main()
{
  SPDLOG_INFO("Hello, Boo!");
  bar::Bar::say();
  return 0;
}
