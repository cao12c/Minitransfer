# CMakeList.txt: Minitransfer 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

# 将源代码添加到此项目的可执行文件。
add_executable (Minitransfer "Minitransfer.cpp" "Minitransfer.h")
add_executable (Server "Server.cpp")
add_executable (Client "Client.cpp")




if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Minitransfer PROPERTY CXX_STANDARD 17)
  set_property(TARGET Server PROPERTY CXX_STANDARD 17)
  set_property(TARGET Client PROPERTY CXX_STANDARD 17)
endif()

# TODO: 如有需要，请添加测试并安装目标。
