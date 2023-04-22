
# *******************************************************************************************
#/ <summary>
#/ CMakeLists.txt
#/ CplusPlus
#/ created by Mehrdad Soleimanimajd on 18.04.2019
#/ </summary>
#/ <created>ʆϒʅ, 18.04.2019</created>
#/ <changed>ʆϒʅ, 22.04.2023</changed>
# *******************************************************************************************

cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

set(TARGET_NAME CplusPlus)

set(PROJECT_NAME ${TARGET_NAME})

set(CMAKE_CXX_COMPILER GCC)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_STANDARD 17)

project(${PROJECT_NAME}

  VERSION 1.0.0.1
  DESCRIPTION "CplusPlus Examples And Notes"
  HOMEPAGE_URL "https://github.com/s-mehrdad/CplusPlus"
  LANGUAGES CXX
  )

if(MSVC)
  list(APPEND RESOURCES
    ${TARGET_NAME}.rc
    resource.h
    )
endif(MSVC)

list(APPEND HEADER_FILES
  CplusPlus.h
  _1_Introduction.h
  _2_BasicsOfCplusPlus.h
  _3_ProgramStructure.h
  _4_CompoundDataTypes.h
  _5_Classes.h
  _6_OtherLanguageFeatures.h
  _7_cPlusPlusStandardLibrary.h
  Console.h
  Terminal.h
  )

list(APPEND SOURCE_FILES
  CplusPlus.cpp
  _1_Introduction.cpp
  _2_BasicsOfCplusPlus.cpp
  _3_ProgramStructure.cpp
  _4_CompoundDataTypes.cpp
  _5_Classes.cpp
  _6_OtherLanguageFeatures.cpp
  _7_cPlusPlusStandardLibrary.cpp
  Console.cpp
  Terminal.cpp
  )

if(WIN32)
  list(APPEND SOURCE_FILES ${HEADER_FILES})
endif()

add_executable(${TARGET_NAME} ${SOURCE_FILES} ${RESOURCES})

if(MINGW)
  add_custom_command(TARGET ${TARGET_NAME} PRE_BUILD
    COMMAND cmake -E copy_if_different
    ${CMAKE_PREFIX_PATH}/bin/libgcc_s_seh-1.dll
    ${CMAKE_PREFIX_PATH}/bin/libstdc++-6.dll
    ${CMAKE_PREFIX_PATH}/bin/libwinpthread-1.dll
    $<TARGET_FILE_DIR:${TARGET_NAME}>
    )
endif(MINGW)
