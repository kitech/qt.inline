//  header block begin

// /usr/include/qt/QtQml/qqmlinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlinfo.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlInfo is pure virtual: false
// QQmlInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlInfo_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlInfo_t qt_meta_stringdata_MyQQmlInfo = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQQmlInfo"
  },
  "MyQQmlInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlInfo[] = {
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
class Q_DECL_EXPORT MyQQmlInfo : public QQmlInfo {
public:
  virtual ~MyQQmlInfo() {}
// void QQmlInfo(const QQmlInfo &)
MyQQmlInfo(const QQmlInfo & arg0) : QQmlInfo(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:75
// [-2] void QQmlInfo(const QQmlInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfoC2ERKS_(QQmlInfo* arg0) {
  return  new QQmlInfo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:76
// [-2] void ~QQmlInfo()
extern "C" Q_DECL_EXPORT
void C_ZN8QQmlInfoD2Ev(void *this_) {
  delete (QQmlInfo*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:78
// [16] QQmlInfo & operator<<(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsE5QChar(void *this_, QChar* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:79
// [16] QQmlInfo & operator<<(bool)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEb(void *this_, bool t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:80
// [16] QQmlInfo & operator<<(char)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEc(void *this_, char t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:81
// [16] QQmlInfo & operator<<(short)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEs(void *this_, short t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:82
// [16] QQmlInfo & operator<<(unsigned short)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEt(void *this_, unsigned short t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:83
// [16] QQmlInfo & operator<<(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEi(void *this_, int t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:84
// [16] QQmlInfo & operator<<(unsigned int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEj(void *this_, unsigned int t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:85
// [16] QQmlInfo & operator<<(long)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEl(void *this_, long t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:86
// [16] QQmlInfo & operator<<(unsigned long)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEm(void *this_, unsigned long t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:87
// [16] QQmlInfo & operator<<(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEx(void *this_, qint64 t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:88
// [16] QQmlInfo & operator<<(quint64)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEy(void *this_, quint64 t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:89
// [16] QQmlInfo & operator<<(float)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEf(void *this_, float t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:90
// [16] QQmlInfo & operator<<(double)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEd(void *this_, double t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:91
// [16] QQmlInfo & operator<<(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEPKc(void *this_, const char * t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:92
// [16] QQmlInfo & operator<<(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsERK7QString(void *this_, QString* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:93
// [16] QQmlInfo & operator<<(const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsERK10QStringRef(void *this_, QStringRef* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:94
// [16] QQmlInfo & operator<<(const QLatin1String &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsERK13QLatin1String(void *this_, QLatin1String* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:95
// [16] QQmlInfo & operator<<(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsERK10QByteArray(void *this_, QByteArray* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:96
// [16] QQmlInfo & operator<<(const void *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEPKv(void *this_, const void * t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:97
// [16] QQmlInfo & operator<<(QTextStreamFunction)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsEPFR11QTextStreamS1_E(void *this_, QTextStreamFunction f) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(f);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:98
// [16] QQmlInfo & operator<<(QTextStreamManipulator)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsE22QTextStreamManipulator(void *this_, QTextStreamManipulator* m) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*m);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:100
// [16] QQmlInfo & operator<<(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlInfolsERK4QUrl(void *this_, QUrl* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
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
