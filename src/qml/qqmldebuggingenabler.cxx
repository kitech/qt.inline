//  header block begin
// /usr/include/qt/QtQml/qqmldebug.h
#ifndef protected
#define protected public
#endif
#include <qqmldebug.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlDebuggingEnabler is pure virtual: false
// QQmlDebuggingEnabler has virtual projected: false
//  header block end

//  main block begin

class MyQQmlDebuggingEnabler : public QQmlDebuggingEnabler {
public:
  virtual ~MyQQmlDebuggingEnabler() {}
// void QQmlDebuggingEnabler(_Bool)
MyQQmlDebuggingEnabler(bool printWarning) : QQmlDebuggingEnabler(printWarning) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:58
// [-2] void QQmlDebuggingEnabler(_Bool)
extern "C" Q_DECL_EXPORT
void* C_ZN20QQmlDebuggingEnablerC2Eb(bool printWarning) {
  return  new QQmlDebuggingEnabler(printWarning);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:60
// [8] QStringList debuggerServices()
extern "C" Q_DECL_EXPORT
void* C_ZN20QQmlDebuggingEnabler16debuggerServicesEv() {
  auto rv = QQmlDebuggingEnabler::debuggerServices();
return new QStringList(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:61
// [8] QStringList inspectorServices()
extern "C" Q_DECL_EXPORT
void* C_ZN20QQmlDebuggingEnabler17inspectorServicesEv() {
  auto rv = QQmlDebuggingEnabler::inspectorServices();
return new QStringList(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:62
// [8] QStringList profilerServices()
extern "C" Q_DECL_EXPORT
void* C_ZN20QQmlDebuggingEnabler16profilerServicesEv() {
  auto rv = QQmlDebuggingEnabler::profilerServices();
return new QStringList(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:63
// [8] QStringList nativeDebuggerServices()
extern "C" Q_DECL_EXPORT
void* C_ZN20QQmlDebuggingEnabler22nativeDebuggerServicesEv() {
  auto rv = QQmlDebuggingEnabler::nativeDebuggerServices();
return new QStringList(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:65
// [-2] void setServices(const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN20QQmlDebuggingEnabler11setServicesERK11QStringList(QStringList* services) {
  QQmlDebuggingEnabler::setServices(*services);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:67
// [1] bool startTcpDebugServer(int, enum QQmlDebuggingEnabler::StartMode, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQmlDebuggingEnabler19startTcpDebugServerEiNS_9StartModeERK7QString(int port, QQmlDebuggingEnabler::StartMode mode, QString* hostName) {
  return (bool)QQmlDebuggingEnabler::startTcpDebugServer(port, mode, *hostName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:69
// [1] bool connectToLocalDebugger(const class QString &, enum QQmlDebuggingEnabler::StartMode)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQmlDebuggingEnabler22connectToLocalDebuggerERK7QStringNS_9StartModeE(QString* socketFileName, QQmlDebuggingEnabler::StartMode mode) {
  return (bool)QQmlDebuggingEnabler::connectToLocalDebugger(*socketFileName, mode);
}

extern "C" Q_DECL_EXPORT
void C_ZN20QQmlDebuggingEnablerD2Ev(void *this_) {
  delete (QQmlDebuggingEnabler*)(this_);
}
//  main block end
