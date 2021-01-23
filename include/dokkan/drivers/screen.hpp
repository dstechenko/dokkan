#ifndef DOKKAN_DRIVERS_SCREEN_H
#define DOKKAN_DRIVERS_SCREEN_H

#include <stdint.h>

namespace dokkan::drivers {

class Screen {
 public:
  explicit Screen() = delete;
  static void print(const char* text);
  static void printAt(const char* text, int16_t col, int16_t row);
  static void printLine(const char* text);
  static void printLine();
  static void clear();
};

}  // namespace dokkan::drivers

#endif