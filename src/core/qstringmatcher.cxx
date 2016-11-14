// /usr/include/qt/QtCore/qstringmatcher.h
#include <qstringmatcher.h>
#include <QtCore>

// /usr/include/qt/QtCore/qstringmatcher.h:53
// void QStringMatcher()
extern "C"
void* C_ZN14QStringMatcherC1Ev() {
  return new QStringMatcher();
}
// /usr/include/qt/QtCore/qstringmatcher.h:54
// void QStringMatcher(const class QString &, Qt::CaseSensitivity)
extern "C"
void* C_ZN14QStringMatcherC1ERK7QStringN2Qt15CaseSensitivityE(const QString & pattern, Qt::CaseSensitivity cs) {
  return new QStringMatcher(pattern, cs);
}
// /usr/include/qt/QtCore/qstringmatcher.h:56
// void QStringMatcher(const class QChar *, int, Qt::CaseSensitivity)
extern "C"
void* C_ZN14QStringMatcherC1EPK5QChariN2Qt15CaseSensitivityE(const QChar * uc, int len, Qt::CaseSensitivity cs) {
  return new QStringMatcher(uc, len, cs);
}
// /usr/include/qt/QtCore/qstringmatcher.h:59
// void ~QStringMatcher()
extern "C"
void C_ZN14QStringMatcherD1Ev(void *this_) {
  delete (QStringMatcher*)(this_);
}
// /usr/include/qt/QtCore/qstringmatcher.h:63
// void setPattern(const class QString &)
extern "C"
void C_ZN14QStringMatcher10setPatternERK7QString(void *this_, const QString & pattern) {
  ((QStringMatcher*)this_)->setPattern(pattern);
}
// /usr/include/qt/QtCore/qstringmatcher.h:64
// void setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN14QStringMatcher18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QStringMatcher*)this_)->setCaseSensitivity(cs);
}
// /usr/include/qt/QtCore/qstringmatcher.h:66
// int indexIn(const class QString &, int)
extern "C"
void C_ZNK14QStringMatcher7indexInERK7QStringi(void *this_, const QString & str, int from) {
  /*return*/ ((QStringMatcher*)this_)->indexIn(str, from);
}
// /usr/include/qt/QtCore/qstringmatcher.h:67
// int indexIn(const class QChar *, int, int)
extern "C"
void C_ZNK14QStringMatcher7indexInEPK5QCharii(void *this_, const QChar * str, int length, int from) {
  /*return*/ ((QStringMatcher*)this_)->indexIn(str, length, from);
}
// /usr/include/qt/QtCore/qstringmatcher.h:68
// QString pattern()
extern "C"
void C_ZNK14QStringMatcher7patternEv(void *this_) {
  /*return*/ ((QStringMatcher*)this_)->pattern();
}
// inline
// /usr/include/qt/QtCore/qstringmatcher.h:69
// Qt::CaseSensitivity caseSensitivity()
extern "C"
void C_ZNK14QStringMatcher15caseSensitivityEv(void *this_) {
  /*return*/ ((QStringMatcher*)this_)->caseSensitivity();
}