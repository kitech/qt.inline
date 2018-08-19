//  header block begin
// since 0x050100
// /usr/include/qt/QtGui/qopengldebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengldebug.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLDebugLogger is pure virtual: false
// QOpenGLDebugLogger has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQOpenGLDebugLogger : public QOpenGLDebugLogger {
public:
  virtual ~MyQOpenGLDebugLogger() {}
// void QOpenGLDebugLogger(QObject *)
MyQOpenGLDebugLogger(QObject * parent) : QOpenGLDebugLogger(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:160
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QOpenGLDebugLogger10metaObjectEv(void *this_) {
  return (void*)((QOpenGLDebugLogger*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:160
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QOpenGLDebugLogger11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLDebugLogger*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:160
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QOpenGLDebugLogger11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLDebugLogger*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:160
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QOpenGLDebugLogger2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLDebugLogger::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:160
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QOpenGLDebugLogger6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLDebugLogger::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:170
// [-2] void QOpenGLDebugLogger(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QOpenGLDebugLoggerC2EP7QObject(QObject * parent) {
  return  new QOpenGLDebugLogger(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:171
// [-2] void ~QOpenGLDebugLogger()
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLoggerD2Ev(void *this_) {
  delete (QOpenGLDebugLogger*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:173
// [1] bool initialize()
extern "C" Q_DECL_EXPORT
bool C_ZN18QOpenGLDebugLogger10initializeEv(void *this_) {
  return (bool)((QOpenGLDebugLogger*)this_)->initialize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:175
// [1] bool isLogging()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QOpenGLDebugLogger9isLoggingEv(void *this_) {
  return (bool)((QOpenGLDebugLogger*)this_)->isLogging();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:176
// [4] QOpenGLDebugLogger::LoggingMode loggingMode()
extern "C" Q_DECL_EXPORT
QOpenGLDebugLogger::LoggingMode C_ZNK18QOpenGLDebugLogger11loggingModeEv(void *this_) {
  return (QOpenGLDebugLogger::LoggingMode)((QOpenGLDebugLogger*)this_)->loggingMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:178
// [8] qint64 maximumMessageLength()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK18QOpenGLDebugLogger20maximumMessageLengthEv(void *this_) {
  return (qint64)((QOpenGLDebugLogger*)this_)->maximumMessageLength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:180
// [-2] void pushGroup(const QString &, GLuint, QOpenGLDebugMessage::Source)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger9pushGroupERK7QStringjN19QOpenGLDebugMessage6SourceE(void *this_, QString* name, GLuint id, QOpenGLDebugMessage::Source source) {
  ((QOpenGLDebugLogger*)this_)->pushGroup(*name, id, source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:183
// [-2] void popGroup()
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger8popGroupEv(void *this_) {
  ((QOpenGLDebugLogger*)this_)->popGroup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:185
// [-2] void enableMessages(QOpenGLDebugMessage::Sources, QOpenGLDebugMessage::Types, QOpenGLDebugMessage::Severities)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger14enableMessagesE6QFlagsIN19QOpenGLDebugMessage6SourceEES0_INS1_4TypeEES0_INS1_8SeverityEE(void *this_, QFlags<QOpenGLDebugMessage::Source> sources, QFlags<QOpenGLDebugMessage::Type> types, QFlags<QOpenGLDebugMessage::Severity> severities) {
  ((QOpenGLDebugLogger*)this_)->enableMessages(sources, types, severities);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:189
// [-2] void enableMessages(const QVector<GLuint> &, QOpenGLDebugMessage::Sources, QOpenGLDebugMessage::Types)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger14enableMessagesERK7QVectorIjE6QFlagsIN19QOpenGLDebugMessage6SourceEES4_INS5_4TypeEE(void *this_, QVector<unsigned int>* ids, QFlags<QOpenGLDebugMessage::Source> sources, QFlags<QOpenGLDebugMessage::Type> types) {
  ((QOpenGLDebugLogger*)this_)->enableMessages(*ids, sources, types);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:193
// [-2] void disableMessages(QOpenGLDebugMessage::Sources, QOpenGLDebugMessage::Types, QOpenGLDebugMessage::Severities)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger15disableMessagesE6QFlagsIN19QOpenGLDebugMessage6SourceEES0_INS1_4TypeEES0_INS1_8SeverityEE(void *this_, QFlags<QOpenGLDebugMessage::Source> sources, QFlags<QOpenGLDebugMessage::Type> types, QFlags<QOpenGLDebugMessage::Severity> severities) {
  ((QOpenGLDebugLogger*)this_)->disableMessages(sources, types, severities);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:197
// [-2] void disableMessages(const QVector<GLuint> &, QOpenGLDebugMessage::Sources, QOpenGLDebugMessage::Types)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger15disableMessagesERK7QVectorIjE6QFlagsIN19QOpenGLDebugMessage6SourceEES4_INS5_4TypeEE(void *this_, QVector<unsigned int>* ids, QFlags<QOpenGLDebugMessage::Source> sources, QFlags<QOpenGLDebugMessage::Type> types) {
  ((QOpenGLDebugLogger*)this_)->disableMessages(*ids, sources, types);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:201
// [-2] QList<QOpenGLDebugMessage> loggedMessages()
extern "C" Q_DECL_EXPORT
QList<QOpenGLDebugMessage>* C_ZNK18QOpenGLDebugLogger14loggedMessagesEv(void *this_) {
  auto rv = ((QOpenGLDebugLogger*)this_)->loggedMessages();
return new QList<QOpenGLDebugMessage>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:204
// [-2] void logMessage(const QOpenGLDebugMessage &)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger10logMessageERK19QOpenGLDebugMessage(void *this_, QOpenGLDebugMessage* debugMessage) {
  ((QOpenGLDebugLogger*)this_)->logMessage(*debugMessage);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:205
// [-2] void startLogging(QOpenGLDebugLogger::LoggingMode)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger12startLoggingENS_11LoggingModeE(void *this_, QOpenGLDebugLogger::LoggingMode loggingMode) {
  ((QOpenGLDebugLogger*)this_)->startLogging(loggingMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:206
// [-2] void stopLogging()
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger11stopLoggingEv(void *this_) {
  ((QOpenGLDebugLogger*)this_)->stopLogging();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:209
// [-2] void messageLogged(const QOpenGLDebugMessage &)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLDebugLogger13messageLoggedERK19QOpenGLDebugMessage(void *this_, QOpenGLDebugMessage* debugMessage) {
  ((QOpenGLDebugLogger*)this_)->messageLogged(*debugMessage);
}

//  main block end
