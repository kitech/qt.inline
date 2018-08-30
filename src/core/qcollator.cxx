//  header block begin
// since 0x050200
// /usr/include/qt/QtCore/qcollator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcollator.h>
#include <QtCore>
#include "callback_inherit.h"

// QCollator is pure virtual: false
// QCollator has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCollator_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCollator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCollator_t qt_meta_stringdata_MyQCollator = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQCollator"
  },
  "MyQCollator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCollator[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQCollator : public QCollator {
public:
  virtual ~MyQCollator() {}
// void QCollator(const QLocale &)
MyQCollator(const QLocale & locale) : QCollator(locale) {}
// void QCollator(const QCollator &)
MyQCollator(const QCollator & arg0) : QCollator(arg0) {}
// void QCollator(QCollator &&)
MyQCollator(QCollator && other) : QCollator(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:86
// [-2] void QCollator(const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCollatorC2ERK7QLocale(QLocale* locale) {
  return  new QCollator(*locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:87
// [-2] void QCollator(const QCollator &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCollatorC2ERKS_(QCollator* arg0) {
  return  new QCollator(*arg0);
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
// [8] QCollator & operator=(const QCollator &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCollatoraSERKS_(void *this_, QCollator* arg0) {
  auto& rv = ((QCollator*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:91
// [-2] void QCollator(QCollator &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCollatorC2EOS_(QCollator && other) {
  return  new QCollator(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:93
// [8] QCollator & operator=(QCollator &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCollatoraSEOS_(void *this_, QCollator && other) {
  auto& rv = ((QCollator*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:97
// [-2] void swap(QCollator &)
extern "C" Q_DECL_EXPORT
void C_ZN9QCollator4swapERS_(void *this_, QCollator* other) {
  ((QCollator*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:100
// [-2] void setLocale(const QLocale &)
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
// [-2] void setNumericMode(bool)
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
// [-2] void setIgnorePunctuation(bool)
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
// [4] int compare(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QCollator7compareERK7QStringS2_(void *this_, QString* s1, QString* s2) {
  return (int)((QCollator*)this_)->compare(*s1, *s2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:113
// [4] int compare(const QStringRef &, const QStringRef &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QCollator7compareERK10QStringRefS2_(void *this_, QStringRef* s1, QStringRef* s2) {
  return (int)((QCollator*)this_)->compare(*s1, *s2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:114
// [4] int compare(const QChar *, int, const QChar *, int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QCollator7compareEPK5QChariS2_i(void *this_, const QChar * s1, int len1, const QChar * s2, int len2) {
  return (int)((QCollator*)this_)->compare(s1, len1, s2, len2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:116
// [1] bool operator()(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QCollatorclERK7QStringS2_(void *this_, QString* s1, QString* s2) {
  return (bool)((QCollator*)this_)->operator()(*s1, *s2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:119
// [8] QCollatorSortKey sortKey(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCollator7sortKeyERK7QString(void *this_, QString* string) {
  auto rv = ((QCollator*)this_)->sortKey(*string);
return new QCollatorSortKey(rv);
}

//  main block end
