// /usr/include/qt/QtCore/qcollator.h
#include <qcollator.h>
#include <QtCore>

// /usr/include/qt/QtCore/qcollator.h:86
// void QCollator(const class QLocale &)
extern "C"
void* C_ZN9QCollatorC1ERK7QLocale(const QLocale & locale) {
  return new QCollator(locale);
}
// /usr/include/qt/QtCore/qcollator.h:88
// void ~QCollator()
extern "C"
void C_ZN9QCollatorD1Ev(void *this_) {
  delete (QCollator*)(this_);
}
// inline
// /usr/include/qt/QtCore/qcollator.h:97
// void swap(class QCollator &)
extern "C"
void C_ZN9QCollator4swapERS_(void *this_, QCollator & other) {
  ((QCollator*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qcollator.h:100
// void setLocale(const class QLocale &)
extern "C"
void C_ZN9QCollator9setLocaleERK7QLocale(void *this_, const QLocale & locale) {
  ((QCollator*)this_)->setLocale(locale);
}
// /usr/include/qt/QtCore/qcollator.h:101
// QLocale locale()
extern "C"
void C_ZNK9QCollator6localeEv(void *this_) {
  /*return*/ ((QCollator*)this_)->locale();
}
// /usr/include/qt/QtCore/qcollator.h:103
// Qt::CaseSensitivity caseSensitivity()
extern "C"
void C_ZNK9QCollator15caseSensitivityEv(void *this_) {
  /*return*/ ((QCollator*)this_)->caseSensitivity();
}
// /usr/include/qt/QtCore/qcollator.h:104
// void setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN9QCollator18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QCollator*)this_)->setCaseSensitivity(cs);
}
// /usr/include/qt/QtCore/qcollator.h:106
// void setNumericMode(_Bool)
extern "C"
void C_ZN9QCollator14setNumericModeEb(void *this_, bool on) {
  ((QCollator*)this_)->setNumericMode(on);
}
// /usr/include/qt/QtCore/qcollator.h:107
// bool numericMode()
extern "C"
void C_ZNK9QCollator11numericModeEv(void *this_) {
  /*return*/ ((QCollator*)this_)->numericMode();
}
// /usr/include/qt/QtCore/qcollator.h:109
// void setIgnorePunctuation(_Bool)
extern "C"
void C_ZN9QCollator20setIgnorePunctuationEb(void *this_, bool on) {
  ((QCollator*)this_)->setIgnorePunctuation(on);
}
// /usr/include/qt/QtCore/qcollator.h:110
// bool ignorePunctuation()
extern "C"
void C_ZNK9QCollator17ignorePunctuationEv(void *this_) {
  /*return*/ ((QCollator*)this_)->ignorePunctuation();
}
// /usr/include/qt/QtCore/qcollator.h:112
// int compare(const class QString &, const class QString &)
extern "C"
void C_ZNK9QCollator7compareERK7QStringS2_(void *this_, const QString & s1, const QString & s2) {
  /*return*/ ((QCollator*)this_)->compare(s1, s2);
}
// /usr/include/qt/QtCore/qcollator.h:113
// int compare(const class QStringRef &, const class QStringRef &)
extern "C"
void C_ZNK9QCollator7compareERK10QStringRefS2_(void *this_, const QStringRef & s1, const QStringRef & s2) {
  /*return*/ ((QCollator*)this_)->compare(s1, s2);
}
// /usr/include/qt/QtCore/qcollator.h:114
// int compare(const class QChar *, int, const class QChar *, int)
extern "C"
void C_ZNK9QCollator7compareEPK5QChariS2_i(void *this_, const QChar * s1, int len1, const QChar * s2, int len2) {
  /*return*/ ((QCollator*)this_)->compare(s1, len1, s2, len2);
}
// /usr/include/qt/QtCore/qcollator.h:119
// QCollatorSortKey sortKey(const class QString &)
extern "C"
void C_ZNK9QCollator7sortKeyERK7QString(void *this_, const QString & string) {
  /*return*/ ((QCollator*)this_)->sortKey(string);
}