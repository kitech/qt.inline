// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlscriptstring.h
// dst-file: /src/qml/qqmlscriptstring.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlscriptstring.h>


#include <qstring.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qqmlscriptstring_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlScriptString_Class_Size()
{
  return sizeof(QQmlScriptString);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlscriptstring.h', line 64, column 10>
//   // proto:  bool QQmlScriptString::isEmpty();
// _ZNK16QQmlScriptString7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK16QQmlScriptString7isEmptyEv(void *qthis) {
  auto ret =
  ((QQmlScriptString*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QQmlScriptString::~QQmlScriptString();
extern "C"
void C_ZN16QQmlScriptStringD2Ev(void *qthis) {
  delete (QQmlScriptString*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlscriptstring.h', line 70, column 10>
//   // proto:  bool QQmlScriptString::booleanLiteral(bool * ok);
// _ZNK16QQmlScriptString14booleanLiteralEPb booleanLiteral(_Bool *)
extern "C"
bool
C_ZNK16QQmlScriptString14booleanLiteralEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QQmlScriptString*)qthis)->booleanLiteral(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlscriptstring.h', line 67, column 10>
//   // proto:  bool QQmlScriptString::isNullLiteral();
// _ZNK16QQmlScriptString13isNullLiteralEv isNullLiteral()
extern "C"
bool
C_ZNK16QQmlScriptString13isNullLiteralEv(void *qthis) {
  auto ret =
  ((QQmlScriptString*)qthis)->isNullLiteral();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlscriptstring.h', line 66, column 10>
//   // proto:  bool QQmlScriptString::isUndefinedLiteral();
// _ZNK16QQmlScriptString18isUndefinedLiteralEv isUndefinedLiteral()
extern "C"
bool
C_ZNK16QQmlScriptString18isUndefinedLiteralEv(void *qthis) {
  auto ret =
  ((QQmlScriptString*)qthis)->isUndefinedLiteral();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlscriptstring.h', line 56, column 5>
//   // proto:  void QQmlScriptString::QQmlScriptString(const QQmlScriptString & );
extern "C"
QQmlScriptString*
C_ZN16QQmlScriptStringC2ERKS_(const QQmlScriptString* arg1) {
  auto ret = new QQmlScriptString(*((const QQmlScriptString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlscriptstring.h', line 68, column 13>
//   // proto:  QString QQmlScriptString::stringLiteral();
// _ZNK16QQmlScriptString13stringLiteralEv stringLiteral()
extern "C"
QString*
C_ZNK16QQmlScriptString13stringLiteralEv(void *qthis) {
  auto ret =
  ((QQmlScriptString*)qthis)->stringLiteral();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlscriptstring.h', line 69, column 11>
//   // proto:  qreal QQmlScriptString::numberLiteral(bool * ok);
// _ZNK16QQmlScriptString13numberLiteralEPb numberLiteral(_Bool *)
extern "C"
double
C_ZNK16QQmlScriptString13numberLiteralEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QQmlScriptString*)qthis)->numberLiteral(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlscriptstring.h', line 55, column 5>
//   // proto:  void QQmlScriptString::QQmlScriptString();
extern "C"
QQmlScriptString*
C_ZN16QQmlScriptStringC2Ev() {
  auto ret = new QQmlScriptString();
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

