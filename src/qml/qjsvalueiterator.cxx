// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qjsvalueiterator.h
// dst-file: /src/qml/qjsvalueiterator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qjsvalueiterator.h>


#include <qjsvalue.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qjsvalueiterator_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QJSValueIterator_Class_Size()
{
  return sizeof(QJSValueIterator);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalueiterator.h', line 58, column 14>
//   // proto:  QJSValue QJSValueIterator::value();
// _ZNK16QJSValueIterator5valueEv value()
extern "C"
QJSValue*
C_ZNK16QJSValueIterator5valueEv(void *qthis) {
  auto ret =
  ((QJSValueIterator*)qthis)->value();
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalueiterator.h', line 54, column 10>
//   // proto:  bool QJSValueIterator::next();
// _ZN16QJSValueIterator4nextEv next()
extern "C"
bool
C_ZN16QJSValueIterator4nextEv(void *qthis) {
  auto ret =
  ((QJSValueIterator*)qthis)->next();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QJSValueIterator::~QJSValueIterator();
extern "C"
void C_ZN16QJSValueIteratorD2Ev(void *qthis) {
  delete (QJSValueIterator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalueiterator.h', line 50, column 5>
//   // proto:  void QJSValueIterator::QJSValueIterator(const QJSValue & value);
extern "C"
QJSValueIterator*
C_ZN16QJSValueIteratorC2ERK8QJSValue(const QJSValue* arg1) {
  auto ret = new QJSValueIterator(*((const QJSValue*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalueiterator.h', line 53, column 10>
//   // proto:  bool QJSValueIterator::hasNext();
// _ZNK16QJSValueIterator7hasNextEv hasNext()
extern "C"
bool
C_ZNK16QJSValueIterator7hasNextEv(void *qthis) {
  auto ret =
  ((QJSValueIterator*)qthis)->hasNext();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsvalueiterator.h', line 56, column 13>
//   // proto:  QString QJSValueIterator::name();
// _ZNK16QJSValueIterator4nameEv name()
extern "C"
QString*
C_ZNK16QJSValueIterator4nameEv(void *qthis) {
  auto ret =
  ((QJSValueIterator*)qthis)->name();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

