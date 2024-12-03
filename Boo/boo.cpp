#include <Ba.hpp>
#include "spdlog/spdlog.h"

int main()
{
  SPDLOG_INFO("Hello, Boo!");
  Demo::Ba::say();
  return 0;
}
