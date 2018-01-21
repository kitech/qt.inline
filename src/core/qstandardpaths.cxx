//  header block begin
// /usr/include/qt/QtCore/qstandardpaths.h
#include <qstandardpaths.h>
#include <QtCore>

//  header block end

//  main block begin
// static
// /usr/include/qt/QtCore/qstandardpaths.h:77
// QString writableLocation(enum QStandardPaths::StandardLocation)
extern "C"
void C_ZN14QStandardPaths16writableLocationENS_16StandardLocationE(QStandardPaths::StandardLocation type) {
  /*return*/ QStandardPaths::writableLocation(type);
}
// static
// /usr/include/qt/QtCore/qstandardpaths.h:78
// QStringList standardLocations(enum QStandardPaths::StandardLocation)
extern "C"
void C_ZN14QStandardPaths17standardLocationsENS_16StandardLocationE(QStandardPaths::StandardLocation type) {
  /*return*/ QStandardPaths::standardLocations(type);
}
// static
// /usr/include/qt/QtCore/qstandardpaths.h:86
// QString locate(enum QStandardPaths::StandardLocation, const class QString &, LocateOptions)
extern "C"
void C_ZN14QStandardPaths6locateENS_16StandardLocationERK7QString6QFlagsINS_12LocateOptionEE(QStandardPaths::StandardLocation type, const QString & fileName, QFlags<QStandardPaths::LocateOption> options) {
  /*return*/ QStandardPaths::locate(type, fileName, options);
}
// static
// /usr/include/qt/QtCore/qstandardpaths.h:87
// QStringList locateAll(enum QStandardPaths::StandardLocation, const class QString &, LocateOptions)
extern "C"
void C_ZN14QStandardPaths9locateAllENS_16StandardLocationERK7QString6QFlagsINS_12LocateOptionEE(QStandardPaths::StandardLocation type, const QString & fileName, QFlags<QStandardPaths::LocateOption> options) {
  /*return*/ QStandardPaths::locateAll(type, fileName, options);
}
// static
// /usr/include/qt/QtCore/qstandardpaths.h:89
// QString displayName(enum QStandardPaths::StandardLocation)
extern "C"
void C_ZN14QStandardPaths11displayNameENS_16StandardLocationE(QStandardPaths::StandardLocation type) {
  /*return*/ QStandardPaths::displayName(type);
}
// static
// /usr/include/qt/QtCore/qstandardpaths.h:92
// QString findExecutable(const class QString &, const class QStringList &)
extern "C"
void C_ZN14QStandardPaths14findExecutableERK7QStringRK11QStringList(const QString & executableName, const QStringList & paths) {
  /*return*/ QStandardPaths::findExecutable(executableName, paths);
}
// static
// /usr/include/qt/QtCore/qstandardpaths.h:95
// void enableTestMode(_Bool)
extern "C"
void C_ZN14QStandardPaths14enableTestModeEb(bool testMode) {
  QStandardPaths::enableTestMode(testMode);
}
// static
// /usr/include/qt/QtCore/qstandardpaths.h:97
// void setTestModeEnabled(_Bool)
extern "C"
void C_ZN14QStandardPaths18setTestModeEnabledEb(bool testMode) {
  QStandardPaths::setTestModeEnabled(testMode);
}
// static
// /usr/include/qt/QtCore/qstandardpaths.h:98
// bool isTestModeEnabled()
extern "C"
void C_ZN14QStandardPaths17isTestModeEnabledEv() {
  /*return*/ QStandardPaths::isTestModeEnabled();
}
//  main block end
