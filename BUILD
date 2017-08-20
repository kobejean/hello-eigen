cc_library(
    name = "logistic_layer",
    srcs = ["logistic_layer.cc"],
    hdrs = ["logistic_layer.h"],
    deps = [
        "//third_party/eigen3:eigen3"
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        "//third_party/eigen3:eigen3",
        ":logistic_layer",
    ],
)
