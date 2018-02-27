//  header block begin
// /usr/include/qt/QtQml/qqmlinfo.h
#ifndef protected
#define protected public
#endif
#include <qqmlinfo.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlInfo is pure virtual: false
// QQmlInfo has virtual projected: false
//  header block end

//  main block begin

class MyQQmlInfo : public QQmlInfo {
public:
  virtual ~MyQQmlInfo() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:76
// [-2] void ~QQmlInfo()
extern "C"
void C_ZN8QQmlInfoD2Ev(void *this_) {
  delete (QQmlInfo*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:78
// [16] QQmlInfo & operator<<(class QChar)
extern "C"
void* C_ZN8QQmlInfolsE5QChar(void *this_, QChar* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:79
// [16] QQmlInfo & operator<<(_Bool)
extern "C"
void* C_ZN8QQmlInfolsEb(void *this_, bool t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:80
// [16] QQmlInfo & operator<<(char)
extern "C"
void* C_ZN8QQmlInfolsEc(void *this_, char t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:81
// [16] QQmlInfo & operator<<(short)
extern "C"
void* C_ZN8QQmlInfolsEs(void *this_, short t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:82
// [16] QQmlInfo & operator<<(unsigned short)
extern "C"
void* C_ZN8QQmlInfolsEt(void *this_, unsigned short t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:83
// [16] QQmlInfo & operator<<(int)
extern "C"
void* C_ZN8QQmlInfolsEi(void *this_, int t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:84
// [16] QQmlInfo & operator<<(unsigned int)
extern "C"
void* C_ZN8QQmlInfolsEj(void *this_, unsigned int t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:85
// [16] QQmlInfo & operator<<(long)
extern "C"
void* C_ZN8QQmlInfolsEl(void *this_, long t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:86
// [16] QQmlInfo & operator<<(unsigned long)
extern "C"
void* C_ZN8QQmlInfolsEm(void *this_, unsigned long t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:87
// [16] QQmlInfo & operator<<(qint64)
extern "C"
void* C_ZN8QQmlInfolsEx(void *this_, qint64 t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:88
// [16] QQmlInfo & operator<<(quint64)
extern "C"
void* C_ZN8QQmlInfolsEy(void *this_, quint64 t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:89
// [16] QQmlInfo & operator<<(float)
extern "C"
void* C_ZN8QQmlInfolsEf(void *this_, float t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:90
// [16] QQmlInfo & operator<<(double)
extern "C"
void* C_ZN8QQmlInfolsEd(void *this_, double t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:91
// [16] QQmlInfo & operator<<(const char *)
extern "C"
void* C_ZN8QQmlInfolsEPKc(void *this_, const char * t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:92
// [16] QQmlInfo & operator<<(const class QString &)
extern "C"
void* C_ZN8QQmlInfolsERK7QString(void *this_, QString* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:93
// [16] QQmlInfo & operator<<(const class QStringRef &)
extern "C"
void* C_ZN8QQmlInfolsERK10QStringRef(void *this_, QStringRef* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:94
// [16] QQmlInfo & operator<<(const class QLatin1String &)
extern "C"
void* C_ZN8QQmlInfolsERK13QLatin1String(void *this_, QLatin1String* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:95
// [16] QQmlInfo & operator<<(const class QByteArray &)
extern "C"
void* C_ZN8QQmlInfolsERK10QByteArray(void *this_, QByteArray* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:96
// [16] QQmlInfo & operator<<(const void *)
extern "C"
void* C_ZN8QQmlInfolsEPKv(void *this_, const void * t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(t);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:98
// [16] QQmlInfo & operator<<(class QTextStreamManipulator)
extern "C"
void* C_ZN8QQmlInfolsE22QTextStreamManipulator(void *this_, QTextStreamManipulator* m) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*m);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlinfo.h:100
// [16] QQmlInfo & operator<<(const class QUrl &)
extern "C"
void* C_ZN8QQmlInfolsERK4QUrl(void *this_, QUrl* t) {
  auto& rv = ((QQmlInfo*)this_)->operator<<(*t);
return &rv;
}

//  main block end
