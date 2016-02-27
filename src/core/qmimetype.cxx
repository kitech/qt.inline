// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qmimetype.h
// dst-file: /src/core/qmimetype.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmimetype.h>


#include <qstring.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qmimetype_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 64, column 10>
//   // proto:  void QMimeType::swap(QMimeType & other);
if (true) {
  auto f = [](QMimeType flythis, QMimeType & arg1) {
    ((QMimeType*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QMimeType4swapERS_ swap(class QMimeType &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMimeType_Class_Size()
{
  return sizeof(QMimeType);
}

// <= use block end

// ext block begin =>
//   // proto:  void QMimeType::~QMimeType();
extern "C"
void C_ZN9QMimeTypeD2Ev(void *qthis) {
  delete (QMimeType*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 83, column 13>
//   // proto:  QString QMimeType::comment();
// _ZNK9QMimeType7commentEv comment()
extern "C"
QString*
C_ZNK9QMimeType7commentEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->comment();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 89, column 17>
//   // proto:  QStringList QMimeType::aliases();
// _ZNK9QMimeType7aliasesEv aliases()
extern "C"
QStringList*
C_ZNK9QMimeType7aliasesEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->aliases();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 95, column 13>
//   // proto:  QString QMimeType::filterString();
// _ZNK9QMimeType12filterStringEv filterString()
extern "C"
QString*
C_ZNK9QMimeType12filterStringEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->filterString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 87, column 17>
//   // proto:  QStringList QMimeType::parentMimeTypes();
// _ZNK9QMimeType15parentMimeTypesEv parentMimeTypes()
extern "C"
QStringList*
C_ZNK9QMimeType15parentMimeTypesEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->parentMimeTypes();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 55, column 5>
//   // proto:  void QMimeType::QMimeType(const QMimeType & other);
extern "C"
QMimeType*
C_ZN9QMimeTypeC2ERKS_(const QMimeType* arg1) {
  auto ret = new QMimeType(*((const QMimeType*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 93, column 10>
//   // proto:  bool QMimeType::inherits(const QString & mimeTypeName);
// _ZNK9QMimeType8inheritsERK7QString inherits(const class QString &)
extern "C"
bool
C_ZNK9QMimeType8inheritsERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMimeType*)qthis)->inherits(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 80, column 10>
//   // proto:  bool QMimeType::isDefault();
// _ZNK9QMimeType9isDefaultEv isDefault()
extern "C"
bool
C_ZNK9QMimeType9isDefaultEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->isDefault();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 78, column 10>
//   // proto:  bool QMimeType::isValid();
// _ZNK9QMimeType7isValidEv isValid()
extern "C"
bool
C_ZNK9QMimeType7isValidEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 68, column 14>
//   // proto:  void QMimeType::QMimeType(const QMimeTypePrivate & dd);
extern "C"
QMimeType*
C_ZN9QMimeTypeC2ERK16QMimeTypePrivate(const QMimeTypePrivate* arg1) {
  auto ret = new QMimeType(*((const QMimeTypePrivate*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 54, column 5>
//   // proto:  void QMimeType::QMimeType();
extern "C"
QMimeType*
C_ZN9QMimeTypeC2Ev() {
  auto ret = new QMimeType();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 64, column 10>
//   // proto:  void QMimeType::swap(QMimeType & other);
// _ZN9QMimeType4swapERS_ swap(class QMimeType &)
extern "C"
void
C_ZN9QMimeType4swapERS_(void *qthis,
QMimeType* arg1) {
  ((QMimeType*)qthis)->swap(*((QMimeType*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 90, column 17>
//   // proto:  QStringList QMimeType::suffixes();
// _ZNK9QMimeType8suffixesEv suffixes()
extern "C"
QStringList*
C_ZNK9QMimeType8suffixesEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->suffixes();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 84, column 13>
//   // proto:  QString QMimeType::genericIconName();
// _ZNK9QMimeType15genericIconNameEv genericIconName()
extern "C"
QString*
C_ZNK9QMimeType15genericIconNameEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->genericIconName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 85, column 13>
//   // proto:  QString QMimeType::iconName();
// _ZNK9QMimeType8iconNameEv iconName()
extern "C"
QString*
C_ZNK9QMimeType8iconNameEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->iconName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 88, column 17>
//   // proto:  QStringList QMimeType::allAncestors();
// _ZNK9QMimeType12allAncestorsEv allAncestors()
extern "C"
QStringList*
C_ZNK9QMimeType12allAncestorsEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->allAncestors();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 86, column 17>
//   // proto:  QStringList QMimeType::globPatterns();
// _ZNK9QMimeType12globPatternsEv globPatterns()
extern "C"
QStringList*
C_ZNK9QMimeType12globPatternsEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->globPatterns();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 82, column 13>
//   // proto:  QString QMimeType::name();
// _ZNK9QMimeType4nameEv name()
extern "C"
QString*
C_ZNK9QMimeType4nameEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimetype.h', line 91, column 13>
//   // proto:  QString QMimeType::preferredSuffix();
// _ZNK9QMimeType15preferredSuffixEv preferredSuffix()
extern "C"
QString*
C_ZNK9QMimeType15preferredSuffixEv(void *qthis) {
  auto ret =
  ((QMimeType*)qthis)->preferredSuffix();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

