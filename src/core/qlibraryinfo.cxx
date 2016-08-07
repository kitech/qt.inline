// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qlibraryinfo.h
// dst-file: /src/core/qlibraryinfo.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlibraryinfo.h>


#include <qstringlist.h>
#include <qstring.h>
#include <qdatetime.h>
// <= header block end

// main block begin =>
void __keep_qlibraryinfo_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLibraryInfo_Class_Size()
{
  return sizeof(QLibraryInfo);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qlibraryinfo.h', line 103, column 24>
//   // proto: static QStringList QLibraryInfo::platformPluginArguments(const QString & platformName);
// _ZN12QLibraryInfo23platformPluginArgumentsERK7QString platformPluginArguments(const class QString &)
extern "C"
QStringList*
C_ZN12QLibraryInfo23platformPluginArgumentsERK7QString(const QString* arg1) {
  auto ret =
  QLibraryInfo::platformPluginArguments(*((const QString*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibraryinfo.h', line 53, column 20>
//   // proto: static QString QLibraryInfo::licensee();
// _ZN12QLibraryInfo8licenseeEv licensee()
extern "C"
QString*
C_ZN12QLibraryInfo8licenseeEv() {
  auto ret =
  QLibraryInfo::licensee();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibraryinfo.h', line 54, column 20>
//   // proto: static QString QLibraryInfo::licensedProducts();
// _ZN12QLibraryInfo16licensedProductsEv licensedProducts()
extern "C"
QString*
C_ZN12QLibraryInfo16licensedProductsEv() {
  auto ret =
  QLibraryInfo::licensedProducts();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibraryinfo.h', line 64, column 17>
//   // proto: static bool QLibraryInfo::isDebugBuild();
// _ZN12QLibraryInfo12isDebugBuildEv isDebugBuild()
extern "C"
bool
C_ZN12QLibraryInfo12isDebugBuildEv() {
  auto ret =
  QLibraryInfo::isDebugBuild();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibraryinfo.h', line 62, column 25>
//   // proto: static const char * QLibraryInfo::build();
// _ZN12QLibraryInfo5buildEv build()
extern "C"
void*
C_ZN12QLibraryInfo5buildEv() {
  auto ret =
  QLibraryInfo::build();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibraryinfo.h', line 97, column 20>
//   // proto: static QString QLibraryInfo::location(QLibraryInfo::LibraryLocation );
// _ZN12QLibraryInfo8locationENS_15LibraryLocationE location(enum QLibraryInfo::LibraryLocation)
extern "C"
QString*
C_ZN12QLibraryInfo8locationENS_15LibraryLocationE(QLibraryInfo::LibraryLocation arg1) {
  auto ret =
  QLibraryInfo::location(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibraryinfo.h', line 58, column 32>
//   // proto: static QDate QLibraryInfo::buildDate();
// _ZN12QLibraryInfo9buildDateEv buildDate()
extern "C"
QDate*
C_ZN12QLibraryInfo9buildDateEv() {
  auto ret =
  QLibraryInfo::buildDate();
  return new QDate(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

