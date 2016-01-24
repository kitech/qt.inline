// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qprocess.h
// dst-file: /src/core/qprocess.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qprocess.h>


#include <qstringlist.h>
#include <qbytearray.h>
#include <qstring.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qprocess_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 65, column 17>
//   // proto:  void QProcessEnvironment::swap(QProcessEnvironment & other);
if (true) {
  auto f = [](QProcessEnvironment flythis, QProcessEnvironment & arg1) {
    ((QProcessEnvironment*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QProcessEnvironment4swapERS_ swap(class QProcessEnvironment &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QProcess_Class_Size()
{
  return sizeof(QProcess);
}

extern "C"
int QProcessEnvironment_Class_Size()
{
  return sizeof(QProcessEnvironment);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 138, column 10>
//   // proto:  bool QProcess::open(OpenMode mode);
// _ZN8QProcess4openE6QFlagsIN9QIODevice12OpenModeFlagEE open(OpenMode)
extern "C"
bool
C_ZN8QProcess4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
QIODevice::OpenMode arg1) {
  auto ret =
  ((QProcess*)qthis)->open(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 200, column 10>
//   // proto:  void QProcess::close();
// _ZN8QProcess5closeEv close()
extern "C"
void
C_ZN8QProcess5closeEv(void *qthis) {
  ((QProcess*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 172, column 10>
//   // proto:  void QProcess::setEnvironment(const QStringList & environment);
// _ZN8QProcess14setEnvironmentERK11QStringList setEnvironment(const class QStringList &)
extern "C"
void
C_ZN8QProcess14setEnvironmentERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QProcess*)qthis)->setEnvironment(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 213, column 17>
//   // proto: static bool QProcess::startDetached(const QString & program, const QStringList & arguments);
// _ZN8QProcess13startDetachedERK7QStringRK11QStringList startDetached(const class QString &, const class QStringList &)
extern "C"
bool
C_ZN8QProcess13startDetachedERK7QStringRK11QStringList(const QString* arg1,
const QStringList* arg2) {
  auto ret =
  QProcess::startDetached(*((const QString*)arg1),
*((const QStringList*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 215, column 17>
//   // proto: static bool QProcess::startDetached(const QString & command);
// _ZN8QProcess13startDetachedERK7QString startDetached(const class QString &)
extern "C"
bool
C_ZN8QProcess13startDetachedERK7QString(const QString* arg1) {
  auto ret =
  QProcess::startDetached(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 201, column 10>
//   // proto:  bool QProcess::atEnd();
// _ZNK8QProcess5atEndEv atEnd()
extern "C"
bool
C_ZNK8QProcess5atEndEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 217, column 24>
//   // proto: static QStringList QProcess::systemEnvironment();
// _ZN8QProcess17systemEnvironmentEv systemEnvironment()
extern "C"
QStringList*
C_ZN8QProcess17systemEnvironmentEv() {
  auto ret =
  QProcess::systemEnvironment();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 156, column 10>
//   // proto:  void QProcess::closeReadChannel(QProcess::ProcessChannel channel);
// _ZN8QProcess16closeReadChannelENS_14ProcessChannelE closeReadChannel(enum QProcess::ProcessChannel)
extern "C"
void
C_ZN8QProcess16closeReadChannelENS_14ProcessChannelE(void *qthis,
QProcess::ProcessChannel arg1) {
  ((QProcess*)qthis)->closeReadChannel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 174, column 10>
//   // proto:  void QProcess::setProcessEnvironment(const QProcessEnvironment & environment);
// _ZN8QProcess21setProcessEnvironmentERK19QProcessEnvironment setProcessEnvironment(const class QProcessEnvironment &)
extern "C"
void
C_ZN8QProcess21setProcessEnvironmentERK19QProcessEnvironment(void *qthis,
const QProcessEnvironment* arg1) {
  ((QProcess*)qthis)->setProcessEnvironment(*((const QProcessEnvironment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 181, column 11>
//   // proto:  Q_PID QProcess::pid();
// _ZNK8QProcess3pidEv pid()
extern "C"
long long
C_ZNK8QProcess3pidEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->pid();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 144, column 10>
//   // proto:  void QProcess::setArguments(const QStringList & arguments);
// _ZN8QProcess12setArgumentsERK11QStringList setArguments(const class QStringList &)
extern "C"
void
C_ZN8QProcess12setArgumentsERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QProcess*)qthis)->setArguments(*((const QStringList*)arg1));
}
//   // proto:  void QProcess::~QProcess();
extern "C"
void C_ZN8QProcessD2Ev(void *qthis) {
  delete (QProcess*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 154, column 10>
//   // proto:  void QProcess::setReadChannel(QProcess::ProcessChannel channel);
// _ZN8QProcess14setReadChannelENS_14ProcessChannelE setReadChannel(enum QProcess::ProcessChannel)
extern "C"
void
C_ZN8QProcess14setReadChannelENS_14ProcessChannelE(void *qthis,
QProcess::ProcessChannel arg1) {
  ((QProcess*)qthis)->setReadChannel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 204, column 16>
//   // proto: static int QProcess::execute(const QString & command);
// _ZN8QProcess7executeERK7QString execute(const class QString &)
extern "C"
int
C_ZN8QProcess7executeERK7QString(const QString* arg1) {
  auto ret =
  QProcess::execute(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 157, column 10>
//   // proto:  void QProcess::closeWriteChannel();
// _ZN8QProcess17closeWriteChannelEv closeWriteChannel()
extern "C"
void
C_ZN8QProcess17closeWriteChannelEv(void *qthis) {
  ((QProcess*)qthis)->closeWriteChannel();
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 137, column 10>
//   // proto:  void QProcess::start(OpenMode mode);
// _ZN8QProcess5startE6QFlagsIN9QIODevice12OpenModeFlagEE start(OpenMode)
extern "C"
void
C_ZN8QProcess5startE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
QIODevice::OpenMode arg1) {
  ((QProcess*)qthis)->start(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 206, column 17>
//   // proto: static bool QProcess::startDetached(const QString & program, const QStringList & arguments, const QString & workingDirectory, qint64 * pid);
// _ZN8QProcess13startDetachedERK7QStringRK11QStringListS2_Px startDetached(const class QString &, const class QStringList &, const class QString &, qint64 *)
extern "C"
bool
C_ZN8QProcess13startDetachedERK7QStringRK11QStringListS2_Px(const QString* arg1,
const QStringList* arg2,
const QString* arg3,
qint64 * arg4) {
  auto ret =
  QProcess::startDetached(*((const QString*)arg1),
*((const QStringList*)arg2),
*((const QString*)arg3),
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 153, column 20>
//   // proto:  QProcess::ProcessChannel QProcess::readChannel();
// _ZNK8QProcess11readChannelEv readChannel()
extern "C"
QProcess::ProcessChannel
C_ZNK8QProcess11readChannelEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->readChannel();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 161, column 10>
//   // proto:  void QProcess::setStandardErrorFile(const QString & fileName, OpenMode mode);
// _ZN8QProcess20setStandardErrorFileERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE setStandardErrorFile(const class QString &, OpenMode)
extern "C"
void
C_ZN8QProcess20setStandardErrorFileERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
const QString* arg1,
QIODevice::OpenMode arg2) {
  ((QProcess*)qthis)->setStandardErrorFile(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 175, column 25>
//   // proto:  QProcessEnvironment QProcess::processEnvironment();
// _ZNK8QProcess18processEnvironmentEv processEnvironment()
extern "C"
QProcessEnvironment*
C_ZNK8QProcess18processEnvironmentEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->processEnvironment();
  return new QProcessEnvironment(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 150, column 22>
//   // proto:  QProcess::InputChannelMode QProcess::inputChannelMode();
// _ZNK8QProcess16inputChannelModeEv inputChannelMode()
extern "C"
QProcess::InputChannelMode
C_ZNK8QProcess16inputChannelModeEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->inputChannelMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 189, column 16>
//   // proto:  QByteArray QProcess::readAllStandardOutput();
// _ZN8QProcess21readAllStandardOutputEv readAllStandardOutput()
extern "C"
QByteArray*
C_ZN8QProcess21readAllStandardOutputEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->readAllStandardOutput();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 219, column 20>
//   // proto: static QString QProcess::nullDevice();
// _ZN8QProcess10nullDeviceEv nullDevice()
extern "C"
QString*
C_ZN8QProcess10nullDeviceEv() {
  auto ret =
  QProcess::nullDevice();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 203, column 16>
//   // proto: static int QProcess::execute(const QString & program, const QStringList & arguments);
// _ZN8QProcess7executeERK7QStringRK11QStringList execute(const class QString &, const class QStringList &)
extern "C"
int
C_ZN8QProcess7executeERK7QStringRK11QStringList(const QString* arg1,
const QStringList* arg2) {
  auto ret =
  QProcess::execute(*((const QString*)arg1),
*((const QStringList*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 186, column 10>
//   // proto:  bool QProcess::waitForBytesWritten(int msecs);
// _ZN8QProcess19waitForBytesWrittenEi waitForBytesWritten(int)
extern "C"
bool
C_ZN8QProcess19waitForBytesWrittenEi(void *qthis,
int arg1) {
  auto ret =
  ((QProcess*)qthis)->waitForBytesWritten(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 132, column 14>
//   // proto:  void QProcess::QProcess(QObject * parent);
extern "C"
QProcess*
C_ZN8QProcessC2EP7QObject(QObject * arg1) {
  auto ret = new QProcess(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 140, column 13>
//   // proto:  QString QProcess::program();
// _ZNK8QProcess7programEv program()
extern "C"
QString*
C_ZNK8QProcess7programEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->program();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 182, column 12>
//   // proto:  qint64 QProcess::processId();
// _ZNK8QProcess9processIdEv processId()
extern "C"
long long
C_ZNK8QProcess9processIdEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->processId();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 136, column 10>
//   // proto:  void QProcess::start(const QString & command, OpenMode mode);
// _ZN8QProcess5startERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE start(const class QString &, OpenMode)
extern "C"
void
C_ZN8QProcess5startERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
const QString* arg1,
QIODevice::OpenMode arg2) {
  ((QProcess*)qthis)->start(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 135, column 10>
//   // proto:  void QProcess::start(const QString & program, const QStringList & arguments, OpenMode mode);
// _ZN8QProcess5startERK7QStringRK11QStringList6QFlagsIN9QIODevice12OpenModeFlagEE start(const class QString &, const class QStringList &, OpenMode)
extern "C"
void
C_ZN8QProcess5startERK7QStringRK11QStringList6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
const QString* arg1,
const QStringList* arg2,
QIODevice::OpenMode arg3) {
  ((QProcess*)qthis)->start(*((const QString*)arg1),
*((const QStringList*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 143, column 17>
//   // proto:  QStringList QProcess::arguments();
// _ZNK8QProcess9argumentsEv arguments()
extern "C"
QStringList*
C_ZNK8QProcess9argumentsEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->arguments();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 198, column 10>
//   // proto:  bool QProcess::isSequential();
// _ZNK8QProcess12isSequentialEv isSequential()
extern "C"
bool
C_ZNK8QProcess12isSequentialEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->isSequential();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 185, column 10>
//   // proto:  bool QProcess::waitForReadyRead(int msecs);
// _ZN8QProcess16waitForReadyReadEi waitForReadyRead(int)
extern "C"
bool
C_ZN8QProcess16waitForReadyReadEi(void *qthis,
int arg1) {
  auto ret =
  ((QProcess*)qthis)->waitForReadyRead(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 170, column 10>
//   // proto:  void QProcess::setWorkingDirectory(const QString & dir);
// _ZN8QProcess19setWorkingDirectoryERK7QString setWorkingDirectory(const class QString &)
extern "C"
void
C_ZN8QProcess19setWorkingDirectoryERK7QString(void *qthis,
const QString* arg1) {
  ((QProcess*)qthis)->setWorkingDirectory(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 222, column 10>
//   // proto:  void QProcess::terminate();
// _ZN8QProcess9terminateEv terminate()
extern "C"
void
C_ZN8QProcess9terminateEv(void *qthis) {
  ((QProcess*)qthis)->terminate();
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 177, column 28>
//   // proto:  QProcess::ProcessError QProcess::error();
// _ZNK8QProcess5errorEv error()
extern "C"
QProcess::ProcessError
C_ZNK8QProcess5errorEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 223, column 10>
//   // proto:  void QProcess::kill();
// _ZN8QProcess4killEv kill()
extern "C"
void
C_ZN8QProcess4killEv(void *qthis) {
  ((QProcess*)qthis)->kill();
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 196, column 12>
//   // proto:  qint64 QProcess::bytesAvailable();
// _ZNK8QProcess14bytesAvailableEv bytesAvailable()
extern "C"
long long
C_ZNK8QProcess14bytesAvailableEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->bytesAvailable();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 97, column 5>
//   // proto:  const QMetaObject * QProcess::metaObject();
// _ZNK8QProcess10metaObjectEv metaObject()
extern "C"
void*
C_ZNK8QProcess10metaObjectEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 193, column 26>
//   // proto:  QProcess::ExitStatus QProcess::exitStatus();
// _ZNK8QProcess10exitStatusEv exitStatus()
extern "C"
QProcess::ExitStatus
C_ZNK8QProcess10exitStatusEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->exitStatus();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 184, column 10>
//   // proto:  bool QProcess::waitForStarted(int msecs);
// _ZN8QProcess14waitForStartedEi waitForStarted(int)
extern "C"
bool
C_ZN8QProcess14waitForStartedEi(void *qthis,
int arg1) {
  auto ret =
  ((QProcess*)qthis)->waitForStarted(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 146, column 24>
//   // proto:  QProcess::ProcessChannelMode QProcess::readChannelMode();
// _ZNK8QProcess15readChannelModeEv readChannelMode()
extern "C"
QProcess::ProcessChannelMode
C_ZNK8QProcess15readChannelModeEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->readChannelMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 190, column 16>
//   // proto:  QByteArray QProcess::readAllStandardError();
// _ZN8QProcess20readAllStandardErrorEv readAllStandardError()
extern "C"
QByteArray*
C_ZN8QProcess20readAllStandardErrorEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->readAllStandardError();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 192, column 9>
//   // proto:  int QProcess::exitCode();
// _ZNK8QProcess8exitCodeEv exitCode()
extern "C"
int
C_ZNK8QProcess8exitCodeEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->exitCode();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 227, column 10>
//   // proto:  void QProcess::finished(int exitCode);
// _ZN8QProcess8finishedEi finished(int)
extern "C"
void
C_ZN8QProcess8finishedEi(void *qthis,
int arg1) {
  ((QProcess*)qthis)->finished(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 173, column 17>
//   // proto:  QStringList QProcess::environment();
// _ZNK8QProcess11environmentEv environment()
extern "C"
QStringList*
C_ZNK8QProcess11environmentEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->environment();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 199, column 10>
//   // proto:  bool QProcess::canReadLine();
// _ZNK8QProcess11canReadLineEv canReadLine()
extern "C"
bool
C_ZNK8QProcess11canReadLineEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->canReadLine();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 147, column 10>
//   // proto:  void QProcess::setReadChannelMode(QProcess::ProcessChannelMode mode);
// _ZN8QProcess18setReadChannelModeENS_18ProcessChannelModeE setReadChannelMode(enum QProcess::ProcessChannelMode)
extern "C"
void
C_ZN8QProcess18setReadChannelModeENS_18ProcessChannelModeE(void *qthis,
QProcess::ProcessChannelMode arg1) {
  ((QProcess*)qthis)->setReadChannelMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 148, column 24>
//   // proto:  QProcess::ProcessChannelMode QProcess::processChannelMode();
// _ZNK8QProcess18processChannelModeEv processChannelMode()
extern "C"
QProcess::ProcessChannelMode
C_ZNK8QProcess18processChannelModeEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->processChannelMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 162, column 10>
//   // proto:  void QProcess::setStandardOutputProcess(QProcess * destination);
// _ZN8QProcess24setStandardOutputProcessEPS_ setStandardOutputProcess(class QProcess *)
extern "C"
void
C_ZN8QProcess24setStandardOutputProcessEPS_(void *qthis,
QProcess * arg1) {
  ((QProcess*)qthis)->setStandardOutputProcess(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 228, column 10>
//   // proto:  void QProcess::finished(int exitCode, QProcess::ExitStatus exitStatus);
// _ZN8QProcess8finishedEiNS_10ExitStatusE finished(int, class QProcess::ExitStatus)
extern "C"
void
C_ZN8QProcess8finishedEiNS_10ExitStatusE(void *qthis,
int arg1,
QProcess::ExitStatus* arg2) {
  ((QProcess*)qthis)->finished(arg1,
*((QProcess::ExitStatus*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 151, column 10>
//   // proto:  void QProcess::setInputChannelMode(QProcess::InputChannelMode mode);
// _ZN8QProcess19setInputChannelModeENS_16InputChannelModeE setInputChannelMode(enum QProcess::InputChannelMode)
extern "C"
void
C_ZN8QProcess19setInputChannelModeENS_16InputChannelModeE(void *qthis,
QProcess::InputChannelMode arg1) {
  ((QProcess*)qthis)->setInputChannelMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 160, column 10>
//   // proto:  void QProcess::setStandardOutputFile(const QString & fileName, OpenMode mode);
// _ZN8QProcess21setStandardOutputFileERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE setStandardOutputFile(const class QString &, OpenMode)
extern "C"
void
C_ZN8QProcess21setStandardOutputFileERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
const QString* arg1,
QIODevice::OpenMode arg2) {
  ((QProcess*)qthis)->setStandardOutputFile(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 187, column 10>
//   // proto:  bool QProcess::waitForFinished(int msecs);
// _ZN8QProcess15waitForFinishedEi waitForFinished(int)
extern "C"
bool
C_ZN8QProcess15waitForFinishedEi(void *qthis,
int arg1) {
  auto ret =
  ((QProcess*)qthis)->waitForFinished(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 197, column 12>
//   // proto:  qint64 QProcess::bytesToWrite();
// _ZNK8QProcess12bytesToWriteEv bytesToWrite()
extern "C"
long long
C_ZNK8QProcess12bytesToWriteEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->bytesToWrite();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 169, column 13>
//   // proto:  QString QProcess::workingDirectory();
// _ZNK8QProcess16workingDirectoryEv workingDirectory()
extern "C"
QString*
C_ZNK8QProcess16workingDirectoryEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->workingDirectory();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 141, column 10>
//   // proto:  void QProcess::setProgram(const QString & program);
// _ZN8QProcess10setProgramERK7QString setProgram(const class QString &)
extern "C"
void
C_ZN8QProcess10setProgramERK7QString(void *qthis,
const QString* arg1) {
  ((QProcess*)qthis)->setProgram(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 229, column 10>
//   // proto:  void QProcess::error(QProcess::ProcessError error);
// _ZN8QProcess5errorENS_12ProcessErrorE error(class QProcess::ProcessError)
extern "C"
void
C_ZN8QProcess5errorENS_12ProcessErrorE(void *qthis,
QProcess::ProcessError* arg1) {
  ((QProcess*)qthis)->error(*((QProcess::ProcessError*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 159, column 10>
//   // proto:  void QProcess::setStandardInputFile(const QString & fileName);
// _ZN8QProcess20setStandardInputFileERK7QString setStandardInputFile(const class QString &)
extern "C"
void
C_ZN8QProcess20setStandardInputFileERK7QString(void *qthis,
const QString* arg1) {
  ((QProcess*)qthis)->setStandardInputFile(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 178, column 28>
//   // proto:  QProcess::ProcessState QProcess::state();
// _ZNK8QProcess5stateEv state()
extern "C"
QProcess::ProcessState
C_ZNK8QProcess5stateEv(void *qthis) {
  auto ret =
  ((QProcess*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 149, column 10>
//   // proto:  void QProcess::setProcessChannelMode(QProcess::ProcessChannelMode mode);
// _ZN8QProcess21setProcessChannelModeENS_18ProcessChannelModeE setProcessChannelMode(enum QProcess::ProcessChannelMode)
extern "C"
void
C_ZN8QProcess21setProcessChannelModeENS_18ProcessChannelModeE(void *qthis,
QProcess::ProcessChannelMode arg1) {
  ((QProcess*)qthis)->setProcessChannelMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 74, column 10>
//   // proto:  bool QProcessEnvironment::contains(const QString & name);
// _ZNK19QProcessEnvironment8containsERK7QString contains(const class QString &)
extern "C"
bool
C_ZNK19QProcessEnvironment8containsERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QProcessEnvironment*)qthis)->contains(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 81, column 17>
//   // proto:  QStringList QProcessEnvironment::keys();
// _ZNK19QProcessEnvironment4keysEv keys()
extern "C"
QStringList*
C_ZNK19QProcessEnvironment4keysEv(void *qthis) {
  auto ret =
  ((QProcessEnvironment*)qthis)->keys();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 76, column 10>
//   // proto:  void QProcessEnvironment::remove(const QString & name);
// _ZN19QProcessEnvironment6removeERK7QString remove(const class QString &)
extern "C"
void
C_ZN19QProcessEnvironment6removeERK7QString(void *qthis,
const QString* arg1) {
  ((QProcessEnvironment*)qthis)->remove(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 72, column 10>
//   // proto:  void QProcessEnvironment::clear();
// _ZN19QProcessEnvironment5clearEv clear()
extern "C"
void
C_ZN19QProcessEnvironment5clearEv(void *qthis) {
  ((QProcessEnvironment*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 77, column 13>
//   // proto:  QString QProcessEnvironment::value(const QString & name, const QString & defaultValue);
// _ZNK19QProcessEnvironment5valueERK7QStringS2_ value(const class QString &, const class QString &)
extern "C"
QString*
C_ZNK19QProcessEnvironment5valueERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  auto ret =
  ((QProcessEnvironment*)qthis)->value(*((const QString*)arg1),
*((const QString*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 71, column 10>
//   // proto:  bool QProcessEnvironment::isEmpty();
// _ZNK19QProcessEnvironment7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK19QProcessEnvironment7isEmptyEv(void *qthis) {
  auto ret =
  ((QProcessEnvironment*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QProcessEnvironment::~QProcessEnvironment();
extern "C"
void C_ZN19QProcessEnvironmentD2Ev(void *qthis) {
  delete (QProcessEnvironment*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 65, column 17>
//   // proto:  void QProcessEnvironment::swap(QProcessEnvironment & other);
// _ZN19QProcessEnvironment4swapERS_ swap(class QProcessEnvironment &)
extern "C"
void
C_ZN19QProcessEnvironment4swapERS_(void *qthis,
QProcessEnvironment* arg1) {
  ((QProcessEnvironment*)qthis)->swap(*((QProcessEnvironment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 61, column 5>
//   // proto:  void QProcessEnvironment::QProcessEnvironment(const QProcessEnvironment & other);
extern "C"
QProcessEnvironment*
C_ZN19QProcessEnvironmentC2ERKS_(const QProcessEnvironment* arg1) {
  auto ret = new QProcessEnvironment(*((const QProcessEnvironment*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 85, column 32>
//   // proto: static QProcessEnvironment QProcessEnvironment::systemEnvironment();
// _ZN19QProcessEnvironment17systemEnvironmentEv systemEnvironment()
extern "C"
QProcessEnvironment*
C_ZN19QProcessEnvironment17systemEnvironmentEv() {
  auto ret =
  QProcessEnvironment::systemEnvironment();
  return new QProcessEnvironment(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 75, column 10>
//   // proto:  void QProcessEnvironment::insert(const QString & name, const QString & value);
// _ZN19QProcessEnvironment6insertERK7QStringS2_ insert(const class QString &, const class QString &)
extern "C"
void
C_ZN19QProcessEnvironment6insertERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  ((QProcessEnvironment*)qthis)->insert(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 79, column 17>
//   // proto:  QStringList QProcessEnvironment::toStringList();
// _ZNK19QProcessEnvironment12toStringListEv toStringList()
extern "C"
QStringList*
C_ZNK19QProcessEnvironment12toStringListEv(void *qthis) {
  auto ret =
  ((QProcessEnvironment*)qthis)->toStringList();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 60, column 5>
//   // proto:  void QProcessEnvironment::QProcessEnvironment();
extern "C"
QProcessEnvironment*
C_ZN19QProcessEnvironmentC2Ev() {
  auto ret = new QProcessEnvironment();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qprocess.h', line 83, column 10>
//   // proto:  void QProcessEnvironment::insert(const QProcessEnvironment & e);
// _ZN19QProcessEnvironment6insertERKS_ insert(const class QProcessEnvironment &)
extern "C"
void
C_ZN19QProcessEnvironment6insertERKS_(void *qthis,
const QProcessEnvironment* arg1) {
  ((QProcessEnvironment*)qthis)->insert(*((const QProcessEnvironment*)arg1));
}
// <= ext block end

// body block begin =>
// QProcess_SlotProxy here
class QProcess_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QProcess_SlotProxy():QObject(){}

public slots:
  // error(class QProcess::ProcessError)
  void slot_proxy_func__ZN8QProcess5errorENS_12ProcessErrorE(QProcess::ProcessError arg0);
public:
  void (*slot_func__ZN8QProcess5errorENS_12ProcessErrorE)(void* rsfptr, QProcess::ProcessError arg0) = NULL;
public slots:
  // finished(int, class QProcess::ExitStatus)
  void slot_proxy_func__ZN8QProcess8finishedEiNS_10ExitStatusE(int arg0, QProcess::ExitStatus arg1);
public:
  void (*slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE)(void* rsfptr, int arg0, QProcess::ExitStatus arg1) = NULL;
public slots:
  // finished(int)
  void slot_proxy_func__ZN8QProcess8finishedEi(int arg0);
public:
  void (*slot_func__ZN8QProcess8finishedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qprocess.moc"

extern "C" {
  QProcess_SlotProxy* QProcess_SlotProxy_new()
  {
    return new QProcess_SlotProxy();
  }
};

void QProcess_SlotProxy::slot_proxy_func__ZN8QProcess5errorENS_12ProcessErrorE(QProcess::ProcessError arg0) {
  if (this->slot_func__ZN8QProcess5errorENS_12ProcessErrorE != NULL) {
    // do smth...
    this->slot_func__ZN8QProcess5errorENS_12ProcessErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QProcess_SlotProxy_connect__ZN8QProcess5errorENS_12ProcessErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProcess_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QProcess5errorENS_12ProcessErrorE = (decltype(that->slot_func__ZN8QProcess5errorENS_12ProcessErrorE))ffifptr;
  QObject::connect((QProcess*)sender, SIGNAL(error(class QProcess::ProcessError)), that, SLOT(slot_proxy_func__ZN8QProcess5errorENS_12ProcessErrorE(QProcess::ProcessError arg0)));
  return that;
}
extern "C"
void QProcess_SlotProxy_disconnect__ZN8QProcess5errorENS_12ProcessErrorE(QProcess_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QProcess_SlotProxy::slot_proxy_func__ZN8QProcess8finishedEiNS_10ExitStatusE(int arg0, QProcess::ExitStatus arg1) {
  if (this->slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE != NULL) {
    // do smth...
    this->slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QProcess_SlotProxy_connect__ZN8QProcess8finishedEiNS_10ExitStatusE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProcess_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE = (decltype(that->slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE))ffifptr;
  QObject::connect((QProcess*)sender, SIGNAL(finished(int, class QProcess::ExitStatus)), that, SLOT(slot_proxy_func__ZN8QProcess8finishedEiNS_10ExitStatusE(int arg0, QProcess::ExitStatus arg1)));
  return that;
}
extern "C"
void QProcess_SlotProxy_disconnect__ZN8QProcess8finishedEiNS_10ExitStatusE(QProcess_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QProcess_SlotProxy::slot_proxy_func__ZN8QProcess8finishedEi(int arg0) {
  if (this->slot_func__ZN8QProcess8finishedEi != NULL) {
    // do smth...
    this->slot_func__ZN8QProcess8finishedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QProcess_SlotProxy_connect__ZN8QProcess8finishedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProcess_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QProcess8finishedEi = (decltype(that->slot_func__ZN8QProcess8finishedEi))ffifptr;
  QObject::connect((QProcess*)sender, SIGNAL(finished(int)), that, SLOT(slot_proxy_func__ZN8QProcess8finishedEi(int arg0)));
  return that;
}
extern "C"
void QProcess_SlotProxy_disconnect__ZN8QProcess8finishedEi(QProcess_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

