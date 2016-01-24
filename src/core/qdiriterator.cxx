// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qdiriterator.h
// dst-file: /src/core/qdiriterator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdiriterator.h>


#include <qstring.h>
#include <qfileinfo.h>
// <= header block end

// main block begin =>
void __keep_qdiriterator_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDirIterator_Class_Size()
{
  return sizeof(QDirIterator);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 68, column 13>
//   // proto:  QString QDirIterator::fileName();
// _ZNK12QDirIterator8fileNameEv fileName()
extern "C"
QString*
C_ZNK12QDirIterator8fileNameEv(void *qthis) {
  auto ret =
  ((QDirIterator*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 53, column 5>
//   // proto:  void QDirIterator::QDirIterator(const QString & path, IteratorFlags flags);
extern "C"
QDirIterator*
C_ZN12QDirIteratorC2ERK7QString6QFlagsINS_12IteratorFlagEE(const QString* arg1,
QDirIterator::IteratorFlags arg2) {
  auto ret = new QDirIterator(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 71, column 13>
//   // proto:  QString QDirIterator::path();
// _ZNK12QDirIterator4pathEv path()
extern "C"
QString*
C_ZNK12QDirIterator4pathEv(void *qthis) {
  auto ret =
  ((QDirIterator*)qthis)->path();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 52, column 5>
//   // proto:  void QDirIterator::QDirIterator(const QDir & dir, IteratorFlags flags);
extern "C"
QDirIterator*
C_ZN12QDirIteratorC2ERK4QDir6QFlagsINS_12IteratorFlagEE(const QDir* arg1,
QDirIterator::IteratorFlags arg2) {
  auto ret = new QDirIterator(*((const QDir*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 65, column 13>
//   // proto:  QString QDirIterator::next();
// _ZN12QDirIterator4nextEv next()
extern "C"
QString*
C_ZN12QDirIterator4nextEv(void *qthis) {
  auto ret =
  ((QDirIterator*)qthis)->next();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 69, column 13>
//   // proto:  QString QDirIterator::filePath();
// _ZNK12QDirIterator8filePathEv filePath()
extern "C"
QString*
C_ZNK12QDirIterator8filePathEv(void *qthis) {
  auto ret =
  ((QDirIterator*)qthis)->filePath();
  return new QString(ret); // 5
}
//   // proto:  void QDirIterator::~QDirIterator();
extern "C"
void C_ZN12QDirIteratorD2Ev(void *qthis) {
  delete (QDirIterator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 55, column 5>
//   // proto:  void QDirIterator::QDirIterator(const QString & path, QDir::Filters filter, IteratorFlags flags);
extern "C"
QDirIterator*
C_ZN12QDirIteratorC2ERK7QString6QFlagsIN4QDir6FilterEES3_INS_12IteratorFlagEE(const QString* arg1,
QDir::Filters* arg2,
QDirIterator::IteratorFlags arg3) {
  auto ret = new QDirIterator(*((const QString*)arg1),
*((QDir::Filters*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 58, column 5>
//   // proto:  void QDirIterator::QDirIterator(const QString & path, const QStringList & nameFilters, QDir::Filters filters, IteratorFlags flags);
extern "C"
QDirIterator*
C_ZN12QDirIteratorC2ERK7QStringRK11QStringList6QFlagsIN4QDir6FilterEES6_INS_12IteratorFlagEE(const QString* arg1,
const QStringList* arg2,
QDir::Filters* arg3,
QDirIterator::IteratorFlags arg4) {
  auto ret = new QDirIterator(*((const QString*)arg1),
*((const QStringList*)arg2),
*((QDir::Filters*)arg3),
arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 70, column 15>
//   // proto:  QFileInfo QDirIterator::fileInfo();
// _ZNK12QDirIterator8fileInfoEv fileInfo()
extern "C"
QFileInfo*
C_ZNK12QDirIterator8fileInfoEv(void *qthis) {
  auto ret =
  ((QDirIterator*)qthis)->fileInfo();
  return new QFileInfo(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qdiriterator.h', line 66, column 10>
//   // proto:  bool QDirIterator::hasNext();
// _ZNK12QDirIterator7hasNextEv hasNext()
extern "C"
bool
C_ZNK12QDirIterator7hasNextEv(void *qthis) {
  auto ret =
  ((QDirIterator*)qthis)->hasNext();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

