//  header block begin

// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QLatin1String is pure virtual: false
// QLatin1String has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLatin1String_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLatin1String_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLatin1String_t qt_meta_stringdata_MyQLatin1String = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQLatin1String"
  },
  "MyQLatin1String"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLatin1String[] = {
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
class Q_DECL_EXPORT MyQLatin1String : public QLatin1String {
public:
  virtual ~MyQLatin1String() {}
// void QLatin1String()
MyQLatin1String() : QLatin1String() {}
// void QLatin1String(const char *)
MyQLatin1String(const char * s) : QLatin1String(s) {}
// void QLatin1String(const char *, int)
MyQLatin1String(const char * s, int sz) : QLatin1String(s, sz) {}
// void QLatin1String(const QByteArray &)
MyQLatin1String(const QByteArray & s) : QLatin1String(s) {}
};

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:91
// [-2] void QLatin1String()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2Ev() {
  return  new QLatin1String();
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:92
// [-2] void QLatin1String(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2EPKc(const char * s) {
  return  new QLatin1String(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:93
// [-2] void QLatin1String(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2EPKci(const char * s, int sz) {
  return  new QLatin1String(s, sz);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:94
// [-2] void QLatin1String(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2ERK10QByteArray(QByteArray* s) {
  return  new QLatin1String(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:96
// [8] const char * latin1()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String6latin1Ev(void *this_) {
  return (void*)((QLatin1String*)this_)->latin1();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:97
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK13QLatin1String4sizeEv(void *this_) {
  return (int)((QLatin1String*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:98
// [8] const char * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String4dataEv(void *this_) {
  return (void*)((QLatin1String*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:100
// [1] QLatin1Char at(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1String2atEi(void *this_, int i) {
  auto rv = ((QLatin1String*)this_)->at(i);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:101
// [1] QLatin1Char operator[](int)
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1StringixEi(void *this_, int i) {
  auto rv = ((QLatin1String*)this_)->operator[](i);
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:103
// [16] QLatin1String mid(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String3midEi(void *this_, int pos) {
  auto rv = ((QLatin1String*)this_)->mid(pos);
return new QLatin1String(rv);
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:105
// [16] QLatin1String mid(int, int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String3midEii(void *this_, int pos, int n) {
  auto rv = ((QLatin1String*)this_)->mid(pos, n);
return new QLatin1String(rv);
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:107
// [16] QLatin1String left(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String4leftEi(void *this_, int n) {
  auto rv = ((QLatin1String*)this_)->left(n);
return new QLatin1String(rv);
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:109
// [16] QLatin1String right(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String5rightEi(void *this_, int n) {
  auto rv = ((QLatin1String*)this_)->right(n);
return new QLatin1String(rv);
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:112
// [1] bool operator==(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringeqERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator==(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:113
// [1] bool operator!=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringneERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator!=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:114
// [1] bool operator>(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgtERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator>(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:115
// [1] bool operator<(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringltERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator<(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:116
// [1] bool operator>=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgeERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator>=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:117
// [1] bool operator<=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringleERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator<=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:120
// [1] bool operator==(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringeqEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator==(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:121
// [1] bool operator!=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringneEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator!=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:122
// [1] bool operator<(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringltEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator<(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:123
// [1] bool operator>(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgtEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator>(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:124
// [1] bool operator<=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringleEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator<=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:125
// [1] bool operator>=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgeEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator>=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:127
// [1] bool operator==(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringeqERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator==(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:128
// [1] bool operator!=(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringneERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator!=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:129
// [1] bool operator<(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringltERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator<(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:130
// [1] bool operator>(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgtERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator>(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:131
// [1] bool operator<=(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringleERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator<=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:132
// [1] bool operator>=(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgeERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator>=(*s);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QLatin1StringD2Ev(void *this_) {
  delete (QLatin1String*)(this_);
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
