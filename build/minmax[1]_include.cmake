if(EXISTS "/home/dogthie/CppPractice/build/minmax[1]_tests.cmake")
  include("/home/dogthie/CppPractice/build/minmax[1]_tests.cmake")
else()
  add_test(minmax_NOT_BUILT minmax_NOT_BUILT)
endif()