#include "oop1.h"
#include <gtest/gtest.h>
#include <string>

TEST(ReplaceNthCharacterTest, BasicReplacement) {
    EXPECT_EQ(replace_nth_character("hello", 2, 'l', 'x'), "helxo");
    EXPECT_EQ(replace_nth_character("hello world", 1, 'l', 'L'), "heLLo worLd");
}

TEST(ReplaceNthCharacterTest, NoReplacementWhenNZero) {
    EXPECT_EQ(replace_nth_character("hello", 0, 'l', 'x'), "hello");
}

TEST(ReplaceNthCharacterTest, NoReplacementWhenNTooLarge) {
    EXPECT_EQ(replace_nth_character("hello", 10, 'l', 'x'), "hello");
}

TEST(ReplaceNthCharacterTest, CharacterNotFound) {
    EXPECT_EQ(replace_nth_character("hello", 2, 'z', 'x'), "hello");
}

TEST(ReplaceNthCharacterTest, MultipleReplacements) {
    EXPECT_EQ(replace_nth_character("aaa", 1, 'a', 'b'), "bbb");
    EXPECT_EQ(replace_nth_character("aaa", 2, 'a', 'b'), "aba");
}

TEST(ReplaceNthCharacterTest, EmptyString) {
    EXPECT_EQ(replace_nth_character("", 1, 'a', 'b'), "");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}