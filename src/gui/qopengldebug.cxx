// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qopengldebug.h
// dst-file: /src/gui/qopengldebug.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopengldebug.h>


#include <qstring.h>
#include <qglobal.h>
#include <qlist.h>
#include <qstandarditemmodel.h>
// <= header block end

// main block begin =>
void __keep_qopengldebug_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 107, column 17>
//   // proto:  void QOpenGLDebugMessage::swap(QOpenGLDebugMessage & debugMessage);
if (true) {
  auto f = [](QOpenGLDebugMessage flythis, QOpenGLDebugMessage & arg1) {
    ((QOpenGLDebugMessage*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QOpenGLDebugMessage4swapERS_ swap(class QOpenGLDebugMessage &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLDebugMessage_Class_Size()
{
  return sizeof(QOpenGLDebugMessage);
}

extern "C"
int QOpenGLDebugLogger_Class_Size()
{
  return sizeof(QOpenGLDebugLogger);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 119, column 32>
//   // proto: static QOpenGLDebugMessage QOpenGLDebugMessage::createThirdPartyMessage(const QString & text, GLuint id, QOpenGLDebugMessage::Severity severity, QOpenGLDebugMessage::Type type);
// _ZN19QOpenGLDebugMessage23createThirdPartyMessageERK7QStringjNS_8SeverityENS_4TypeE createThirdPartyMessage(const class QString &, GLuint, enum QOpenGLDebugMessage::Severity, enum QOpenGLDebugMessage::Type)
extern "C"
QOpenGLDebugMessage*
C_ZN19QOpenGLDebugMessage23createThirdPartyMessageERK7QStringjNS_8SeverityENS_4TypeE(const QString* arg1,
GLuint arg2,
QOpenGLDebugMessage::Severity arg3,
QOpenGLDebugMessage::Type arg4) {
  auto ret =
  QOpenGLDebugMessage::createThirdPartyMessage(*((const QString*)arg1),
arg2,
arg3,
arg4);
  return new QOpenGLDebugMessage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 98, column 5>
//   // proto:  void QOpenGLDebugMessage::QOpenGLDebugMessage();
extern "C"
QOpenGLDebugMessage*
C_ZN19QOpenGLDebugMessageC2Ev() {
  auto ret = new QOpenGLDebugMessage();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 110, column 10>
//   // proto:  QOpenGLDebugMessage::Type QOpenGLDebugMessage::type();
// _ZNK19QOpenGLDebugMessage4typeEv type()
extern "C"
QOpenGLDebugMessage::Type
C_ZNK19QOpenGLDebugMessage4typeEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugMessage*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QOpenGLDebugMessage::~QOpenGLDebugMessage();
extern "C"
void C_ZN19QOpenGLDebugMessageD2Ev(void *qthis) {
  delete (QOpenGLDebugMessage*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 112, column 12>
//   // proto:  GLuint QOpenGLDebugMessage::id();
// _ZNK19QOpenGLDebugMessage2idEv id()
extern "C"
unsigned int
C_ZNK19QOpenGLDebugMessage2idEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugMessage*)qthis)->id();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 99, column 5>
//   // proto:  void QOpenGLDebugMessage::QOpenGLDebugMessage(const QOpenGLDebugMessage & debugMessage);
extern "C"
QOpenGLDebugMessage*
C_ZN19QOpenGLDebugMessageC2ERKS_(const QOpenGLDebugMessage* arg1) {
  auto ret = new QOpenGLDebugMessage(*((const QOpenGLDebugMessage*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 109, column 12>
//   // proto:  QOpenGLDebugMessage::Source QOpenGLDebugMessage::source();
// _ZNK19QOpenGLDebugMessage6sourceEv source()
extern "C"
QOpenGLDebugMessage::Source
C_ZNK19QOpenGLDebugMessage6sourceEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugMessage*)qthis)->source();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 113, column 13>
//   // proto:  QString QOpenGLDebugMessage::message();
// _ZNK19QOpenGLDebugMessage7messageEv message()
extern "C"
QString*
C_ZNK19QOpenGLDebugMessage7messageEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugMessage*)qthis)->message();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 111, column 14>
//   // proto:  QOpenGLDebugMessage::Severity QOpenGLDebugMessage::severity();
// _ZNK19QOpenGLDebugMessage8severityEv severity()
extern "C"
QOpenGLDebugMessage::Severity
C_ZNK19QOpenGLDebugMessage8severityEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugMessage*)qthis)->severity();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 107, column 17>
//   // proto:  void QOpenGLDebugMessage::swap(QOpenGLDebugMessage & debugMessage);
// _ZN19QOpenGLDebugMessage4swapERS_ swap(class QOpenGLDebugMessage &)
extern "C"
void
C_ZN19QOpenGLDebugMessage4swapERS_(void *qthis,
QOpenGLDebugMessage* arg1) {
  ((QOpenGLDebugMessage*)qthis)->swap(*((QOpenGLDebugMessage*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 115, column 32>
//   // proto: static QOpenGLDebugMessage QOpenGLDebugMessage::createApplicationMessage(const QString & text, GLuint id, QOpenGLDebugMessage::Severity severity, QOpenGLDebugMessage::Type type);
// _ZN19QOpenGLDebugMessage24createApplicationMessageERK7QStringjNS_8SeverityENS_4TypeE createApplicationMessage(const class QString &, GLuint, enum QOpenGLDebugMessage::Severity, enum QOpenGLDebugMessage::Type)
extern "C"
QOpenGLDebugMessage*
C_ZN19QOpenGLDebugMessage24createApplicationMessageERK7QStringjNS_8SeverityENS_4TypeE(const QString* arg1,
GLuint arg2,
QOpenGLDebugMessage::Severity arg3,
QOpenGLDebugMessage::Type arg4) {
  auto ret =
  QOpenGLDebugMessage::createApplicationMessage(*((const QString*)arg1),
arg2,
arg3,
arg4);
  return new QOpenGLDebugMessage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 165, column 17>
//   // proto:  QOpenGLDebugLogger::LoggingMode QOpenGLDebugLogger::loggingMode();
// _ZNK18QOpenGLDebugLogger11loggingModeEv loggingMode()
extern "C"
QOpenGLDebugLogger::LoggingMode
C_ZNK18QOpenGLDebugLogger11loggingModeEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugLogger*)qthis)->loggingMode();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QOpenGLDebugLogger::~QOpenGLDebugLogger();
extern "C"
void C_ZN18QOpenGLDebugLoggerD2Ev(void *qthis) {
  delete (QOpenGLDebugLogger*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 167, column 12>
//   // proto:  qint64 QOpenGLDebugLogger::maximumMessageLength();
// _ZNK18QOpenGLDebugLogger20maximumMessageLengthEv maximumMessageLength()
extern "C"
long long
C_ZNK18QOpenGLDebugLogger20maximumMessageLengthEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugLogger*)qthis)->maximumMessageLength();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 164, column 10>
//   // proto:  bool QOpenGLDebugLogger::isLogging();
// _ZNK18QOpenGLDebugLogger9isLoggingEv isLogging()
extern "C"
bool
C_ZNK18QOpenGLDebugLogger9isLoggingEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugLogger*)qthis)->isLogging();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 195, column 10>
//   // proto:  void QOpenGLDebugLogger::stopLogging();
// _ZN18QOpenGLDebugLogger11stopLoggingEv stopLogging()
extern "C"
void
C_ZN18QOpenGLDebugLogger11stopLoggingEv(void *qthis) {
  ((QOpenGLDebugLogger*)qthis)->stopLogging();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 193, column 10>
//   // proto:  void QOpenGLDebugLogger::logMessage(const QOpenGLDebugMessage & debugMessage);
// _ZN18QOpenGLDebugLogger10logMessageERK19QOpenGLDebugMessage logMessage(const class QOpenGLDebugMessage &)
extern "C"
void
C_ZN18QOpenGLDebugLogger10logMessageERK19QOpenGLDebugMessage(void *qthis,
const QOpenGLDebugMessage* arg1) {
  ((QOpenGLDebugLogger*)qthis)->logMessage(*((const QOpenGLDebugMessage*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 174, column 10>
//   // proto:  void QOpenGLDebugLogger::enableMessages(QOpenGLDebugMessage::Sources sources, QOpenGLDebugMessage::Types types, QOpenGLDebugMessage::Severities severities);
// _ZN18QOpenGLDebugLogger14enableMessagesE6QFlagsIN19QOpenGLDebugMessage6SourceEES0_INS1_4TypeEES0_INS1_8SeverityEE enableMessages(class QOpenGLDebugMessage::Sources, class QOpenGLDebugMessage::Types, class QOpenGLDebugMessage::Severities)
extern "C"
void
C_ZN18QOpenGLDebugLogger14enableMessagesE6QFlagsIN19QOpenGLDebugMessage6SourceEES0_INS1_4TypeEES0_INS1_8SeverityEE(void *qthis,
QOpenGLDebugMessage::Sources* arg1,
QOpenGLDebugMessage::Types* arg2,
QOpenGLDebugMessage::Severities* arg3) {
  ((QOpenGLDebugLogger*)qthis)->enableMessages(*((QOpenGLDebugMessage::Sources*)arg1),
*((QOpenGLDebugMessage::Types*)arg2),
*((QOpenGLDebugMessage::Severities*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 198, column 10>
//   // proto:  void QOpenGLDebugLogger::messageLogged(const QOpenGLDebugMessage & debugMessage);
// _ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage messageLogged(const class QOpenGLDebugMessage &)
extern "C"
void
C_ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(void *qthis,
const QOpenGLDebugMessage* arg1) {
  ((QOpenGLDebugLogger*)qthis)->messageLogged(*((const QOpenGLDebugMessage*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 159, column 14>
//   // proto:  void QOpenGLDebugLogger::QOpenGLDebugLogger(QObject * parent);
extern "C"
QOpenGLDebugLogger*
C_ZN18QOpenGLDebugLoggerC2EP7QObject(QObject * arg1) {
  auto ret = new QOpenGLDebugLogger(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 149, column 5>
//   // proto:  const QMetaObject * QOpenGLDebugLogger::metaObject();
// _ZNK18QOpenGLDebugLogger10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QOpenGLDebugLogger10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugLogger*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 194, column 10>
//   // proto:  void QOpenGLDebugLogger::startLogging(QOpenGLDebugLogger::LoggingMode loggingMode);
// _ZN18QOpenGLDebugLogger12startLoggingENS_11LoggingModeE startLogging(enum QOpenGLDebugLogger::LoggingMode)
extern "C"
void
C_ZN18QOpenGLDebugLogger12startLoggingENS_11LoggingModeE(void *qthis,
QOpenGLDebugLogger::LoggingMode arg1) {
  ((QOpenGLDebugLogger*)qthis)->startLogging(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 182, column 10>
//   // proto:  void QOpenGLDebugLogger::disableMessages(QOpenGLDebugMessage::Sources sources, QOpenGLDebugMessage::Types types, QOpenGLDebugMessage::Severities severities);
// _ZN18QOpenGLDebugLogger15disableMessagesE6QFlagsIN19QOpenGLDebugMessage6SourceEES0_INS1_4TypeEES0_INS1_8SeverityEE disableMessages(class QOpenGLDebugMessage::Sources, class QOpenGLDebugMessage::Types, class QOpenGLDebugMessage::Severities)
extern "C"
void
C_ZN18QOpenGLDebugLogger15disableMessagesE6QFlagsIN19QOpenGLDebugMessage6SourceEES0_INS1_4TypeEES0_INS1_8SeverityEE(void *qthis,
QOpenGLDebugMessage::Sources* arg1,
QOpenGLDebugMessage::Types* arg2,
QOpenGLDebugMessage::Severities* arg3) {
  ((QOpenGLDebugLogger*)qthis)->disableMessages(*((QOpenGLDebugMessage::Sources*)arg1),
*((QOpenGLDebugMessage::Types*)arg2),
*((QOpenGLDebugMessage::Severities*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 169, column 10>
//   // proto:  void QOpenGLDebugLogger::pushGroup(const QString & name, GLuint id, QOpenGLDebugMessage::Source source);
// _ZN18QOpenGLDebugLogger9pushGroupERK7QStringjN19QOpenGLDebugMessage6SourceE pushGroup(const class QString &, GLuint, class QOpenGLDebugMessage::Source)
extern "C"
void
C_ZN18QOpenGLDebugLogger9pushGroupERK7QStringjN19QOpenGLDebugMessage6SourceE(void *qthis,
const QString* arg1,
GLuint arg2,
QOpenGLDebugMessage::Source* arg3) {
  ((QOpenGLDebugLogger*)qthis)->pushGroup(*((const QString*)arg1),
arg2,
*((QOpenGLDebugMessage::Source*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 186, column 10>
//   // proto:  void QOpenGLDebugLogger::disableMessages(const QVector<GLuint> & ids, QOpenGLDebugMessage::Sources sources, QOpenGLDebugMessage::Types types);
// _ZN18QOpenGLDebugLogger15disableMessagesERK7QVectorIjE6QFlagsIN19QOpenGLDebugMessage6SourceEES4_INS5_4TypeEE disableMessages(const QVector<GLuint> &, class QOpenGLDebugMessage::Sources, class QOpenGLDebugMessage::Types)
extern "C"
void
C_ZN18QOpenGLDebugLogger15disableMessagesERK7QVectorIjE6QFlagsIN19QOpenGLDebugMessage6SourceEES4_INS5_4TypeEE(void *qthis,
const QVector<GLuint>* arg1,
QOpenGLDebugMessage::Sources* arg2,
QOpenGLDebugMessage::Types* arg3) {
  ((QOpenGLDebugLogger*)qthis)->disableMessages(*((const QVector<GLuint>*)arg1),
*((QOpenGLDebugMessage::Sources*)arg2),
*((QOpenGLDebugMessage::Types*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 190, column 32>
//   // proto:  QList<QOpenGLDebugMessage> QOpenGLDebugLogger::loggedMessages();
// _ZNK18QOpenGLDebugLogger14loggedMessagesEv loggedMessages()
extern "C"
QList<QOpenGLDebugMessage>*
C_ZNK18QOpenGLDebugLogger14loggedMessagesEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugLogger*)qthis)->loggedMessages();
  return new QList<QOpenGLDebugMessage>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 172, column 10>
//   // proto:  void QOpenGLDebugLogger::popGroup();
// _ZN18QOpenGLDebugLogger8popGroupEv popGroup()
extern "C"
void
C_ZN18QOpenGLDebugLogger8popGroupEv(void *qthis) {
  ((QOpenGLDebugLogger*)qthis)->popGroup();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 178, column 10>
//   // proto:  void QOpenGLDebugLogger::enableMessages(const QVector<GLuint> & ids, QOpenGLDebugMessage::Sources sources, QOpenGLDebugMessage::Types types);
// _ZN18QOpenGLDebugLogger14enableMessagesERK7QVectorIjE6QFlagsIN19QOpenGLDebugMessage6SourceEES4_INS5_4TypeEE enableMessages(const QVector<GLuint> &, class QOpenGLDebugMessage::Sources, class QOpenGLDebugMessage::Types)
extern "C"
void
C_ZN18QOpenGLDebugLogger14enableMessagesERK7QVectorIjE6QFlagsIN19QOpenGLDebugMessage6SourceEES4_INS5_4TypeEE(void *qthis,
const QVector<GLuint>* arg1,
QOpenGLDebugMessage::Sources* arg2,
QOpenGLDebugMessage::Types* arg3) {
  ((QOpenGLDebugLogger*)qthis)->enableMessages(*((const QVector<GLuint>*)arg1),
*((QOpenGLDebugMessage::Sources*)arg2),
*((QOpenGLDebugMessage::Types*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengldebug.h', line 162, column 10>
//   // proto:  bool QOpenGLDebugLogger::initialize();
// _ZN18QOpenGLDebugLogger10initializeEv initialize()
extern "C"
bool
C_ZN18QOpenGLDebugLogger10initializeEv(void *qthis) {
  auto ret =
  ((QOpenGLDebugLogger*)qthis)->initialize();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QOpenGLDebugLogger_SlotProxy here
class QOpenGLDebugLogger_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLDebugLogger_SlotProxy():QObject(){}

public slots:
  // messageLogged(const class QOpenGLDebugMessage &)
  void slot_proxy_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(const QOpenGLDebugMessage & arg0);
public:
  void (*slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage)(void* rsfptr, const QOpenGLDebugMessage & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qopengldebug.moc"

extern "C" {
  QOpenGLDebugLogger_SlotProxy* QOpenGLDebugLogger_SlotProxy_new()
  {
    return new QOpenGLDebugLogger_SlotProxy();
  }
};

void QOpenGLDebugLogger_SlotProxy::slot_proxy_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(const QOpenGLDebugMessage & arg0) {
  if (this->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage != NULL) {
    // do smth...
    this->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(this->rsfptr, arg0);
  }
}
extern "C"
void* QOpenGLDebugLogger_SlotProxy_connect__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLDebugLogger_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage = (decltype(that->slot_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage))ffifptr;
  QObject::connect((QOpenGLDebugLogger*)sender, SIGNAL(messageLogged(const class QOpenGLDebugMessage &)), that, SLOT(slot_proxy_func__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(const QOpenGLDebugMessage & arg0)));
  return that;
}
extern "C"
void QOpenGLDebugLogger_SlotProxy_disconnect__ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(QOpenGLDebugLogger_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

