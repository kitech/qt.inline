//  header block begin
// /usr/include/qt/QtCore/qprocess.h
#include <qprocess.h>
#include <QtCore>

// QProcess is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:284
// [-2] void setProcessState(enum QProcess::ProcessState)
extern "C"
void* callback_ZN8QProcess15setProcessStateENS_12ProcessStateE = 0;
extern "C" void set_callback_ZN8QProcess15setProcessStateENS_12ProcessStateE(void*cbfn)
{ callback_ZN8QProcess15setProcessStateENS_12ProcessStateE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:286
// [-2] void setupChildProcess()
extern "C"
void* callback_ZN8QProcess17setupChildProcessEv = 0;
extern "C" void set_callback_ZN8QProcess17setupChildProcessEv(void*cbfn)
{ callback_ZN8QProcess17setupChildProcessEv = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:289
// [8] qint64 readData(char *, qint64)
extern "C"
void* callback_ZN8QProcess8readDataEPcx = 0;
extern "C" void set_callback_ZN8QProcess8readDataEPcx(void*cbfn)
{ callback_ZN8QProcess8readDataEPcx = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:290
// [8] qint64 writeData(const char *, qint64)
extern "C"
void* callback_ZN8QProcess9writeDataEPKcx = 0;
extern "C" void set_callback_ZN8QProcess9writeDataEPKcx(void*cbfn)
{ callback_ZN8QProcess9writeDataEPKcx = cbfn; }

class MyQProcess : public QProcess {
public:
MyQProcess(QObject * parent) : QProcess(parent) {}
// void setProcessState(enum QProcess::ProcessState)
// void setProcessState(enum QProcess::ProcessState)
virtual void setProcessState(QProcess::ProcessState state) {
  if (callback_ZN8QProcess15setProcessStateENS_12ProcessStateE != 0) {
  // callback_ZN8QProcess15setProcessStateENS_12ProcessStateE(state);
}}
// void setupChildProcess()
// void setupChildProcess()
virtual void setupChildProcess() {
  if (callback_ZN8QProcess17setupChildProcessEv != 0) {
  // callback_ZN8QProcess17setupChildProcessEv();
}}
// qint64 readData(char *, qint64)
// qint64 readData(char *, qint64)
virtual qint64 readData(char * data, qint64 maxlen) {
  if (callback_ZN8QProcess8readDataEPcx != 0) {
  // callback_ZN8QProcess8readDataEPcx(data, maxlen);
}}
// qint64 writeData(const char *, qint64)
// qint64 writeData(const char *, qint64)
virtual qint64 writeData(const char * data, qint64 len) {
  if (callback_ZN8QProcess9writeDataEPKcx != 0) {
  // callback_ZN8QProcess9writeDataEPKcx(data, len);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:112
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK8QProcess10metaObjectEv(void *this_) {
  return (void*)((QProcess*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:158
// [-2] void QProcess(class QObject *)
extern "C"
void* C_ZN8QProcessC1EP7QObject(QObject * parent) {
  (MyQProcess*)(0);
  return  new MyQProcess(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:159
// [-2] void ~QProcess()
extern "C"
void C_ZN8QProcessD1Ev(void *this_) {
  delete (QProcess*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:166
// [1] bool startDetached(qint64 *)
extern "C"
bool C_ZN8QProcess13startDetachedEPx(void *this_, qint64 * pid) {
  return (bool)((QProcess*)this_)->startDetached(pid);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:169
// [8] QString program()
extern "C"
void* C_ZNK8QProcess7programEv(void *this_) {
  auto rv = ((QProcess*)this_)->program();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:170
// [-2] void setProgram(const class QString &)
extern "C"
void C_ZN8QProcess10setProgramERK7QString(void *this_, const QString & program) {
  ((QProcess*)this_)->setProgram(program);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:173
// [-2] void setArguments(const class QStringList &)
extern "C"
void C_ZN8QProcess12setArgumentsERK11QStringList(void *this_, const QStringList & arguments) {
  ((QProcess*)this_)->setArguments(arguments);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:175
// [4] QProcess::ProcessChannelMode readChannelMode()
extern "C"
QProcess::ProcessChannelMode C_ZNK8QProcess15readChannelModeEv(void *this_) {
  return (QProcess::ProcessChannelMode)((QProcess*)this_)->readChannelMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:176
// [-2] void setReadChannelMode(enum QProcess::ProcessChannelMode)
extern "C"
void C_ZN8QProcess18setReadChannelModeENS_18ProcessChannelModeE(void *this_, QProcess::ProcessChannelMode mode) {
  ((QProcess*)this_)->setReadChannelMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:177
// [4] QProcess::ProcessChannelMode processChannelMode()
extern "C"
QProcess::ProcessChannelMode C_ZNK8QProcess18processChannelModeEv(void *this_) {
  return (QProcess::ProcessChannelMode)((QProcess*)this_)->processChannelMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:178
// [-2] void setProcessChannelMode(enum QProcess::ProcessChannelMode)
extern "C"
void C_ZN8QProcess21setProcessChannelModeENS_18ProcessChannelModeE(void *this_, QProcess::ProcessChannelMode mode) {
  ((QProcess*)this_)->setProcessChannelMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:179
// [4] QProcess::InputChannelMode inputChannelMode()
extern "C"
QProcess::InputChannelMode C_ZNK8QProcess16inputChannelModeEv(void *this_) {
  return (QProcess::InputChannelMode)((QProcess*)this_)->inputChannelMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:180
// [-2] void setInputChannelMode(enum QProcess::InputChannelMode)
extern "C"
void C_ZN8QProcess19setInputChannelModeENS_16InputChannelModeE(void *this_, QProcess::InputChannelMode mode) {
  ((QProcess*)this_)->setInputChannelMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:182
// [4] QProcess::ProcessChannel readChannel()
extern "C"
QProcess::ProcessChannel C_ZNK8QProcess11readChannelEv(void *this_) {
  return (QProcess::ProcessChannel)((QProcess*)this_)->readChannel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:183
// [-2] void setReadChannel(enum QProcess::ProcessChannel)
extern "C"
void C_ZN8QProcess14setReadChannelENS_14ProcessChannelE(void *this_, QProcess::ProcessChannel channel) {
  ((QProcess*)this_)->setReadChannel(channel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:185
// [-2] void closeReadChannel(enum QProcess::ProcessChannel)
extern "C"
void C_ZN8QProcess16closeReadChannelENS_14ProcessChannelE(void *this_, QProcess::ProcessChannel channel) {
  ((QProcess*)this_)->closeReadChannel(channel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:186
// [-2] void closeWriteChannel()
extern "C"
void C_ZN8QProcess17closeWriteChannelEv(void *this_) {
  ((QProcess*)this_)->closeWriteChannel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:188
// [-2] void setStandardInputFile(const class QString &)
extern "C"
void C_ZN8QProcess20setStandardInputFileERK7QString(void *this_, const QString & fileName) {
  ((QProcess*)this_)->setStandardInputFile(fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:191
// [-2] void setStandardOutputProcess(class QProcess *)
extern "C"
void C_ZN8QProcess24setStandardOutputProcessEPS_(void *this_, QProcess * destination) {
  ((QProcess*)this_)->setStandardOutputProcess(destination);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:214
// [8] QString workingDirectory()
extern "C"
void* C_ZNK8QProcess16workingDirectoryEv(void *this_) {
  auto rv = ((QProcess*)this_)->workingDirectory();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:215
// [-2] void setWorkingDirectory(const class QString &)
extern "C"
void C_ZN8QProcess19setWorkingDirectoryERK7QString(void *this_, const QString & dir) {
  ((QProcess*)this_)->setWorkingDirectory(dir);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:217
// [-2] void setEnvironment(const class QStringList &)
extern "C"
void C_ZN8QProcess14setEnvironmentERK11QStringList(void *this_, const QStringList & environment) {
  ((QProcess*)this_)->setEnvironment(environment);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:219
// [-2] void setProcessEnvironment(const class QProcessEnvironment &)
extern "C"
void C_ZN8QProcess21setProcessEnvironmentERK19QProcessEnvironment(void *this_, const QProcessEnvironment & environment) {
  ((QProcess*)this_)->setProcessEnvironment(environment);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:220
// [8] QProcessEnvironment processEnvironment()
extern "C"
void* C_ZNK8QProcess18processEnvironmentEv(void *this_) {
  auto rv = ((QProcess*)this_)->processEnvironment();
return new QProcessEnvironment(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:222
// [4] QProcess::ProcessError error()
extern "C"
QProcess::ProcessError C_ZNK8QProcess5errorEv(void *this_) {
  return (QProcess::ProcessError)((QProcess*)this_)->error();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:223
// [4] QProcess::ProcessState state()
extern "C"
QProcess::ProcessState C_ZNK8QProcess5stateEv(void *this_) {
  return (QProcess::ProcessState)((QProcess*)this_)->state();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:226
// [8] Q_PID pid()
extern "C"
Q_PID C_ZNK8QProcess3pidEv(void *this_) {
  return (Q_PID)((QProcess*)this_)->pid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:227
// [8] qint64 processId()
extern "C"
qint64 C_ZNK8QProcess9processIdEv(void *this_) {
  return (qint64)((QProcess*)this_)->processId();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:229
// [1] bool waitForStarted(int)
extern "C"
bool C_ZN8QProcess14waitForStartedEi(void *this_, int msecs) {
  return (bool)((QProcess*)this_)->waitForStarted(msecs);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:230
// [1] bool waitForReadyRead(int)
extern "C"
bool C_ZN8QProcess16waitForReadyReadEi(void *this_, int msecs) {
  return (bool)((QProcess*)this_)->waitForReadyRead(msecs);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:231
// [1] bool waitForBytesWritten(int)
extern "C"
bool C_ZN8QProcess19waitForBytesWrittenEi(void *this_, int msecs) {
  return (bool)((QProcess*)this_)->waitForBytesWritten(msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:232
// [1] bool waitForFinished(int)
extern "C"
bool C_ZN8QProcess15waitForFinishedEi(void *this_, int msecs) {
  return (bool)((QProcess*)this_)->waitForFinished(msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:234
// [8] QByteArray readAllStandardOutput()
extern "C"
void* C_ZN8QProcess21readAllStandardOutputEv(void *this_) {
  auto rv = ((QProcess*)this_)->readAllStandardOutput();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:235
// [8] QByteArray readAllStandardError()
extern "C"
void* C_ZN8QProcess20readAllStandardErrorEv(void *this_) {
  auto rv = ((QProcess*)this_)->readAllStandardError();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:237
// [4] int exitCode()
extern "C"
int C_ZNK8QProcess8exitCodeEv(void *this_) {
  return (int)((QProcess*)this_)->exitCode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:238
// [4] QProcess::ExitStatus exitStatus()
extern "C"
QProcess::ExitStatus C_ZNK8QProcess10exitStatusEv(void *this_) {
  return (QProcess::ExitStatus)((QProcess*)this_)->exitStatus();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:241
// [8] qint64 bytesAvailable()
extern "C"
qint64 C_ZNK8QProcess14bytesAvailableEv(void *this_) {
  return (qint64)((QProcess*)this_)->bytesAvailable();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:242
// [8] qint64 bytesToWrite()
extern "C"
qint64 C_ZNK8QProcess12bytesToWriteEv(void *this_) {
  return (qint64)((QProcess*)this_)->bytesToWrite();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:243
// [1] bool isSequential()
extern "C"
bool C_ZNK8QProcess12isSequentialEv(void *this_) {
  return (bool)((QProcess*)this_)->isSequential();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:244
// [1] bool canReadLine()
extern "C"
bool C_ZNK8QProcess11canReadLineEv(void *this_) {
  return (bool)((QProcess*)this_)->canReadLine();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:245
// [-2] void close()
extern "C"
void C_ZN8QProcess5closeEv(void *this_) {
  ((QProcess*)this_)->close();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:246
// [1] bool atEnd()
extern "C"
bool C_ZNK8QProcess5atEndEv(void *this_) {
  return (bool)((QProcess*)this_)->atEnd();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:248
// [4] int execute(const class QString &, const class QStringList &)
extern "C"
int C_ZN8QProcess7executeERK7QStringRK11QStringList(const QString & program, const QStringList & arguments) {
  return (int)QProcess::execute(program, arguments);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:249
// [4] int execute(const class QString &)
extern "C"
int C_ZN8QProcess7executeERK7QString(const QString & command) {
  return (int)QProcess::execute(command);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:251
// [1] bool startDetached(const class QString &, const class QStringList &, const class QString &, qint64 *)
extern "C"
bool C_ZN8QProcess13startDetachedERK7QStringRK11QStringListS2_Px(const QString & program, const QStringList & arguments, const QString & workingDirectory, qint64 * pid) {
  return (bool)QProcess::startDetached(program, arguments, workingDirectory, pid);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:258
// [1] bool startDetached(const class QString &, const class QStringList &)
extern "C"
bool C_ZN8QProcess13startDetachedERK7QStringRK11QStringList(const QString & program, const QStringList & arguments) {
  return (bool)QProcess::startDetached(program, arguments);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:260
// [1] bool startDetached(const class QString &)
extern "C"
bool C_ZN8QProcess13startDetachedERK7QString(const QString & command) {
  return (bool)QProcess::startDetached(command);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:264
// [8] QString nullDevice()
extern "C"
void* C_ZN8QProcess10nullDeviceEv() {
  auto rv = QProcess::nullDevice();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:267
// [-2] void terminate()
extern "C"
void C_ZN8QProcess9terminateEv(void *this_) {
  ((QProcess*)this_)->terminate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:268
// [-2] void kill()
extern "C"
void C_ZN8QProcess4killEv(void *this_) {
  ((QProcess*)this_)->kill();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:272
// [-2] void finished(int)
extern "C"
void C_ZN8QProcess8finishedEi(void *this_, int exitCode) {
  ((QProcess*)this_)->finished(exitCode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:273
// [-2] void finished(int, class QProcess::ExitStatus)
extern "C"
void C_ZN8QProcess8finishedEiNS_10ExitStatusE(void *this_, int exitCode, QProcess::ExitStatus exitStatus) {
  ((QProcess*)this_)->finished(exitCode, exitStatus);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:275
// [-2] void error(class QProcess::ProcessError)
extern "C"
void C_ZN8QProcess5errorENS_12ProcessErrorE(void *this_, QProcess::ProcessError error) {
  ((QProcess*)this_)->error(error);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:277
// [-2] void errorOccurred(class QProcess::ProcessError)
extern "C"
void C_ZN8QProcess13errorOccurredENS_12ProcessErrorE(void *this_, QProcess::ProcessError error) {
  ((QProcess*)this_)->errorOccurred(error);
}
//  main block end
