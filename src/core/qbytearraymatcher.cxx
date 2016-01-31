// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qbytearraymatcher.h
// dst-file: /src/core/qbytearraymatcher.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qbytearraymatcher.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qbytearraymatcher_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 59, column 23>
//   // proto:  QByteArray QByteArrayMatcher::pattern();
if (true) {
  auto f = [](QByteArrayMatcher flythis) {
    ((QByteArrayMatcher*)0)->pattern();
    flythis.pattern();
  };
  if (f == nullptr){}
}
// _ZNK17QByteArrayMatcher7patternEv pattern()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QByteArrayMatcher_Class_Size()
{
  return sizeof(QByteArrayMatcher);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 59, column 23>
//   // proto:  QByteArray QByteArrayMatcher::pattern();
// _ZNK17QByteArrayMatcher7patternEv pattern()
extern "C"
QByteArray*
C_ZNK17QByteArrayMatcher7patternEv(void *qthis) {
  auto ret =
  ((QByteArrayMatcher*)qthis)->pattern();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 58, column 9>
//   // proto:  int QByteArrayMatcher::indexIn(const char * str, int len, int from);
// _ZNK17QByteArrayMatcher7indexInEPKcii indexIn(const char *, int, int)
extern "C"
int
C_ZNK17QByteArrayMatcher7indexInEPKcii(void *qthis,
const char * arg1,
int arg2,
int arg3) {
  auto ret =
  ((QByteArrayMatcher*)qthis)->indexIn(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 55, column 10>
//   // proto:  void QByteArrayMatcher::setPattern(const QByteArray & pattern);
// _ZN17QByteArrayMatcher10setPatternERK10QByteArray setPattern(const class QByteArray &)
extern "C"
void
C_ZN17QByteArrayMatcher10setPatternERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QByteArrayMatcher*)qthis)->setPattern(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 47, column 5>
//   // proto:  void QByteArrayMatcher::QByteArrayMatcher();
extern "C"
QByteArrayMatcher*
C_ZN17QByteArrayMatcherC2Ev() {
  auto ret = new QByteArrayMatcher();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 49, column 14>
//   // proto:  void QByteArrayMatcher::QByteArrayMatcher(const char * pattern, int length);
extern "C"
QByteArrayMatcher*
C_ZN17QByteArrayMatcherC2EPKci(const char * arg1,
int arg2) {
  auto ret = new QByteArrayMatcher(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 48, column 14>
//   // proto:  void QByteArrayMatcher::QByteArrayMatcher(const QByteArray & pattern);
extern "C"
QByteArrayMatcher*
C_ZN17QByteArrayMatcherC2ERK10QByteArray(const QByteArray* arg1) {
  auto ret = new QByteArrayMatcher(*((const QByteArray*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 57, column 9>
//   // proto:  int QByteArrayMatcher::indexIn(const QByteArray & ba, int from);
// _ZNK17QByteArrayMatcher7indexInERK10QByteArrayi indexIn(const class QByteArray &, int)
extern "C"
int
C_ZNK17QByteArrayMatcher7indexInERK10QByteArrayi(void *qthis,
const QByteArray* arg1,
int arg2) {
  auto ret =
  ((QByteArrayMatcher*)qthis)->indexIn(*((const QByteArray*)arg1),
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qbytearraymatcher.h', line 50, column 5>
//   // proto:  void QByteArrayMatcher::QByteArrayMatcher(const QByteArrayMatcher & other);
extern "C"
QByteArrayMatcher*
C_ZN17QByteArrayMatcherC2ERKS_(const QByteArrayMatcher* arg1) {
  auto ret = new QByteArrayMatcher(*((const QByteArrayMatcher*)arg1));
  return ret;
}
//   // proto:  void QByteArrayMatcher::~QByteArrayMatcher();
extern "C"
void C_ZN17QByteArrayMatcherD2Ev(void *qthis) {
  delete (QByteArrayMatcher*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

