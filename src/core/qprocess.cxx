// /usr/include/qt/QtCore/qprocess.h
#include <qprocess.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qprocess.h:110
// const QMetaObject * metaObject()
extern "C"
void C_ZNK8QProcess10metaObjectEv(void *this_) {
  /*return*/ ((QProcess*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qprocess.h:156
// void QProcess(class QObject *)
extern "C"
void* C_ZN8QProcessC1EP7QObject(QObject * parent) {
  return new QProcess(parent);
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:157
// void ~QProcess()
extern "C"
void C_ZN8QProcessD1Ev(void *this_) {
  delete (QProcess*)(this_);
}
// /usr/include/qt/QtCore/qprocess.h:159
// void start(const class QString &, const class QStringList &, OpenMode)
extern "C"
void C_ZN8QProcess5startERK7QStringRK11QStringList6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, const QString & program, const QStringList & arguments, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->start(program, arguments, mode);
}
// /usr/include/qt/QtCore/qprocess.h:161
// void start(const class QString &, OpenMode)
extern "C"
void C_ZN8QProcess5startERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, const QString & command, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->start(command, mode);
}
// /usr/include/qt/QtCore/qprocess.h:163
// void start(OpenMode)
extern "C"
void C_ZN8QProcess5startE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->start(mode);
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:164
// bool open(OpenMode)
extern "C"
void C_ZN8QProcess4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> mode) {
  /*return*/ ((QProcess*)this_)->open(mode);
}
// /usr/include/qt/QtCore/qprocess.h:166
// QString program()
extern "C"
void C_ZNK8QProcess7programEv(void *this_) {
  /*return*/ ((QProcess*)this_)->program();
}
// /usr/include/qt/QtCore/qprocess.h:167
// void setProgram(const class QString &)
extern "C"
void C_ZN8QProcess10setProgramERK7QString(void *this_, const QString & program) {
  ((QProcess*)this_)->setProgram(program);
}
// /usr/include/qt/QtCore/qprocess.h:169
// QStringList arguments()
extern "C"
void C_ZNK8QProcess9argumentsEv(void *this_) {
  /*return*/ ((QProcess*)this_)->arguments();
}
// /usr/include/qt/QtCore/qprocess.h:170
// void setArguments(const class QStringList &)
extern "C"
void C_ZN8QProcess12setArgumentsERK11QStringList(void *this_, const QStringList & arguments) {
  ((QProcess*)this_)->setArguments(arguments);
}
// /usr/include/qt/QtCore/qprocess.h:172
// QProcess::ProcessChannelMode readChannelMode()
extern "C"
void C_ZNK8QProcess15readChannelModeEv(void *this_) {
  /*return*/ ((QProcess*)this_)->readChannelMode();
}
// /usr/include/qt/QtCore/qprocess.h:173
// void setReadChannelMode(enum QProcess::ProcessChannelMode)
extern "C"
void C_ZN8QProcess18setReadChannelModeENS_18ProcessChannelModeE(void *this_, QProcess::ProcessChannelMode mode) {
  ((QProcess*)this_)->setReadChannelMode(mode);
}
// /usr/include/qt/QtCore/qprocess.h:174
// QProcess::ProcessChannelMode processChannelMode()
extern "C"
void C_ZNK8QProcess18processChannelModeEv(void *this_) {
  /*return*/ ((QProcess*)this_)->processChannelMode();
}
// /usr/include/qt/QtCore/qprocess.h:175
// void setProcessChannelMode(enum QProcess::ProcessChannelMode)
extern "C"
void C_ZN8QProcess21setProcessChannelModeENS_18ProcessChannelModeE(void *this_, QProcess::ProcessChannelMode mode) {
  ((QProcess*)this_)->setProcessChannelMode(mode);
}
// /usr/include/qt/QtCore/qprocess.h:176
// QProcess::InputChannelMode inputChannelMode()
extern "C"
void C_ZNK8QProcess16inputChannelModeEv(void *this_) {
  /*return*/ ((QProcess*)this_)->inputChannelMode();
}
// /usr/include/qt/QtCore/qprocess.h:177
// void setInputChannelMode(enum QProcess::InputChannelMode)
extern "C"
void C_ZN8QProcess19setInputChannelModeENS_16InputChannelModeE(void *this_, QProcess::InputChannelMode mode) {
  ((QProcess*)this_)->setInputChannelMode(mode);
}
// /usr/include/qt/QtCore/qprocess.h:179
// QProcess::ProcessChannel readChannel()
extern "C"
void C_ZNK8QProcess11readChannelEv(void *this_) {
  /*return*/ ((QProcess*)this_)->readChannel();
}
// /usr/include/qt/QtCore/qprocess.h:180
// void setReadChannel(enum QProcess::ProcessChannel)
extern "C"
void C_ZN8QProcess14setReadChannelENS_14ProcessChannelE(void *this_, QProcess::ProcessChannel channel) {
  ((QProcess*)this_)->setReadChannel(channel);
}
// /usr/include/qt/QtCore/qprocess.h:182
// void closeReadChannel(enum QProcess::ProcessChannel)
extern "C"
void C_ZN8QProcess16closeReadChannelENS_14ProcessChannelE(void *this_, QProcess::ProcessChannel channel) {
  ((QProcess*)this_)->closeReadChannel(channel);
}
// /usr/include/qt/QtCore/qprocess.h:183
// void closeWriteChannel()
extern "C"
void C_ZN8QProcess17closeWriteChannelEv(void *this_) {
  ((QProcess*)this_)->closeWriteChannel();
}
// /usr/include/qt/QtCore/qprocess.h:185
// void setStandardInputFile(const class QString &)
extern "C"
void C_ZN8QProcess20setStandardInputFileERK7QString(void *this_, const QString & fileName) {
  ((QProcess*)this_)->setStandardInputFile(fileName);
}
// /usr/include/qt/QtCore/qprocess.h:186
// void setStandardOutputFile(const class QString &, OpenMode)
extern "C"
void C_ZN8QProcess21setStandardOutputFileERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, const QString & fileName, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->setStandardOutputFile(fileName, mode);
}
// /usr/include/qt/QtCore/qprocess.h:187
// void setStandardErrorFile(const class QString &, OpenMode)
extern "C"
void C_ZN8QProcess20setStandardErrorFileERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, const QString & fileName, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->setStandardErrorFile(fileName, mode);
}
// /usr/include/qt/QtCore/qprocess.h:188
// void setStandardOutputProcess(class QProcess *)
extern "C"
void C_ZN8QProcess24setStandardOutputProcessEPS_(void *this_, QProcess * destination) {
  ((QProcess*)this_)->setStandardOutputProcess(destination);
}
// /usr/include/qt/QtCore/qprocess.h:211
// QString workingDirectory()
extern "C"
void C_ZNK8QProcess16workingDirectoryEv(void *this_) {
  /*return*/ ((QProcess*)this_)->workingDirectory();
}
// /usr/include/qt/QtCore/qprocess.h:212
// void setWorkingDirectory(const class QString &)
extern "C"
void C_ZN8QProcess19setWorkingDirectoryERK7QString(void *this_, const QString & dir) {
  ((QProcess*)this_)->setWorkingDirectory(dir);
}
// /usr/include/qt/QtCore/qprocess.h:214
// void setEnvironment(const class QStringList &)
extern "C"
void C_ZN8QProcess14setEnvironmentERK11QStringList(void *this_, const QStringList & environment) {
  ((QProcess*)this_)->setEnvironment(environment);
}
// /usr/include/qt/QtCore/qprocess.h:215
// QStringList environment()
extern "C"
void C_ZNK8QProcess11environmentEv(void *this_) {
  /*return*/ ((QProcess*)this_)->environment();
}
// /usr/include/qt/QtCore/qprocess.h:216
// void setProcessEnvironment(const class QProcessEnvironment &)
extern "C"
void C_ZN8QProcess21setProcessEnvironmentERK19QProcessEnvironment(void *this_, const QProcessEnvironment & environment) {
  ((QProcess*)this_)->setProcessEnvironment(environment);
}
// /usr/include/qt/QtCore/qprocess.h:217
// QProcessEnvironment processEnvironment()
extern "C"
void C_ZNK8QProcess18processEnvironmentEv(void *this_) {
  /*return*/ ((QProcess*)this_)->processEnvironment();
}
// /usr/include/qt/QtCore/qprocess.h:219
// QProcess::ProcessError error()
extern "C"
void C_ZNK8QProcess5errorEv(void *this_) {
  /*return*/ ((QProcess*)this_)->error();
}
// /usr/include/qt/QtCore/qprocess.h:220
// QProcess::ProcessState state()
extern "C"
void C_ZNK8QProcess5stateEv(void *this_) {
  /*return*/ ((QProcess*)this_)->state();
}
// /usr/include/qt/QtCore/qprocess.h:223
// Q_PID pid()
extern "C"
void C_ZNK8QProcess3pidEv(void *this_) {
  /*return*/ ((QProcess*)this_)->pid();
}
// /usr/include/qt/QtCore/qprocess.h:224
// qint64 processId()
extern "C"
void C_ZNK8QProcess9processIdEv(void *this_) {
  /*return*/ ((QProcess*)this_)->processId();
}
// /usr/include/qt/QtCore/qprocess.h:226
// bool waitForStarted(int)
extern "C"
void C_ZN8QProcess14waitForStartedEi(void *this_, int msecs) {
  /*return*/ ((QProcess*)this_)->waitForStarted(msecs);
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:227
// bool waitForReadyRead(int)
extern "C"
void C_ZN8QProcess16waitForReadyReadEi(void *this_, int msecs) {
  /*return*/ ((QProcess*)this_)->waitForReadyRead(msecs);
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:228
// bool waitForBytesWritten(int)
extern "C"
void C_ZN8QProcess19waitForBytesWrittenEi(void *this_, int msecs) {
  /*return*/ ((QProcess*)this_)->waitForBytesWritten(msecs);
}
// /usr/include/qt/QtCore/qprocess.h:229
// bool waitForFinished(int)
extern "C"
void C_ZN8QProcess15waitForFinishedEi(void *this_, int msecs) {
  /*return*/ ((QProcess*)this_)->waitForFinished(msecs);
}
// /usr/include/qt/QtCore/qprocess.h:231
// QByteArray readAllStandardOutput()
extern "C"
void C_ZN8QProcess21readAllStandardOutputEv(void *this_) {
  /*return*/ ((QProcess*)this_)->readAllStandardOutput();
}
// /usr/include/qt/QtCore/qprocess.h:232
// QByteArray readAllStandardError()
extern "C"
void C_ZN8QProcess20readAllStandardErrorEv(void *this_) {
  /*return*/ ((QProcess*)this_)->readAllStandardError();
}
// /usr/include/qt/QtCore/qprocess.h:234
// int exitCode()
extern "C"
void C_ZNK8QProcess8exitCodeEv(void *this_) {
  /*return*/ ((QProcess*)this_)->exitCode();
}
// /usr/include/qt/QtCore/qprocess.h:235
// QProcess::ExitStatus exitStatus()
extern "C"
void C_ZNK8QProcess10exitStatusEv(void *this_) {
  /*return*/ ((QProcess*)this_)->exitStatus();
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:238
// qint64 bytesAvailable()
extern "C"
void C_ZNK8QProcess14bytesAvailableEv(void *this_) {
  /*return*/ ((QProcess*)this_)->bytesAvailable();
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:239
// qint64 bytesToWrite()
extern "C"
void C_ZNK8QProcess12bytesToWriteEv(void *this_) {
  /*return*/ ((QProcess*)this_)->bytesToWrite();
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:240
// bool isSequential()
extern "C"
void C_ZNK8QProcess12isSequentialEv(void *this_) {
  /*return*/ ((QProcess*)this_)->isSequential();
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:241
// bool canReadLine()
extern "C"
void C_ZNK8QProcess11canReadLineEv(void *this_) {
  /*return*/ ((QProcess*)this_)->canReadLine();
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:242
// void close()
extern "C"
void C_ZN8QProcess5closeEv(void *this_) {
  ((QProcess*)this_)->close();
}
// virtual
// /usr/include/qt/QtCore/qprocess.h:243
// bool atEnd()
extern "C"
void C_ZNK8QProcess5atEndEv(void *this_) {
  /*return*/ ((QProcess*)this_)->atEnd();
}
// static
// /usr/include/qt/QtCore/qprocess.h:245
// int execute(const class QString &, const class QStringList &)
extern "C"
void C_ZN8QProcess7executeERK7QStringRK11QStringList(const QString & program, const QStringList & arguments) {
  /*return*/ QProcess::execute(program, arguments);
}
// static
// /usr/include/qt/QtCore/qprocess.h:246
// int execute(const class QString &)
extern "C"
void C_ZN8QProcess7executeERK7QString(const QString & command) {
  /*return*/ QProcess::execute(command);
}
// static
// /usr/include/qt/QtCore/qprocess.h:248
// bool startDetached(const class QString &, const class QStringList &, const class QString &, qint64 *)
extern "C"
void C_ZN8QProcess13startDetachedERK7QStringRK11QStringListS2_Px(const QString & program, const QStringList & arguments, const QString & workingDirectory, qint64 * pid) {
  /*return*/ QProcess::startDetached(program, arguments, workingDirectory, pid);
}
// static
// /usr/include/qt/QtCore/qprocess.h:255
// bool startDetached(const class QString &, const class QStringList &)
extern "C"
void C_ZN8QProcess13startDetachedERK7QStringRK11QStringList(const QString & program, const QStringList & arguments) {
  /*return*/ QProcess::startDetached(program, arguments);
}
// static
// /usr/include/qt/QtCore/qprocess.h:257
// bool startDetached(const class QString &)
extern "C"
void C_ZN8QProcess13startDetachedERK7QString(const QString & command) {
  /*return*/ QProcess::startDetached(command);
}
// static
// /usr/include/qt/QtCore/qprocess.h:259
// QStringList systemEnvironment()
extern "C"
void C_ZN8QProcess17systemEnvironmentEv() {
  /*return*/ QProcess::systemEnvironment();
}
// static
// /usr/include/qt/QtCore/qprocess.h:261
// QString nullDevice()
extern "C"
void C_ZN8QProcess10nullDeviceEv() {
  /*return*/ QProcess::nullDevice();
}
// /usr/include/qt/QtCore/qprocess.h:264
// void terminate()
extern "C"
void C_ZN8QProcess9terminateEv(void *this_) {
  ((QProcess*)this_)->terminate();
}
// /usr/include/qt/QtCore/qprocess.h:265
// void kill()
extern "C"
void C_ZN8QProcess4killEv(void *this_) {
  ((QProcess*)this_)->kill();
}
// /usr/include/qt/QtCore/qprocess.h:269
// void finished(int)
extern "C"
void C_ZN8QProcess8finishedEi(void *this_, int exitCode) {
  ((QProcess*)this_)->finished(exitCode);
}
// /usr/include/qt/QtCore/qprocess.h:270
// void finished(int, class QProcess::ExitStatus)
extern "C"
void C_ZN8QProcess8finishedEiNS_10ExitStatusE(void *this_, int exitCode, QProcess::ExitStatus exitStatus) {
  ((QProcess*)this_)->finished(exitCode, exitStatus);
}
// /usr/include/qt/QtCore/qprocess.h:272
// void error(class QProcess::ProcessError)
extern "C"
void C_ZN8QProcess5errorENS_12ProcessErrorE(void *this_, QProcess::ProcessError error) {
  ((QProcess*)this_)->error(error);
}
// /usr/include/qt/QtCore/qprocess.h:274
// void errorOccurred(class QProcess::ProcessError)
extern "C"
void C_ZN8QProcess13errorOccurredENS_12ProcessErrorE(void *this_, QProcess::ProcessError error) {
  ((QProcess*)this_)->errorOccurred(error);
}