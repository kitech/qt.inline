//  header block begin

// /usr/include/qt/QtQml/qqmlscriptstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlscriptstring.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlScriptString is pure virtual: false
// QQmlScriptString has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlScriptString_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlScriptString_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlScriptString_t qt_meta_stringdata_MyQQmlScriptString = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQQmlScriptString"
  },
  "MyQQmlScriptString"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlScriptString[] = {
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
class Q_DECL_EXPORT MyQQmlScriptString : public QQmlScriptString {
public:
  virtual ~MyQQmlScriptString() {}
// void QQmlScriptString()
MyQQmlScriptString() : QQmlScriptString() {}
// void QQmlScriptString(const QQmlScriptString &)
MyQQmlScriptString(const QQmlScriptString & arg0) : QQmlScriptString(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:61
// [-2] void QQmlScriptString()
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlScriptStringC2Ev() {
  return  new QQmlScriptString();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:62
// [-2] void QQmlScriptString(const QQmlScriptString &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlScriptStringC2ERKS_(QQmlScriptString* arg0) {
  return  new QQmlScriptString(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:63
// [-2] void ~QQmlScriptString()
extern "C" Q_DECL_EXPORT
void C_ZN16QQmlScriptStringD2Ev(void *this_) {
  delete (QQmlScriptString*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:65
// [8] QQmlScriptString & operator=(const QQmlScriptString &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlScriptStringaSERKS_(void *this_, QQmlScriptString* arg0) {
  auto& rv = ((QQmlScriptString*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:67
// [1] bool operator==(const QQmlScriptString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QQmlScriptStringeqERKS_(void *this_, QQmlScriptString* arg0) {
  return (bool)((QQmlScriptString*)this_)->operator==(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:68
// [1] bool operator!=(const QQmlScriptString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QQmlScriptStringneERKS_(void *this_, QQmlScriptString* arg0) {
  return (bool)((QQmlScriptString*)this_)->operator!=(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:70
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QQmlScriptString7isEmptyEv(void *this_) {
  return (bool)((QQmlScriptString*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:72
// [1] bool isUndefinedLiteral()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QQmlScriptString18isUndefinedLiteralEv(void *this_) {
  return (bool)((QQmlScriptString*)this_)->isUndefinedLiteral();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:73
// [1] bool isNullLiteral()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QQmlScriptString13isNullLiteralEv(void *this_) {
  return (bool)((QQmlScriptString*)this_)->isNullLiteral();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:74
// [8] QString stringLiteral()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QQmlScriptString13stringLiteralEv(void *this_) {
  auto rv = ((QQmlScriptString*)this_)->stringLiteral();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:75
// [8] qreal numberLiteral(bool *)
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QQmlScriptString13numberLiteralEPb(void *this_, bool * ok) {
  return (qreal)((QQmlScriptString*)this_)->numberLiteral(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:76
// [1] bool booleanLiteral(bool *)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QQmlScriptString14booleanLiteralEPb(void *this_, bool * ok) {
  return (bool)((QQmlScriptString*)this_)->booleanLiteral(ok);
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
