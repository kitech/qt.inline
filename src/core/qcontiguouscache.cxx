// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qcontiguouscache.h
// dst-file: /src/core/qcontiguouscache.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcontiguouscache.h>


// <= header block end

// main block begin =>
void __keep_qcontiguouscache_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QContiguousCacheData_Class_Size()
{
  return sizeof(QContiguousCacheData);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qcontiguouscache.h', line 61, column 34>
//   // proto: static QContiguousCacheData * QContiguousCacheData::allocateData(int size, int alignment);
// _ZN20QContiguousCacheData12allocateDataEii allocateData(int, int)
extern "C"
void*
C_ZN20QContiguousCacheData12allocateDataEii(int arg1,
int arg2) {
  auto ret =
  QContiguousCacheData::allocateData(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcontiguouscache.h', line 62, column 17>
//   // proto: static void QContiguousCacheData::freeData(QContiguousCacheData * data);
// _ZN20QContiguousCacheData8freeDataEPS_ freeData(struct QContiguousCacheData *)
extern "C"
void
C_ZN20QContiguousCacheData8freeDataEPS_(QContiguousCacheData * arg1) {
  QContiguousCacheData::freeData(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

