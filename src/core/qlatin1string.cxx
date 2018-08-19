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

class Q_DECL_EXPORT MyQLatin1String : public QLatin1String {
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
// void QLatin1String(const QByteArray &)
MyQLatin1String(const QByteArray & s) : QLatin1String(s) {}
};

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:94
// [-2] void QLatin1String()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2Ev() {
  return  new QLatin1String();
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:95
// [-2] void QLatin1String(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2EPKc(const char * s) {
  return  new QLatin1String(s);
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:96
// [-2] void QLatin1String(const char *, const char *)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2EPKcS1_(const char * f, const char * l) {
  return  new QLatin1String(f, l);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:98
// [-2] void QLatin1String(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2EPKci(const char * s, int sz) {
  return  new QLatin1String(s, sz);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:99
// [-2] void QLatin1String(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QLatin1StringC2ERK10QByteArray(QByteArray* s) {
  return  new QLatin1String(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:101
// [8] const char * latin1()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String6latin1Ev(void *this_) {
  return (void*)((QLatin1String*)this_)->latin1();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:102
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK13QLatin1String4sizeEv(void *this_) {
  return (int)((QLatin1String*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:103
// [8] const char * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String4dataEv(void *this_) {
  return (void*)((QLatin1String*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:105
// [1] bool isNull()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String6isNullEv(void *this_) {
  return (bool)((QLatin1String*)this_)->isNull();
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:106
// [1] bool isEmpty()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String7isEmptyEv(void *this_) {
  return (bool)((QLatin1String*)this_)->isEmpty();
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:108
// [1] QLatin1Char at(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1String2atEi(void *this_, int i) {
  auto rv = ((QLatin1String*)this_)->at(i);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:110
// [1] QLatin1Char operator[](int)
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1StringixEi(void *this_, int i) {
  auto rv = ((QLatin1String*)this_)->operator[](i);
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:112
// [1] QLatin1Char front()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1String5frontEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->front();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:113
// [1] QLatin1Char back()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1String4backEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->back();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:115
// [1] bool startsWith(QStringView, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String10startsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:117
// [1] bool startsWith(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String10startsWithES_N2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:119
// [1] bool startsWith(QChar)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String10startsWithE5QChar(void *this_, QChar* c) {
  return (bool)((QLatin1String*)this_)->startsWith(*c);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:121
// [1] bool startsWith(QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->startsWith(*c, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:124
// [1] bool endsWith(QStringView, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String8endsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:126
// [1] bool endsWith(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String8endsWithES_N2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:128
// [1] bool endsWith(QChar)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String8endsWithE5QChar(void *this_, QChar* c) {
  return (bool)((QLatin1String*)this_)->endsWith(*c);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:130
// [1] bool endsWith(QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1String8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QLatin1String*)this_)->endsWith(*c, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:141
// [8] QLatin1String::const_iterator begin()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1String5beginEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->begin();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:142
// [8] QLatin1String::const_iterator cbegin()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1String6cbeginEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->cbegin();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:143
// [8] QLatin1String::const_iterator end()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1String3endEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->end();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:144
// [8] QLatin1String::const_iterator cend()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZNK13QLatin1String4cendEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->cend();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:149
// [8] QLatin1String::const_reverse_iterator rbegin()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
QLatin1String::const_reverse_iterator* C_ZNK13QLatin1String6rbeginEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->rbegin();
return new QLatin1String::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:150
// [8] QLatin1String::const_reverse_iterator crbegin()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
QLatin1String::const_reverse_iterator* C_ZNK13QLatin1String7crbeginEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->crbegin();
return new QLatin1String::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:151
// [8] QLatin1String::const_reverse_iterator rend()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
QLatin1String::const_reverse_iterator* C_ZNK13QLatin1String4rendEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->rend();
return new QLatin1String::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:152
// [8] QLatin1String::const_reverse_iterator crend()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
QLatin1String::const_reverse_iterator* C_ZNK13QLatin1String5crendEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->crend();
return new QLatin1String::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:154
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
// /usr/include/qt/QtCore/qstring.h:156
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
// /usr/include/qt/QtCore/qstring.h:158
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
// /usr/include/qt/QtCore/qstring.h:160
// [16] QLatin1String right(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String5rightEi(void *this_, int n) {
  auto rv = ((QLatin1String*)this_)->right(n);
return new QLatin1String(rv);
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:162
// [16] QLatin1String chopped(int)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String7choppedEi(void *this_, int n) {
  auto rv = ((QLatin1String*)this_)->chopped(n);
return new QLatin1String(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:165
// [-2] void chop(int)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN13QLatin1String4chopEi(void *this_, int n) {
  ((QLatin1String*)this_)->chop(n);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:167
// [-2] void truncate(int)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN13QLatin1String8truncateEi(void *this_, int n) {
  ((QLatin1String*)this_)->truncate(n);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:170
// [16] QLatin1String trimmed()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK13QLatin1String7trimmedEv(void *this_) {
  auto rv = ((QLatin1String*)this_)->trimmed();
return new QLatin1String(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:172
// [1] bool operator==(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringeqERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator==(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:173
// [1] bool operator!=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringneERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator!=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:174
// [1] bool operator>(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgtERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator>(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:175
// [1] bool operator<(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringltERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator<(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:176
// [1] bool operator>=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgeERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator>=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:177
// [1] bool operator<=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringleERK7QString(void *this_, QString* s) {
  return (bool)((QLatin1String*)this_)->operator<=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:180
// [1] bool operator==(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringeqEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator==(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:181
// [1] bool operator!=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringneEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator!=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:182
// [1] bool operator<(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringltEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator<(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:183
// [1] bool operator>(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgtEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator>(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:184
// [1] bool operator<=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringleEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator<=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:185
// [1] bool operator>=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgeEPKc(void *this_, const char * s) {
  return (bool)((QLatin1String*)this_)->operator>=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:187
// [1] bool operator==(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringeqERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator==(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:188
// [1] bool operator!=(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringneERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator!=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:189
// [1] bool operator<(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringltERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator<(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:190
// [1] bool operator>(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringgtERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator>(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:191
// [1] bool operator<=(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QLatin1StringleERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QLatin1String*)this_)->operator<=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:192
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
