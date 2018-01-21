//  header block begin
// /usr/include/qt/QtCore/qregularexpression.h
#include <qregularexpression.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qregularexpression.h:79
// PatternOptions patternOptions()
extern "C"
void C_ZNK18QRegularExpression14patternOptionsEv(void *this_) {
  /*return*/ ((QRegularExpression*)this_)->patternOptions();
}
// /usr/include/qt/QtCore/qregularexpression.h:80
// void setPatternOptions(PatternOptions)
extern "C"
void C_ZN18QRegularExpression17setPatternOptionsE6QFlagsINS_13PatternOptionEE(void *this_, QFlags<QRegularExpression::PatternOption> options) {
  ((QRegularExpression*)this_)->setPatternOptions(options);
}
// /usr/include/qt/QtCore/qregularexpression.h:82
// void QRegularExpression()
extern "C"
void* C_ZN18QRegularExpressionC1Ev() {
  return new QRegularExpression();
}
// /usr/include/qt/QtCore/qregularexpression.h:83
// void QRegularExpression(const class QString &, PatternOptions)
extern "C"
void* C_ZN18QRegularExpressionC1ERK7QString6QFlagsINS_13PatternOptionEE(const QString & pattern, QFlags<QRegularExpression::PatternOption> options) {
  return new QRegularExpression(pattern, options);
}
// /usr/include/qt/QtCore/qregularexpression.h:85
// void ~QRegularExpression()
extern "C"
void C_ZN18QRegularExpressionD1Ev(void *this_) {
  delete (QRegularExpression*)(this_);
}
// inline
// /usr/include/qt/QtCore/qregularexpression.h:93
// void swap(class QRegularExpression &)
extern "C"
void C_ZN18QRegularExpression4swapERS_(void *this_, QRegularExpression & other) {
  ((QRegularExpression*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qregularexpression.h:95
// QString pattern()
extern "C"
void C_ZNK18QRegularExpression7patternEv(void *this_) {
  /*return*/ ((QRegularExpression*)this_)->pattern();
}
// /usr/include/qt/QtCore/qregularexpression.h:96
// void setPattern(const class QString &)
extern "C"
void C_ZN18QRegularExpression10setPatternERK7QString(void *this_, const QString & pattern) {
  ((QRegularExpression*)this_)->setPattern(pattern);
}
// /usr/include/qt/QtCore/qregularexpression.h:98
// bool isValid()
extern "C"
void C_ZNK18QRegularExpression7isValidEv(void *this_) {
  /*return*/ ((QRegularExpression*)this_)->isValid();
}
// /usr/include/qt/QtCore/qregularexpression.h:99
// int patternErrorOffset()
extern "C"
void C_ZNK18QRegularExpression18patternErrorOffsetEv(void *this_) {
  /*return*/ ((QRegularExpression*)this_)->patternErrorOffset();
}
// /usr/include/qt/QtCore/qregularexpression.h:100
// QString errorString()
extern "C"
void C_ZNK18QRegularExpression11errorStringEv(void *this_) {
  /*return*/ ((QRegularExpression*)this_)->errorString();
}
// /usr/include/qt/QtCore/qregularexpression.h:102
// int captureCount()
extern "C"
void C_ZNK18QRegularExpression12captureCountEv(void *this_) {
  /*return*/ ((QRegularExpression*)this_)->captureCount();
}
// /usr/include/qt/QtCore/qregularexpression.h:103
// QStringList namedCaptureGroups()
extern "C"
void C_ZNK18QRegularExpression18namedCaptureGroupsEv(void *this_) {
  /*return*/ ((QRegularExpression*)this_)->namedCaptureGroups();
}
// /usr/include/qt/QtCore/qregularexpression.h:119
// QRegularExpressionMatch match(const class QString &, int, enum QRegularExpression::MatchType, MatchOptions)
extern "C"
void C_ZNK18QRegularExpression5matchERK7QStringiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *this_, const QString & subject, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions) {
  /*return*/ ((QRegularExpression*)this_)->match(subject, offset, matchType, matchOptions);
}
// /usr/include/qt/QtCore/qregularexpression.h:124
// QRegularExpressionMatch match(const class QStringRef &, int, enum QRegularExpression::MatchType, MatchOptions)
extern "C"
void C_ZNK18QRegularExpression5matchERK10QStringRefiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *this_, const QStringRef & subjectRef, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions) {
  /*return*/ ((QRegularExpression*)this_)->match(subjectRef, offset, matchType, matchOptions);
}
// /usr/include/qt/QtCore/qregularexpression.h:129
// QRegularExpressionMatchIterator globalMatch(const class QString &, int, enum QRegularExpression::MatchType, MatchOptions)
extern "C"
void C_ZNK18QRegularExpression11globalMatchERK7QStringiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *this_, const QString & subject, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions) {
  /*return*/ ((QRegularExpression*)this_)->globalMatch(subject, offset, matchType, matchOptions);
}
// /usr/include/qt/QtCore/qregularexpression.h:134
// QRegularExpressionMatchIterator globalMatch(const class QStringRef &, int, enum QRegularExpression::MatchType, MatchOptions)
extern "C"
void C_ZNK18QRegularExpression11globalMatchERK10QStringRefiNS_9MatchTypeE6QFlagsINS_11MatchOptionEE(void *this_, const QStringRef & subjectRef, int offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions) {
  /*return*/ ((QRegularExpression*)this_)->globalMatch(subjectRef, offset, matchType, matchOptions);
}
// /usr/include/qt/QtCore/qregularexpression.h:139
// void optimize()
extern "C"
void C_ZNK18QRegularExpression8optimizeEv(void *this_) {
  ((QRegularExpression*)this_)->optimize();
}
// static
// /usr/include/qt/QtCore/qregularexpression.h:141
// QString escape(const class QString &)
extern "C"
void C_ZN18QRegularExpression6escapeERK7QString(const QString & str) {
  /*return*/ QRegularExpression::escape(str);
}
//  main block end
