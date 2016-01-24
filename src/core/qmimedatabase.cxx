// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qmimedatabase.h
// dst-file: /src/core/qmimedatabase.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmimedatabase.h>


#include <qmimetype.h>
#include <qstring.h>
#include <qlist.h>
#include <qmetaobject.h>
// <= header block end

// main block begin =>
void __keep_qmimedatabase_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMimeDatabase_Class_Size()
{
  return sizeof(QMimeDatabase);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 75, column 15>
//   // proto:  QMimeType QMimeDatabase::mimeTypeForUrl(const QUrl & url);
// _ZNK13QMimeDatabase14mimeTypeForUrlERK4QUrl mimeTypeForUrl(const class QUrl &)
extern "C"
QMimeType*
C_ZNK13QMimeDatabase14mimeTypeForUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypeForUrl(*((const QUrl*)arg1));
  return new QMimeType(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 69, column 15>
//   // proto:  QMimeType QMimeDatabase::mimeTypeForFile(const QFileInfo & fileInfo, QMimeDatabase::MatchMode mode);
// _ZNK13QMimeDatabase15mimeTypeForFileERK9QFileInfoNS_9MatchModeE mimeTypeForFile(const class QFileInfo &, enum QMimeDatabase::MatchMode)
extern "C"
QMimeType*
C_ZNK13QMimeDatabase15mimeTypeForFileERK9QFileInfoNS_9MatchModeE(void *qthis,
const QFileInfo* arg1,
QMimeDatabase::MatchMode arg2) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypeForFile(*((const QFileInfo*)arg1),
arg2);
  return new QMimeType(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 57, column 5>
//   // proto:  void QMimeDatabase::QMimeDatabase();
extern "C"
QMimeDatabase*
C_ZN13QMimeDatabaseC2Ev() {
  auto ret = new QMimeDatabase();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 72, column 15>
//   // proto:  QMimeType QMimeDatabase::mimeTypeForData(const QByteArray & data);
// _ZNK13QMimeDatabase15mimeTypeForDataERK10QByteArray mimeTypeForData(const class QByteArray &)
extern "C"
QMimeType*
C_ZNK13QMimeDatabase15mimeTypeForDataERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypeForData(*((const QByteArray*)arg1));
  return new QMimeType(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 60, column 15>
//   // proto:  QMimeType QMimeDatabase::mimeTypeForName(const QString & nameOrAlias);
// _ZNK13QMimeDatabase15mimeTypeForNameERK7QString mimeTypeForName(const class QString &)
extern "C"
QMimeType*
C_ZNK13QMimeDatabase15mimeTypeForNameERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypeForName(*((const QString*)arg1));
  return new QMimeType(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 79, column 13>
//   // proto:  QString QMimeDatabase::suffixForFileName(const QString & fileName);
// _ZNK13QMimeDatabase17suffixForFileNameERK7QString suffixForFileName(const class QString &)
extern "C"
QString*
C_ZNK13QMimeDatabase17suffixForFileNameERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMimeDatabase*)qthis)->suffixForFileName(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 70, column 22>
//   // proto:  QList<QMimeType> QMimeDatabase::mimeTypesForFileName(const QString & fileName);
// _ZNK13QMimeDatabase20mimeTypesForFileNameERK7QString mimeTypesForFileName(const class QString &)
extern "C"
QList<QMimeType>*
C_ZNK13QMimeDatabase20mimeTypesForFileNameERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypesForFileName(*((const QString*)arg1));
  return new QList<QMimeType>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 76, column 15>
//   // proto:  QMimeType QMimeDatabase::mimeTypeForFileNameAndData(const QString & fileName, QIODevice * device);
// _ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringP9QIODevice mimeTypeForFileNameAndData(const class QString &, class QIODevice *)
extern "C"
QMimeType*
C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringP9QIODevice(void *qthis,
const QString* arg1,
QIODevice * arg2) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypeForFileNameAndData(*((const QString*)arg1),
arg2);
  return new QMimeType(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 73, column 15>
//   // proto:  QMimeType QMimeDatabase::mimeTypeForData(QIODevice * device);
// _ZNK13QMimeDatabase15mimeTypeForDataEP9QIODevice mimeTypeForData(class QIODevice *)
extern "C"
QMimeType*
C_ZNK13QMimeDatabase15mimeTypeForDataEP9QIODevice(void *qthis,
QIODevice * arg1) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypeForData(arg1);
  return new QMimeType(ret); // 5
}
//   // proto:  void QMimeDatabase::~QMimeDatabase();
extern "C"
void C_ZN13QMimeDatabaseD2Ev(void *qthis) {
  delete (QMimeDatabase*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 77, column 15>
//   // proto:  QMimeType QMimeDatabase::mimeTypeForFileNameAndData(const QString & fileName, const QByteArray & data);
// _ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringRK10QByteArray mimeTypeForFileNameAndData(const class QString &, const class QByteArray &)
extern "C"
QMimeType*
C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringRK10QByteArray(void *qthis,
const QString* arg1,
const QByteArray* arg2) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypeForFileNameAndData(*((const QString*)arg1),
*((const QByteArray*)arg2));
  return new QMimeType(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 81, column 22>
//   // proto:  QList<QMimeType> QMimeDatabase::allMimeTypes();
// _ZNK13QMimeDatabase12allMimeTypesEv allMimeTypes()
extern "C"
QList<QMimeType>*
C_ZNK13QMimeDatabase12allMimeTypesEv(void *qthis) {
  auto ret =
  ((QMimeDatabase*)qthis)->allMimeTypes();
  return new QList<QMimeType>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedatabase.h', line 68, column 15>
//   // proto:  QMimeType QMimeDatabase::mimeTypeForFile(const QString & fileName, QMimeDatabase::MatchMode mode);
// _ZNK13QMimeDatabase15mimeTypeForFileERK7QStringNS_9MatchModeE mimeTypeForFile(const class QString &, enum QMimeDatabase::MatchMode)
extern "C"
QMimeType*
C_ZNK13QMimeDatabase15mimeTypeForFileERK7QStringNS_9MatchModeE(void *qthis,
const QString* arg1,
QMimeDatabase::MatchMode arg2) {
  auto ret =
  ((QMimeDatabase*)qthis)->mimeTypeForFile(*((const QString*)arg1),
arg2);
  return new QMimeType(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

