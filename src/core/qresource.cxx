//  header block begin
// /usr/include/qt/QtCore/qresource.h
#include <qresource.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qresource.h:57
// void QResource(const class QString &, const class QLocale &)
extern "C"
void* C_ZN9QResourceC1ERK7QStringRK7QLocale(const QString & file, const QLocale & locale) {
  return new QResource(file, locale);
}
// /usr/include/qt/QtCore/qresource.h:58
// void ~QResource()
extern "C"
void C_ZN9QResourceD1Ev(void *this_) {
  delete (QResource*)(this_);
}
// /usr/include/qt/QtCore/qresource.h:60
// void setFileName(const class QString &)
extern "C"
void C_ZN9QResource11setFileNameERK7QString(void *this_, const QString & file) {
  ((QResource*)this_)->setFileName(file);
}
// /usr/include/qt/QtCore/qresource.h:61
// QString fileName()
extern "C"
void C_ZNK9QResource8fileNameEv(void *this_) {
  /*return*/ ((QResource*)this_)->fileName();
}
// /usr/include/qt/QtCore/qresource.h:62
// QString absoluteFilePath()
extern "C"
void C_ZNK9QResource16absoluteFilePathEv(void *this_) {
  /*return*/ ((QResource*)this_)->absoluteFilePath();
}
// /usr/include/qt/QtCore/qresource.h:64
// void setLocale(const class QLocale &)
extern "C"
void C_ZN9QResource9setLocaleERK7QLocale(void *this_, const QLocale & locale) {
  ((QResource*)this_)->setLocale(locale);
}
// /usr/include/qt/QtCore/qresource.h:65
// QLocale locale()
extern "C"
void C_ZNK9QResource6localeEv(void *this_) {
  /*return*/ ((QResource*)this_)->locale();
}
// /usr/include/qt/QtCore/qresource.h:67
// bool isValid()
extern "C"
void C_ZNK9QResource7isValidEv(void *this_) {
  /*return*/ ((QResource*)this_)->isValid();
}
// /usr/include/qt/QtCore/qresource.h:69
// bool isCompressed()
extern "C"
void C_ZNK9QResource12isCompressedEv(void *this_) {
  /*return*/ ((QResource*)this_)->isCompressed();
}
// /usr/include/qt/QtCore/qresource.h:70
// qint64 size()
extern "C"
void C_ZNK9QResource4sizeEv(void *this_) {
  /*return*/ ((QResource*)this_)->size();
}
// /usr/include/qt/QtCore/qresource.h:71
// const uchar * data()
extern "C"
void C_ZNK9QResource4dataEv(void *this_) {
  /*return*/ ((QResource*)this_)->data();
}
// static
// /usr/include/qt/QtCore/qresource.h:73
// void addSearchPath(const class QString &)
extern "C"
void C_ZN9QResource13addSearchPathERK7QString(const QString & path) {
  QResource::addSearchPath(path);
}
// static
// /usr/include/qt/QtCore/qresource.h:74
// QStringList searchPaths()
extern "C"
void C_ZN9QResource11searchPathsEv() {
  /*return*/ QResource::searchPaths();
}
// static
// /usr/include/qt/QtCore/qresource.h:76
// bool registerResource(const class QString &, const class QString &)
extern "C"
void C_ZN9QResource16registerResourceERK7QStringS2_(const QString & rccFilename, const QString & resourceRoot) {
  /*return*/ QResource::registerResource(rccFilename, resourceRoot);
}
// static
// /usr/include/qt/QtCore/qresource.h:77
// bool unregisterResource(const class QString &, const class QString &)
extern "C"
void C_ZN9QResource18unregisterResourceERK7QStringS2_(const QString & rccFilename, const QString & resourceRoot) {
  /*return*/ QResource::unregisterResource(rccFilename, resourceRoot);
}
// static
// /usr/include/qt/QtCore/qresource.h:79
// bool registerResource(const uchar *, const class QString &)
extern "C"
void C_ZN9QResource16registerResourceEPKhRK7QString(const uchar * rccData, const QString & resourceRoot) {
  /*return*/ QResource::registerResource(rccData, resourceRoot);
}
// static
// /usr/include/qt/QtCore/qresource.h:80
// bool unregisterResource(const uchar *, const class QString &)
extern "C"
void C_ZN9QResource18unregisterResourceEPKhRK7QString(const uchar * rccData, const QString & resourceRoot) {
  /*return*/ QResource::unregisterResource(rccData, resourceRoot);
}
//  main block end
