//  header block begin
// /usr/include/qt/QtCore/qregexp.h
#include <qregexp.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegExp is pure virtual: false
// QRegExp has virtual projected: false
//  header block end

//  main block begin

class MyQRegExp : public QRegExp {
public:
  virtual ~MyQRegExp() {}
// void QRegExp()
MyQRegExp() : QRegExp() {}
// void QRegExp(const class QString &, Qt::CaseSensitivity, enum QRegExp::PatternSyntax)
MyQRegExp(const QString & pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax) : QRegExp(pattern, cs, syntax) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:70
// [-2] void QRegExp()
extern "C"
void* C_ZN7QRegExpC2Ev() {
  return  new QRegExp();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:71
// [-2] void QRegExp(const class QString &, Qt::CaseSensitivity, enum QRegExp::PatternSyntax)
extern "C"
void* C_ZN7QRegExpC2ERK7QStringN2Qt15CaseSensitivityENS_13PatternSyntaxE(QString* pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax) {
  return  new QRegExp(*pattern, cs, syntax);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:74
// [-2] void ~QRegExp()
extern "C"
void C_ZN7QRegExpD2Ev(void *this_) {
  delete (QRegExp*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:79
// [-2] void swap(class QRegExp &)
extern "C"
void C_ZN7QRegExp4swapERS_(void *this_, QRegExp* other) {
  ((QRegExp*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:84
// [1] bool isEmpty()
extern "C"
bool C_ZNK7QRegExp7isEmptyEv(void *this_) {
  return (bool)((QRegExp*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:85
// [1] bool isValid()
extern "C"
bool C_ZNK7QRegExp7isValidEv(void *this_) {
  return (bool)((QRegExp*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:86
// [8] QString pattern()
extern "C"
void* C_ZNK7QRegExp7patternEv(void *this_) {
  auto rv = ((QRegExp*)this_)->pattern();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:87
// [-2] void setPattern(const class QString &)
extern "C"
void C_ZN7QRegExp10setPatternERK7QString(void *this_, QString* pattern) {
  ((QRegExp*)this_)->setPattern(*pattern);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:88
// [4] Qt::CaseSensitivity caseSensitivity()
extern "C"
Qt::CaseSensitivity C_ZNK7QRegExp15caseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QRegExp*)this_)->caseSensitivity();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:89
// [-2] void setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN7QRegExp18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QRegExp*)this_)->setCaseSensitivity(cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:90
// [4] QRegExp::PatternSyntax patternSyntax()
extern "C"
QRegExp::PatternSyntax C_ZNK7QRegExp13patternSyntaxEv(void *this_) {
  return (QRegExp::PatternSyntax)((QRegExp*)this_)->patternSyntax();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:91
// [-2] void setPatternSyntax(enum QRegExp::PatternSyntax)
extern "C"
void C_ZN7QRegExp16setPatternSyntaxENS_13PatternSyntaxE(void *this_, QRegExp::PatternSyntax syntax) {
  ((QRegExp*)this_)->setPatternSyntax(syntax);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:93
// [1] bool isMinimal()
extern "C"
bool C_ZNK7QRegExp9isMinimalEv(void *this_) {
  return (bool)((QRegExp*)this_)->isMinimal();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:94
// [-2] void setMinimal(_Bool)
extern "C"
void C_ZN7QRegExp10setMinimalEb(void *this_, bool minimal) {
  ((QRegExp*)this_)->setMinimal(minimal);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:96
// [1] bool exactMatch(const class QString &)
extern "C"
bool C_ZNK7QRegExp10exactMatchERK7QString(void *this_, QString* str) {
  return (bool)((QRegExp*)this_)->exactMatch(*str);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:98
// [4] int indexIn(const class QString &, int, enum QRegExp::CaretMode)
extern "C"
int C_ZNK7QRegExp7indexInERK7QStringiNS_9CaretModeE(void *this_, QString* str, int offset, QRegExp::CaretMode caretMode) {
  return (int)((QRegExp*)this_)->indexIn(*str, offset, caretMode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:99
// [4] int lastIndexIn(const class QString &, int, enum QRegExp::CaretMode)
extern "C"
int C_ZNK7QRegExp11lastIndexInERK7QStringiNS_9CaretModeE(void *this_, QString* str, int offset, QRegExp::CaretMode caretMode) {
  return (int)((QRegExp*)this_)->lastIndexIn(*str, offset, caretMode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:100
// [4] int matchedLength()
extern "C"
int C_ZNK7QRegExp13matchedLengthEv(void *this_) {
  return (int)((QRegExp*)this_)->matchedLength();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:102
// [4] int captureCount()
extern "C"
int C_ZNK7QRegExp12captureCountEv(void *this_) {
  return (int)((QRegExp*)this_)->captureCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:105
// [8] QString cap(int)
extern "C"
void* C_ZNK7QRegExp3capEi(void *this_, int nth) {
  auto rv = ((QRegExp*)this_)->cap(nth);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:106
// [8] QString cap(int)
extern "C"
void* C_ZN7QRegExp3capEi(void *this_, int nth) {
  auto rv = ((QRegExp*)this_)->cap(nth);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:107
// [4] int pos(int)
extern "C"
int C_ZNK7QRegExp3posEi(void *this_, int nth) {
  return (int)((QRegExp*)this_)->pos(nth);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:108
// [4] int pos(int)
extern "C"
int C_ZN7QRegExp3posEi(void *this_, int nth) {
  return (int)((QRegExp*)this_)->pos(nth);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:109
// [8] QString errorString()
extern "C"
void* C_ZNK7QRegExp11errorStringEv(void *this_) {
  auto rv = ((QRegExp*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:110
// [8] QString errorString()
extern "C"
void* C_ZN7QRegExp11errorStringEv(void *this_) {
  auto rv = ((QRegExp*)this_)->errorString();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:113
// [8] QString escape(const class QString &)
extern "C"
void* C_ZN7QRegExp6escapeERK7QString(QString* str) {
  auto rv = QRegExp::escape(*str);
return new QString(rv);
}
//  main block end
