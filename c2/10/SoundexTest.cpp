#include <string>

class Soundex
{
public:
   std::string encode(const std::string& word) const {
      return zeroPad(word);
   }

private:
   std::string zeroPad(const std::string& word) const {
      return word + "000";
   }
};


#include "gtest/gtest.h" 


class SoundexEncoding: public testing::Test {
public:
   Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
   auto encoded = soundex.encode("A");

   ASSERT_EQ(encoded, "A000"); 
}

TEST_F(SoundexEncoding, PadsWithZerosToEnsureThreeDigits) {
   auto encoded = soundex.encode("I");

   ASSERT_EQ(encoded, "I000");
}
