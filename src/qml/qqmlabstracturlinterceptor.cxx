#include <qurl.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qqmlabstracturlinterceptor.h
// dst-file: /src/qml/qqmlabstracturlinterceptor.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlabstracturlinterceptor.h>

extern "C" {

int QQmlAbstractUrlInterceptor_Class_Size()
{
  return sizeof(QQmlAbstractUrlInterceptor);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlabstracturlinterceptor_inline_symbols() {
//   // proto:  void QQmlAbstractUrlInterceptor::~QQmlAbstractUrlInterceptor();
if (true) {
  delete ((QQmlAbstractUrlInterceptor*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlabstracturlinterceptor.h', line 55, column 18>
//   // proto:  QUrl QQmlAbstractUrlInterceptor::intercept(const QUrl & path, QQmlAbstractUrlInterceptor::DataType type);
if (true) {
  auto f = [](const QUrl & arg1, QQmlAbstractUrlInterceptor::DataType arg2) {
    ((QQmlAbstractUrlInterceptor*)0)->intercept(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN26QQmlAbstractUrlInterceptor9interceptERK4QUrlNS_8DataTypeE intercept(const class QUrl &, enum QQmlAbstractUrlInterceptor::DataType)
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
// <= use block end

// ext block begin =>
//   // proto:  void QQmlAbstractUrlInterceptor::~QQmlAbstractUrlInterceptor();
extern "C"
void C_ZN26QQmlAbstractUrlInterceptorD2Ev(void *qthis) {
  delete (QQmlAbstractUrlInterceptor*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlabstracturlinterceptor.h', line 55, column 18>
//   // proto:  QUrl QQmlAbstractUrlInterceptor::intercept(const QUrl & path, QQmlAbstractUrlInterceptor::DataType type);
extern "C"
void C_ZN26QQmlAbstractUrlInterceptor9interceptERK4QUrlNS_8DataTypeE(void *qthis, const QUrl & arg1, QQmlAbstractUrlInterceptor::DataType arg2) {
  ((QQmlAbstractUrlInterceptor*)qthis)->intercept(arg1, arg2);
}
// _ZN26QQmlAbstractUrlInterceptor9interceptERK4QUrlNS_8DataTypeE intercept(const class QUrl &, enum QQmlAbstractUrlInterceptor::DataType)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlabstracturlinterceptor.h', line 53, column 5>
//   // proto:  void QQmlAbstractUrlInterceptor::QQmlAbstractUrlInterceptor();
extern "C"
void C_ZN26QQmlAbstractUrlInterceptorC2Ev() {
  // new QQmlAbstractUrlInterceptor();
}
// <= ext block end

// body block begin =>
// <= body block end

