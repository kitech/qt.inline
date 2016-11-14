// /usr/include/qt/QtCore/qbytearraymatcher.h
#include <qbytearraymatcher.h>
#include <QtCore>

// /usr/include/qt/QtCore/qbytearraymatcher.h:53
// void QByteArrayMatcher()
extern "C"
void* C_ZN17QByteArrayMatcherC1Ev() {
  return new QByteArrayMatcher();
}
// /usr/include/qt/QtCore/qbytearraymatcher.h:54
// void QByteArrayMatcher(const class QByteArray &)
extern "C"
void* C_ZN17QByteArrayMatcherC1ERK10QByteArray(const QByteArray & pattern) {
  return new QByteArrayMatcher(pattern);
}
// /usr/include/qt/QtCore/qbytearraymatcher.h:55
// void QByteArrayMatcher(const char *, int)
extern "C"
void* C_ZN17QByteArrayMatcherC1EPKci(const char * pattern, int length) {
  return new QByteArrayMatcher(pattern, length);
}
// /usr/include/qt/QtCore/qbytearraymatcher.h:57
// void ~QByteArrayMatcher()
extern "C"
void C_ZN17QByteArrayMatcherD1Ev(void *this_) {
  delete (QByteArrayMatcher*)(this_);
}
// /usr/include/qt/QtCore/qbytearraymatcher.h:61
// void setPattern(const class QByteArray &)
extern "C"
void C_ZN17QByteArrayMatcher10setPatternERK10QByteArray(void *this_, const QByteArray & pattern) {
  ((QByteArrayMatcher*)this_)->setPattern(pattern);
}
// /usr/include/qt/QtCore/qbytearraymatcher.h:63
// int indexIn(const class QByteArray &, int)
extern "C"
void C_ZNK17QByteArrayMatcher7indexInERK10QByteArrayi(void *this_, const QByteArray & ba, int from) {
  /*return*/ ((QByteArrayMatcher*)this_)->indexIn(ba, from);
}
// /usr/include/qt/QtCore/qbytearraymatcher.h:64
// int indexIn(const char *, int, int)
extern "C"
void C_ZNK17QByteArrayMatcher7indexInEPKcii(void *this_, const char * str, int len, int from) {
  /*return*/ ((QByteArrayMatcher*)this_)->indexIn(str, len, from);
}
// inline
// /usr/include/qt/QtCore/qbytearraymatcher.h:65
// QByteArray pattern()
extern "C"
void C_ZNK17QByteArrayMatcher7patternEv(void *this_) {
  /*return*/ ((QByteArrayMatcher*)this_)->pattern();
}