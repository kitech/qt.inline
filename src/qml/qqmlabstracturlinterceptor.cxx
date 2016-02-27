// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlabstracturlinterceptor.h
// dst-file: /src/qml/qqmlabstracturlinterceptor.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlabstracturlinterceptor.h>


#include <qurl.h>
// <= header block end

// main block begin =>
void __keep_qqmlabstracturlinterceptor_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qqmlabstracturlinterceptor.h', line 53, column 5>
//   // proto:  void QQmlAbstractUrlInterceptor::QQmlAbstractUrlInterceptor();
if (true) {
  auto f = []() {
    // new QQmlAbstractUrlInterceptor();
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlAbstractUrlInterceptor_Class_Size()
{
  return sizeof(QQmlAbstractUrlInterceptor);
}

// <= use block end

// ext block begin =>
//   // proto:  void QQmlAbstractUrlInterceptor::~QQmlAbstractUrlInterceptor();
extern "C"
void C_ZN26QQmlAbstractUrlInterceptorD2Ev(void *qthis) {
  delete (QQmlAbstractUrlInterceptor*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlabstracturlinterceptor.h', line 55, column 18>
//   // proto:  QUrl QQmlAbstractUrlInterceptor::intercept(const QUrl & path, QQmlAbstractUrlInterceptor::DataType type);
// _ZN26QQmlAbstractUrlInterceptor9interceptERK4QUrlNS_8DataTypeE intercept(const class QUrl &, enum QQmlAbstractUrlInterceptor::DataType)
extern "C"
QUrl*
C_ZN26QQmlAbstractUrlInterceptor9interceptERK4QUrlNS_8DataTypeE(void *qthis,
const QUrl* arg1,
QQmlAbstractUrlInterceptor::DataType arg2) {
  auto ret =
  ((QQmlAbstractUrlInterceptor*)qthis)->intercept(*((const QUrl*)arg1),
arg2);
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlabstracturlinterceptor.h', line 53, column 5>
//   // proto:  void QQmlAbstractUrlInterceptor::QQmlAbstractUrlInterceptor();
extern "C"
QQmlAbstractUrlInterceptor*
C_ZN26QQmlAbstractUrlInterceptorC2Ev() {
  // auto ret = new QQmlAbstractUrlInterceptor();
}
// <= ext block end

// body block begin =>
// <= body block end

