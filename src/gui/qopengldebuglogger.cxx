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

struct qt_meta_stringdata_MyQOpenGLDebugLogger_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLDebugLogger_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLDebugLogger_t qt_meta_stringdata_MyQOpenGLDebugLogger = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQOpenGLDebugLogger"
  },
  "MyQOpenGLDebugLogger"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLDebugLogger[] = {
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
class Q_DECL_EXPORT MyQOpenGLDebugLogger : public QOpenGLDebugLogger {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QOpenGLDebugLogger::staticMetaObject,
  qt_meta_stringdata_MyQOpenGLDebugLogger.data,
  qt_meta_data_MyQOpenGLDebugLogger,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQOpenGLDebugLogger.stringdata0))
      return static_cast<void*>(this);
  return QOpenGLDebugLogger::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QOpenGLDebugLogger::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQOpenGLDebugLogger() {}
// void QOpenGLDebugLogger(QObject *)
MyQOpenGLDebugLogger(QObject * parent) : QOpenGLDebugLogger(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QOpenGLDebugLogger_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQOpenGLDebugLogger* qo = (MyQOpenGLDebugLogger*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

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
  return  new MyQOpenGLDebugLogger(parent);
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
