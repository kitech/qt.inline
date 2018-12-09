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

// QOpenGLDebugMessage is pure virtual: false
// QOpenGLDebugMessage has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLDebugMessage_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLDebugMessage_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLDebugMessage_t qt_meta_stringdata_MyQOpenGLDebugMessage = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQOpenGLDebugMessage"
  },
  "MyQOpenGLDebugMessage"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLDebugMessage[] = {
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
class Q_DECL_EXPORT MyQOpenGLDebugMessage : public QOpenGLDebugMessage {
public:
  virtual ~MyQOpenGLDebugMessage() {}
// void QOpenGLDebugMessage()
MyQOpenGLDebugMessage() : QOpenGLDebugMessage() {}
// void QOpenGLDebugMessage(const QOpenGLDebugMessage &)
MyQOpenGLDebugMessage(const QOpenGLDebugMessage & debugMessage) : QOpenGLDebugMessage(debugMessage) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:109
// [-2] void QOpenGLDebugMessage()
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLDebugMessageC2Ev() {
  return  new QOpenGLDebugMessage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:110
// [-2] void QOpenGLDebugMessage(const QOpenGLDebugMessage &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLDebugMessageC2ERKS_(QOpenGLDebugMessage* debugMessage) {
  return  new QOpenGLDebugMessage(*debugMessage);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:112
// [8] QOpenGLDebugMessage & operator=(const QOpenGLDebugMessage &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLDebugMessageaSERKS_(void *this_, QOpenGLDebugMessage* debugMessage) {
  auto& rv = ((QOpenGLDebugMessage*)this_)->operator=(*debugMessage);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:114
// [8] QOpenGLDebugMessage & operator=(QOpenGLDebugMessage &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLDebugMessageaSEOS_(void *this_, QOpenGLDebugMessage && other) {
  auto& rv = ((QOpenGLDebugMessage*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:116
// [-2] void ~QOpenGLDebugMessage()
extern "C" Q_DECL_EXPORT
void C_ZN19QOpenGLDebugMessageD2Ev(void *this_) {
  delete (QOpenGLDebugMessage*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:118
// [-2] void swap(QOpenGLDebugMessage &)
extern "C" Q_DECL_EXPORT
void C_ZN19QOpenGLDebugMessage4swapERS_(void *this_, QOpenGLDebugMessage* other) {
  ((QOpenGLDebugMessage*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:120
// [4] QOpenGLDebugMessage::Source source()
extern "C" Q_DECL_EXPORT
QOpenGLDebugMessage::Source C_ZNK19QOpenGLDebugMessage6sourceEv(void *this_) {
  return (QOpenGLDebugMessage::Source)((QOpenGLDebugMessage*)this_)->source();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:121
// [4] QOpenGLDebugMessage::Type type()
extern "C" Q_DECL_EXPORT
QOpenGLDebugMessage::Type C_ZNK19QOpenGLDebugMessage4typeEv(void *this_) {
  return (QOpenGLDebugMessage::Type)((QOpenGLDebugMessage*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:122
// [4] QOpenGLDebugMessage::Severity severity()
extern "C" Q_DECL_EXPORT
QOpenGLDebugMessage::Severity C_ZNK19QOpenGLDebugMessage8severityEv(void *this_) {
  return (QOpenGLDebugMessage::Severity)((QOpenGLDebugMessage*)this_)->severity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:123
// [4] GLuint id()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK19QOpenGLDebugMessage2idEv(void *this_) {
  return (GLuint)((QOpenGLDebugMessage*)this_)->id();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:124
// [8] QString message()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QOpenGLDebugMessage7messageEv(void *this_) {
  auto rv = ((QOpenGLDebugMessage*)this_)->message();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:126
// [8] QOpenGLDebugMessage createApplicationMessage(const QString &, GLuint, QOpenGLDebugMessage::Severity, QOpenGLDebugMessage::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLDebugMessage24createApplicationMessageERK7QStringjNS_8SeverityENS_4TypeE(QString* text, GLuint id, QOpenGLDebugMessage::Severity severity, QOpenGLDebugMessage::Type type_) {
  auto rv = QOpenGLDebugMessage::createApplicationMessage(*text, id, severity, type_);
return new QOpenGLDebugMessage(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:130
// [8] QOpenGLDebugMessage createThirdPartyMessage(const QString &, GLuint, QOpenGLDebugMessage::Severity, QOpenGLDebugMessage::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLDebugMessage23createThirdPartyMessageERK7QStringjNS_8SeverityENS_4TypeE(QString* text, GLuint id, QOpenGLDebugMessage::Severity severity, QOpenGLDebugMessage::Type type_) {
  auto rv = QOpenGLDebugMessage::createThirdPartyMessage(*text, id, severity, type_);
return new QOpenGLDebugMessage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:135
// [1] bool operator==(const QOpenGLDebugMessage &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QOpenGLDebugMessageeqERKS_(void *this_, QOpenGLDebugMessage* debugMessage) {
  return (bool)((QOpenGLDebugMessage*)this_)->operator==(*debugMessage);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:136
// [1] bool operator!=(const QOpenGLDebugMessage &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QOpenGLDebugMessageneERKS_(void *this_, QOpenGLDebugMessage* debugMessage) {
  return (bool)((QOpenGLDebugMessage*)this_)->operator!=(*debugMessage);
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
