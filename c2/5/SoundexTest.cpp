#include <string>

class Soundex
{
public:
   std::string encode(const std::string& word) const {
      return "";
   }
};

#include "gtest/gtest.h"

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
   Soundex soundex;
   
   auto encoded = soundex.encode("A");

   ASSERT_EQ(encoded, "A"); 
}

