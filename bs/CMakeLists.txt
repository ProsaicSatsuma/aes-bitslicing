cmake_minimum_required(VERSION 3.5)

project(aes_bs_lib)

add_library(aes_bs_lib STATIC
    sbox-forward.c
    sbox-forward.h
    pack.c
    pack.h
)

add_subdirectory(tests)
