//  header block begin
// /usr/include/qt/QtCore/qmimedatabase.h
#include <qmimedatabase.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qmimedatabase.h:63
// void QMimeDatabase()
extern "C"
void* C_ZN13QMimeDatabaseC1Ev() {
  return new QMimeDatabase();
}
// /usr/include/qt/QtCore/qmimedatabase.h:64
// void ~QMimeDatabase()
extern "C"
void C_ZN13QMimeDatabaseD1Ev(void *this_) {
  delete (QMimeDatabase*)(this_);
}
// /usr/include/qt/QtCore/qmimedatabase.h:66
// QMimeType mimeTypeForName(const class QString &)
extern "C"
void C_ZNK13QMimeDatabase15mimeTypeForNameERK7QString(void *this_, const QString & nameOrAlias) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypeForName(nameOrAlias);
}
// /usr/include/qt/QtCore/qmimedatabase.h:74
// QMimeType mimeTypeForFile(const class QString &, enum QMimeDatabase::MatchMode)
extern "C"
void C_ZNK13QMimeDatabase15mimeTypeForFileERK7QStringNS_9MatchModeE(void *this_, const QString & fileName, QMimeDatabase::MatchMode mode) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypeForFile(fileName, mode);
}
// /usr/include/qt/QtCore/qmimedatabase.h:75
// QMimeType mimeTypeForFile(const class QFileInfo &, enum QMimeDatabase::MatchMode)
extern "C"
void C_ZNK13QMimeDatabase15mimeTypeForFileERK9QFileInfoNS_9MatchModeE(void *this_, const QFileInfo & fileInfo, QMimeDatabase::MatchMode mode) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypeForFile(fileInfo, mode);
}
// /usr/include/qt/QtCore/qmimedatabase.h:76
// QList<QMimeType> mimeTypesForFileName(const class QString &)
extern "C"
void C_ZNK13QMimeDatabase20mimeTypesForFileNameERK7QString(void *this_, const QString & fileName) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypesForFileName(fileName);
}
// /usr/include/qt/QtCore/qmimedatabase.h:78
// QMimeType mimeTypeForData(const class QByteArray &)
extern "C"
void C_ZNK13QMimeDatabase15mimeTypeForDataERK10QByteArray(void *this_, const QByteArray & data) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypeForData(data);
}
// /usr/include/qt/QtCore/qmimedatabase.h:79
// QMimeType mimeTypeForData(class QIODevice *)
extern "C"
void C_ZNK13QMimeDatabase15mimeTypeForDataEP9QIODevice(void *this_, QIODevice * device) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypeForData(device);
}
// /usr/include/qt/QtCore/qmimedatabase.h:81
// QMimeType mimeTypeForUrl(const class QUrl &)
extern "C"
void C_ZNK13QMimeDatabase14mimeTypeForUrlERK4QUrl(void *this_, const QUrl & url) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypeForUrl(url);
}
// /usr/include/qt/QtCore/qmimedatabase.h:82
// QMimeType mimeTypeForFileNameAndData(const class QString &, class QIODevice *)
extern "C"
void C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringP9QIODevice(void *this_, const QString & fileName, QIODevice * device) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypeForFileNameAndData(fileName, device);
}
// /usr/include/qt/QtCore/qmimedatabase.h:83
// QMimeType mimeTypeForFileNameAndData(const class QString &, const class QByteArray &)
extern "C"
void C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringRK10QByteArray(void *this_, const QString & fileName, const QByteArray & data) {
  /*return*/ ((QMimeDatabase*)this_)->mimeTypeForFileNameAndData(fileName, data);
}
// /usr/include/qt/QtCore/qmimedatabase.h:85
// QString suffixForFileName(const class QString &)
extern "C"
void C_ZNK13QMimeDatabase17suffixForFileNameERK7QString(void *this_, const QString & fileName) {
  /*return*/ ((QMimeDatabase*)this_)->suffixForFileName(fileName);
}
// /usr/include/qt/QtCore/qmimedatabase.h:87
// QList<QMimeType> allMimeTypes()
extern "C"
void C_ZNK13QMimeDatabase12allMimeTypesEv(void *this_) {
  /*return*/ ((QMimeDatabase*)this_)->allMimeTypes();
}
//  main block end
