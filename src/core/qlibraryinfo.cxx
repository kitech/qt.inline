//  header block begin
// /usr/include/qt/QtCore/qlibraryinfo.h
#ifndef protected
#define protected public
#endif
#include <qlibraryinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QLibraryInfo is pure virtual: false
// QLibraryInfo has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQLibraryInfo : public QLibraryInfo {
public:
  virtual ~MyQLibraryInfo() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibraryinfo.h:55
// [8] QString licensee()
extern "C" Q_DECL_EXPORT
void* C_ZN12QLibraryInfo8licenseeEv() {
  auto rv = QLibraryInfo::licensee();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibraryinfo.h:56
// [8] QString licensedProducts()
extern "C" Q_DECL_EXPORT
void* C_ZN12QLibraryInfo16licensedProductsEv() {
  auto rv = QLibraryInfo::licensedProducts();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibraryinfo.h:61
// [8] QDate buildDate()
extern "C" Q_DECL_EXPORT
void* C_ZN12QLibraryInfo9buildDateEv() {
  auto rv = QLibraryInfo::buildDate();
return new QDate(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibraryinfo.h:65
// [8] const char * build()
extern "C" Q_DECL_EXPORT
void* C_ZN12QLibraryInfo5buildEv() {
  return (void*)QLibraryInfo::build();
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qlibraryinfo.h:67
// [1] bool isDebugBuild()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN12QLibraryInfo12isDebugBuildEv() {
  return (bool)QLibraryInfo::isDebugBuild();
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qlibraryinfo.h:70
// [8] QVersionNumber version()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN12QLibraryInfo7versionEv() {
  auto rv = QLibraryInfo::version();
return new QVersionNumber(rv);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibraryinfo.h:105
// [8] QString location(QLibraryInfo::LibraryLocation)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLibraryInfo8locationENS_15LibraryLocationE(QLibraryInfo::LibraryLocation arg0) {
  auto rv = QLibraryInfo::location(arg0);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibraryinfo.h:112
// [8] QStringList platformPluginArguments(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLibraryInfo23platformPluginArgumentsERK7QString(QString* platformName) {
  auto rv = QLibraryInfo::platformPluginArguments(*platformName);
return new QStringList(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN12QLibraryInfoD2Ev(void *this_) {
  delete (QLibraryInfo*)(this_);
}
//  main block end
