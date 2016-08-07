// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qtemporarydir.h
// dst-file: /src/core/qtemporarydir.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtemporarydir.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qtemporarydir_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTemporaryDir_Class_Size()
{
  return sizeof(QTemporaryDir);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qtemporarydir.h', line 65, column 10>
//   // proto:  bool QTemporaryDir::remove();
// _ZN13QTemporaryDir6removeEv remove()
extern "C"
bool
C_ZN13QTemporaryDir6removeEv(void *qthis) {
  auto ret =
  ((QTemporaryDir*)qthis)->remove();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporarydir.h', line 63, column 10>
//   // proto:  bool QTemporaryDir::autoRemove();
// _ZNK13QTemporaryDir10autoRemoveEv autoRemove()
extern "C"
bool
C_ZNK13QTemporaryDir10autoRemoveEv(void *qthis) {
  auto ret =
  ((QTemporaryDir*)qthis)->autoRemove();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporarydir.h', line 60, column 10>
//   // proto:  bool QTemporaryDir::isValid();
// _ZNK13QTemporaryDir7isValidEv isValid()
extern "C"
bool
C_ZNK13QTemporaryDir7isValidEv(void *qthis) {
  auto ret =
  ((QTemporaryDir*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporarydir.h', line 64, column 10>
//   // proto:  void QTemporaryDir::setAutoRemove(bool b);
// _ZN13QTemporaryDir13setAutoRemoveEb setAutoRemove(_Bool)
extern "C"
void
C_ZN13QTemporaryDir13setAutoRemoveEb(void *qthis,
bool arg1) {
  ((QTemporaryDir*)qthis)->setAutoRemove(arg1);
}
//   // proto:  void QTemporaryDir::~QTemporaryDir();
extern "C"
void C_ZN13QTemporaryDirD2Ev(void *qthis) {
  delete (QTemporaryDir*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporarydir.h', line 56, column 5>
//   // proto:  void QTemporaryDir::QTemporaryDir();
extern "C"
QTemporaryDir*
C_ZN13QTemporaryDirC2Ev() {
  auto ret = new QTemporaryDir();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporarydir.h', line 57, column 14>
//   // proto:  void QTemporaryDir::QTemporaryDir(const QString & templateName);
extern "C"
QTemporaryDir*
C_ZN13QTemporaryDirC2ERK7QString(const QString* arg1) {
  auto ret = new QTemporaryDir(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporarydir.h', line 67, column 13>
//   // proto:  QString QTemporaryDir::path();
// _ZNK13QTemporaryDir4pathEv path()
extern "C"
QString*
C_ZNK13QTemporaryDir4pathEv(void *qthis) {
  auto ret =
  ((QTemporaryDir*)qthis)->path();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporarydir.h', line 61, column 13>
//   // proto:  QString QTemporaryDir::errorString();
// _ZNK13QTemporaryDir11errorStringEv errorString()
extern "C"
QString*
C_ZNK13QTemporaryDir11errorStringEv(void *qthis) {
  auto ret =
  ((QTemporaryDir*)qthis)->errorString();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

