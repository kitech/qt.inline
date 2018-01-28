//  header block begin
// /usr/include/qt/QtCore/qmimedatabase.h
#include <qmimedatabase.h>
#include <QtCore>

// QMimeDatabase is pure virtual: false
//  header block end

//  main block begin

class MyQMimeDatabase : public QMimeDatabase {
public:
MyQMimeDatabase() : QMimeDatabase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:63
// [-2] void QMimeDatabase()
extern "C"
void* C_ZN13QMimeDatabaseC1Ev() {
  (MyQMimeDatabase*)(0);
  return  new MyQMimeDatabase();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:64
// [-2] void ~QMimeDatabase()
extern "C"
void C_ZN13QMimeDatabaseD1Ev(void *this_) {
  delete (QMimeDatabase*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:66
// [8] QMimeType mimeTypeForName(const class QString &)
extern "C"
void* C_ZNK13QMimeDatabase15mimeTypeForNameERK7QString(void *this_, const QString & nameOrAlias) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForName(nameOrAlias);
return new QMimeType(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:74
// [8] QMimeType mimeTypeForFile(const class QString &, enum QMimeDatabase::MatchMode)
extern "C"
void* C_ZNK13QMimeDatabase15mimeTypeForFileERK7QStringNS_9MatchModeE(void *this_, const QString & fileName, QMimeDatabase::MatchMode mode) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFile(fileName, mode);
return new QMimeType(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:75
// [8] QMimeType mimeTypeForFile(const class QFileInfo &, enum QMimeDatabase::MatchMode)
extern "C"
void* C_ZNK13QMimeDatabase15mimeTypeForFileERK9QFileInfoNS_9MatchModeE(void *this_, const QFileInfo & fileInfo, QMimeDatabase::MatchMode mode) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFile(fileInfo, mode);
return new QMimeType(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:78
// [8] QMimeType mimeTypeForData(const class QByteArray &)
extern "C"
void* C_ZNK13QMimeDatabase15mimeTypeForDataERK10QByteArray(void *this_, const QByteArray & data) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForData(data);
return new QMimeType(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:79
// [8] QMimeType mimeTypeForData(class QIODevice *)
extern "C"
void* C_ZNK13QMimeDatabase15mimeTypeForDataEP9QIODevice(void *this_, QIODevice * device) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForData(device);
return new QMimeType(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:81
// [8] QMimeType mimeTypeForUrl(const class QUrl &)
extern "C"
void* C_ZNK13QMimeDatabase14mimeTypeForUrlERK4QUrl(void *this_, const QUrl & url) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForUrl(url);
return new QMimeType(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:82
// [8] QMimeType mimeTypeForFileNameAndData(const class QString &, class QIODevice *)
extern "C"
void* C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringP9QIODevice(void *this_, const QString & fileName, QIODevice * device) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFileNameAndData(fileName, device);
return new QMimeType(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:83
// [8] QMimeType mimeTypeForFileNameAndData(const class QString &, const class QByteArray &)
extern "C"
void* C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringRK10QByteArray(void *this_, const QString & fileName, const QByteArray & data) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFileNameAndData(fileName, data);
return new QMimeType(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:85
// [8] QString suffixForFileName(const class QString &)
extern "C"
void* C_ZNK13QMimeDatabase17suffixForFileNameERK7QString(void *this_, const QString & fileName) {
  auto rv = ((QMimeDatabase*)this_)->suffixForFileName(fileName);
return new QString(rv);
}
//  main block end
