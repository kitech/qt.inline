// /usr/include/qt/QtCore/qlibraryinfo.h
#include <qlibraryinfo.h>
#include <QtCore>

// static
// /usr/include/qt/QtCore/qlibraryinfo.h:53
// QString licensee()
extern "C"
void C_ZN12QLibraryInfo8licenseeEv() {
  /*return*/ QLibraryInfo::licensee();
}
// static
// /usr/include/qt/QtCore/qlibraryinfo.h:54
// QString licensedProducts()
extern "C"
void C_ZN12QLibraryInfo16licensedProductsEv() {
  /*return*/ QLibraryInfo::licensedProducts();
}
// static
// /usr/include/qt/QtCore/qlibraryinfo.h:58
// QDate buildDate()
extern "C"
void C_ZN12QLibraryInfo9buildDateEv() {
  /*return*/ QLibraryInfo::buildDate();
}
// static
// /usr/include/qt/QtCore/qlibraryinfo.h:62
// const char * build()
extern "C"
void C_ZN12QLibraryInfo5buildEv() {
  /*return*/ QLibraryInfo::build();
}
// static
// /usr/include/qt/QtCore/qlibraryinfo.h:64
// bool isDebugBuild()
extern "C"
void C_ZN12QLibraryInfo12isDebugBuildEv() {
  /*return*/ QLibraryInfo::isDebugBuild();
}
// static
// /usr/include/qt/QtCore/qlibraryinfo.h:97
// QString location(enum QLibraryInfo::LibraryLocation)
extern "C"
void C_ZN12QLibraryInfo8locationENS_15LibraryLocationE(QLibraryInfo::LibraryLocation a0) {
  /*return*/ QLibraryInfo::location(a0);
}
// static
// /usr/include/qt/QtCore/qlibraryinfo.h:103
// QStringList platformPluginArguments(const class QString &)
extern "C"
void C_ZN12QLibraryInfo23platformPluginArgumentsERK7QString(const QString & platformName) {
  /*return*/ QLibraryInfo::platformPluginArguments(platformName);
}