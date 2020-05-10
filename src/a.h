#pragma once
#include <iostream>

#include "log.h"

class A {
 public:
  void TestLog() {
    LOG(INFO) << "Hello world";
    LOG(INFO) << "hello i am info!";
    LOG(WARNING) << "hello i am warning test";  //输出一个Warning日志
    LOG(ERROR) << "hello i am error test";      //输出一个Error日志
  }
};