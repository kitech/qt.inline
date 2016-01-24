// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qabstractnativeeventfilter.h
// dst-file: /src/core/qabstractnativeeventfilter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractnativeeventfilter.h>


// <= header block end

// main block begin =>
void __keep_qabstractnativeeventfilter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractNativeEventFilter_Class_Size()
{
  return sizeof(QAbstractNativeEventFilter);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qabstractnativeeventfilter.h', line 49, column 18>
//   // proto:  bool QAbstractNativeEventFilter::nativeEventFilter(const QByteArray & eventType, void * message, long * result);
// _ZN26QAbstractNativeEventFilter17nativeEventFilterERK10QByteArrayPvPl nativeEventFilter(const class QByteArray &, void *, long *)
extern "C"
bool
C_ZN26QAbstractNativeEventFilter17nativeEventFilterERK10QByteArrayPvPl(void *qthis,
const QByteArray* arg1,
void * arg2,
long * arg3) {
  auto ret =
  ((QAbstractNativeEventFilter*)qthis)->nativeEventFilter(*((const QByteArray*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractnativeeventfilter.h', line 46, column 5>
//   // proto:  void QAbstractNativeEventFilter::QAbstractNativeEventFilter();
extern "C"
QAbstractNativeEventFilter*
C_ZN26QAbstractNativeEventFilterC2Ev() {
  // auto ret = new QAbstractNativeEventFilter();
}
//   // proto:  void QAbstractNativeEventFilter::~QAbstractNativeEventFilter();
extern "C"
void C_ZN26QAbstractNativeEventFilterD2Ev(void *qthis) {
  delete (QAbstractNativeEventFilter*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

