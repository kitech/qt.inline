//  header block begin
// /usr/include/qt/QtCore/qstandardpaths.h
#include <qstandardpaths.h>
#include <QtCore>

// QStandardPaths is pure virtual: false
// QStandardPaths has virtual projected: false
//  header block end

//  main block begin

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:81
// [8] QString writableLocation(enum QStandardPaths::StandardLocation)
extern "C"
void* C_ZN14QStandardPaths16writableLocationENS_16StandardLocationE(QStandardPaths::StandardLocation type) {
  auto rv = QStandardPaths::writableLocation(type);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:94
// [8] QString displayName(enum QStandardPaths::StandardLocation)
extern "C"
void* C_ZN14QStandardPaths11displayNameENS_16StandardLocationE(QStandardPaths::StandardLocation type) {
  auto rv = QStandardPaths::displayName(type);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:97
// [8] QString findExecutable(const class QString &, const class QStringList &)
extern "C"
void* C_ZN14QStandardPaths14findExecutableERK7QStringRK11QStringList(const QString & executableName, const QStringList & paths) {
  auto rv = QStandardPaths::findExecutable(executableName, paths);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:100
// [-2] void enableTestMode(_Bool)
extern "C"
void C_ZN14QStandardPaths14enableTestModeEb(bool testMode) {
  QStandardPaths::enableTestMode(testMode);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:102
// [-2] void setTestModeEnabled(_Bool)
extern "C"
void C_ZN14QStandardPaths18setTestModeEnabledEb(bool testMode) {
  QStandardPaths::setTestModeEnabled(testMode);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:103
// [1] bool isTestModeEnabled()
extern "C"
bool C_ZN14QStandardPaths17isTestModeEnabledEv() {
  return (bool)QStandardPaths::isTestModeEnabled();
}
//  main block end
