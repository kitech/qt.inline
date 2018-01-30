//  header block begin
// /usr/include/qt/QtCore/qstring.h
#include <qstring.h>
#include <QtCore>

// QLatin1String is pure virtual: false
// QLatin1String has virtual projected: false
//  header block end

//  main block begin

class MyQLatin1String : public QLatin1String {
public:
  virtual ~MyQLatin1String() {}
// void QLatin1String()
MyQLatin1String() : QLatin1String() {}
// void QLatin1String(const char *)
MyQLatin1String(const char * s) : QLatin1String(s) {}
// void QLatin1String(const char *, const char *)
MyQLatin1String(const char * f, const char * l) : QLatin1String(f, l) {}
// void QLatin1String(const char *, int)
MyQLatin1String(const char * s, int sz) : QLatin1String(s, sz) {}
// void QLatin1String(const class QByteArray &)
MyQLatin1String(const QByteArray & s) : QLatin1String(s) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:94
// [-2] void QLatin1String()
extern "C"
void* C_ZN13QLatin1StringC2Ev() {
  return  new QLatin1String();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:95
// [-2] void QLatin1String(const char *)
extern "C"
void* C_ZN13QLatin1StringC2EPKc(const char * s) {
  return  new QLatin1String(s);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:96
// [-2] void QLatin1String(const char *, const char *)
extern "C"
void* C_ZN13QLatin1StringC2EPKcS1_(const char * f, const char * l) {
  return  new QLatin1String(f, l);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:98
// [-2] void QLatin1String(const char *, int)
extern "C"
void* C_ZN13QLatin1StringC2EPKci(const char * s, int sz) {
  return  new QLatin1String(s, sz);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:99
// [-2] void QLatin1String(const class QByteArray &)
extern "C"
void* C_ZN13QLatin1StringC2ERK10QByteArray(const QByteArray & s) {
  return  new QLatin1String(s);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:101
// [8] const char * latin1()
extern "C"
void* C_ZNK13QLatin1String6latin1Ev(void *this_) {
  return (void*)((QLatin1String*)this_)->latin1();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:102
// [4] int size()
extern "C"
int C_ZNK13QLatin1String4sizeEv(void *this_) {
  return (int)((QLatin1String*)this_)->size();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:103
// [8] const char * data()
extern "C"
void* C_ZNK13QLatin1String4dataEv(void *this_) {
  return (void*)((QLatin1String*)this_)->data();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:105
// [1] bool isNull()
extern "C"
bool C_ZNK13QLatin1String6isNullEv(void *this_) {
  return (bool)((QLatin1String*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:106
// [1] bool isEmpty()
extern "C"
bool C_ZNK13QLatin1String7isEmptyEv(void *this_) {
  return (bool)((QLatin1String*)this_)->isEmpty();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:108
// [1] QLatin1Char at(int)
extern "C"
void C_ZNK13QLatin1String2atEi(void *this_, int i) {
  auto rv = ((QLatin1String*)this_)->at(i);
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:112
// [1] QLatin1Char front()
extern "C"
void C_ZNK13QLatin1String5frontEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->front();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:113
// [1] QLatin1Char back()
extern "C"
void C_ZNK13QLatin1String4backEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->back();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:115
// [1] bool startsWith(class QStringView, Qt::CaseSensitivity)
extern "C"
bool C_ZNK13QLatin1String10startsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->startsWith(*s, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:117
// [1] bool startsWith(class QLatin1String, Qt::CaseSensitivity)
extern "C"
bool C_ZNK13QLatin1String10startsWithES_N2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->startsWith(*s, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:119
// [1] bool startsWith(class QChar)
extern "C"
bool C_ZNK13QLatin1String10startsWithE5QChar(void *this_, QChar* c) {
  return (bool)((QLatin1String*)this_)->startsWith(*c);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:121
// [1] bool startsWith(class QChar, Qt::CaseSensitivity)
extern "C"
bool C_ZNK13QLatin1String10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->startsWith(*c, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:124
// [1] bool endsWith(class QStringView, Qt::CaseSensitivity)
extern "C"
bool C_ZNK13QLatin1String8endsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->endsWith(*s, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:126
// [1] bool endsWith(class QLatin1String, Qt::CaseSensitivity)
extern "C"
bool C_ZNK13QLatin1String8endsWithES_N2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->endsWith(*s, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:128
// [1] bool endsWith(class QChar)
extern "C"
bool C_ZNK13QLatin1String8endsWithE5QChar(void *this_, QChar* c) {
  return (bool)((QLatin1String*)this_)->endsWith(*c);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:130
// [1] bool endsWith(class QChar, Qt::CaseSensitivity)
extern "C"
bool C_ZNK13QLatin1String8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->endsWith(*c, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:141
// [8] QLatin1String::const_iterator begin()
extern "C"
void C_ZNK13QLatin1String5beginEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->begin();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:142
// [8] QLatin1String::const_iterator cbegin()
extern "C"
void C_ZNK13QLatin1String6cbeginEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->cbegin();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:143
// [8] QLatin1String::const_iterator end()
extern "C"
void C_ZNK13QLatin1String3endEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->end();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:144
// [8] QLatin1String::const_iterator cend()
extern "C"
void C_ZNK13QLatin1String4cendEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->cend();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:154
// [16] QLatin1String mid(int)
extern "C"
void* C_ZNK13QLatin1String3midEi(void *this_, int pos) {
  auto rv = ((QLatin1String*)this_)->mid(pos);
return new QLatin1String(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:156
// [16] QLatin1String mid(int, int)
extern "C"
void* C_ZNK13QLatin1String3midEii(void *this_, int pos, int n) {
  auto rv = ((QLatin1String*)this_)->mid(pos, n);
return new QLatin1String(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:158
// [16] QLatin1String left(int)
extern "C"
void* C_ZNK13QLatin1String4leftEi(void *this_, int n) {
  auto rv = ((QLatin1String*)this_)->left(n);
return new QLatin1String(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:160
// [16] QLatin1String right(int)
extern "C"
void* C_ZNK13QLatin1String5rightEi(void *this_, int n) {
  auto rv = ((QLatin1String*)this_)->right(n);
return new QLatin1String(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:162
// [16] QLatin1String chopped(int)
extern "C"
void* C_ZNK13QLatin1String7choppedEi(void *this_, int n) {
  auto rv = ((QLatin1String*)this_)->chopped(n);
return new QLatin1String(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:165
// [-2] void chop(int)
extern "C"
void C_ZN13QLatin1String4chopEi(void *this_, int n) {
  ((QLatin1String*)this_)->chop(n);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:167
// [-2] void truncate(int)
extern "C"
void C_ZN13QLatin1String8truncateEi(void *this_, int n) {
  ((QLatin1String*)this_)->truncate(n);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:170
// [16] QLatin1String trimmed()
extern "C"
void* C_ZNK13QLatin1String7trimmedEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->trimmed();
return new QLatin1String(rv);
}
//  main block end
