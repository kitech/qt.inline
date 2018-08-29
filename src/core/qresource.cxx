//  header block begin
// since 0x040200
// /usr/include/qt/QtCore/qresource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qresource.h>
#include <QtCore>
#include "callback_inherit.h"

// QResource is pure virtual: false
// QResource has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQResource_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQResource_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQResource_t qt_meta_stringdata_MyQResource = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQResource"
  },
  "MyQResource"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQResource[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQResource : public QResource {
public:
  virtual ~MyQResource() {}
// void QResource(const QString &, const QLocale &)
MyQResource(const QString & file, const QLocale & locale) : QResource(file, locale) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:57
// [-2] void QResource(const QString &, const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QResourceC2ERK7QStringRK7QLocale(QString* file, QLocale* locale) {
  return  new QResource(*file, *locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:58
// [-2] void ~QResource()
extern "C" Q_DECL_EXPORT
void C_ZN9QResourceD2Ev(void *this_) {
  delete (QResource*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:60
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QResource11setFileNameERK7QString(void *this_, QString* file) {
  ((QResource*)this_)->setFileName(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:61
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QResource8fileNameEv(void *this_) {
  auto rv = ((QResource*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:62
// [8] QString absoluteFilePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QResource16absoluteFilePathEv(void *this_) {
  auto rv = ((QResource*)this_)->absoluteFilePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:64
// [-2] void setLocale(const QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN9QResource9setLocaleERK7QLocale(void *this_, QLocale* locale) {
  ((QResource*)this_)->setLocale(*locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:65
// [8] QLocale locale()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QResource6localeEv(void *this_) {
  auto rv = ((QResource*)this_)->locale();
return new QLocale(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:67
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QResource7isValidEv(void *this_) {
  return (bool)((QResource*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:69
// [1] bool isCompressed()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QResource12isCompressedEv(void *this_) {
  return (bool)((QResource*)this_)->isCompressed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:70
// [8] qint64 size()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QResource4sizeEv(void *this_) {
  return (qint64)((QResource*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:71
// [8] const uchar * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QResource4dataEv(void *this_) {
  return (void*)((QResource*)this_)->data();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:72
// [8] QDateTime lastModified()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QResource12lastModifiedEv(void *this_) {
  auto rv = ((QResource*)this_)->lastModified();
return new QDateTime(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:74
// [-2] void addSearchPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QResource13addSearchPathERK7QString(QString* path) {
  QResource::addSearchPath(*path);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:75
// [8] QStringList searchPaths()
extern "C" Q_DECL_EXPORT
void* C_ZN9QResource11searchPathsEv() {
  auto rv = QResource::searchPaths();
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:77
// [1] bool registerResource(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QResource16registerResourceERK7QStringS2_(QString* rccFilename, QString* resourceRoot) {
  return (bool)QResource::registerResource(*rccFilename, *resourceRoot);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qresource.h:78
// [1] bool unregisterResource(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QResource18unregisterResourceERK7QStringS2_(QString* rccFilename, QString* resourceRoot) {
  return (bool)QResource::unregisterResource(*rccFilename, *resourceRoot);
}

// Public static Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qresource.h:80
// [1] bool registerResource(const uchar *, const QString &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZN9QResource16registerResourceEPKhRK7QString(const uchar * rccData, QString* resourceRoot) {
  return (bool)QResource::registerResource(rccData, *resourceRoot);
}
#endif // QT_VERSION >= 0x040300

// Public static Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qresource.h:81
// [1] bool unregisterResource(const uchar *, const QString &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZN9QResource18unregisterResourceEPKhRK7QString(const uchar * rccData, QString* resourceRoot) {
  return (bool)QResource::unregisterResource(rccData, *resourceRoot);
}
#endif // QT_VERSION >= 0x040300

//  main block end
