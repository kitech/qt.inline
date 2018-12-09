//  header block begin

// since 0x050000
// /usr/include/qt/QtQml/qqmlerror.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlerror.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlError is pure virtual: false
// QQmlError has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlError_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlError_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlError_t qt_meta_stringdata_MyQQmlError = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQQmlError"
  },
  "MyQQmlError"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlError[] = {
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
class Q_DECL_EXPORT MyQQmlError : public QQmlError {
public:
  virtual ~MyQQmlError() {}
// void QQmlError()
MyQQmlError() : QQmlError() {}
// void QQmlError(const QQmlError &)
MyQQmlError(const QQmlError & arg0) : QQmlError(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:56
// [-2] void QQmlError()
extern "C" Q_DECL_EXPORT
void* C_ZN9QQmlErrorC2Ev() {
  return  new QQmlError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:57
// [-2] void QQmlError(const QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QQmlErrorC2ERKS_(QQmlError* arg0) {
  return  new QQmlError(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:58
// [8] QQmlError & operator=(const QQmlError &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QQmlErroraSERKS_(void *this_, QQmlError* arg0) {
  auto& rv = ((QQmlError*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:59
// [-2] void ~QQmlError()
extern "C" Q_DECL_EXPORT
void C_ZN9QQmlErrorD2Ev(void *this_) {
  delete (QQmlError*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:61
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QQmlError7isValidEv(void *this_) {
  return (bool)((QQmlError*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:63
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QQmlError3urlEv(void *this_) {
  auto rv = ((QQmlError*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:64
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN9QQmlError6setUrlERK4QUrl(void *this_, QUrl* arg0) {
  ((QQmlError*)this_)->setUrl(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:65
// [8] QString description()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QQmlError11descriptionEv(void *this_) {
  auto rv = ((QQmlError*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:66
// [-2] void setDescription(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QQmlError14setDescriptionERK7QString(void *this_, QString* arg0) {
  ((QQmlError*)this_)->setDescription(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:67
// [4] int line()
extern "C" Q_DECL_EXPORT
int C_ZNK9QQmlError4lineEv(void *this_) {
  return (int)((QQmlError*)this_)->line();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:68
// [-2] void setLine(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QQmlError7setLineEi(void *this_, int arg0) {
  ((QQmlError*)this_)->setLine(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:69
// [4] int column()
extern "C" Q_DECL_EXPORT
int C_ZNK9QQmlError6columnEv(void *this_) {
  return (int)((QQmlError*)this_)->column();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:70
// [-2] void setColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QQmlError9setColumnEi(void *this_, int arg0) {
  ((QQmlError*)this_)->setColumn(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:71
// [8] QObject * object()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QQmlError6objectEv(void *this_) {
  return (void*)((QQmlError*)this_)->object();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:72
// [-2] void setObject(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN9QQmlError9setObjectEP7QObject(void *this_, QObject * arg0) {
  ((QQmlError*)this_)->setObject(arg0);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtQml/qqmlerror.h:73
// [4] QtMsgType messageType()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
QtMsgType C_ZNK9QQmlError11messageTypeEv(void *this_) {
  return (QtMsgType)((QQmlError*)this_)->messageType();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtQml/qqmlerror.h:74
// [-2] void setMessageType(QtMsgType)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN9QQmlError14setMessageTypeE9QtMsgType(void *this_, QtMsgType messageType) {
  ((QQmlError*)this_)->setMessageType(messageType);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:76
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QQmlError8toStringEv(void *this_) {
  auto rv = ((QQmlError*)this_)->toString();
return new QString(rv);
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
