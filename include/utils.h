#ifndef __UTILS_H__
#define __UTILS_H__

#pragma once
#include <iostream>
class Utils {
 friend class UtilsTest;
 public:
  static int addFiveForTest(int num);
  static int addThree(int num);
};


#endif //__UTILS_H__