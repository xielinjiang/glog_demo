
#include <iostream>
#include "log.h"
#include "a.h"
int main() {
  MyLog mylog;
  mylog.Init();
  A a;
  a.TestLog();
  mylog.Destroy();
  return 0;
}