// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qshareddata.h
// dst-file: /src/core/qshareddata.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qshareddata.h>


// <= header block end

// main block begin =>
void __keep_qshareddata_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qshareddata.h', line 60, column 12>
//   // proto:  void QSharedData::QSharedData();
if (true) {
  auto f = []() {
    new QSharedData();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qshareddata.h', line 61, column 12>
//   // proto:  void QSharedData::QSharedData(const QSharedData & );
if (true) {
  auto f = [](const QSharedData & arg1) {
    new QSharedData(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSharedData_Class_Size()
{
  return sizeof(QSharedData);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qshareddata.h', line 60, column 12>
//   // proto:  void QSharedData::QSharedData();
extern "C"
QSharedData*
C_ZN11QSharedDataC2Ev() {
  auto ret = new QSharedData();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qshareddata.h', line 61, column 12>
//   // proto:  void QSharedData::QSharedData(const QSharedData & );
extern "C"
QSharedData*
C_ZN11QSharedDataC2ERKS_(const QSharedData* arg1) {
  auto ret = new QSharedData(*((const QSharedData*)arg1));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

