if(EXISTS "/home/dogthie/cpp-practice/build/case[1]_tests.cmake")
  include("/home/dogthie/cpp-practice/build/case[1]_tests.cmake")
else()
  add_test(case_NOT_BUILT case_NOT_BUILT)
endif()
