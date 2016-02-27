// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qstandardpaths.h
// dst-file: /src/core/qstandardpaths.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstandardpaths.h>


#include <qstring.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qstandardpaths_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStandardPaths_Class_Size()
{
  return sizeof(QStandardPaths);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 83, column 20>
//   // proto: static QString QStandardPaths::displayName(QStandardPaths::StandardLocation type);
// _ZN14QStandardPaths11displayNameENS_16StandardLocationE displayName(enum QStandardPaths::StandardLocation)
extern "C"
QString*
C_ZN14QStandardPaths11displayNameENS_16StandardLocationE(QStandardPaths::StandardLocation arg1) {
  auto ret =
  QStandardPaths::displayName(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 81, column 24>
//   // proto: static QStringList QStandardPaths::locateAll(QStandardPaths::StandardLocation type, const QString & fileName, LocateOptions options);
// _ZN14QStandardPaths9locateAllENS_16StandardLocationERK7QString6QFlagsINS_12LocateOptionEE locateAll(enum QStandardPaths::StandardLocation, const class QString &, LocateOptions)
extern "C"
QStringList*
C_ZN14QStandardPaths9locateAllENS_16StandardLocationERK7QString6QFlagsINS_12LocateOptionEE(QStandardPaths::StandardLocation arg1,
const QString* arg2,
QStandardPaths::LocateOptions arg3) {
  auto ret =
  QStandardPaths::locateAll(arg1,
*((const QString*)arg2),
arg3);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 80, column 20>
//   // proto: static QString QStandardPaths::locate(QStandardPaths::StandardLocation type, const QString & fileName, LocateOptions options);
// _ZN14QStandardPaths6locateENS_16StandardLocationERK7QString6QFlagsINS_12LocateOptionEE locate(enum QStandardPaths::StandardLocation, const class QString &, LocateOptions)
extern "C"
QString*
C_ZN14QStandardPaths6locateENS_16StandardLocationERK7QString6QFlagsINS_12LocateOptionEE(QStandardPaths::StandardLocation arg1,
const QString* arg2,
QStandardPaths::LocateOptions arg3) {
  auto ret =
  QStandardPaths::locate(arg1,
*((const QString*)arg2),
arg3);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 91, column 17>
//   // proto: static void QStandardPaths::setTestModeEnabled(bool testMode);
// _ZN14QStandardPaths18setTestModeEnabledEb setTestModeEnabled(_Bool)
extern "C"
void
C_ZN14QStandardPaths18setTestModeEnabledEb(bool arg1) {
  QStandardPaths::setTestModeEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 86, column 20>
//   // proto: static QString QStandardPaths::findExecutable(const QString & executableName, const QStringList & paths);
// _ZN14QStandardPaths14findExecutableERK7QStringRK11QStringList findExecutable(const class QString &, const class QStringList &)
extern "C"
QString*
C_ZN14QStandardPaths14findExecutableERK7QStringRK11QStringList(const QString* arg1,
const QStringList* arg2) {
  auto ret =
  QStandardPaths::findExecutable(*((const QString*)arg1),
*((const QStringList*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 89, column 31>
//   // proto: static void QStandardPaths::enableTestMode(bool testMode);
// _ZN14QStandardPaths14enableTestModeEb enableTestMode(_Bool)
extern "C"
void
C_ZN14QStandardPaths14enableTestModeEb(bool arg1) {
  QStandardPaths::enableTestMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 92, column 17>
//   // proto: static bool QStandardPaths::isTestModeEnabled();
// _ZN14QStandardPaths17isTestModeEnabledEv isTestModeEnabled()
extern "C"
bool
C_ZN14QStandardPaths17isTestModeEnabledEv() {
  auto ret =
  QStandardPaths::isTestModeEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 72, column 24>
//   // proto: static QStringList QStandardPaths::standardLocations(QStandardPaths::StandardLocation type);
// _ZN14QStandardPaths17standardLocationsENS_16StandardLocationE standardLocations(enum QStandardPaths::StandardLocation)
extern "C"
QStringList*
C_ZN14QStandardPaths17standardLocationsENS_16StandardLocationE(QStandardPaths::StandardLocation arg1) {
  auto ret =
  QStandardPaths::standardLocations(arg1);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstandardpaths.h', line 71, column 20>
//   // proto: static QString QStandardPaths::writableLocation(QStandardPaths::StandardLocation type);
// _ZN14QStandardPaths16writableLocationENS_16StandardLocationE writableLocation(enum QStandardPaths::StandardLocation)
extern "C"
QString*
C_ZN14QStandardPaths16writableLocationENS_16StandardLocationE(QStandardPaths::StandardLocation arg1) {
  auto ret =
  QStandardPaths::writableLocation(arg1);
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

