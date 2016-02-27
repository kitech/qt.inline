// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmldebug.h
// dst-file: /src/qml/qqmldebug.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmldebug.h>


// <= header block end

// main block begin =>
void __keep_qqmldebug_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlDebuggingEnabler_Class_Size()
{
  return sizeof(QQmlDebuggingEnabler);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmldebug.h', line 50, column 5>
//   // proto:  void QQmlDebuggingEnabler::QQmlDebuggingEnabler(bool printWarning);
extern "C"
QQmlDebuggingEnabler*
C_ZN20QQmlDebuggingEnablerC2Eb(bool arg1) {
  auto ret = new QQmlDebuggingEnabler(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmldebug.h', line 51, column 17>
//   // proto: static bool QQmlDebuggingEnabler::startTcpDebugServer(int port, QQmlDebuggingEnabler::StartMode mode, const QString & hostName);
// _ZN20QQmlDebuggingEnabler19startTcpDebugServerEiNS_9StartModeERK7QString startTcpDebugServer(int, enum QQmlDebuggingEnabler::StartMode, const class QString &)
extern "C"
bool
C_ZN20QQmlDebuggingEnabler19startTcpDebugServerEiNS_9StartModeERK7QString(int arg1,
QQmlDebuggingEnabler::StartMode arg2,
const QString* arg3) {
  auto ret =
  QQmlDebuggingEnabler::startTcpDebugServer(arg1,
arg2,
*((const QString*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

