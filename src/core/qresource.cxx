//  header block begin
// /usr/include/qt/QtCore/qresource.h
#include <qresource.h>
#include <QtCore>
#include "callback_inherit.h"

// QResource is pure virtual: false
// QResource has virtual projected: true
//  header block end

//  main block begin

class MyQResource : public QResource {
public:
  virtual ~MyQResource() {}
// void QResource(const class QString &, const class QLocale &)
MyQResource(const QString & file, const QLocale & locale) : QResource(file, locale) {}
// bool isDir()
  virtual bool isDir() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isDir", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QResource::isDir();
  }
  }
// bool isFile()
  virtual bool isFile() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isFile", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QResource::isFile();
  }
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:57
// [-2] void QResource(const class QString &, const class QLocale &)
extern "C"
void* C_ZN9QResourceC2ERK7QStringRK7QLocale(QString* file, QLocale* locale) {
  auto _nilp = (MyQResource*)(0);
  return  new MyQResource(*file, *locale);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:58
// [-2] void ~QResource()
extern "C"
void C_ZN9QResourceD2Ev(void *this_) {
  delete (QResource*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:60
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN9QResource11setFileNameERK7QString(void *this_, QString* file) {
  ((QResource*)this_)->setFileName(*file);
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
void C_ZN9QResource9setLocaleERK7QLocale(void *this_, QLocale* locale) {
  ((QResource*)this_)->setLocale(*locale);
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
void C_ZN9QResource13addSearchPathERK7QString(QString* path) {
  QResource::addSearchPath(*path);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:77
// [1] bool registerResource(const class QString &, const class QString &)
extern "C"
bool C_ZN9QResource16registerResourceERK7QStringS2_(QString* rccFilename, QString* resourceRoot) {
  return (bool)QResource::registerResource(*rccFilename, *resourceRoot);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:78
// [1] bool unregisterResource(const class QString &, const class QString &)
extern "C"
bool C_ZN9QResource18unregisterResourceERK7QStringS2_(QString* rccFilename, QString* resourceRoot) {
  return (bool)QResource::unregisterResource(*rccFilename, *resourceRoot);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:80
// [1] bool registerResource(const uchar *, const class QString &)
extern "C"
bool C_ZN9QResource16registerResourceEPKhRK7QString(const uchar * rccData, QString* resourceRoot) {
  return (bool)QResource::registerResource(rccData, *resourceRoot);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:81
// [1] bool unregisterResource(const uchar *, const class QString &)
extern "C"
bool C_ZN9QResource18unregisterResourceEPKhRK7QString(const uchar * rccData, QString* resourceRoot) {
  return (bool)QResource::unregisterResource(rccData, *resourceRoot);
}
//  main block end
