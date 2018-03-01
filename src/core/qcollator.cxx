//  header block begin
// /usr/include/qt/QtCore/qcollator.h
#ifndef protected
#define protected public
#endif
#include <qcollator.h>
#include <QtCore>
#include "callback_inherit.h"

// QCollator is pure virtual: false
// QCollator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCollator : public QCollator {
public:
  virtual ~MyQCollator() {}
// void QCollator(const class QLocale &)
MyQCollator(const QLocale & locale) : QCollator(locale) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:86
// [-2] void QCollator(const class QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCollatorC2ERK7QLocale(QLocale* locale) {
  return  new QCollator(*locale);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:88
// [-2] void ~QCollator()
extern "C" Q_DECL_EXPORT
void C_ZN9QCollatorD2Ev(void *this_) {
  delete (QCollator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:89
// [8] QCollator & operator=(const class QCollator &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCollatoraSERKS_(void *this_, QCollator* arg0) {
  auto& rv = ((QCollator*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:93
// [8] QCollator & operator=(class QCollator &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCollatoraSEOS_(void *this_, QCollator && other) {
  auto& rv = ((QCollator*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:97
// [-2] void swap(class QCollator &)
extern "C" Q_DECL_EXPORT
void C_ZN9QCollator4swapERS_(void *this_, QCollator* other) {
  ((QCollator*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:100
// [-2] void setLocale(const class QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN9QCollator9setLocaleERK7QLocale(void *this_, QLocale* locale) {
  ((QCollator*)this_)->setLocale(*locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:101
// [8] QLocale locale()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCollator6localeEv(void *this_) {
  auto rv = ((QCollator*)this_)->locale();
return new QLocale(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:103
// [4] Qt::CaseSensitivity caseSensitivity()
extern "C" Q_DECL_EXPORT
Qt::CaseSensitivity C_ZNK9QCollator15caseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QCollator*)this_)->caseSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:104
// [-2] void setCaseSensitivity(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN9QCollator18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QCollator*)this_)->setCaseSensitivity(cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:106
// [-2] void setNumericMode(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QCollator14setNumericModeEb(void *this_, bool on) {
  ((QCollator*)this_)->setNumericMode(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:107
// [1] bool numericMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QCollator11numericModeEv(void *this_) {
  return (bool)((QCollator*)this_)->numericMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:109
// [-2] void setIgnorePunctuation(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QCollator20setIgnorePunctuationEb(void *this_, bool on) {
  ((QCollator*)this_)->setIgnorePunctuation(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:110
// [1] bool ignorePunctuation()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QCollator17ignorePunctuationEv(void *this_) {
  return (bool)((QCollator*)this_)->ignorePunctuation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:112
// [4] int compare(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QCollator7compareERK7QStringS2_(void *this_, QString* s1, QString* s2) {
  return (int)((QCollator*)this_)->compare(*s1, *s2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:113
// [4] int compare(const class QStringRef &, const class QStringRef &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QCollator7compareERK10QStringRefS2_(void *this_, QStringRef* s1, QStringRef* s2) {
  return (int)((QCollator*)this_)->compare(*s1, *s2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:114
// [4] int compare(const class QChar *, int, const class QChar *, int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QCollator7compareEPK5QChariS2_i(void *this_, const QChar * s1, int len1, const QChar * s2, int len2) {
  return (int)((QCollator*)this_)->compare(s1, len1, s2, len2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:116
// [1] bool operator()(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QCollatorclERK7QStringS2_(void *this_, QString* s1, QString* s2) {
  return (bool)((QCollator*)this_)->operator()(*s1, *s2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:119
// [8] QCollatorSortKey sortKey(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCollator7sortKeyERK7QString(void *this_, QString* string) {
  auto rv = ((QCollator*)this_)->sortKey(*string);
return new QCollatorSortKey(rv);
}

//  main block end
