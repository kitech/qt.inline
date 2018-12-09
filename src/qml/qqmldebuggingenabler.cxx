//  header block begin

// /usr/include/qt/QtQml/qqmldebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmldebug.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlDebuggingEnabler is pure virtual: false
// QQmlDebuggingEnabler has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlDebuggingEnabler_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlDebuggingEnabler_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlDebuggingEnabler_t qt_meta_stringdata_MyQQmlDebuggingEnabler = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQQmlDebuggingEnabler"
  },
  "MyQQmlDebuggingEnabler"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlDebuggingEnabler[] = {
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
class Q_DECL_EXPORT MyQQmlDebuggingEnabler : public QQmlDebuggingEnabler {
public:
  virtual ~MyQQmlDebuggingEnabler() {}
// void QQmlDebuggingEnabler(bool)
MyQQmlDebuggingEnabler(bool printWarning) : QQmlDebuggingEnabler(printWarning) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:58
// [-2] void QQmlDebuggingEnabler(bool)
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
// [-2] void setServices(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN20QQmlDebuggingEnabler11setServicesERK11QStringList(QStringList* services) {
  QQmlDebuggingEnabler::setServices(*services);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:67
// [1] bool startTcpDebugServer(int, QQmlDebuggingEnabler::StartMode, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQmlDebuggingEnabler19startTcpDebugServerEiNS_9StartModeERK7QString(int port, QQmlDebuggingEnabler::StartMode mode, QString* hostName) {
  return (bool)QQmlDebuggingEnabler::startTcpDebugServer(port, mode, *hostName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:69
// [1] bool connectToLocalDebugger(const QString &, QQmlDebuggingEnabler::StartMode)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQmlDebuggingEnabler22connectToLocalDebuggerERK7QStringNS_9StartModeE(QString* socketFileName, QQmlDebuggingEnabler::StartMode mode) {
  return (bool)QQmlDebuggingEnabler::connectToLocalDebugger(*socketFileName, mode);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:71
// [1] bool startDebugConnector(const QString &, const QVariantHash &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQmlDebuggingEnabler19startDebugConnectorERK7QStringRK5QHashIS0_8QVariantE(QString* pluginName, const QVariantHash & configuration) {
  return (bool)QQmlDebuggingEnabler::startDebugConnector(*pluginName, configuration);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QQmlDebuggingEnablerD2Ev(void *this_) {
  delete (QQmlDebuggingEnabler*)(this_);
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
