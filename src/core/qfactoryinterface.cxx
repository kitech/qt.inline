// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qfactoryinterface.h
// dst-file: /src/core/qfactoryinterface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfactoryinterface.h>


#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qfactoryinterface_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFactoryInterface_Class_Size()
{
  return sizeof(QFactoryInterface);
}

// <= use block end

// ext block begin =>
//   // proto:  void QFactoryInterface::~QFactoryInterface();
extern "C"
void C_ZN17QFactoryInterfaceD2Ev(void *qthis) {
  delete (QFactoryInterface*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfactoryinterface.h', line 46, column 25>
//   // proto:  QStringList QFactoryInterface::keys();
// _ZNK17QFactoryInterface4keysEv keys()
extern "C"
QStringList*
C_ZNK17QFactoryInterface4keysEv(void *qthis) {
  auto ret =
  ((QFactoryInterface*)qthis)->keys();
  return new QStringList(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

