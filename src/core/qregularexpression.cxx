// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qregularexpression.h
// dst-file: /src/core/qregularexpression.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qregularexpression.h>


#include <qstring.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qregularexpression_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 232, column 10>
//   // proto:  void QRegularExpressionMatchIterator::swap(QRegularExpressionMatchIterator & other);
if (true) {
  auto f = [](QRegularExpressionMatchIterator flythis, QRegularExpressionMatchIterator & arg1) {
    ((QRegularExpressionMatchIterator*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN31QRegularExpressionMatchIterator4swapERS_ swap(class QRegularExpressionMatchIterator &)
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 84, column 10>
//   // proto:  void QRegularExpression::swap(QRegularExpression & other);
if (true) {
  auto f = [](QRegularExpression flythis, QRegularExpression & arg1) {
    ((QRegularExpression*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN18QRegularExpression4swapERS_ swap(class QRegularExpression &)
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 175, column 10>
//   // proto:  void QRegularExpressionMatch::swap(QRegularExpressionMatch & other);
if (true) {
  auto f = [](QRegularExpressionMatch flythis, QRegularExpressionMatch & arg1) {
    ((QRegularExpressionMatch*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN23QRegularExpressionMatch4swapERS_ swap(class QRegularExpressionMatch &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRegularExpressionMatchIterator_Class_Size()
{
  return sizeof(QRegularExpressionMatchIterator);
}

extern "C"
int QRegularExpression_Class_Size()
{
  return sizeof(QRegularExpression);
}

extern "C"
int QRegularExpressionMatch_Class_Size()
{
  return sizeof(QRegularExpressionMatch);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 236, column 10>
//   // proto:  bool QRegularExpressionMatchIterator::hasNext();
// _ZNK31QRegularExpressionMatchIterator7hasNextEv hasNext()
extern "C"
bool
C_ZNK31QRegularExpressionMatchIterator7hasNextEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatchIterator*)qthis)->hasNext();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 234, column 10>
//   // proto:  bool QRegularExpressionMatchIterator::isValid();
// _ZNK31QRegularExpressionMatchIterator7isValidEv isValid()
extern "C"
bool
C_ZNK31QRegularExpressionMatchIterator7isValidEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatchIterator*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 238, column 29>
//   // proto:  QRegularExpressionMatch QRegularExpressionMatchIterator::peekNext();
// _ZNK31QRegularExpressionMatchIterator8peekNextEv peekNext()
extern "C"
QRegularExpressionMatch*
C_ZNK31QRegularExpressionMatchIterator8peekNextEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatchIterator*)qthis)->peekNext();
  return new QRegularExpressionMatch(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 224, column 5>
//   // proto:  void QRegularExpressionMatchIterator::QRegularExpressionMatchIterator();
extern "C"
QRegularExpressionMatchIterator*
C_ZN31QRegularExpressionMatchIteratorC2Ev() {
  auto ret = new QRegularExpressionMatchIterator();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 241, column 35>
//   // proto:  QRegularExpression::MatchType QRegularExpressionMatchIterator::matchType();
// _ZNK31QRegularExpressionMatchIterator9matchTypeEv matchType()
extern "C"
QRegularExpression::MatchType
C_ZNK31QRegularExpressionMatchIterator9matchTypeEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatchIterator*)qthis)->matchType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 240, column 24>
//   // proto:  QRegularExpression QRegularExpressionMatchIterator::regularExpression();
// _ZNK31QRegularExpressionMatchIterator17regularExpressionEv regularExpression()
extern "C"
QRegularExpression*
C_ZNK31QRegularExpressionMatchIterator17regularExpressionEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatchIterator*)qthis)->regularExpression();
  return new QRegularExpression(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 226, column 5>
//   // proto:  void QRegularExpressionMatchIterator::QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator & iterator);
extern "C"
QRegularExpressionMatchIterator*
C_ZN31QRegularExpressionMatchIteratorC2ERKS_(const QRegularExpressionMatchIterator* arg1) {
  auto ret = new QRegularExpressionMatchIterator(*((const QRegularExpressionMatchIterator*)arg1));
  return ret;
}
//   // proto:  void QRegularExpressionMatchIterator::~QRegularExpressionMatchIterator();
extern "C"
void C_ZN31QRegularExpressionMatchIteratorD2Ev(void *qthis) {
  delete (QRegularExpressionMatchIterator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 237, column 29>
//   // proto:  QRegularExpressionMatch QRegularExpressionMatchIterator::next();
// _ZN31QRegularExpressionMatchIterator4nextEv next()
extern "C"
QRegularExpressionMatch*
C_ZN31QRegularExpressionMatchIterator4nextEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatchIterator*)qthis)->next();
  return new QRegularExpressionMatch(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 242, column 38>
//   // proto:  QRegularExpression::MatchOptions QRegularExpressionMatchIterator::matchOptions();
// _ZNK31QRegularExpressionMatchIterator12matchOptionsEv matchOptions()
extern "C"
QFlags<QRegularExpression::MatchOption>*
C_ZNK31QRegularExpressionMatchIterator12matchOptionsEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatchIterator*)qthis)->matchOptions();
  return new QFlags<QRegularExpression::MatchOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 232, column 10>
//   // proto:  void QRegularExpressionMatchIterator::swap(QRegularExpressionMatchIterator & other);
// _ZN31QRegularExpressionMatchIterator4swapERS_ swap(class QRegularExpressionMatchIterator &)
extern "C"
void
C_ZN31QRegularExpressionMatchIterator4swapERS_(void *qthis,
QRegularExpressionMatchIterator* arg1) {
  ((QRegularExpressionMatchIterator*)qthis)->swap(*((QRegularExpressionMatchIterator*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 90, column 9>
//   // proto:  int QRegularExpression::patternErrorOffset();
// _ZNK18QRegularExpression18patternErrorOffsetEv patternErrorOffset()
extern "C"
int
C_ZNK18QRegularExpression18patternErrorOffsetEv(void *qthis) {
  auto ret =
  ((QRegularExpression*)qthis)->patternErrorOffset();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 86, column 13>
//   // proto:  QString QRegularExpression::pattern();
// _ZNK18QRegularExpression7patternEv pattern()
extern "C"
QString*
C_ZNK18QRegularExpression7patternEv(void *qthis) {
  auto ret =
  ((QRegularExpression*)qthis)->pattern();
  return new QString(ret); // 5
}
//   // proto:  void QRegularExpression::~QRegularExpression();
extern "C"
void C_ZN18QRegularExpressionD2Ev(void *qthis) {
  delete (QRegularExpression*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 130, column 10>
//   // proto:  void QRegularExpression::optimize();
// _ZNK18QRegularExpression8optimizeEv optimize()
extern "C"
void
C_ZNK18QRegularExpression8optimizeEv(void *qthis) {
  ((QRegularExpression*)qthis)->optimize();
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 132, column 20>
//   // proto: static QString QRegularExpression::escape(const QString & str);
// _ZN18QRegularExpression6escapeERK7QString escape(const class QString &)
extern "C"
QString*
C_ZN18QRegularExpression6escapeERK7QString(const QString* arg1) {
  auto ret =
  QRegularExpression::escape(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 73, column 5>
//   // proto:  void QRegularExpression::QRegularExpression();
extern "C"
QRegularExpression*
C_ZN18QRegularExpressionC2Ev() {
  auto ret = new QRegularExpression();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 84, column 10>
//   // proto:  void QRegularExpression::swap(QRegularExpression & other);
// _ZN18QRegularExpression4swapERS_ swap(class QRegularExpression &)
extern "C"
void
C_ZN18QRegularExpression4swapERS_(void *qthis,
QRegularExpression* arg1) {
  ((QRegularExpression*)qthis)->swap(*((QRegularExpression*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 74, column 14>
//   // proto:  void QRegularExpression::QRegularExpression(const QString & pattern, PatternOptions options);
extern "C"
QRegularExpression*
C_ZN18QRegularExpressionC2ERK7QString6QFlagsINS_13PatternOptionEE(const QString* arg1,
QRegularExpression::PatternOptions arg2) {
  auto ret = new QRegularExpression(*((const QString*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 70, column 20>
//   // proto:  PatternOptions QRegularExpression::patternOptions();
// _ZNK18QRegularExpression14patternOptionsEv patternOptions()
extern "C"
QFlags<QRegularExpression::PatternOption>*
C_ZNK18QRegularExpression14patternOptionsEv(void *qthis) {
  auto ret =
  ((QRegularExpression*)qthis)->patternOptions();
  return new QFlags<QRegularExpression::PatternOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 91, column 13>
//   // proto:  QString QRegularExpression::errorString();
// _ZNK18QRegularExpression11errorStringEv errorString()
extern "C"
QString*
C_ZNK18QRegularExpression11errorStringEv(void *qthis) {
  auto ret =
  ((QRegularExpression*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 115, column 29>
//   // proto:  QRegularExpressionMatch QRegularExpression::match(const QStringRef & subjectRef, int offset, QRegularExpression::MatchType matchType, MatchOptions matchOptions);
// _ZNK18QRegularExpression5matchERK10QStringRefiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE match(const class QStringRef &, int, enum QRegularExpression::MatchType, MatchOptions)
extern "C"
QRegularExpressionMatch*
C_ZNK18QRegularExpression5matchERK10QStringRefiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *qthis,
const QStringRef* arg1,
int arg2,
QRegularExpression::MatchType arg3,
QRegularExpression::MatchOptions arg4) {
  auto ret =
  ((QRegularExpression*)qthis)->match(*((const QStringRef*)arg1),
arg2,
arg3,
arg4);
  return new QRegularExpressionMatch(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 125, column 37>
//   // proto:  QRegularExpressionMatchIterator QRegularExpression::globalMatch(const QStringRef & subjectRef, int offset, QRegularExpression::MatchType matchType, MatchOptions matchOptions);
// _ZNK18QRegularExpression11globalMatchERK10QStringRefiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE globalMatch(const class QStringRef &, int, enum QRegularExpression::MatchType, MatchOptions)
extern "C"
QRegularExpressionMatchIterator*
C_ZNK18QRegularExpression11globalMatchERK10QStringRefiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *qthis,
const QStringRef* arg1,
int arg2,
QRegularExpression::MatchType arg3,
QRegularExpression::MatchOptions arg4) {
  auto ret =
  ((QRegularExpression*)qthis)->globalMatch(*((const QStringRef*)arg1),
arg2,
arg3,
arg4);
  return new QRegularExpressionMatchIterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 89, column 10>
//   // proto:  bool QRegularExpression::isValid();
// _ZNK18QRegularExpression7isValidEv isValid()
extern "C"
bool
C_ZNK18QRegularExpression7isValidEv(void *qthis) {
  auto ret =
  ((QRegularExpression*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 110, column 29>
//   // proto:  QRegularExpressionMatch QRegularExpression::match(const QString & subject, int offset, QRegularExpression::MatchType matchType, MatchOptions matchOptions);
// _ZNK18QRegularExpression5matchERK7QStringiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE match(const class QString &, int, enum QRegularExpression::MatchType, MatchOptions)
extern "C"
QRegularExpressionMatch*
C_ZNK18QRegularExpression5matchERK7QStringiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *qthis,
const QString* arg1,
int arg2,
QRegularExpression::MatchType arg3,
QRegularExpression::MatchOptions arg4) {
  auto ret =
  ((QRegularExpression*)qthis)->match(*((const QString*)arg1),
arg2,
arg3,
arg4);
  return new QRegularExpressionMatch(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 75, column 5>
//   // proto:  void QRegularExpression::QRegularExpression(const QRegularExpression & re);
extern "C"
QRegularExpression*
C_ZN18QRegularExpressionC2ERKS_(const QRegularExpression* arg1) {
  auto ret = new QRegularExpression(*((const QRegularExpression*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 71, column 10>
//   // proto:  void QRegularExpression::setPatternOptions(PatternOptions options);
// _ZN18QRegularExpression17setPatternOptionsE6QFlagsINS_13PatternOptionEE setPatternOptions(PatternOptions)
extern "C"
void
C_ZN18QRegularExpression17setPatternOptionsE6QFlagsINS_13PatternOptionEE(void *qthis,
QRegularExpression::PatternOptions arg1) {
  ((QRegularExpression*)qthis)->setPatternOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 94, column 17>
//   // proto:  QStringList QRegularExpression::namedCaptureGroups();
// _ZNK18QRegularExpression18namedCaptureGroupsEv namedCaptureGroups()
extern "C"
QStringList*
C_ZNK18QRegularExpression18namedCaptureGroupsEv(void *qthis) {
  auto ret =
  ((QRegularExpression*)qthis)->namedCaptureGroups();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 93, column 9>
//   // proto:  int QRegularExpression::captureCount();
// _ZNK18QRegularExpression12captureCountEv captureCount()
extern "C"
int
C_ZNK18QRegularExpression12captureCountEv(void *qthis) {
  auto ret =
  ((QRegularExpression*)qthis)->captureCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 120, column 37>
//   // proto:  QRegularExpressionMatchIterator QRegularExpression::globalMatch(const QString & subject, int offset, QRegularExpression::MatchType matchType, MatchOptions matchOptions);
// _ZNK18QRegularExpression11globalMatchERK7QStringiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE globalMatch(const class QString &, int, enum QRegularExpression::MatchType, MatchOptions)
extern "C"
QRegularExpressionMatchIterator*
C_ZNK18QRegularExpression11globalMatchERK7QStringiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *qthis,
const QString* arg1,
int arg2,
QRegularExpression::MatchType arg3,
QRegularExpression::MatchOptions arg4) {
  auto ret =
  ((QRegularExpression*)qthis)->globalMatch(*((const QString*)arg1),
arg2,
arg3,
arg4);
  return new QRegularExpressionMatchIterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 87, column 10>
//   // proto:  void QRegularExpression::setPattern(const QString & pattern);
// _ZN18QRegularExpression10setPatternERK7QString setPattern(const class QString &)
extern "C"
void
C_ZN18QRegularExpression10setPatternERK7QString(void *qthis,
const QString* arg1) {
  ((QRegularExpression*)qthis)->setPattern(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 186, column 9>
//   // proto:  int QRegularExpressionMatch::lastCapturedIndex();
// _ZNK23QRegularExpressionMatch17lastCapturedIndexEv lastCapturedIndex()
extern "C"
int
C_ZNK23QRegularExpressionMatch17lastCapturedIndexEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->lastCapturedIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 166, column 5>
//   // proto:  void QRegularExpressionMatch::QRegularExpressionMatch();
extern "C"
QRegularExpressionMatch*
C_ZN23QRegularExpressionMatchC2Ev() {
  auto ret = new QRegularExpressionMatch();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 184, column 10>
//   // proto:  bool QRegularExpressionMatch::isValid();
// _ZNK23QRegularExpressionMatch7isValidEv isValid()
extern "C"
bool
C_ZNK23QRegularExpressionMatch7isValidEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 197, column 9>
//   // proto:  int QRegularExpressionMatch::capturedLength(int nth);
// _ZNK23QRegularExpressionMatch14capturedLengthEi capturedLength(int)
extern "C"
int
C_ZNK23QRegularExpressionMatch14capturedLengthEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedLength(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 201, column 9>
//   // proto:  int QRegularExpressionMatch::capturedLength(const QString & name);
// _ZNK23QRegularExpressionMatch14capturedLengthERK7QString capturedLength(const class QString &)
extern "C"
int
C_ZNK23QRegularExpressionMatch14capturedLengthERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedLength(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 189, column 16>
//   // proto:  QStringRef QRegularExpressionMatch::capturedRef(int nth);
// _ZNK23QRegularExpressionMatch11capturedRefEi capturedRef(int)
extern "C"
QStringRef*
C_ZNK23QRegularExpressionMatch11capturedRefEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedRef(arg1);
  return new QStringRef(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 202, column 9>
//   // proto:  int QRegularExpressionMatch::capturedEnd(const QString & name);
// _ZNK23QRegularExpressionMatch11capturedEndERK7QString capturedEnd(const class QString &)
extern "C"
int
C_ZNK23QRegularExpressionMatch11capturedEndERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedEnd(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 191, column 13>
//   // proto:  QString QRegularExpressionMatch::captured(const QString & name);
// _ZNK23QRegularExpressionMatch8capturedERK7QString captured(const class QString &)
extern "C"
QString*
C_ZNK23QRegularExpressionMatch8capturedERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->captured(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 194, column 17>
//   // proto:  QStringList QRegularExpressionMatch::capturedTexts();
// _ZNK23QRegularExpressionMatch13capturedTextsEv capturedTexts()
extern "C"
QStringList*
C_ZNK23QRegularExpressionMatch13capturedTextsEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedTexts();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 168, column 5>
//   // proto:  void QRegularExpressionMatch::QRegularExpressionMatch(const QRegularExpressionMatch & match);
extern "C"
QRegularExpressionMatch*
C_ZN23QRegularExpressionMatchC2ERKS_(const QRegularExpressionMatch* arg1) {
  auto ret = new QRegularExpressionMatch(*((const QRegularExpressionMatch*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 175, column 10>
//   // proto:  void QRegularExpressionMatch::swap(QRegularExpressionMatch & other);
// _ZN23QRegularExpressionMatch4swapERS_ swap(class QRegularExpressionMatch &)
extern "C"
void
C_ZN23QRegularExpressionMatch4swapERS_(void *qthis,
QRegularExpressionMatch* arg1) {
  ((QRegularExpressionMatch*)qthis)->swap(*((QRegularExpressionMatch*)arg1));
}
//   // proto:  void QRegularExpressionMatch::~QRegularExpressionMatch();
extern "C"
void C_ZN23QRegularExpressionMatchD2Ev(void *qthis) {
  delete (QRegularExpressionMatch*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 198, column 9>
//   // proto:  int QRegularExpressionMatch::capturedEnd(int nth);
// _ZNK23QRegularExpressionMatch11capturedEndEi capturedEnd(int)
extern "C"
int
C_ZNK23QRegularExpressionMatch11capturedEndEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedEnd(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 178, column 35>
//   // proto:  QRegularExpression::MatchType QRegularExpressionMatch::matchType();
// _ZNK23QRegularExpressionMatch9matchTypeEv matchType()
extern "C"
QRegularExpression::MatchType
C_ZNK23QRegularExpressionMatch9matchTypeEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->matchType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 179, column 38>
//   // proto:  QRegularExpression::MatchOptions QRegularExpressionMatch::matchOptions();
// _ZNK23QRegularExpressionMatch12matchOptionsEv matchOptions()
extern "C"
QFlags<QRegularExpression::MatchOption>*
C_ZNK23QRegularExpressionMatch12matchOptionsEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->matchOptions();
  return new QFlags<QRegularExpression::MatchOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 192, column 16>
//   // proto:  QStringRef QRegularExpressionMatch::capturedRef(const QString & name);
// _ZNK23QRegularExpressionMatch11capturedRefERK7QString capturedRef(const class QString &)
extern "C"
QStringRef*
C_ZNK23QRegularExpressionMatch11capturedRefERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedRef(*((const QString*)arg1));
  return new QStringRef(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 181, column 10>
//   // proto:  bool QRegularExpressionMatch::hasMatch();
// _ZNK23QRegularExpressionMatch8hasMatchEv hasMatch()
extern "C"
bool
C_ZNK23QRegularExpressionMatch8hasMatchEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->hasMatch();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 200, column 9>
//   // proto:  int QRegularExpressionMatch::capturedStart(const QString & name);
// _ZNK23QRegularExpressionMatch13capturedStartERK7QString capturedStart(const class QString &)
extern "C"
int
C_ZNK23QRegularExpressionMatch13capturedStartERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedStart(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 177, column 24>
//   // proto:  QRegularExpression QRegularExpressionMatch::regularExpression();
// _ZNK23QRegularExpressionMatch17regularExpressionEv regularExpression()
extern "C"
QRegularExpression*
C_ZNK23QRegularExpressionMatch17regularExpressionEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->regularExpression();
  return new QRegularExpression(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 188, column 13>
//   // proto:  QString QRegularExpressionMatch::captured(int nth);
// _ZNK23QRegularExpressionMatch8capturedEi captured(int)
extern "C"
QString*
C_ZNK23QRegularExpressionMatch8capturedEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->captured(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 196, column 9>
//   // proto:  int QRegularExpressionMatch::capturedStart(int nth);
// _ZNK23QRegularExpressionMatch13capturedStartEi capturedStart(int)
extern "C"
int
C_ZNK23QRegularExpressionMatch13capturedStartEi(void *qthis,
int arg1) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->capturedStart(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qregularexpression.h', line 182, column 10>
//   // proto:  bool QRegularExpressionMatch::hasPartialMatch();
// _ZNK23QRegularExpressionMatch15hasPartialMatchEv hasPartialMatch()
extern "C"
bool
C_ZNK23QRegularExpressionMatch15hasPartialMatchEv(void *qthis) {
  auto ret =
  ((QRegularExpressionMatch*)qthis)->hasPartialMatch();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

