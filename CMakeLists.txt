cmake_minimum_required(VERSION 3.10.2)

project(myfirstplugin)

add_library( myfirstplugin SHARED my_module.cc my_module.h)

target_include_directories(myfirstplugin PUBLIC /usr/local/include/snort)

