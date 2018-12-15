//  header block begin

// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QString is pure virtual: false
// QString has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQString_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQString_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQString_t qt_meta_stringdata_MyQString = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQString"
  },
  "MyQString"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQString[] = {
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
class Q_DECL_EXPORT MyQString : public QString {
public:
  virtual ~MyQString() {}
// void QString()
MyQString() : QString() {}
// void QString(const QChar *, int)
MyQString(const QChar * unicode, int size) : QString(unicode, size) {}
// void QString(QChar)
MyQString(QChar c) : QString(c) {}
// void QString(int, QChar)
MyQString(int size, QChar c) : QString(size, c) {}
// void QString(QLatin1String)
MyQString(QLatin1String latin1) : QString(latin1) {}
// void QString(const QString &)
MyQString(const QString & arg0) : QString(arg0) {}
// void QString(QString &&)
MyQString(QString && other) : QString(other) {}
// void QString(const char *)
MyQString(const char * ch) : QString(ch) {}
// void QString(const QByteArray &)
MyQString(const QByteArray & a) : QString(a) {}
// void QString(const QString::Null &)
MyQString(const QString::Null & arg0) : QString(arg0) {}
// void QString(int, Qt::Initialization)
MyQString(int size, Qt::Initialization arg1) : QString(size, arg1) {}
// void QString(QStringDataPtr)
MyQString(QStringDataPtr dd) : QString(dd) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:217
// [-2] void QString()
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2Ev() {
  return  new QString();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:218
// [-2] void QString(const QChar *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2EPK5QChari(const QChar * unicode, int size) {
  return  new QString(unicode, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:219
// [-2] void QString(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2E5QChar(QChar* c) {
  return  new QString(*c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:220
// [-2] void QString(int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2Ei5QChar(int size, QChar* c) {
  return  new QString(size, *c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:221
// [-2] void QString(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2E13QLatin1String(QLatin1String* latin1) {
  return  new QString(*latin1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:222
// [-2] void QString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2ERKS_(QString* arg0) {
  return  new QString(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:223
// [-2] void ~QString()
extern "C" Q_DECL_EXPORT
void C_ZN7QStringD2Ev(void *this_) {
  delete (QString*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:224
// [8] QString & operator=(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringaSE5QChar(void *this_, QChar* c) {
  auto& rv = ((QString*)this_)->operator=(*c);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:225
// [8] QString & operator=(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringaSERKS_(void *this_, QString* arg0) {
  auto& rv = ((QString*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:226
// [8] QString & operator=(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringaSE13QLatin1String(void *this_, QLatin1String* latin1) {
  auto& rv = ((QString*)this_)->operator=(*latin1);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qstring.h:228
// [-2] void QString(QString &&)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2EOS_(QString && other) {
  return  new QString(other);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:229
// [8] QString & operator=(QString &&)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringaSEOS_(void *this_, QString && other) {
  auto& rv = ((QString*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:232
// [-2] void swap(QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN7QString4swapERS_(void *this_, QString* other) {
  ((QString*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:233
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK7QString4sizeEv(void *this_) {
  return (int)((QString*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:234
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK7QString5countEv(void *this_) {
  return (int)((QString*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:235
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK7QString6lengthEv(void *this_) {
  return (int)((QString*)this_)->length();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:236
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString7isEmptyEv(void *this_) {
  return (bool)((QString*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:237
// [-2] void resize(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QString6resizeEi(void *this_, int size) {
  ((QString*)this_)->resize(size);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qstring.h:238
// [-2] void resize(int, QChar)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN7QString6resizeEi5QChar(void *this_, int size, QChar* fillChar) {
  ((QString*)this_)->resize(size, *fillChar);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:240
// [8] QString & fill(QChar, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString4fillE5QChari(void *this_, QChar* c, int size) {
  auto& rv = ((QString*)this_)->fill(*c, size);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:241
// [-2] void truncate(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QString8truncateEi(void *this_, int pos) {
  ((QString*)this_)->truncate(pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:242
// [-2] void chop(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QString4chopEi(void *this_, int n) {
  ((QString*)this_)->chop(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:244
// [4] int capacity()
extern "C" Q_DECL_EXPORT
int C_ZNK7QString8capacityEv(void *this_) {
  return (int)((QString*)this_)->capacity();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:245
// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QString7reserveEi(void *this_, int size) {
  ((QString*)this_)->reserve(size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:246
// [-2] void squeeze()
extern "C" Q_DECL_EXPORT
void C_ZN7QString7squeezeEv(void *this_) {
  ((QString*)this_)->squeeze();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:248
// [8] const QChar * unicode()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString7unicodeEv(void *this_) {
  return (void*)((QString*)this_)->unicode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:249
// [8] QChar * data()
extern "C" Q_DECL_EXPORT
void* C_ZN7QString4dataEv(void *this_) {
  return (void*)((QString*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:250
// [8] const QChar * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString4dataEv(void *this_) {
  return (void*)((QString*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:251
// [8] const QChar * constData()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString9constDataEv(void *this_) {
  return (void*)((QString*)this_)->constData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:253
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN7QString6detachEv(void *this_) {
  ((QString*)this_)->detach();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:254
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString10isDetachedEv(void *this_) {
  return (bool)((QString*)this_)->isDetached();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:255
// [1] bool isSharedWith(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString12isSharedWithERKS_(void *this_, QString* other) {
  return (bool)((QString*)this_)->isSharedWith(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:256
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN7QString5clearEv(void *this_) {
  ((QString*)this_)->clear();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:258
// [2] const QChar at(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString2atEi(void *this_, int i) {
  auto rv = ((QString*)this_)->at(i);
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:259
// [2] const QChar operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QStringixEi(void *this_, int i) {
  auto rv = ((QString*)this_)->operator[](i);
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:260
// [16] QCharRef operator[](int)
extern "C" Q_DECL_EXPORT
void C_ZN7QStringixEi(void *this_, int i) {
  auto rv = ((QString*)this_)->operator[](i);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:261
// [2] const QChar operator[](uint)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QStringixEj(void *this_, uint i) {
  auto rv = ((QString*)this_)->operator[](i);
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:262
// [16] QCharRef operator[](uint)
extern "C" Q_DECL_EXPORT
void C_ZN7QStringixEj(void *this_, uint i) {
  auto rv = ((QString*)this_)->operator[](i);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:264
// [8] QString arg(qlonglong, int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argExii5QChar(void *this_, qlonglong a, int fieldwidth, int base, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldwidth, base, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:266
// [8] QString arg(qulonglong, int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argEyii5QChar(void *this_, qulonglong a, int fieldwidth, int base, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldwidth, base, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:268
// [8] QString arg(long, int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argElii5QChar(void *this_, long a, int fieldwidth, int base, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldwidth, base, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:270
// [8] QString arg(ulong, int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argEmii5QChar(void *this_, ulong a, int fieldwidth, int base, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldwidth, base, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:272
// [8] QString arg(int, int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argEiii5QChar(void *this_, int a, int fieldWidth, int base, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldWidth, base, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:274
// [8] QString arg(uint, int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argEjii5QChar(void *this_, uint a, int fieldWidth, int base, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldWidth, base, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:276
// [8] QString arg(short, int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argEsii5QChar(void *this_, short a, int fieldWidth, int base, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldWidth, base, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:278
// [8] QString arg(ushort, int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argEtii5QChar(void *this_, ushort a, int fieldWidth, int base, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldWidth, base, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:280
// [8] QString arg(double, int, char, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argEdici5QChar(void *this_, double a, int fieldWidth, char fmt_, int prec, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldWidth, fmt_, prec, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:282
// [8] QString arg(char, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argEci5QChar(void *this_, char a, int fieldWidth, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(a, fieldWidth, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:284
// [8] QString arg(QChar, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argE5QChariS0_(void *this_, QChar* a, int fieldWidth, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(*a, fieldWidth, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:286
// [8] QString arg(const QString &, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_i5QChar(void *this_, QString* a, int fieldWidth, QChar* fillChar) {
  auto rv = ((QString*)this_)->arg(*a, fieldWidth, *fillChar);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:288
// [8] QString arg(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_S1_(void *this_, QString* a1, QString* a2) {
  auto rv = ((QString*)this_)->arg(*a1, *a2);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:289
// [8] QString arg(const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_S1_S1_(void *this_, QString* a1, QString* a2, QString* a3) {
  auto rv = ((QString*)this_)->arg(*a1, *a2, *a3);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:290
// [8] QString arg(const QString &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_S1_S1_S1_(void *this_, QString* a1, QString* a2, QString* a3, QString* a4) {
  auto rv = ((QString*)this_)->arg(*a1, *a2, *a3, *a4);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:292
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_S1_S1_S1_S1_(void *this_, QString* a1, QString* a2, QString* a3, QString* a4, QString* a5) {
  auto rv = ((QString*)this_)->arg(*a1, *a2, *a3, *a4, *a5);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:294
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_S1_S1_S1_S1_S1_(void *this_, QString* a1, QString* a2, QString* a3, QString* a4, QString* a5, QString* a6) {
  auto rv = ((QString*)this_)->arg(*a1, *a2, *a3, *a4, *a5, *a6);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:296
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_(void *this_, QString* a1, QString* a2, QString* a3, QString* a4, QString* a5, QString* a6, QString* a7) {
  auto rv = ((QString*)this_)->arg(*a1, *a2, *a3, *a4, *a5, *a6, *a7);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:299
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_S1_(void *this_, QString* a1, QString* a2, QString* a3, QString* a4, QString* a5, QString* a6, QString* a7, QString* a8) {
  auto rv = ((QString*)this_)->arg(*a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:302
// [8] QString arg(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_S1_S1_(void *this_, QString* a1, QString* a2, QString* a3, QString* a4, QString* a5, QString* a6, QString* a7, QString* a8, QString* a9) {
  auto rv = ((QString*)this_)->arg(*a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:306
// [8] QString & vsprintf(const char *, __va_list_tag *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString8vsprintfEPKcP13__va_list_tag(void *this_, const char * format, va_list ap) {
  auto& rv = ((QString*)this_)->vsprintf(format, ap);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:307
// [8] QString & sprintf(const char *, ...)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7sprintfEPKcz(void *this_, const char * format) {
  auto& rv = ((QString*)this_)->sprintf(format);
return &rv;
}

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:308
// [8] QString vasprintf(const char *, __va_list_tag *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString9vasprintfEPKcP13__va_list_tag(const char * format, va_list ap) {
  auto rv = QString::vasprintf(format, ap);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:309
// [8] QString asprintf(const char *, ...)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString8asprintfEPKcz(const char * format) {
  auto rv = QString::asprintf(format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:311
// [4] int indexOf(QChar, int, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7indexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar* c, int from, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->indexOf(*c, from, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:312
// [4] int indexOf(const QString &, int, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7indexOfERKS_iN2Qt15CaseSensitivityE(void *this_, QString* s, int from, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->indexOf(*s, from, cs);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:313
// [4] int indexOf(QLatin1String, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7indexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, int from, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->indexOf(*s, from, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:314
// [4] int indexOf(const QStringRef &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7indexOfERK10QStringRefiN2Qt15CaseSensitivityE(void *this_, QStringRef* s, int from, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->indexOf(*s, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:315
// [4] int lastIndexOf(QChar, int, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString11lastIndexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar* c, int from, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->lastIndexOf(*c, from, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:316
// [4] int lastIndexOf(const QString &, int, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString11lastIndexOfERKS_iN2Qt15CaseSensitivityE(void *this_, QString* s, int from, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->lastIndexOf(*s, from, cs);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:317
// [4] int lastIndexOf(QLatin1String, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK7QString11lastIndexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, int from, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->lastIndexOf(*s, from, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:318
// [4] int lastIndexOf(const QStringRef &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK7QString11lastIndexOfERK10QStringRefiN2Qt15CaseSensitivityE(void *this_, QStringRef* s, int from, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->lastIndexOf(*s, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:320
// [1] bool contains(QChar, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8containsE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->contains(*c, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:321
// [1] bool contains(const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8containsERKS_N2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->contains(*s, cs);
}

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qstring.h:322
// [1] bool contains(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->contains(*s, cs);
}
#endif // QT_VERSION >= 0x050300

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:323
// [1] bool contains(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8containsERK10QStringRefN2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->contains(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:324
// [4] int count(QChar, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString5countE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->count(*c, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:325
// [4] int count(const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString5countERKS_N2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->count(*s, cs);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:326
// [4] int count(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK7QString5countERK10QStringRefN2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->count(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:329
// [4] int indexOf(const QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7indexOfERK7QRegExpi(void *this_, QRegExp* arg0, int from) {
  return (int)((QString*)this_)->indexOf(*arg0, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:330
// [4] int lastIndexOf(const QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString11lastIndexOfERK7QRegExpi(void *this_, QRegExp* arg0, int from) {
  return (int)((QString*)this_)->lastIndexOf(*arg0, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:331
// [1] bool contains(const QRegExp &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8containsERK7QRegExp(void *this_, QRegExp* rx) {
  return (bool)((QString*)this_)->contains(*rx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:332
// [4] int count(const QRegExp &)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString5countERK7QRegExp(void *this_, QRegExp* arg0) {
  return (int)((QString*)this_)->count(*arg0);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:334
// [4] int indexOf(QRegExp &, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7indexOfER7QRegExpi(void *this_, QRegExp* arg0, int from) {
  return (int)((QString*)this_)->indexOf(*arg0, from);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:335
// [4] int lastIndexOf(QRegExp &, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK7QString11lastIndexOfER7QRegExpi(void *this_, QRegExp* arg0, int from) {
  return (int)((QString*)this_)->lastIndexOf(*arg0, from);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:336
// [1] bool contains(QRegExp &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8containsER7QRegExp(void *this_, QRegExp* rx) {
  return (bool)((QString*)this_)->contains(*rx);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:340
// [4] int indexOf(const QRegularExpression &, int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7indexOfERK18QRegularExpressioni(void *this_, QRegularExpression* re, int from) {
  return (int)((QString*)this_)->indexOf(*re, from);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:341
// [4] int indexOf(const QRegularExpression &, int, QRegularExpressionMatch *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7indexOfERK18QRegularExpressioniP23QRegularExpressionMatch(void *this_, QRegularExpression* re, int from, QRegularExpressionMatch * rmatch) {
  return (int)((QString*)this_)->indexOf(*re, from, rmatch);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:342
// [4] int lastIndexOf(const QRegularExpression &, int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZNK7QString11lastIndexOfERK18QRegularExpressioni(void *this_, QRegularExpression* re, int from) {
  return (int)((QString*)this_)->lastIndexOf(*re, from);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:343
// [4] int lastIndexOf(const QRegularExpression &, int, QRegularExpressionMatch *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
int C_ZNK7QString11lastIndexOfERK18QRegularExpressioniP23QRegularExpressionMatch(void *this_, QRegularExpression* re, int from, QRegularExpressionMatch * rmatch) {
  return (int)((QString*)this_)->lastIndexOf(*re, from, rmatch);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:344
// [1] bool contains(const QRegularExpression &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8containsERK18QRegularExpression(void *this_, QRegularExpression* re) {
  return (bool)((QString*)this_)->contains(*re);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:345
// [1] bool contains(const QRegularExpression &, QRegularExpressionMatch *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8containsERK18QRegularExpressionP23QRegularExpressionMatch(void *this_, QRegularExpression* re, QRegularExpressionMatch * match_) {
  return (bool)((QString*)this_)->contains(*re, match_);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:346
// [4] int count(const QRegularExpression &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZNK7QString5countERK18QRegularExpression(void *this_, QRegularExpression* re) {
  return (int)((QString*)this_)->count(*re);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:358
// [8] QString section(QChar, int, int, QString::SectionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString7sectionE5QCharii6QFlagsINS_11SectionFlagEE(void *this_, QChar* sep, int start, int end_, QFlags<QString::SectionFlag> flags) {
  auto rv = ((QString*)this_)->section(*sep, start, end_, flags);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:359
// [8] QString section(const QString &, int, int, QString::SectionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString7sectionERKS_ii6QFlagsINS_11SectionFlagEE(void *this_, QString* in_sep, int start, int end_, QFlags<QString::SectionFlag> flags) {
  auto rv = ((QString*)this_)->section(*in_sep, start, end_, flags);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:361
// [8] QString section(const QRegExp &, int, int, QString::SectionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString7sectionERK7QRegExpii6QFlagsINS_11SectionFlagEE(void *this_, QRegExp* reg, int start, int end_, QFlags<QString::SectionFlag> flags) {
  auto rv = ((QString*)this_)->section(*reg, start, end_, flags);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:364
// [8] QString section(const QRegularExpression &, int, int, QString::SectionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString7sectionERK18QRegularExpressionii6QFlagsINS_11SectionFlagEE(void *this_, QRegularExpression* re, int start, int end_, QFlags<QString::SectionFlag> flags) {
  auto rv = ((QString*)this_)->section(*re, start, end_, flags);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:366
// [8] QString left(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString4leftEi(void *this_, int n) {
  auto rv = ((QString*)this_)->left(n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:367
// [8] QString right(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString5rightEi(void *this_, int n) {
  auto rv = ((QString*)this_)->right(n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:368
// [8] QString mid(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString3midEii(void *this_, int position, int n) {
  auto rv = ((QString*)this_)->mid(position, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qstring.h:369
// [16] QStringRef leftRef(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString7leftRefEi(void *this_, int n) {
  auto rv = ((QString*)this_)->leftRef(n);
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qstring.h:370
// [16] QStringRef rightRef(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString8rightRefEi(void *this_, int n) {
  auto rv = ((QString*)this_)->rightRef(n);
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qstring.h:371
// [16] QStringRef midRef(int, int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString6midRefEii(void *this_, int position, int n) {
  auto rv = ((QString*)this_)->midRef(position, n);
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:373
// [1] bool startsWith(const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString10startsWithERKS_N2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->startsWith(*s, cs);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:374
// [1] bool startsWith(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString10startsWithERK10QStringRefN2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:375
// [1] bool startsWith(QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString10startsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->startsWith(*s, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:376
// [1] bool startsWith(QChar, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->startsWith(*c, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:377
// [1] bool endsWith(const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8endsWithERKS_N2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->endsWith(*s, cs);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:378
// [1] bool endsWith(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8endsWithERK10QStringRefN2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:379
// [1] bool endsWith(QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8endsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->endsWith(*s, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:380
// [1] bool endsWith(QChar, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QString*)this_)->endsWith(*c, cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:382
// [8] QString leftJustified(int, QChar, bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString13leftJustifiedEi5QCharb(void *this_, int width, QChar* fill, bool trunc) {
  auto rv = ((QString*)this_)->leftJustified(width, *fill, trunc);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:383
// [8] QString rightJustified(int, QChar, bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString14rightJustifiedEi5QCharb(void *this_, int width, QChar* fill, bool trunc) {
  auto rv = ((QString*)this_)->rightJustified(width, *fill, trunc);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:393
// [8] QString toLower()
extern "C" Q_DECL_EXPORT
void* C_ZNKR7QString7toLowerEv(void *this_) {
  auto rv = ((QString*)this_)->toLower();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:395
// [8] QString toLower()
extern "C" Q_DECL_EXPORT
void* C_ZNO7QString7toLowerEv(void *this_) {
  auto rv = ((QString*)this_)->toLower();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:397
// [8] QString toUpper()
extern "C" Q_DECL_EXPORT
void* C_ZNKR7QString7toUpperEv(void *this_) {
  auto rv = ((QString*)this_)->toUpper();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:399
// [8] QString toUpper()
extern "C" Q_DECL_EXPORT
void* C_ZNO7QString7toUpperEv(void *this_) {
  auto rv = ((QString*)this_)->toUpper();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:401
// [8] QString toCaseFolded()
extern "C" Q_DECL_EXPORT
void* C_ZNKR7QString12toCaseFoldedEv(void *this_) {
  auto rv = ((QString*)this_)->toCaseFolded();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:403
// [8] QString toCaseFolded()
extern "C" Q_DECL_EXPORT
void* C_ZNO7QString12toCaseFoldedEv(void *this_) {
  auto rv = ((QString*)this_)->toCaseFolded();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:405
// [8] QString trimmed()
extern "C" Q_DECL_EXPORT
void* C_ZNKR7QString7trimmedEv(void *this_) {
  auto rv = ((QString*)this_)->trimmed();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:407
// [8] QString trimmed()
extern "C" Q_DECL_EXPORT
void* C_ZNO7QString7trimmedEv(void *this_) {
  auto rv = ((QString*)this_)->trimmed();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:409
// [8] QString simplified()
extern "C" Q_DECL_EXPORT
void* C_ZNKR7QString10simplifiedEv(void *this_) {
  auto rv = ((QString*)this_)->simplified();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:411
// [8] QString simplified()
extern "C" Q_DECL_EXPORT
void* C_ZNO7QString10simplifiedEv(void *this_) {
  auto rv = ((QString*)this_)->simplified();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:423
// [8] QString toHtmlEscaped()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString13toHtmlEscapedEv(void *this_) {
  auto rv = ((QString*)this_)->toHtmlEscaped();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:425
// [8] QString & insert(int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6insertEi5QChar(void *this_, int i, QChar* c) {
  auto& rv = ((QString*)this_)->insert(i, *c);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:426
// [8] QString & insert(int, const QChar *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6insertEiPK5QChari(void *this_, int i, const QChar * uc, int len_) {
  auto& rv = ((QString*)this_)->insert(i, uc, len_);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:427
// [8] QString & insert(int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6insertEiRKS_(void *this_, int i, QString* s) {
  auto& rv = ((QString*)this_)->insert(i, *s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:428
// [8] QString & insert(int, const QStringRef &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6insertEiRK10QStringRef(void *this_, int i, QStringRef* s) {
  auto& rv = ((QString*)this_)->insert(i, *s);
return &rv;
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:429
// [8] QString & insert(int, QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6insertEi13QLatin1String(void *this_, int i, QLatin1String* s) {
  auto& rv = ((QString*)this_)->insert(i, *s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:430
// [8] QString & append(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6appendE5QChar(void *this_, QChar* c) {
  auto& rv = ((QString*)this_)->append(*c);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:431
// [8] QString & append(const QChar *, int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6appendEPK5QChari(void *this_, const QChar * uc, int len_) {
  auto& rv = ((QString*)this_)->append(uc, len_);
return &rv;
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:432
// [8] QString & append(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6appendERKS_(void *this_, QString* s) {
  auto& rv = ((QString*)this_)->append(*s);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qstring.h:433
// [8] QString & append(const QStringRef &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6appendERK10QStringRef(void *this_, QStringRef* s) {
  auto& rv = ((QString*)this_)->append(*s);
return &rv;
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:434
// [8] QString & append(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6appendE13QLatin1String(void *this_, QLatin1String* s) {
  auto& rv = ((QString*)this_)->append(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:435
// [8] QString & prepend(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7prependE5QChar(void *this_, QChar* c) {
  auto& rv = ((QString*)this_)->prepend(*c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:436
// [8] QString & prepend(const QChar *, int)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7prependEPK5QChari(void *this_, const QChar * uc, int len_) {
  auto& rv = ((QString*)this_)->prepend(uc, len_);
return &rv;
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:437
// [8] QString & prepend(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7prependERKS_(void *this_, QString* s) {
  auto& rv = ((QString*)this_)->prepend(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:438
// [8] QString & prepend(const QStringRef &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7prependERK10QStringRef(void *this_, QStringRef* s) {
  auto& rv = ((QString*)this_)->prepend(*s);
return &rv;
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:439
// [8] QString & prepend(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7prependE13QLatin1String(void *this_, QLatin1String* s) {
  auto& rv = ((QString*)this_)->prepend(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:441
// [8] QString & operator+=(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringpLE5QChar(void *this_, QChar* c) {
  auto& rv = ((QString*)this_)->operator+=(*c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:449
// [8] QString & operator+=(QChar::SpecialCharacter)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringpLEN5QChar16SpecialCharacterE(void *this_, QChar::SpecialCharacter c) {
  auto& rv = ((QString*)this_)->operator+=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:450
// [8] QString & operator+=(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringpLERKS_(void *this_, QString* s) {
  auto& rv = ((QString*)this_)->operator+=(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:451
// [8] QString & operator+=(const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringpLERK10QStringRef(void *this_, QStringRef* s) {
  auto& rv = ((QString*)this_)->operator+=(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:452
// [8] QString & operator+=(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringpLE13QLatin1String(void *this_, QLatin1String* s) {
  auto& rv = ((QString*)this_)->operator+=(*s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:454
// [8] QString & remove(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6removeEii(void *this_, int i, int len_) {
  auto& rv = ((QString*)this_)->remove(i, len_);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:455
// [8] QString & remove(QChar, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6removeE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->remove(*c, cs);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:456
// [8] QString & remove(const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6removeERKS_N2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->remove(*s, cs);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:457
// [8] QString & replace(int, int, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceEii5QChar(void *this_, int i, int len_, QChar* after) {
  auto& rv = ((QString*)this_)->replace(i, len_, *after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:458
// [8] QString & replace(int, int, const QChar *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceEiiPK5QChari(void *this_, int i, int len_, const QChar * s, int slen) {
  auto& rv = ((QString*)this_)->replace(i, len_, s, slen);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:459
// [8] QString & replace(int, int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceEiiRKS_(void *this_, int i, int len_, QString* after) {
  auto& rv = ((QString*)this_)->replace(i, len_, *after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:460
// [8] QString & replace(QChar, QChar, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceE5QCharS0_N2Qt15CaseSensitivityE(void *this_, QChar* before, QChar* after, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->replace(*before, *after, cs);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:461
// [8] QString & replace(const QChar *, int, const QChar *, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceEPK5QChariS2_iN2Qt15CaseSensitivityE(void *this_, const QChar * before, int blen, const QChar * after, int alen, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->replace(before, blen, after, alen, cs);
return &rv;
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:462
// [8] QString & replace(QLatin1String, QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceE13QLatin1StringS0_N2Qt15CaseSensitivityE(void *this_, QLatin1String* before, QLatin1String* after, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->replace(*before, *after, cs);
return &rv;
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:463
// [8] QString & replace(QLatin1String, const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceE13QLatin1StringRKS_N2Qt15CaseSensitivityE(void *this_, QLatin1String* before, QString* after, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->replace(*before, *after, cs);
return &rv;
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:464
// [8] QString & replace(const QString &, QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceERKS_13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QString* before, QLatin1String* after, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->replace(*before, *after, cs);
return &rv;
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:465
// [8] QString & replace(const QString &, const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceERKS_S1_N2Qt15CaseSensitivityE(void *this_, QString* before, QString* after, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->replace(*before, *after, cs);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:467
// [8] QString & replace(QChar, const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceE5QCharRKS_N2Qt15CaseSensitivityE(void *this_, QChar* c, QString* after, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->replace(*c, *after, cs);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:468
// [8] QString & replace(QChar, QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceE5QChar13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QChar* c, QLatin1String* after, Qt::CaseSensitivity cs) {
  auto& rv = ((QString*)this_)->replace(*c, *after, cs);
return &rv;
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:470
// [8] QString & replace(const QRegExp &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceERK7QRegExpRKS_(void *this_, QRegExp* rx, QString* after) {
  auto& rv = ((QString*)this_)->replace(*rx, *after);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:471
// [8] QString & remove(const QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6removeERK7QRegExp(void *this_, QRegExp* rx) {
  auto& rv = ((QString*)this_)->remove(*rx);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:475
// [8] QString & replace(const QRegularExpression &, const QString &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7replaceERK18QRegularExpressionRKS_(void *this_, QRegularExpression* re, QString* after) {
  auto& rv = ((QString*)this_)->replace(*re, *after);
return &rv;
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:476
// [8] QString & remove(const QRegularExpression &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6removeERK18QRegularExpression(void *this_, QRegularExpression* re) {
  auto& rv = ((QString*)this_)->remove(*re);
return &rv;
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:482
// [8] QStringList split(const QString &, QString::SplitBehavior, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString5splitERKS_NS_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QString* sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  auto rv = ((QString*)this_)->split(*sep, behavior, cs);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:484
// [-2] QVector<QStringRef> splitRef(const QString &, QString::SplitBehavior, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZNK7QString8splitRefERKS_NS_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QString* sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  auto rv = ((QString*)this_)->splitRef(*sep, behavior, cs);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:486
// [8] QStringList split(QChar, QString::SplitBehavior, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString5splitE5QCharNS_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QChar* sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  auto rv = ((QString*)this_)->split(*sep, behavior, cs);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:488
// [-2] QVector<QStringRef> splitRef(QChar, QString::SplitBehavior, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZNK7QString8splitRefE5QCharNS_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QChar* sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  auto rv = ((QString*)this_)->splitRef(*sep, behavior, cs);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:491
// [8] QStringList split(const QRegExp &, QString::SplitBehavior)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString5splitERK7QRegExpNS_13SplitBehaviorE(void *this_, QRegExp* sep, QString::SplitBehavior behavior) {
  auto rv = ((QString*)this_)->split(*sep, behavior);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:492
// [-2] QVector<QStringRef> splitRef(const QRegExp &, QString::SplitBehavior)
extern "C" Q_DECL_EXPORT
void C_ZNK7QString8splitRefERK7QRegExpNS_13SplitBehaviorE(void *this_, QRegExp* sep, QString::SplitBehavior behavior) {
  auto rv = ((QString*)this_)->splitRef(*sep, behavior);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:495
// [8] QStringList split(const QRegularExpression &, QString::SplitBehavior)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString5splitERK18QRegularExpressionNS_13SplitBehaviorE(void *this_, QRegularExpression* sep, QString::SplitBehavior behavior) {
  auto rv = ((QString*)this_)->split(*sep, behavior);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:496
// [-2] QVector<QStringRef> splitRef(const QRegularExpression &, QString::SplitBehavior)
extern "C" Q_DECL_EXPORT
void C_ZNK7QString8splitRefERK18QRegularExpressionNS_13SplitBehaviorE(void *this_, QRegularExpression* sep, QString::SplitBehavior behavior) {
  auto rv = ((QString*)this_)->splitRef(*sep, behavior);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:504
// [8] QString normalized(QString::NormalizationForm, QChar::UnicodeVersion)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString10normalizedENS_17NormalizationFormEN5QChar14UnicodeVersionE(void *this_, QString::NormalizationForm mode, QChar::UnicodeVersion version) {
  auto rv = ((QString*)this_)->normalized(mode, version);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:506
// [8] QString repeated(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString8repeatedEi(void *this_, int times) {
  auto rv = ((QString*)this_)->repeated(times);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:508
// [8] const ushort * utf16()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QString5utf16Ev(void *this_) {
  return (void*)((QString*)this_)->utf16();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:511
// [8] QByteArray toLatin1()
extern "C" Q_DECL_EXPORT
void* C_ZNKR7QString8toLatin1Ev(void *this_) {
  auto rv = ((QString*)this_)->toLatin1();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:513
// [8] QByteArray toLatin1()
extern "C" Q_DECL_EXPORT
void* C_ZNO7QString8toLatin1Ev(void *this_) {
  auto rv = ((QString*)this_)->toLatin1();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:515
// [8] QByteArray toUtf8()
extern "C" Q_DECL_EXPORT
void* C_ZNKR7QString6toUtf8Ev(void *this_) {
  auto rv = ((QString*)this_)->toUtf8();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:517
// [8] QByteArray toUtf8()
extern "C" Q_DECL_EXPORT
void* C_ZNO7QString6toUtf8Ev(void *this_) {
  auto rv = ((QString*)this_)->toUtf8();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:519
// [8] QByteArray toLocal8Bit()
extern "C" Q_DECL_EXPORT
void* C_ZNKR7QString11toLocal8BitEv(void *this_) {
  auto rv = ((QString*)this_)->toLocal8Bit();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:521
// [8] QByteArray toLocal8Bit()
extern "C" Q_DECL_EXPORT
void* C_ZNO7QString11toLocal8BitEv(void *this_) {
  auto rv = ((QString*)this_)->toLocal8Bit();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:528
// [8] QVector<uint> toUcs4()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZNK7QString6toUcs4Ev(void *this_) {
  auto rv = ((QString*)this_)->toUcs4();
/*return rv;*/
}
#endif // QT_VERSION >= 0x040200

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:531
// [8] QString fromLatin1(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString10fromLatin1EPKci(const char * str, int size) {
  auto rv = QString::fromLatin1(str, size);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:536
// [8] QString fromUtf8(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString8fromUtf8EPKci(const char * str, int size) {
  auto rv = QString::fromUtf8(str, size);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:540
// [8] QString fromLocal8Bit(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString13fromLocal8BitEPKci(const char * str, int size) {
  auto rv = QString::fromLocal8Bit(str, size);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:544
// [8] QString fromLatin1(const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN7QString10fromLatin1ERK10QByteArray(QByteArray* str) {
  auto rv = QString::fromLatin1(*str);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:546
// [8] QString fromUtf8(const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN7QString8fromUtf8ERK10QByteArray(QByteArray* str) {
  auto rv = QString::fromUtf8(*str);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:548
// [8] QString fromLocal8Bit(const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN7QString13fromLocal8BitERK10QByteArray(QByteArray* str) {
  auto rv = QString::fromLocal8Bit(*str);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:550
// [8] QString fromUtf16(const ushort *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString9fromUtf16EPKti(const ushort * arg0, int size) {
  auto rv = QString::fromUtf16(arg0, size);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:551
// [8] QString fromUcs4(const uint *, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN7QString8fromUcs4EPKji(const uint * arg0, int size) {
  auto rv = QString::fromUcs4(arg0, size);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:552
// [8] QString fromRawData(const QChar *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString11fromRawDataEPK5QChari(const QChar * arg0, int size) {
  auto rv = QString::fromRawData(arg0, size);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qstring.h:555
// [8] QString fromUtf16(const char16_t *, int)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN7QString9fromUtf16EPKDsi(const char16_t * str, int size) {
  auto rv = QString::fromUtf16(str, size);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050300

// Public static inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qstring.h:557
// [8] QString fromUcs4(const char32_t *, int)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN7QString8fromUcs4EPKDii(const char32_t * str, int size) {
  auto rv = QString::fromUcs4(str, size);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050300

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:570
// [4] int toWCharArray(wchar_t *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK7QString12toWCharArrayEPw(void *this_, wchar_t * array) {
  return (int)((QString*)this_)->toWCharArray(array);
}
#endif // QT_VERSION >= 0x040200

// Public static inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:571
// [8] QString fromWCharArray(const wchar_t *, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN7QString14fromWCharArrayEPKwi(const wchar_t * string, int size) {
  auto rv = QString::fromWCharArray(string, size);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qstring.h:573
// [8] QString & setRawData(const QChar *, int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN7QString10setRawDataEPK5QChari(void *this_, const QChar * unicode, int size) {
  auto& rv = ((QString*)this_)->setRawData(unicode, size);
return &rv;
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:574
// [8] QString & setUnicode(const QChar *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString10setUnicodeEPK5QChari(void *this_, const QChar * unicode, int size) {
  auto& rv = ((QString*)this_)->setUnicode(unicode, size);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:575
// [8] QString & setUtf16(const ushort *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString8setUtf16EPKti(void *this_, const ushort * utf16, int size) {
  auto& rv = ((QString*)this_)->setUtf16(utf16, size);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:577
// [4] int compare(const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7compareERKS_N2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:578
// [4] int compare(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7compareE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* other, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->compare(*other, cs);
}
#endif // QT_VERSION >= 0x040200

// Public static inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:580
// [4] int compare(const QString &, const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZN7QString7compareERKS_S1_N2Qt15CaseSensitivityE(QString* s1, QString* s2, Qt::CaseSensitivity cs) {
  return (int)QString::compare(*s1, *s2, cs);
}
#endif // QT_VERSION >= 0x040200

// Public static inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:584
// [4] int compare(const QString &, QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZN7QString7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE(QString* s1, QLatin1String* s2, Qt::CaseSensitivity cs) {
  return (int)QString::compare(*s1, *s2, cs);
}
#endif // QT_VERSION >= 0x040200

// Public static inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qstring.h:587
// [4] int compare(QLatin1String, const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZN7QString7compareE13QLatin1StringRKS_N2Qt15CaseSensitivityE(QLatin1String* s1, QString* s2, Qt::CaseSensitivity cs) {
  return (int)QString::compare(*s1, *s2, cs);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:591
// [4] int compare(const QStringRef &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString7compareERK10QStringRefN2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (int)((QString*)this_)->compare(*s, cs);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:592
// [4] int compare(const QString &, const QStringRef &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZN7QString7compareERKS_RK10QStringRefN2Qt15CaseSensitivityE(QString* s1, QStringRef* s2, Qt::CaseSensitivity arg2) {
  return (int)QString::compare(*s1, *s2, arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:595
// [4] int localeAwareCompare(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString18localeAwareCompareERKS_(void *this_, QString* s) {
  return (int)((QString*)this_)->localeAwareCompare(*s);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:596
// [4] int localeAwareCompare(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN7QString18localeAwareCompareERKS_S1_(QString* s1, QString* s2) {
  return (int)QString::localeAwareCompare(*s1, *s2);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:599
// [4] int localeAwareCompare(const QStringRef &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK7QString18localeAwareCompareERK10QStringRef(void *this_, QStringRef* s) {
  return (int)((QString*)this_)->localeAwareCompare(*s);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:600
// [4] int localeAwareCompare(const QString &, const QStringRef &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN7QString18localeAwareCompareERKS_RK10QStringRef(QString* s1, QStringRef* s2) {
  return (int)QString::localeAwareCompare(*s1, *s2);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:603
// [2] short toShort(bool *, int)
extern "C" Q_DECL_EXPORT
short C_ZNK7QString7toShortEPbi(void *this_, bool * ok, int base) {
  return (short)((QString*)this_)->toShort(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:604
// [2] ushort toUShort(bool *, int)
extern "C" Q_DECL_EXPORT
ushort C_ZNK7QString8toUShortEPbi(void *this_, bool * ok, int base) {
  return (ushort)((QString*)this_)->toUShort(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:605
// [4] int toInt(bool *, int)
extern "C" Q_DECL_EXPORT
int C_ZNK7QString5toIntEPbi(void *this_, bool * ok, int base) {
  return (int)((QString*)this_)->toInt(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:606
// [4] uint toUInt(bool *, int)
extern "C" Q_DECL_EXPORT
uint C_ZNK7QString6toUIntEPbi(void *this_, bool * ok, int base) {
  return (uint)((QString*)this_)->toUInt(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:607
// [8] long toLong(bool *, int)
extern "C" Q_DECL_EXPORT
long C_ZNK7QString6toLongEPbi(void *this_, bool * ok, int base) {
  return (long)((QString*)this_)->toLong(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:608
// [8] ulong toULong(bool *, int)
extern "C" Q_DECL_EXPORT
ulong C_ZNK7QString7toULongEPbi(void *this_, bool * ok, int base) {
  return (ulong)((QString*)this_)->toULong(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:609
// [8] qlonglong toLongLong(bool *, int)
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK7QString10toLongLongEPbi(void *this_, bool * ok, int base) {
  return (qlonglong)((QString*)this_)->toLongLong(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:610
// [8] qulonglong toULongLong(bool *, int)
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK7QString11toULongLongEPbi(void *this_, bool * ok, int base) {
  return (qulonglong)((QString*)this_)->toULongLong(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:611
// [4] float toFloat(bool *)
extern "C" Q_DECL_EXPORT
float C_ZNK7QString7toFloatEPb(void *this_, bool * ok) {
  return (float)((QString*)this_)->toFloat(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:612
// [8] double toDouble(bool *)
extern "C" Q_DECL_EXPORT
double C_ZNK7QString8toDoubleEPb(void *this_, bool * ok) {
  return (double)((QString*)this_)->toDouble(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:614
// [8] QString & setNum(short, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEsi(void *this_, short arg0, int base) {
  auto& rv = ((QString*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:615
// [8] QString & setNum(ushort, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEti(void *this_, ushort arg0, int base) {
  auto& rv = ((QString*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:616
// [8] QString & setNum(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEii(void *this_, int arg0, int base) {
  auto& rv = ((QString*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:617
// [8] QString & setNum(uint, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEji(void *this_, uint arg0, int base) {
  auto& rv = ((QString*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:618
// [8] QString & setNum(long, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEli(void *this_, long arg0, int base) {
  auto& rv = ((QString*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:619
// [8] QString & setNum(ulong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEmi(void *this_, ulong arg0, int base) {
  auto& rv = ((QString*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:620
// [8] QString & setNum(qlonglong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumExi(void *this_, qlonglong arg0, int base) {
  auto& rv = ((QString*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:621
// [8] QString & setNum(qulonglong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEyi(void *this_, qulonglong arg0, int base) {
  auto& rv = ((QString*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:622
// [8] QString & setNum(float, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEfci(void *this_, float arg0, char f, int prec) {
  auto& rv = ((QString*)this_)->setNum(arg0, f, prec);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:623
// [8] QString & setNum(double, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6setNumEdci(void *this_, double arg0, char f, int prec) {
  auto& rv = ((QString*)this_)->setNum(arg0, f, prec);
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:625
// [8] QString number(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6numberEii(int arg0, int base) {
  auto rv = QString::number(arg0, base);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:626
// [8] QString number(uint, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6numberEji(uint arg0, int base) {
  auto rv = QString::number(arg0, base);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:627
// [8] QString number(long, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6numberEli(long arg0, int base) {
  auto rv = QString::number(arg0, base);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:628
// [8] QString number(ulong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6numberEmi(ulong arg0, int base) {
  auto rv = QString::number(arg0, base);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:629
// [8] QString number(qlonglong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6numberExi(qlonglong arg0, int base) {
  auto rv = QString::number(arg0, base);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:630
// [8] QString number(qulonglong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6numberEyi(qulonglong arg0, int base) {
  auto rv = QString::number(arg0, base);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:631
// [8] QString number(double, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6numberEdci(double arg0, char f, int prec) {
  auto rv = QString::number(arg0, f, prec);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:640
// [1] bool operator==(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringeqE13QLatin1String(void *this_, QLatin1String* s) {
  return (bool)((QString*)this_)->operator==(*s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:641
// [1] bool operator<(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringltE13QLatin1String(void *this_, QLatin1String* s) {
  return (bool)((QString*)this_)->operator<(*s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:642
// [1] bool operator>(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringgtE13QLatin1String(void *this_, QLatin1String* s) {
  return (bool)((QString*)this_)->operator>(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:643
// [1] bool operator!=(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringneE13QLatin1String(void *this_, QLatin1String* s) {
  return (bool)((QString*)this_)->operator!=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:644
// [1] bool operator<=(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringleE13QLatin1String(void *this_, QLatin1String* s) {
  return (bool)((QString*)this_)->operator<=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:645
// [1] bool operator>=(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringgeE13QLatin1String(void *this_, QLatin1String* s) {
  return (bool)((QString*)this_)->operator>=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:658
// [-2] void QString(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2EPKc(const char * ch) {
  return  new QString(ch);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:661
// [-2] void QString(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2ERK10QByteArray(QByteArray* a) {
  return  new QString(*a);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:664
// [8] QString & operator=(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringaSEPKc(void *this_, const char * ch) {
  auto& rv = ((QString*)this_)->operator=(ch);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:666
// [8] QString & operator=(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringaSERK10QByteArray(void *this_, QByteArray* a) {
  auto& rv = ((QString*)this_)->operator=(*a);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:668
// [8] QString & operator=(char)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringaSEc(void *this_, char c) {
  auto& rv = ((QString*)this_)->operator=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:672
// [8] QString & prepend(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7prependEPKc(void *this_, const char * s) {
  auto& rv = ((QString*)this_)->prepend(s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:674
// [8] QString & prepend(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString7prependERK10QByteArray(void *this_, QByteArray* s) {
  auto& rv = ((QString*)this_)->prepend(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:676
// [8] QString & append(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6appendEPKc(void *this_, const char * s) {
  auto& rv = ((QString*)this_)->append(s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:678
// [8] QString & append(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6appendERK10QByteArray(void *this_, QByteArray* s) {
  auto& rv = ((QString*)this_)->append(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:680
// [8] QString & insert(int, const char *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6insertEiPKc(void *this_, int i, const char * s) {
  auto& rv = ((QString*)this_)->insert(i, s);
return &rv;
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:682
// [8] QString & insert(int, const QByteArray &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString6insertEiRK10QByteArray(void *this_, int i, QByteArray* s) {
  auto& rv = ((QString*)this_)->insert(i, *s);
return &rv;
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:684
// [8] QString & operator+=(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringpLEPKc(void *this_, const char * s) {
  auto& rv = ((QString*)this_)->operator+=(s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:686
// [8] QString & operator+=(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringpLERK10QByteArray(void *this_, QByteArray* s) {
  auto& rv = ((QString*)this_)->operator+=(*s);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:688
// [8] QString & operator+=(char)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringpLEc(void *this_, char c) {
  auto& rv = ((QString*)this_)->operator+=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:691
// [1] bool operator==(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringeqEPKc(void *this_, const char * s) {
  return (bool)((QString*)this_)->operator==(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:692
// [1] bool operator!=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringneEPKc(void *this_, const char * s) {
  return (bool)((QString*)this_)->operator!=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:693
// [1] bool operator<(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringltEPKc(void *this_, const char * s) {
  return (bool)((QString*)this_)->operator<(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:694
// [1] bool operator<=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringleEPKc(void *this_, const char * s) {
  return (bool)((QString*)this_)->operator<=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:695
// [1] bool operator>(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringgtEPKc(void *this_, const char * s) {
  return (bool)((QString*)this_)->operator>(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:696
// [1] bool operator>=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringgeEPKc(void *this_, const char * s) {
  return (bool)((QString*)this_)->operator>=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:698
// [1] bool operator==(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringeqERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QString*)this_)->operator==(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:699
// [1] bool operator!=(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringneERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QString*)this_)->operator!=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:700
// [1] bool operator<(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringltERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QString*)this_)->operator<(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:701
// [1] bool operator>(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringgtERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QString*)this_)->operator>(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:702
// [1] bool operator<=(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringleERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QString*)this_)->operator<=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:703
// [1] bool operator>=(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QStringgeERK10QByteArray(void *this_, QByteArray* s) {
  return (bool)((QString*)this_)->operator>=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:726
// [8] QString::iterator begin()
extern "C" Q_DECL_EXPORT
void C_ZN7QString5beginEv(void *this_) {
  auto rv = ((QString*)this_)->begin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:727
// [8] QString::const_iterator begin()
extern "C" Q_DECL_EXPORT
void C_ZNK7QString5beginEv(void *this_) {
  auto rv = ((QString*)this_)->begin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:728
// [8] QString::const_iterator cbegin()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK7QString6cbeginEv(void *this_) {
  auto rv = ((QString*)this_)->cbegin();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:729
// [8] QString::const_iterator constBegin()
extern "C" Q_DECL_EXPORT
void C_ZNK7QString10constBeginEv(void *this_) {
  auto rv = ((QString*)this_)->constBegin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:730
// [8] QString::iterator end()
extern "C" Q_DECL_EXPORT
void C_ZN7QString3endEv(void *this_) {
  auto rv = ((QString*)this_)->end();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:731
// [8] QString::const_iterator end()
extern "C" Q_DECL_EXPORT
void C_ZNK7QString3endEv(void *this_) {
  auto rv = ((QString*)this_)->end();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstring.h:732
// [8] QString::const_iterator cend()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK7QString4cendEv(void *this_) {
  auto rv = ((QString*)this_)->cend();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:733
// [8] QString::const_iterator constEnd()
extern "C" Q_DECL_EXPORT
void C_ZNK7QString8constEndEv(void *this_) {
  auto rv = ((QString*)this_)->constEnd();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:734
// [8] QString::reverse_iterator rbegin()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QString::reverse_iterator* C_ZN7QString6rbeginEv(void *this_) {
  auto rv = ((QString*)this_)->rbegin();
return new QString::reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:735
// [8] QString::reverse_iterator rend()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QString::reverse_iterator* C_ZN7QString4rendEv(void *this_) {
  auto rv = ((QString*)this_)->rend();
return new QString::reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:736
// [8] QString::const_reverse_iterator rbegin()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QString::const_reverse_iterator* C_ZNK7QString6rbeginEv(void *this_) {
  auto rv = ((QString*)this_)->rbegin();
return new QString::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:737
// [8] QString::const_reverse_iterator rend()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QString::const_reverse_iterator* C_ZNK7QString4rendEv(void *this_) {
  auto rv = ((QString*)this_)->rend();
return new QString::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:738
// [8] QString::const_reverse_iterator crbegin()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QString::const_reverse_iterator* C_ZNK7QString7crbeginEv(void *this_) {
  auto rv = ((QString*)this_)->crbegin();
return new QString::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:739
// [8] QString::const_reverse_iterator crend()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QString::const_reverse_iterator* C_ZNK7QString5crendEv(void *this_) {
  auto rv = ((QString*)this_)->crend();
return new QString::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:749
// [-2] void push_back(QChar)
extern "C" Q_DECL_EXPORT
void C_ZN7QString9push_backE5QChar(void *this_, QChar* c) {
  ((QString*)this_)->push_back(*c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:750
// [-2] void push_back(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QString9push_backERKS_(void *this_, QString* s) {
  ((QString*)this_)->push_back(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:751
// [-2] void push_front(QChar)
extern "C" Q_DECL_EXPORT
void C_ZN7QString10push_frontE5QChar(void *this_, QChar* c) {
  ((QString*)this_)->push_front(*c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:752
// [-2] void push_front(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QString10push_frontERKS_(void *this_, QString* s) {
  ((QString*)this_)->push_front(*s);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:754
// [8] QString fromStdString(const std::string &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString13fromStdStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(const std::string & s) {
  auto rv = QString::fromStdString(s);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:755
// [32] std::string toStdString()
extern "C" Q_DECL_EXPORT
std::string C_ZNK7QString11toStdStringB5cxx11Ev(void *this_) {
  return (std::string)((QString*)this_)->toStdString();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:756
// [8] QString fromStdWString(const std::wstring &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QString14fromStdWStringERKNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEE(const std::wstring & s) {
  auto rv = QString::fromStdWString(s);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:757
// [32] std::wstring toStdWString()
extern "C" Q_DECL_EXPORT
std::wstring C_ZNK7QString12toStdWStringB5cxx11Ev(void *this_) {
  return (std::wstring)((QString*)this_)->toStdWString();
}

// Public static inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:760
// [8] QString fromStdU16String(const std::u16string &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString16fromStdU16StringERKNSt7__cxx1112basic_stringIDsSt11char_traitsIDsESaIDsEEE(const std::u16string & s) {
  auto rv = QString::fromStdU16String(s);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:761
// [32] std::u16string toStdU16String()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
std::u16string C_ZNK7QString14toStdU16StringB5cxx11Ev(void *this_) {
  return (std::u16string)((QString*)this_)->toStdU16String();
}
#endif // QT_VERSION >= 0x050500

// Public static inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:762
// [8] QString fromStdU32String(const std::u32string &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN7QString16fromStdU32StringERKNSt7__cxx1112basic_stringIDiSt11char_traitsIDiESaIDiEEE(const std::u32string & s) {
  auto rv = QString::fromStdU32String(s);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qstring.h:763
// [32] std::u32string toStdU32String()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
std::u32string C_ZNK7QString14toStdU32StringB5cxx11Ev(void *this_) {
  return (std::u32string)((QString*)this_)->toStdU32String();
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:777
// [-2] void QString(const QString::Null &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2ERKNS_4NullE(QString::Null* arg0) {
  return  new QString(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:778
// [8] QString & operator=(const QString::Null &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringaSERKNS_4NullE(void *this_, QString::Null* arg0) {
  auto& rv = ((QString*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:780
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString6isNullEv(void *this_) {
  return (bool)((QString*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:783
// [1] bool isSimpleText()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString12isSimpleTextEv(void *this_) {
  return (bool)((QString*)this_)->isSimpleText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:784
// [1] bool isRightToLeft()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QString13isRightToLeftEv(void *this_) {
  return (bool)((QString*)this_)->isRightToLeft();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:786
// [-2] void QString(int, Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2EiN2Qt14InitializationE(int size, Qt::Initialization arg1) {
  return  new QString(size, arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:787
// [-2] void QString(QStringDataPtr)
extern "C" Q_DECL_EXPORT
void* C_ZN7QStringC2E14QStringDataPtr(QStringDataPtr* dd) {
  return  new QString(*dd);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:877
// [8] QString::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN7QString8data_ptrEv(void *this_) {
  auto& rv = ((QString*)this_)->data_ptr();
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
