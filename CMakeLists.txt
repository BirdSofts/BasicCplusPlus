# ============================================================================
# / <summary>
# / CMakeLists.txt
# / CplusPlus
# / created by Mehrdad Soleimanimajd on 18.04.2019
# / </summary>
# / <created>ʆϒʅ, 18.04.2019</created>
# / <changed>ʆϒʅ, 02.07.2023</changed>
# ============================================================================

cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

set(TARGET_NAME CplusPlus)

set(PROJECT_NAME ${TARGET_NAME})

set(CMAKE_CXX_COMPILER GCC)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_STANDARD 17)

project(${PROJECT_NAME}
  VERSION 1.0.1.0
  DESCRIPTION "CplusPlus Notes and Examples"
  HOMEPAGE_URL "https://github.com/s-mehrdad/CplusPlus"
  LANGUAGES CXX
)

set(VerCompanyName "BirdSofts")
set(VerFileDescription "CplusPlus Notes and Examples")
set(VerFileVersion "1,0,1,0")

# set(VerFileVersion
# ${CMAKE_PROJECT_VERSION_MAJOR},
# ${CMAKE_PROJECT_VERSION_MINOR},
# ${CMAKE_PROJECT_VERSION_PATCH},
# ${CMAKE_PROJECT_VERSION_TWEAK}
# )
set(VerInternalName ${TARGET_NAME})
set(VerLegalCopyright "Copyright (C) 2018-2023")
set(VerLegalTrademarks1 "BS")
set(VerLegalTrademarks2 "BSs")
set(VerOriginalFilename ${TARGET_NAME})
set(VerProductName ${TARGET_NAME})
set(VerProductVersion ${CMAKE_PROJECT_VERSION})

set(VerProjectType VFT_APP)

configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/CplusPlus.rc.in
  CplusPlus.rc
  @ONLY
  NEWLINE_STYLE
  LF
)

list(APPEND RESOURCES
  ${CMAKE_CURRENT_BINARY_DIR}/${TARGET_NAME}.rc
  resource.h
)

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
