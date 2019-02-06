cc_library(
    name = "recipes_lib",
    srcs = glob(["src/*.cpp"]),
    hdrs = glob(["src/*.h"]),
)

cc_binary(
    name = "recipes",
    deps = [
        ":recipes_lib",
    ],
)