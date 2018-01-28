//  header block begin
// /usr/include/qt/QtCore/qresource.h
#include <qresource.h>
#include <QtCore>

// QResource is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:86
// [1] bool isDir()
extern "C"
void* callback_ZNK9QResource5isDirEv = 0;
extern "C" void set_callback_ZNK9QResource5isDirEv(void*cbfn)
{ callback_ZNK9QResource5isDirEv = cbfn; }
// Protected inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:87
// [1] bool isFile()
extern "C"
void* callback_ZNK9QResource6isFileEv = 0;
extern "C" void set_callback_ZNK9QResource6isFileEv(void*cbfn)
{ callback_ZNK9QResource6isFileEv = cbfn; }

class MyQResource : public QResource {
public:
MyQResource(const QString & file, const QLocale & locale) : QResource(file, locale) {}
// bool isDir()
// bool isDir()
virtual bool isDir() {
  if (callback_ZNK9QResource5isDirEv != 0) {
  // callback_ZNK9QResource5isDirEv();
}}
// bool isFile()
// bool isFile()
virtual bool isFile() {
  if (callback_ZNK9QResource6isFileEv != 0) {
  // callback_ZNK9QResource6isFileEv();
}}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:57
// [-2] void QResource(const class QString &, const class QLocale &)
extern "C"
void* C_ZN9QResourceC1ERK7QStringRK7QLocale(const QString & file, const QLocale & locale) {
  (MyQResource*)(0);
  return  new MyQResource(file, locale);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:58
// [-2] void ~QResource()
extern "C"
void C_ZN9QResourceD1Ev(void *this_) {
  delete (QResource*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:60
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN9QResource11setFileNameERK7QString(void *this_, const QString & file) {
  ((QResource*)this_)->setFileName(file);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:61
// [8] QString fileName()
extern "C"
void* C_ZNK9QResource8fileNameEv(void *this_) {
  auto rv = ((QResource*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:62
// [8] QString absoluteFilePath()
extern "C"
void* C_ZNK9QResource16absoluteFilePathEv(void *this_) {
  auto rv = ((QResource*)this_)->absoluteFilePath();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:64
// [-2] void setLocale(const class QLocale &)
extern "C"
void C_ZN9QResource9setLocaleERK7QLocale(void *this_, const QLocale & locale) {
  ((QResource*)this_)->setLocale(locale);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:65
// [8] QLocale locale()
extern "C"
void* C_ZNK9QResource6localeEv(void *this_) {
  auto rv = ((QResource*)this_)->locale();
return new QLocale(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:67
// [1] bool isValid()
extern "C"
bool C_ZNK9QResource7isValidEv(void *this_) {
  return (bool)((QResource*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:69
// [1] bool isCompressed()
extern "C"
bool C_ZNK9QResource12isCompressedEv(void *this_) {
  return (bool)((QResource*)this_)->isCompressed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:70
// [8] qint64 size()
extern "C"
qint64 C_ZNK9QResource4sizeEv(void *this_) {
  return (qint64)((QResource*)this_)->size();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:71
// [8] const uchar * data()
extern "C"
void* C_ZNK9QResource4dataEv(void *this_) {
  return (void*)((QResource*)this_)->data();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:72
// [8] QDateTime lastModified()
extern "C"
void* C_ZNK9QResource12lastModifiedEv(void *this_) {
  auto rv = ((QResource*)this_)->lastModified();
return new QDateTime(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:74
// [-2] void addSearchPath(const class QString &)
extern "C"
void C_ZN9QResource13addSearchPathERK7QString(const QString & path) {
  QResource::addSearchPath(path);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:77
// [1] bool registerResource(const class QString &, const class QString &)
extern "C"
bool C_ZN9QResource16registerResourceERK7QStringS2_(const QString & rccFilename, const QString & resourceRoot) {
  return (bool)QResource::registerResource(rccFilename, resourceRoot);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:78
// [1] bool unregisterResource(const class QString &, const class QString &)
extern "C"
bool C_ZN9QResource18unregisterResourceERK7QStringS2_(const QString & rccFilename, const QString & resourceRoot) {
  return (bool)QResource::unregisterResource(rccFilename, resourceRoot);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:80
// [1] bool registerResource(const uchar *, const class QString &)
extern "C"
bool C_ZN9QResource16registerResourceEPKhRK7QString(const uchar * rccData, const QString & resourceRoot) {
  return (bool)QResource::registerResource(rccData, resourceRoot);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:81
// [1] bool unregisterResource(const uchar *, const class QString &)
extern "C"
bool C_ZN9QResource18unregisterResourceEPKhRK7QString(const uchar * rccData, const QString & resourceRoot) {
  return (bool)QResource::unregisterResource(rccData, resourceRoot);
}
//  main block end
