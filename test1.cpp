#include <gtest/gtest.h>
#include <fl/Headers.h>

TEST(fuzzylite, basics) {
  // Create an engine; destroy an engine...
  fl::Engine* hybrid = fl::Console::hybrid();
  delete hybrid;
}
