#include "gtest/gtest.h" 
#include "Soundex.h"

using namespace testing;

class SoundexEncoding: public Test {
public:
   Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
   ASSERT_EQ(soundex.encode("A"), "A000"); 
}

TEST_F(SoundexEncoding, PadsWithZerosToEnsureThreeDigits) {
   ASSERT_EQ(soundex.encode("I"), "I000");
}

