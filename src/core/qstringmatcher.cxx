// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qstringmatcher.h
// dst-file: /src/core/qstringmatcher.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstringmatcher.h>


#include <qstring.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qstringmatcher_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 63, column 32>
//   // proto:  Qt::CaseSensitivity QStringMatcher::caseSensitivity();
if (true) {
  auto f = [](QStringMatcher flythis) {
    ((QStringMatcher*)0)->caseSensitivity();
    flythis.caseSensitivity();
  };
  if (f == nullptr){}
}
// _ZNK14QStringMatcher15caseSensitivityEv caseSensitivity()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStringMatcher_Class_Size()
{
  return sizeof(QStringMatcher);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 58, column 10>
//   // proto:  void QStringMatcher::setCaseSensitivity(Qt::CaseSensitivity cs);
// _ZN14QStringMatcher18setCaseSensitivityEN2Qt15CaseSensitivityE setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void
C_ZN14QStringMatcher18setCaseSensitivityEN2Qt15CaseSensitivityE(void *qthis,
Qt::CaseSensitivity* arg1) {
  ((QStringMatcher*)qthis)->setCaseSensitivity(*((Qt::CaseSensitivity*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 47, column 5>
//   // proto:  void QStringMatcher::QStringMatcher();
extern "C"
QStringMatcher*
C_ZN14QStringMatcherC2Ev() {
  auto ret = new QStringMatcher();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 52, column 5>
//   // proto:  void QStringMatcher::QStringMatcher(const QStringMatcher & other);
extern "C"
QStringMatcher*
C_ZN14QStringMatcherC2ERKS_(const QStringMatcher* arg1) {
  auto ret = new QStringMatcher(*((const QStringMatcher*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 61, column 9>
//   // proto:  int QStringMatcher::indexIn(const QChar * str, int length, int from);
// _ZNK14QStringMatcher7indexInEPK5QCharii indexIn(const class QChar *, int, int)
extern "C"
int
C_ZNK14QStringMatcher7indexInEPK5QCharii(void *qthis,
const QChar * arg1,
int arg2,
int arg3) {
  auto ret =
  ((QStringMatcher*)qthis)->indexIn(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 57, column 10>
//   // proto:  void QStringMatcher::setPattern(const QString & pattern);
// _ZN14QStringMatcher10setPatternERK7QString setPattern(const class QString &)
extern "C"
void
C_ZN14QStringMatcher10setPatternERK7QString(void *qthis,
const QString* arg1) {
  ((QStringMatcher*)qthis)->setPattern(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 62, column 13>
//   // proto:  QString QStringMatcher::pattern();
// _ZNK14QStringMatcher7patternEv pattern()
extern "C"
QString*
C_ZNK14QStringMatcher7patternEv(void *qthis) {
  auto ret =
  ((QStringMatcher*)qthis)->pattern();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 48, column 14>
//   // proto:  void QStringMatcher::QStringMatcher(const QString & pattern, Qt::CaseSensitivity cs);
extern "C"
QStringMatcher*
C_ZN14QStringMatcherC2ERK7QStringN2Qt15CaseSensitivityE(const QString* arg1,
Qt::CaseSensitivity* arg2) {
  auto ret = new QStringMatcher(*((const QString*)arg1), *((Qt::CaseSensitivity*)arg2));
  return ret;
}
//   // proto:  void QStringMatcher::~QStringMatcher();
extern "C"
void C_ZN14QStringMatcherD2Ev(void *qthis) {
  delete (QStringMatcher*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 50, column 5>
//   // proto:  void QStringMatcher::QStringMatcher(const QChar * uc, int len, Qt::CaseSensitivity cs);
extern "C"
QStringMatcher*
C_ZN14QStringMatcherC2EPK5QChariN2Qt15CaseSensitivityE(const QChar * arg1,
int arg2,
Qt::CaseSensitivity* arg3) {
  auto ret = new QStringMatcher(arg1, arg2, *((Qt::CaseSensitivity*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 60, column 9>
//   // proto:  int QStringMatcher::indexIn(const QString & str, int from);
// _ZNK14QStringMatcher7indexInERK7QStringi indexIn(const class QString &, int)
extern "C"
int
C_ZNK14QStringMatcher7indexInERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  auto ret =
  ((QStringMatcher*)qthis)->indexIn(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringmatcher.h', line 63, column 32>
//   // proto:  Qt::CaseSensitivity QStringMatcher::caseSensitivity();
// _ZNK14QStringMatcher15caseSensitivityEv caseSensitivity()
extern "C"
Qt::CaseSensitivity
C_ZNK14QStringMatcher15caseSensitivityEv(void *qthis) {
  auto ret =
  ((QStringMatcher*)qthis)->caseSensitivity();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// <= body block end

