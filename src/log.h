#pragma once
#include <iostream>
#include <glog/logging.h>

class MyLog{
  public:
  void Init(){
    google::InitGoogleLogging("test");
    google::SetLogDestination(google::INFO, "../log/");
    // FLAGS_logtostderr = 1;
    google::SetLogFilenameExtension("log_");
    FLAGS_colorlogtostderr = true;  // Set log color
    google::SetStderrLogging(google::GLOG_INFO);
  }

  void Destroy() {
    google::ShutdownGoogleLogging();  //不用log的时候应该释放掉，不然会内存溢出
  }

};