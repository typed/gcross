
#工程名
project(libToLuapp)

#源文件
file(GLOB SOURCE "*.cpp" "*.c" "*.h")

#unicode字符集
add_definitions(-DUNICODE -D_UNICODE)

include_directories(../Lua/${LUAVER})

add_library(libToLuapp STATIC ${SOURCE})
