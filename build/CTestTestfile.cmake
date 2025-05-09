# CMake generated Testfile for 
# Source directory: /Users/pswoo/projects/team4/CTIP-team4
# Build directory: /Users/pswoo/projects/team4/CTIP-team4/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(AllTests "/Users/pswoo/projects/team4/CTIP-team4/build/run_tests")
set_tests_properties(AllTests PROPERTIES  _BACKTRACE_TRIPLES "/Users/pswoo/projects/team4/CTIP-team4/CMakeLists.txt;22;add_test;/Users/pswoo/projects/team4/CTIP-team4/CMakeLists.txt;0;")
subdirs("external/googletest")
