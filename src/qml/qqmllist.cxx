// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmllist.h
// dst-file: /src/qml/qqmllist.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmllist.h>


// <= header block end

// main block begin =>
void __keep_qqmllist_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlListReference_Class_Size()
{
  return sizeof(QQmlListReference);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 112, column 5>
//   // proto:  void QQmlListReference::QQmlListReference(const QQmlListReference & );
extern "C"
QQmlListReference*
C_ZN17QQmlListReferenceC2ERKS_(const QQmlListReference* arg1) {
  auto ret = new QQmlListReference(*((const QQmlListReference*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 131, column 10>
//   // proto:  bool QQmlListReference::clear();
// _ZNK17QQmlListReference5clearEv clear()
extern "C"
bool
C_ZNK17QQmlListReference5clearEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->clear();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 119, column 24>
//   // proto:  const QMetaObject * QQmlListReference::listElementType();
// _ZNK17QQmlListReference15listElementTypeEv listElementType()
extern "C"
void*
C_ZNK17QQmlListReference15listElementTypeEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->listElementType();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 123, column 10>
//   // proto:  bool QQmlListReference::canClear();
// _ZNK17QQmlListReference8canClearEv canClear()
extern "C"
bool
C_ZNK17QQmlListReference8canClearEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->canClear();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 127, column 10>
//   // proto:  bool QQmlListReference::isReadable();
// _ZNK17QQmlListReference10isReadableEv isReadable()
extern "C"
bool
C_ZNK17QQmlListReference10isReadableEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->isReadable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 110, column 5>
//   // proto:  void QQmlListReference::QQmlListReference();
extern "C"
QQmlListReference*
C_ZN17QQmlListReferenceC2Ev() {
  auto ret = new QQmlListReference();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 124, column 10>
//   // proto:  bool QQmlListReference::canCount();
// _ZNK17QQmlListReference8canCountEv canCount()
extern "C"
bool
C_ZNK17QQmlListReference8canCountEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->canCount();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 132, column 9>
//   // proto:  int QQmlListReference::count();
// _ZNK17QQmlListReference5countEv count()
extern "C"
int
C_ZNK17QQmlListReference5countEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 111, column 5>
//   // proto:  void QQmlListReference::QQmlListReference(QObject * , const char * property, QQmlEngine * );
extern "C"
QQmlListReference*
C_ZN17QQmlListReferenceC2EP7QObjectPKcP10QQmlEngine(QObject * arg1,
const char * arg2,
QQmlEngine * arg3) {
  auto ret = new QQmlListReference(arg1, arg2, arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 122, column 10>
//   // proto:  bool QQmlListReference::canAt();
// _ZNK17QQmlListReference5canAtEv canAt()
extern "C"
bool
C_ZNK17QQmlListReference5canAtEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->canAt();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QQmlListReference::~QQmlListReference();
extern "C"
void C_ZN17QQmlListReferenceD2Ev(void *qthis) {
  delete (QQmlListReference*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 130, column 14>
//   // proto:  QObject * QQmlListReference::at(int );
// _ZNK17QQmlListReference2atEi at(int)
extern "C"
void*
C_ZNK17QQmlListReference2atEi(void *qthis,
int arg1) {
  auto ret =
  ((QQmlListReference*)qthis)->at(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 118, column 14>
//   // proto:  QObject * QQmlListReference::object();
// _ZNK17QQmlListReference6objectEv object()
extern "C"
void*
C_ZNK17QQmlListReference6objectEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->object();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 121, column 10>
//   // proto:  bool QQmlListReference::canAppend();
// _ZNK17QQmlListReference9canAppendEv canAppend()
extern "C"
bool
C_ZNK17QQmlListReference9canAppendEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->canAppend();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 126, column 10>
//   // proto:  bool QQmlListReference::isManipulable();
// _ZNK17QQmlListReference13isManipulableEv isManipulable()
extern "C"
bool
C_ZNK17QQmlListReference13isManipulableEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->isManipulable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 116, column 10>
//   // proto:  bool QQmlListReference::isValid();
// _ZNK17QQmlListReference7isValidEv isValid()
extern "C"
bool
C_ZNK17QQmlListReference7isValidEv(void *qthis) {
  auto ret =
  ((QQmlListReference*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmllist.h', line 129, column 10>
//   // proto:  bool QQmlListReference::append(QObject * );
// _ZNK17QQmlListReference6appendEP7QObject append(class QObject *)
extern "C"
bool
C_ZNK17QQmlListReference6appendEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QQmlListReference*)qthis)->append(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

