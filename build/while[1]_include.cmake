if(EXISTS "/home/dogthie/CppPractice/build/while[1]_tests.cmake")
  include("/home/dogthie/CppPractice/build/while[1]_tests.cmake")
else()
  add_test(while_NOT_BUILT while_NOT_BUILT)
endif()
