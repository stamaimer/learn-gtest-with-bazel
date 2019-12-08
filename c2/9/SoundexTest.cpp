#include <string>

class Soundex
{
public:
   std::string encode(const std::string& word) const {
      return word + "000";
   }
};


#include "gtest/gtest.h" 


TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
   Soundex soundex;
   
   auto encoded = soundex.encode("A");

   ASSERT_EQ(encoded, "A000"); 
}

TEST(SoundexEncoding, PadsWithZerosToEnsureThreeDigits) {
   Soundex soundex;

   auto encoded = soundex.encode("I");

   ASSERT_EQ(encoded, "I000");
}
