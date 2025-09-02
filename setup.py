from setuptools import setup, Extension

pykatex_ext = Extension(
    "pykatex",
    sources=[
        "src/pykatex.c",
        "src/katex.c", 
        "src/quickjs/quickjs-libc.c",
        "src/quickjs/quickjs.c",
        "src/quickjs/libregexp.c",
        "src/quickjs/libunicode.c",
        "src/quickjs/cutils.c",
        "src/quickjs/xsum.c"
    ],
    include_dirs=["src/quickjs"],
    define_macros=[
        ("_GNU_SOURCE", None),
        ("CONFIG_VERSION", "\"2025-04-26\"")
    ]
)

setup(
    ext_modules=[pykatex_ext]
)
