// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qcollator.h
// dst-file: /src/core/qcollator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcollator.h>


#include <qnamespace.h>
#include <qlocale.h>
// <= header block end

// main block begin =>
void __keep_qcollator_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 91, column 10>
//   // proto:  void QCollator::swap(QCollator & other);
if (true) {
  auto f = [](QCollator flythis, QCollator & arg1) {
    ((QCollator*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QCollator4swapERS_ swap(class QCollator &)
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 85, column 5>
//   // proto:  void QCollator::QCollator(QCollator && other);
if (true) {
  auto f = [](QCollator && arg1) {
    new QCollator(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 58, column 10>
//   // proto:  void QCollatorSortKey::swap(QCollatorSortKey & other);
if (true) {
  auto f = [](QCollatorSortKey flythis, QCollatorSortKey & arg1) {
    ((QCollatorSortKey*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN16QCollatorSortKey4swapERS_ swap(class QCollatorSortKey &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCollator_Class_Size()
{
  return sizeof(QCollator);
}

extern "C"
int QCollatorSortKey_Class_Size()
{
  return sizeof(QCollatorSortKey);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 101, column 10>
//   // proto:  bool QCollator::numericMode();
// _ZNK9QCollator11numericModeEv numericMode()
extern "C"
bool
C_ZNK9QCollator11numericModeEv(void *qthis) {
  auto ret =
  ((QCollator*)qthis)->numericMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 80, column 14>
//   // proto:  void QCollator::QCollator(const QLocale & locale);
extern "C"
QCollator*
C_ZN9QCollatorC2ERK7QLocale(const QLocale* arg1) {
  auto ret = new QCollator(*((const QLocale*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 94, column 10>
//   // proto:  void QCollator::setLocale(const QLocale & locale);
// _ZN9QCollator9setLocaleERK7QLocale setLocale(const class QLocale &)
extern "C"
void
C_ZN9QCollator9setLocaleERK7QLocale(void *qthis,
const QLocale* arg1) {
  ((QCollator*)qthis)->setLocale(*((const QLocale*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 100, column 10>
//   // proto:  void QCollator::setNumericMode(bool on);
// _ZN9QCollator14setNumericModeEb setNumericMode(_Bool)
extern "C"
void
C_ZN9QCollator14setNumericModeEb(void *qthis,
bool arg1) {
  ((QCollator*)qthis)->setNumericMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 107, column 9>
//   // proto:  int QCollator::compare(const QStringRef & s1, const QStringRef & s2);
// _ZNK9QCollator7compareERK10QStringRefS2_ compare(const class QStringRef &, const class QStringRef &)
extern "C"
int
C_ZNK9QCollator7compareERK10QStringRefS2_(void *qthis,
const QStringRef* arg1,
const QStringRef* arg2) {
  auto ret =
  ((QCollator*)qthis)->compare(*((const QStringRef*)arg1),
*((const QStringRef*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 108, column 9>
//   // proto:  int QCollator::compare(const QChar * s1, int len1, const QChar * s2, int len2);
// _ZNK9QCollator7compareEPK5QChariS2_i compare(const class QChar *, int, const class QChar *, int)
extern "C"
int
C_ZNK9QCollator7compareEPK5QChariS2_i(void *qthis,
const QChar * arg1,
int arg2,
const QChar * arg3,
int arg4) {
  auto ret =
  ((QCollator*)qthis)->compare(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 113, column 22>
//   // proto:  QCollatorSortKey QCollator::sortKey(const QString & string);
// _ZNK9QCollator7sortKeyERK7QString sortKey(const class QString &)
extern "C"
QCollatorSortKey*
C_ZNK9QCollator7sortKeyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QCollator*)qthis)->sortKey(*((const QString*)arg1));
  return new QCollatorSortKey(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 97, column 25>
//   // proto:  Qt::CaseSensitivity QCollator::caseSensitivity();
// _ZNK9QCollator15caseSensitivityEv caseSensitivity()
extern "C"
Qt::CaseSensitivity
C_ZNK9QCollator15caseSensitivityEv(void *qthis) {
  auto ret =
  ((QCollator*)qthis)->caseSensitivity();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 98, column 10>
//   // proto:  void QCollator::setCaseSensitivity(Qt::CaseSensitivity cs);
// _ZN9QCollator18setCaseSensitivityEN2Qt15CaseSensitivityE setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void
C_ZN9QCollator18setCaseSensitivityEN2Qt15CaseSensitivityE(void *qthis,
Qt::CaseSensitivity* arg1) {
  ((QCollator*)qthis)->setCaseSensitivity(*((Qt::CaseSensitivity*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 106, column 9>
//   // proto:  int QCollator::compare(const QString & s1, const QString & s2);
// _ZNK9QCollator7compareERK7QStringS2_ compare(const class QString &, const class QString &)
extern "C"
int
C_ZNK9QCollator7compareERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QCollator*)qthis)->compare(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QCollator::~QCollator();
extern "C"
void C_ZN9QCollatorD2Ev(void *qthis) {
  delete (QCollator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 104, column 10>
//   // proto:  bool QCollator::ignorePunctuation();
// _ZNK9QCollator17ignorePunctuationEv ignorePunctuation()
extern "C"
bool
C_ZNK9QCollator17ignorePunctuationEv(void *qthis) {
  auto ret =
  ((QCollator*)qthis)->ignorePunctuation();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 81, column 5>
//   // proto:  void QCollator::QCollator(const QCollator & );
extern "C"
QCollator*
C_ZN9QCollatorC2ERKS_(const QCollator* arg1) {
  auto ret = new QCollator(*((const QCollator*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 95, column 13>
//   // proto:  QLocale QCollator::locale();
// _ZNK9QCollator6localeEv locale()
extern "C"
QLocale*
C_ZNK9QCollator6localeEv(void *qthis) {
  auto ret =
  ((QCollator*)qthis)->locale();
  return new QLocale(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 91, column 10>
//   // proto:  void QCollator::swap(QCollator & other);
// _ZN9QCollator4swapERS_ swap(class QCollator &)
extern "C"
void
C_ZN9QCollator4swapERS_(void *qthis,
QCollator* arg1) {
  ((QCollator*)qthis)->swap(*((QCollator*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 103, column 10>
//   // proto:  void QCollator::setIgnorePunctuation(bool on);
// _ZN9QCollator20setIgnorePunctuationEb setIgnorePunctuation(_Bool)
extern "C"
void
C_ZN9QCollator20setIgnorePunctuationEb(void *qthis,
bool arg1) {
  ((QCollator*)qthis)->setIgnorePunctuation(arg1);
}
//   // proto:  void QCollatorSortKey::~QCollatorSortKey();
extern "C"
void C_ZN16QCollatorSortKeyD2Ev(void *qthis) {
  delete (QCollatorSortKey*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 58, column 10>
//   // proto:  void QCollatorSortKey::swap(QCollatorSortKey & other);
// _ZN16QCollatorSortKey4swapERS_ swap(class QCollatorSortKey &)
extern "C"
void
C_ZN16QCollatorSortKey4swapERS_(void *qthis,
QCollatorSortKey* arg1) {
  ((QCollatorSortKey*)qthis)->swap(*((QCollatorSortKey*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 61, column 9>
//   // proto:  int QCollatorSortKey::compare(const QCollatorSortKey & key);
// _ZNK16QCollatorSortKey7compareERKS_ compare(const class QCollatorSortKey &)
extern "C"
int
C_ZNK16QCollatorSortKey7compareERKS_(void *qthis,
const QCollatorSortKey* arg1) {
  auto ret =
  ((QCollatorSortKey*)qthis)->compare(*((const QCollatorSortKey*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qcollator.h', line 51, column 5>
//   // proto:  void QCollatorSortKey::QCollatorSortKey(const QCollatorSortKey & other);
extern "C"
QCollatorSortKey*
C_ZN16QCollatorSortKeyC2ERKS_(const QCollatorSortKey* arg1) {
  auto ret = new QCollatorSortKey(*((const QCollatorSortKey*)arg1));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

