//  header block begin

// since 0x050000
// /usr/include/qt/QtCore/qstandardpaths.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstandardpaths.h>
#include <QtCore>
#include "callback_inherit.h"

// QStandardPaths is pure virtual: false
// QStandardPaths has virtual projected: false
//  header block end

//  main block begin


// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:81
// [8] QString writableLocation(QStandardPaths::StandardLocation)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStandardPaths16writableLocationENS_16StandardLocationE(QStandardPaths::StandardLocation type_) {
  auto rv = QStandardPaths::writableLocation(type_);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:82
// [8] QStringList standardLocations(QStandardPaths::StandardLocation)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStandardPaths17standardLocationsENS_16StandardLocationE(QStandardPaths::StandardLocation type_) {
  auto rv = QStandardPaths::standardLocations(type_);
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:91
// [8] QString locate(QStandardPaths::StandardLocation, const QString &, QStandardPaths::LocateOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStandardPaths6locateENS_16StandardLocationERK7QString6QFlagsINS_12LocateOptionEE(QStandardPaths::StandardLocation type_, QString* fileName, QFlags<QStandardPaths::LocateOption> options) {
  auto rv = QStandardPaths::locate(type_, *fileName, options);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:92
// [8] QStringList locateAll(QStandardPaths::StandardLocation, const QString &, QStandardPaths::LocateOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStandardPaths9locateAllENS_16StandardLocationERK7QString6QFlagsINS_12LocateOptionEE(QStandardPaths::StandardLocation type_, QString* fileName, QFlags<QStandardPaths::LocateOption> options) {
  auto rv = QStandardPaths::locateAll(type_, *fileName, options);
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:94
// [8] QString displayName(QStandardPaths::StandardLocation)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStandardPaths11displayNameENS_16StandardLocationE(QStandardPaths::StandardLocation type_) {
  auto rv = QStandardPaths::displayName(type_);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:97
// [8] QString findExecutable(const QString &, const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStandardPaths14findExecutableERK7QStringRK11QStringList(QString* executableName, QStringList* paths) {
  auto rv = QStandardPaths::findExecutable(*executableName, *paths);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:100
// [-2] void enableTestMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QStandardPaths14enableTestModeEb(bool testMode) {
  QStandardPaths::enableTestMode(testMode);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:102
// [-2] void setTestModeEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QStandardPaths18setTestModeEnabledEb(bool testMode) {
  QStandardPaths::setTestModeEnabled(testMode);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:103
// [1] bool isTestModeEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZN14QStandardPaths17isTestModeEnabledEv() {
  return (bool)QStandardPaths::isTestModeEnabled();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
