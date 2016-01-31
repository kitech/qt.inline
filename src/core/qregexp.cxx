// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qregexp.h
// dst-file: /src/core/qregexp.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qregexp.h>


#include <qnamespace.h>
#include <qstring.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qregexp_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 71, column 17>
//   // proto:  void QRegExp::swap(QRegExp & other);
if (true) {
  auto f = [](QRegExp flythis, QRegExp & arg1) {
    ((QRegExp*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QRegExp4swapERS_ swap(class QRegExp &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRegExp_Class_Size()
{
  return sizeof(QRegExp);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 81, column 10>
//   // proto:  void QRegExp::setCaseSensitivity(Qt::CaseSensitivity cs);
// _ZN7QRegExp18setCaseSensitivityEN2Qt15CaseSensitivityE setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void
C_ZN7QRegExp18setCaseSensitivityEN2Qt15CaseSensitivityE(void *qthis,
Qt::CaseSensitivity* arg1) {
  ((QRegExp*)qthis)->setCaseSensitivity(*((Qt::CaseSensitivity*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 80, column 25>
//   // proto:  Qt::CaseSensitivity QRegExp::caseSensitivity();
// _ZNK7QRegExp15caseSensitivityEv caseSensitivity()
extern "C"
Qt::CaseSensitivity
C_ZNK7QRegExp15caseSensitivityEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->caseSensitivity();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 64, column 5>
//   // proto:  void QRegExp::QRegExp(const QRegExp & rx);
extern "C"
QRegExp*
C_ZN7QRegExpC2ERKS_(const QRegExp* arg1) {
  auto ret = new QRegExp(*((const QRegExp*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 101, column 13>
//   // proto:  QString QRegExp::errorString();
// _ZNK7QRegExp11errorStringEv errorString()
extern "C"
QString*
C_ZNK7QRegExp11errorStringEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 96, column 17>
//   // proto:  QStringList QRegExp::capturedTexts();
// _ZN7QRegExp13capturedTextsEv capturedTexts()
extern "C"
QStringList*
C_ZN7QRegExp13capturedTextsEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->capturedTexts();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 91, column 9>
//   // proto:  int QRegExp::lastIndexIn(const QString & str, int offset, QRegExp::CaretMode caretMode);
// _ZNK7QRegExp11lastIndexInERK7QStringiNS_9CaretModeE lastIndexIn(const class QString &, int, enum QRegExp::CaretMode)
extern "C"
int
C_ZNK7QRegExp11lastIndexInERK7QStringiNS_9CaretModeE(void *qthis,
const QString* arg1,
int arg2,
QRegExp::CaretMode arg3) {
  auto ret =
  ((QRegExp*)qthis)->lastIndexIn(*((const QString*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 95, column 17>
//   // proto:  QStringList QRegExp::capturedTexts();
// _ZNK7QRegExp13capturedTextsEv capturedTexts()
extern "C"
QStringList*
C_ZNK7QRegExp13capturedTextsEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->capturedTexts();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 94, column 9>
//   // proto:  int QRegExp::captureCount();
// _ZNK7QRegExp12captureCountEv captureCount()
extern "C"
int
C_ZNK7QRegExp12captureCountEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->captureCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 105, column 20>
//   // proto: static QString QRegExp::escape(const QString & str);
// _ZN7QRegExp6escapeERK7QString escape(const class QString &)
extern "C"
QString*
C_ZN7QRegExp6escapeERK7QString(const QString* arg1) {
  auto ret =
  QRegExp::escape(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 76, column 10>
//   // proto:  bool QRegExp::isEmpty();
// _ZNK7QRegExp7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK7QRegExp7isEmptyEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 85, column 10>
//   // proto:  bool QRegExp::isMinimal();
// _ZNK7QRegExp9isMinimalEv isMinimal()
extern "C"
bool
C_ZNK7QRegExp9isMinimalEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->isMinimal();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 92, column 9>
//   // proto:  int QRegExp::matchedLength();
// _ZNK7QRegExp13matchedLengthEv matchedLength()
extern "C"
int
C_ZNK7QRegExp13matchedLengthEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->matchedLength();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 82, column 19>
//   // proto:  QRegExp::PatternSyntax QRegExp::patternSyntax();
// _ZNK7QRegExp13patternSyntaxEv patternSyntax()
extern "C"
QRegExp::PatternSyntax
C_ZNK7QRegExp13patternSyntaxEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->patternSyntax();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 78, column 13>
//   // proto:  QString QRegExp::pattern();
// _ZNK7QRegExp7patternEv pattern()
extern "C"
QString*
C_ZNK7QRegExp7patternEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->pattern();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 79, column 10>
//   // proto:  void QRegExp::setPattern(const QString & pattern);
// _ZN7QRegExp10setPatternERK7QString setPattern(const class QString &)
extern "C"
void
C_ZN7QRegExp10setPatternERK7QString(void *qthis,
const QString* arg1) {
  ((QRegExp*)qthis)->setPattern(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 77, column 10>
//   // proto:  bool QRegExp::isValid();
// _ZNK7QRegExp7isValidEv isValid()
extern "C"
bool
C_ZNK7QRegExp7isValidEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 97, column 13>
//   // proto:  QString QRegExp::cap(int nth);
// _ZNK7QRegExp3capEi cap(int)
extern "C"
QString*
C_ZNK7QRegExp3capEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegExp*)qthis)->cap(arg1);
  return new QString(ret); // 5
}
//   // proto:  void QRegExp::~QRegExp();
extern "C"
void C_ZN7QRegExpD2Ev(void *qthis) {
  delete (QRegExp*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 88, column 10>
//   // proto:  bool QRegExp::exactMatch(const QString & str);
// _ZNK7QRegExp10exactMatchERK7QString exactMatch(const class QString &)
extern "C"
bool
C_ZNK7QRegExp10exactMatchERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QRegExp*)qthis)->exactMatch(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 71, column 17>
//   // proto:  void QRegExp::swap(QRegExp & other);
// _ZN7QRegExp4swapERS_ swap(class QRegExp &)
extern "C"
void
C_ZN7QRegExp4swapERS_(void *qthis,
QRegExp* arg1) {
  ((QRegExp*)qthis)->swap(*((QRegExp*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 90, column 9>
//   // proto:  int QRegExp::indexIn(const QString & str, int offset, QRegExp::CaretMode caretMode);
// _ZNK7QRegExp7indexInERK7QStringiNS_9CaretModeE indexIn(const class QString &, int, enum QRegExp::CaretMode)
extern "C"
int
C_ZNK7QRegExp7indexInERK7QStringiNS_9CaretModeE(void *qthis,
const QString* arg1,
int arg2,
QRegExp::CaretMode arg3) {
  auto ret =
  ((QRegExp*)qthis)->indexIn(*((const QString*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 100, column 9>
//   // proto:  int QRegExp::pos(int nth);
// _ZN7QRegExp3posEi pos(int)
extern "C"
int
C_ZN7QRegExp3posEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegExp*)qthis)->pos(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 61, column 5>
//   // proto:  void QRegExp::QRegExp();
extern "C"
QRegExp*
C_ZN7QRegExpC2Ev() {
  auto ret = new QRegExp();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 99, column 9>
//   // proto:  int QRegExp::pos(int nth);
// _ZNK7QRegExp3posEi pos(int)
extern "C"
int
C_ZNK7QRegExp3posEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegExp*)qthis)->pos(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 62, column 14>
//   // proto:  void QRegExp::QRegExp(const QString & pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax);
extern "C"
QRegExp*
C_ZN7QRegExpC2ERK7QStringN2Qt15CaseSensitivityENS_13PatternSyntaxE(const QString* arg1,
Qt::CaseSensitivity* arg2,
QRegExp::PatternSyntax arg3) {
  auto ret = new QRegExp(*((const QString*)arg1),
*((Qt::CaseSensitivity*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 98, column 13>
//   // proto:  QString QRegExp::cap(int nth);
// _ZN7QRegExp3capEi cap(int)
extern "C"
QString*
C_ZN7QRegExp3capEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegExp*)qthis)->cap(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 83, column 10>
//   // proto:  void QRegExp::setPatternSyntax(QRegExp::PatternSyntax syntax);
// _ZN7QRegExp16setPatternSyntaxENS_13PatternSyntaxE setPatternSyntax(enum QRegExp::PatternSyntax)
extern "C"
void
C_ZN7QRegExp16setPatternSyntaxENS_13PatternSyntaxE(void *qthis,
QRegExp::PatternSyntax arg1) {
  ((QRegExp*)qthis)->setPatternSyntax(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 102, column 13>
//   // proto:  QString QRegExp::errorString();
// _ZN7QRegExp11errorStringEv errorString()
extern "C"
QString*
C_ZN7QRegExp11errorStringEv(void *qthis) {
  auto ret =
  ((QRegExp*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregexp.h', line 86, column 10>
//   // proto:  void QRegExp::setMinimal(bool minimal);
// _ZN7QRegExp10setMinimalEb setMinimal(_Bool)
extern "C"
void
C_ZN7QRegExp10setMinimalEb(void *qthis,
bool arg1) {
  ((QRegExp*)qthis)->setMinimal(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

