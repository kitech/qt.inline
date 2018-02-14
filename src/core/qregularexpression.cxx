//  header block begin
// /usr/include/qt/QtCore/qregularexpression.h
#include <qregularexpression.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegularExpression is pure virtual: false
// QRegularExpression has virtual projected: false
//  header block end

//  main block begin

class MyQRegularExpression : public QRegularExpression {
public:
  virtual ~MyQRegularExpression() {}
// void QRegularExpression()
MyQRegularExpression() : QRegularExpression() {}
// void QRegularExpression(const class QString &, QRegularExpression::PatternOptions)
MyQRegularExpression(const QString & pattern, QFlags<QRegularExpression::PatternOption> options) : QRegularExpression(pattern, options) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:81
// [4] QRegularExpression::PatternOptions patternOptions()
extern "C"
QRegularExpression::PatternOptions* C_ZNK18QRegularExpression14patternOptionsEv(void *this_) {
  auto rv = ((QRegularExpression*)this_)->patternOptions();
return new QRegularExpression::PatternOptions(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:82
// [-2] void setPatternOptions(QRegularExpression::PatternOptions)
extern "C"
void C_ZN18QRegularExpression17setPatternOptionsE6QFlagsINS_13PatternOptionEE(void *this_, QFlags<QRegularExpression::PatternOption> options) {
  ((QRegularExpression*)this_)->setPatternOptions(options);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:84
// [-2] void QRegularExpression()
extern "C"
void* C_ZN18QRegularExpressionC2Ev() {
  return  new QRegularExpression();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:85
// [-2] void QRegularExpression(const class QString &, QRegularExpression::PatternOptions)
extern "C"
void* C_ZN18QRegularExpressionC2ERK7QString6QFlagsINS_13PatternOptionEE(QString* pattern, QFlags<QRegularExpression::PatternOption> options) {
  return  new QRegularExpression(*pattern, options);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:87
// [-2] void ~QRegularExpression()
extern "C"
void C_ZN18QRegularExpressionD2Ev(void *this_) {
  delete (QRegularExpression*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:88
// [8] QRegularExpression & operator=(const class QRegularExpression &)
extern "C"
void* C_ZN18QRegularExpressionaSERKS_(void *this_, QRegularExpression* re) {
  auto& rv = ((QRegularExpression*)this_)->operator=(*re);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:91
// [8] QRegularExpression & operator=(class QRegularExpression &&)
extern "C"
void* C_ZN18QRegularExpressionaSEOS_(void *this_, QRegularExpression && re) {
  auto& rv = ((QRegularExpression*)this_)->operator=(re);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:95
// [-2] void swap(class QRegularExpression &)
extern "C"
void C_ZN18QRegularExpression4swapERS_(void *this_, QRegularExpression* other) {
  ((QRegularExpression*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:97
// [8] QString pattern()
extern "C"
void* C_ZNK18QRegularExpression7patternEv(void *this_) {
  auto rv = ((QRegularExpression*)this_)->pattern();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:98
// [-2] void setPattern(const class QString &)
extern "C"
void C_ZN18QRegularExpression10setPatternERK7QString(void *this_, QString* pattern) {
  ((QRegularExpression*)this_)->setPattern(*pattern);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:100
// [1] bool isValid()
extern "C"
bool C_ZNK18QRegularExpression7isValidEv(void *this_) {
  return (bool)((QRegularExpression*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:101
// [4] int patternErrorOffset()
extern "C"
int C_ZNK18QRegularExpression18patternErrorOffsetEv(void *this_) {
  return (int)((QRegularExpression*)this_)->patternErrorOffset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:102
// [8] QString errorString()
extern "C"
void* C_ZNK18QRegularExpression11errorStringEv(void *this_) {
  auto rv = ((QRegularExpression*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:104
// [4] int captureCount()
extern "C"
int C_ZNK18QRegularExpression12captureCountEv(void *this_) {
  return (int)((QRegularExpression*)this_)->captureCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:105
// [8] QStringList namedCaptureGroups()
extern "C"
void* C_ZNK18QRegularExpression18namedCaptureGroupsEv(void *this_) {
  auto rv = ((QRegularExpression*)this_)->namedCaptureGroups();
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:121
// [8] QRegularExpressionMatch match(const class QString &, int, enum QRegularExpression::MatchType, QRegularExpression::MatchOptions)
extern "C"
void* C_ZNK18QRegularExpression5matchERK7QStringiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *this_, QString* subject, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions) {
  auto rv = ((QRegularExpression*)this_)->match(*subject, offset, matchType, matchOptions);
return new QRegularExpressionMatch(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:126
// [8] QRegularExpressionMatch match(const class QStringRef &, int, enum QRegularExpression::MatchType, QRegularExpression::MatchOptions)
extern "C"
void* C_ZNK18QRegularExpression5matchERK10QStringRefiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *this_, QStringRef* subjectRef, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions) {
  auto rv = ((QRegularExpression*)this_)->match(*subjectRef, offset, matchType, matchOptions);
return new QRegularExpressionMatch(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:131
// [8] QRegularExpressionMatchIterator globalMatch(const class QString &, int, enum QRegularExpression::MatchType, QRegularExpression::MatchOptions)
extern "C"
void* C_ZNK18QRegularExpression11globalMatchERK7QStringiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *this_, QString* subject, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions) {
  auto rv = ((QRegularExpression*)this_)->globalMatch(*subject, offset, matchType, matchOptions);
return new QRegularExpressionMatchIterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:136
// [8] QRegularExpressionMatchIterator globalMatch(const class QStringRef &, int, enum QRegularExpression::MatchType, QRegularExpression::MatchOptions)
extern "C"
void* C_ZNK18QRegularExpression11globalMatchERK10QStringRefiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *this_, QStringRef* subjectRef, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions) {
  auto rv = ((QRegularExpression*)this_)->globalMatch(*subjectRef, offset, matchType, matchOptions);
return new QRegularExpressionMatchIterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:141
// [-2] void optimize()
extern "C"
void C_ZNK18QRegularExpression8optimizeEv(void *this_) {
  ((QRegularExpression*)this_)->optimize();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:143
// [8] QString escape(const class QString &)
extern "C"
void* C_ZN18QRegularExpression6escapeERK7QString(QString* str) {
  auto rv = QRegularExpression::escape(*str);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:145
// [1] bool operator==(const class QRegularExpression &)
extern "C"
bool C_ZNK18QRegularExpressioneqERKS_(void *this_, QRegularExpression* re) {
  return (bool)((QRegularExpression*)this_)->operator==(*re);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:146
// [1] bool operator!=(const class QRegularExpression &)
extern "C"
bool C_ZNK18QRegularExpressionneERKS_(void *this_, QRegularExpression* re) {
  return (bool)((QRegularExpression*)this_)->operator!=(*re);
}
//  main block end
