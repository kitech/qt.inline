//  header block begin
// /usr/include/qt/QtCore/qmimedatabase.h
#ifndef protected
#define protected public
#endif
#include <qmimedatabase.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeDatabase is pure virtual: false
// QMimeDatabase has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMimeDatabase : public QMimeDatabase {
public:
  virtual ~MyQMimeDatabase() {}
// void QMimeDatabase()
MyQMimeDatabase() : QMimeDatabase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:63
// [-2] void QMimeDatabase()
extern "C" Q_DECL_EXPORT
void* C_ZN13QMimeDatabaseC2Ev() {
  return  new QMimeDatabase();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:64
// [-2] void ~QMimeDatabase()
extern "C" Q_DECL_EXPORT
void C_ZN13QMimeDatabaseD2Ev(void *this_) {
  delete (QMimeDatabase*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:66
// [8] QMimeType mimeTypeForName(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForNameERK7QString(void *this_, QString* nameOrAlias) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForName(*nameOrAlias);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:74
// [8] QMimeType mimeTypeForFile(const class QString &, enum QMimeDatabase::MatchMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForFileERK7QStringNS_9MatchModeE(void *this_, QString* fileName, QMimeDatabase::MatchMode mode) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFile(*fileName, mode);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:75
// [8] QMimeType mimeTypeForFile(const class QFileInfo &, enum QMimeDatabase::MatchMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForFileERK9QFileInfoNS_9MatchModeE(void *this_, QFileInfo* fileInfo, QMimeDatabase::MatchMode mode) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFile(*fileInfo, mode);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:78
// [8] QMimeType mimeTypeForData(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForDataERK10QByteArray(void *this_, QByteArray* data) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForData(*data);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:79
// [8] QMimeType mimeTypeForData(class QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForDataEP9QIODevice(void *this_, QIODevice * device) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForData(device);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:81
// [8] QMimeType mimeTypeForUrl(const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase14mimeTypeForUrlERK4QUrl(void *this_, QUrl* url) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForUrl(*url);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:82
// [8] QMimeType mimeTypeForFileNameAndData(const class QString &, class QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringP9QIODevice(void *this_, QString* fileName, QIODevice * device) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFileNameAndData(*fileName, device);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:83
// [8] QMimeType mimeTypeForFileNameAndData(const class QString &, const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringRK10QByteArray(void *this_, QString* fileName, QByteArray* data) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFileNameAndData(*fileName, *data);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:85
// [8] QString suffixForFileName(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase17suffixForFileNameERK7QString(void *this_, QString* fileName) {
  auto rv = ((QMimeDatabase*)this_)->suffixForFileName(*fileName);
return new QString(rv);
}

//  main block end
