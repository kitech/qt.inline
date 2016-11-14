// /usr/include/qt/QtCore/qregexp.h
#include <qregexp.h>
#include <QtCore>

// /usr/include/qt/QtCore/qregexp.h:70
// void QRegExp()
extern "C"
void* C_ZN7QRegExpC1Ev() {
  return new QRegExp();
}
// /usr/include/qt/QtCore/qregexp.h:71
// void QRegExp(const class QString &, Qt::CaseSensitivity, enum QRegExp::PatternSyntax)
extern "C"
void* C_ZN7QRegExpC1ERK7QStringN2Qt15CaseSensitivityENS_13PatternSyntaxE(const QString & pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax) {
  return new QRegExp(pattern, cs, syntax);
}
// /usr/include/qt/QtCore/qregexp.h:74
// void ~QRegExp()
extern "C"
void C_ZN7QRegExpD1Ev(void *this_) {
  delete (QRegExp*)(this_);
}
// inline
// /usr/include/qt/QtCore/qregexp.h:79
// void swap(class QRegExp &)
extern "C"
void C_ZN7QRegExp4swapERS_(void *this_, QRegExp & other) {
  ((QRegExp*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qregexp.h:84
// bool isEmpty()
extern "C"
void C_ZNK7QRegExp7isEmptyEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qregexp.h:85
// bool isValid()
extern "C"
void C_ZNK7QRegExp7isValidEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->isValid();
}
// /usr/include/qt/QtCore/qregexp.h:86
// QString pattern()
extern "C"
void C_ZNK7QRegExp7patternEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->pattern();
}
// /usr/include/qt/QtCore/qregexp.h:87
// void setPattern(const class QString &)
extern "C"
void C_ZN7QRegExp10setPatternERK7QString(void *this_, const QString & pattern) {
  ((QRegExp*)this_)->setPattern(pattern);
}
// /usr/include/qt/QtCore/qregexp.h:88
// Qt::CaseSensitivity caseSensitivity()
extern "C"
void C_ZNK7QRegExp15caseSensitivityEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->caseSensitivity();
}
// /usr/include/qt/QtCore/qregexp.h:89
// void setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN7QRegExp18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QRegExp*)this_)->setCaseSensitivity(cs);
}
// /usr/include/qt/QtCore/qregexp.h:90
// QRegExp::PatternSyntax patternSyntax()
extern "C"
void C_ZNK7QRegExp13patternSyntaxEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->patternSyntax();
}
// /usr/include/qt/QtCore/qregexp.h:91
// void setPatternSyntax(enum QRegExp::PatternSyntax)
extern "C"
void C_ZN7QRegExp16setPatternSyntaxENS_13PatternSyntaxE(void *this_, QRegExp::PatternSyntax syntax) {
  ((QRegExp*)this_)->setPatternSyntax(syntax);
}
// /usr/include/qt/QtCore/qregexp.h:93
// bool isMinimal()
extern "C"
void C_ZNK7QRegExp9isMinimalEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->isMinimal();
}
// /usr/include/qt/QtCore/qregexp.h:94
// void setMinimal(_Bool)
extern "C"
void C_ZN7QRegExp10setMinimalEb(void *this_, bool minimal) {
  ((QRegExp*)this_)->setMinimal(minimal);
}
// /usr/include/qt/QtCore/qregexp.h:96
// bool exactMatch(const class QString &)
extern "C"
void C_ZNK7QRegExp10exactMatchERK7QString(void *this_, const QString & str) {
  /*return*/ ((QRegExp*)this_)->exactMatch(str);
}
// /usr/include/qt/QtCore/qregexp.h:98
// int indexIn(const class QString &, int, enum QRegExp::CaretMode)
extern "C"
void C_ZNK7QRegExp7indexInERK7QStringiNS_9CaretModeE(void *this_, const QString & str, int offset, QRegExp::CaretMode caretMode) {
  /*return*/ ((QRegExp*)this_)->indexIn(str, offset, caretMode);
}
// /usr/include/qt/QtCore/qregexp.h:99
// int lastIndexIn(const class QString &, int, enum QRegExp::CaretMode)
extern "C"
void C_ZNK7QRegExp11lastIndexInERK7QStringiNS_9CaretModeE(void *this_, const QString & str, int offset, QRegExp::CaretMode caretMode) {
  /*return*/ ((QRegExp*)this_)->lastIndexIn(str, offset, caretMode);
}
// /usr/include/qt/QtCore/qregexp.h:100
// int matchedLength()
extern "C"
void C_ZNK7QRegExp13matchedLengthEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->matchedLength();
}
// /usr/include/qt/QtCore/qregexp.h:102
// int captureCount()
extern "C"
void C_ZNK7QRegExp12captureCountEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->captureCount();
}
// /usr/include/qt/QtCore/qregexp.h:103
// QStringList capturedTexts()
extern "C"
void C_ZNK7QRegExp13capturedTextsEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->capturedTexts();
}
// /usr/include/qt/QtCore/qregexp.h:104
// QStringList capturedTexts()
extern "C"
void C_ZN7QRegExp13capturedTextsEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->capturedTexts();
}
// /usr/include/qt/QtCore/qregexp.h:105
// QString cap(int)
extern "C"
void C_ZNK7QRegExp3capEi(void *this_, int nth) {
  /*return*/ ((QRegExp*)this_)->cap(nth);
}
// /usr/include/qt/QtCore/qregexp.h:106
// QString cap(int)
extern "C"
void C_ZN7QRegExp3capEi(void *this_, int nth) {
  /*return*/ ((QRegExp*)this_)->cap(nth);
}
// /usr/include/qt/QtCore/qregexp.h:107
// int pos(int)
extern "C"
void C_ZNK7QRegExp3posEi(void *this_, int nth) {
  /*return*/ ((QRegExp*)this_)->pos(nth);
}
// /usr/include/qt/QtCore/qregexp.h:108
// int pos(int)
extern "C"
void C_ZN7QRegExp3posEi(void *this_, int nth) {
  /*return*/ ((QRegExp*)this_)->pos(nth);
}
// /usr/include/qt/QtCore/qregexp.h:109
// QString errorString()
extern "C"
void C_ZNK7QRegExp11errorStringEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->errorString();
}
// /usr/include/qt/QtCore/qregexp.h:110
// QString errorString()
extern "C"
void C_ZN7QRegExp11errorStringEv(void *this_) {
  /*return*/ ((QRegExp*)this_)->errorString();
}
// static
// /usr/include/qt/QtCore/qregexp.h:113
// QString escape(const class QString &)
extern "C"
void C_ZN7QRegExp6escapeERK7QString(const QString & str) {
  /*return*/ QRegExp::escape(str);
}