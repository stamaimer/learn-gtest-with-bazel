cc_library(
    name = "libtested",
    hdrs = ["Soundex.h"],
)

cc_test(
    name = "11",
    srcs = ["SoundexTest.cpp"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
	"//c2/11:libtested",
    ],
)
