//  header block begin
// /usr/include/qt/QtCore/qstring.h
#include <qstring.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qstring.h:222
// void QString()
extern "C"
void* C_ZN7QStringC1Ev() {
  return new QString();
}
// /usr/include/qt/QtCore/qstring.h:223
// void QString(const class QChar *, int)
extern "C"
void* C_ZN7QStringC1EPK5QChari(const QChar * unicode, int size) {
  return new QString(unicode, size);
}
// /usr/include/qt/QtCore/qstring.h:224
// void QString(class QChar)
extern "C"
void* C_ZN7QStringC1E5QChar(QChar c) {
  return new QString(c);
}
// /usr/include/qt/QtCore/qstring.h:225
// void QString(int, class QChar)
extern "C"
void* C_ZN7QStringC1Ei5QChar(int size, QChar c) {
  return new QString(size, c);
}
// inline
// /usr/include/qt/QtCore/qstring.h:226
// void QString(class QLatin1String)
extern "C"
void* C_ZN7QStringC1E13QLatin1String(QLatin1String latin1) {
  return new QString(latin1);
}
// inline
// /usr/include/qt/QtCore/qstring.h:228
// void ~QString()
extern "C"
void C_ZN7QStringD1Ev(void *this_) {
  delete (QString*)(this_);
}
// inline
// /usr/include/qt/QtCore/qstring.h:237
// void swap(class QString &)
extern "C"
void C_ZN7QString4swapERS_(void *this_, QString & other) {
  ((QString*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtCore/qstring.h:238
// int size()
extern "C"
void C_ZNK7QString4sizeEv(void *this_) {
  /*return*/ ((QString*)this_)->size();
}
// inline
// /usr/include/qt/QtCore/qstring.h:239
// int count()
extern "C"
void C_ZNK7QString5countEv(void *this_) {
  /*return*/ ((QString*)this_)->count();
}
// inline
// /usr/include/qt/QtCore/qstring.h:240
// int length()
extern "C"
void C_ZNK7QString6lengthEv(void *this_) {
  /*return*/ ((QString*)this_)->length();
}
// inline
// /usr/include/qt/QtCore/qstring.h:241
// bool isEmpty()
extern "C"
void C_ZNK7QString7isEmptyEv(void *this_) {
  /*return*/ ((QString*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qstring.h:242
// void resize(int)
extern "C"
void C_ZN7QString6resizeEi(void *this_, int size) {
  ((QString*)this_)->resize(size);
}
// /usr/include/qt/QtCore/qstring.h:243
// void resize(int, class QChar)
extern "C"
void C_ZN7QString6resizeEi5QChar(void *this_, int size, QChar fillChar) {
  ((QString*)this_)->resize(size, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:245
// QString & fill(class QChar, int)
extern "C"
void C_ZN7QString4fillE5QChari(void *this_, QChar c, int size) {
  /*return*/ ((QString*)this_)->fill(c, size);
}
// /usr/include/qt/QtCore/qstring.h:246
// void truncate(int)
extern "C"
void C_ZN7QString8truncateEi(void *this_, int pos) {
  ((QString*)this_)->truncate(pos);
}
// /usr/include/qt/QtCore/qstring.h:247
// void chop(int)
extern "C"
void C_ZN7QString4chopEi(void *this_, int n) {
  ((QString*)this_)->chop(n);
}
// /usr/include/qt/QtCore/qstring.h:249
// int capacity()
extern "C"
void C_ZNK7QString8capacityEv(void *this_) {
  /*return*/ ((QString*)this_)->capacity();
}
// inline
// /usr/include/qt/QtCore/qstring.h:250
// void reserve(int)
extern "C"
void C_ZN7QString7reserveEi(void *this_, int size) {
  ((QString*)this_)->reserve(size);
}
// inline
// /usr/include/qt/QtCore/qstring.h:251
// void squeeze()
extern "C"
void C_ZN7QString7squeezeEv(void *this_) {
  ((QString*)this_)->squeeze();
}
// inline
// /usr/include/qt/QtCore/qstring.h:253
// const QChar * unicode()
extern "C"
void C_ZNK7QString7unicodeEv(void *this_) {
  /*return*/ ((QString*)this_)->unicode();
}
// inline
// /usr/include/qt/QtCore/qstring.h:254
// QChar * data()
extern "C"
void C_ZN7QString4dataEv(void *this_) {
  /*return*/ ((QString*)this_)->data();
}
// inline
// /usr/include/qt/QtCore/qstring.h:255
// const QChar * data()
extern "C"
void C_ZNK7QString4dataEv(void *this_) {
  /*return*/ ((QString*)this_)->data();
}
// inline
// /usr/include/qt/QtCore/qstring.h:256
// const QChar * constData()
extern "C"
void C_ZNK7QString9constDataEv(void *this_) {
  /*return*/ ((QString*)this_)->constData();
}
// inline
// /usr/include/qt/QtCore/qstring.h:258
// void detach()
extern "C"
void C_ZN7QString6detachEv(void *this_) {
  ((QString*)this_)->detach();
}
// inline
// /usr/include/qt/QtCore/qstring.h:259
// bool isDetached()
extern "C"
void C_ZNK7QString10isDetachedEv(void *this_) {
  /*return*/ ((QString*)this_)->isDetached();
}
// inline
// /usr/include/qt/QtCore/qstring.h:260
// bool isSharedWith(const class QString &)
extern "C"
void C_ZNK7QString12isSharedWithERKS_(void *this_, const QString & other) {
  /*return*/ ((QString*)this_)->isSharedWith(other);
}
// /usr/include/qt/QtCore/qstring.h:261
// void clear()
extern "C"
void C_ZN7QString5clearEv(void *this_) {
  ((QString*)this_)->clear();
}
// inline
// /usr/include/qt/QtCore/qstring.h:263
// const QChar at(int)
extern "C"
void C_ZNK7QString2atEi(void *this_, int i) {
  /*return*/ ((QString*)this_)->at(i);
}
// /usr/include/qt/QtCore/qstring.h:269
// QString arg(qlonglong, int, int, class QChar)
extern "C"
void C_ZNK7QString3argExii5QChar(void *this_, qlonglong a, int fieldwidth, int base, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldwidth, base, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:271
// QString arg(qulonglong, int, int, class QChar)
extern "C"
void C_ZNK7QString3argEyii5QChar(void *this_, qulonglong a, int fieldwidth, int base, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldwidth, base, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:273
// QString arg(long, int, int, class QChar)
extern "C"
void C_ZNK7QString3argElii5QChar(void *this_, long a, int fieldwidth, int base, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldwidth, base, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:275
// QString arg(ulong, int, int, class QChar)
extern "C"
void C_ZNK7QString3argEmii5QChar(void *this_, ulong a, int fieldwidth, int base, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldwidth, base, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:277
// QString arg(int, int, int, class QChar)
extern "C"
void C_ZNK7QString3argEiii5QChar(void *this_, int a, int fieldWidth, int base, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldWidth, base, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:279
// QString arg(uint, int, int, class QChar)
extern "C"
void C_ZNK7QString3argEjii5QChar(void *this_, uint a, int fieldWidth, int base, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldWidth, base, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:281
// QString arg(short, int, int, class QChar)
extern "C"
void C_ZNK7QString3argEsii5QChar(void *this_, short a, int fieldWidth, int base, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldWidth, base, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:283
// QString arg(ushort, int, int, class QChar)
extern "C"
void C_ZNK7QString3argEtii5QChar(void *this_, ushort a, int fieldWidth, int base, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldWidth, base, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:285
// QString arg(double, int, char, int, class QChar)
extern "C"
void C_ZNK7QString3argEdici5QChar(void *this_, double a, int fieldWidth, char fmt, int prec, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldWidth, fmt, prec, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:287
// QString arg(char, int, class QChar)
extern "C"
void C_ZNK7QString3argEci5QChar(void *this_, char a, int fieldWidth, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldWidth, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:289
// QString arg(class QChar, int, class QChar)
extern "C"
void C_ZNK7QString3argE5QChariS0_(void *this_, QChar a, int fieldWidth, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldWidth, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:291
// QString arg(const class QString &, int, class QChar)
extern "C"
void C_ZNK7QString3argERKS_i5QChar(void *this_, const QString & a, int fieldWidth, QChar fillChar) {
  /*return*/ ((QString*)this_)->arg(a, fieldWidth, fillChar);
}
// /usr/include/qt/QtCore/qstring.h:293
// QString arg(const class QString &, const class QString &)
extern "C"
void C_ZNK7QString3argERKS_S1_(void *this_, const QString & a1, const QString & a2) {
  /*return*/ ((QString*)this_)->arg(a1, a2);
}
// /usr/include/qt/QtCore/qstring.h:294
// QString arg(const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZNK7QString3argERKS_S1_S1_(void *this_, const QString & a1, const QString & a2, const QString & a3) {
  /*return*/ ((QString*)this_)->arg(a1, a2, a3);
}
// /usr/include/qt/QtCore/qstring.h:295
// QString arg(const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZNK7QString3argERKS_S1_S1_S1_(void *this_, const QString & a1, const QString & a2, const QString & a3, const QString & a4) {
  /*return*/ ((QString*)this_)->arg(a1, a2, a3, a4);
}
// /usr/include/qt/QtCore/qstring.h:297
// QString arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZNK7QString3argERKS_S1_S1_S1_S1_(void *this_, const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5) {
  /*return*/ ((QString*)this_)->arg(a1, a2, a3, a4, a5);
}
// /usr/include/qt/QtCore/qstring.h:299
// QString arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZNK7QString3argERKS_S1_S1_S1_S1_S1_(void *this_, const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6) {
  /*return*/ ((QString*)this_)->arg(a1, a2, a3, a4, a5, a6);
}
// /usr/include/qt/QtCore/qstring.h:301
// QString arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_(void *this_, const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7) {
  /*return*/ ((QString*)this_)->arg(a1, a2, a3, a4, a5, a6, a7);
}
// /usr/include/qt/QtCore/qstring.h:304
// QString arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_S1_(void *this_, const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7, const QString & a8) {
  /*return*/ ((QString*)this_)->arg(a1, a2, a3, a4, a5, a6, a7, a8);
}
// /usr/include/qt/QtCore/qstring.h:307
// QString arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_S1_S1_(void *this_, const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7, const QString & a8, const QString & a9) {
  /*return*/ ((QString*)this_)->arg(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
// /usr/include/qt/QtCore/qstring.h:311
// QString & vsprintf(const char *, struct __va_list_tag *)
extern "C"
void C_ZN7QString8vsprintfEPKcP13__va_list_tag(void *this_, const char * format, va_list ap) {
  /*return*/ ((QString*)this_)->vsprintf(format, ap);
}
// static
// /usr/include/qt/QtCore/qstring.h:313
// QString vasprintf(const char *, struct __va_list_tag *)
extern "C"
void C_ZN7QString9vasprintfEPKcP13__va_list_tag(const char * format, va_list ap) {
  /*return*/ QString::vasprintf(format, ap);
}
// /usr/include/qt/QtCore/qstring.h:316
// int indexOf(class QChar, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString7indexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar c, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->indexOf(c, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:317
// int indexOf(const class QString &, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString7indexOfERKS_iN2Qt15CaseSensitivityE(void *this_, const QString & s, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->indexOf(s, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:318
// int indexOf(class QLatin1String, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString7indexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String s, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->indexOf(s, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:319
// int indexOf(const class QStringRef &, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString7indexOfERK10QStringRefiN2Qt15CaseSensitivityE(void *this_, const QStringRef & s, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->indexOf(s, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:320
// int lastIndexOf(class QChar, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString11lastIndexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar c, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->lastIndexOf(c, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:321
// int lastIndexOf(const class QString &, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString11lastIndexOfERKS_iN2Qt15CaseSensitivityE(void *this_, const QString & s, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->lastIndexOf(s, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:322
// int lastIndexOf(class QLatin1String, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString11lastIndexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String s, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->lastIndexOf(s, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:323
// int lastIndexOf(const class QStringRef &, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString11lastIndexOfERK10QStringRefiN2Qt15CaseSensitivityE(void *this_, const QStringRef & s, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->lastIndexOf(s, from, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:325
// bool contains(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8containsE5QCharN2Qt15CaseSensitivityE(void *this_, QChar c, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->contains(c, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:326
// bool contains(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8containsERKS_N2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->contains(s, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:327
// bool contains(class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->contains(s, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:328
// bool contains(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8containsERK10QStringRefN2Qt15CaseSensitivityE(void *this_, const QStringRef & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->contains(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:329
// int count(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString5countE5QCharN2Qt15CaseSensitivityE(void *this_, QChar c, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->count(c, cs);
}
// /usr/include/qt/QtCore/qstring.h:330
// int count(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString5countERKS_N2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->count(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:331
// int count(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString5countERK10QStringRefN2Qt15CaseSensitivityE(void *this_, const QStringRef & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->count(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:334
// int indexOf(const class QRegExp &, int)
extern "C"
void C_ZNK7QString7indexOfERK7QRegExpi(void *this_, const QRegExp & arg0, int from) {
  /*return*/ ((QString*)this_)->indexOf(arg0, from);
}
// /usr/include/qt/QtCore/qstring.h:335
// int lastIndexOf(const class QRegExp &, int)
extern "C"
void C_ZNK7QString11lastIndexOfERK7QRegExpi(void *this_, const QRegExp & arg0, int from) {
  /*return*/ ((QString*)this_)->lastIndexOf(arg0, from);
}
// inline
// /usr/include/qt/QtCore/qstring.h:336
// bool contains(const class QRegExp &)
extern "C"
void C_ZNK7QString8containsERK7QRegExp(void *this_, const QRegExp & rx) {
  /*return*/ ((QString*)this_)->contains(rx);
}
// /usr/include/qt/QtCore/qstring.h:337
// int count(const class QRegExp &)
extern "C"
void C_ZNK7QString5countERK7QRegExp(void *this_, const QRegExp & arg0) {
  /*return*/ ((QString*)this_)->count(arg0);
}
// /usr/include/qt/QtCore/qstring.h:339
// int indexOf(class QRegExp &, int)
extern "C"
void C_ZNK7QString7indexOfER7QRegExpi(void *this_, QRegExp & arg0, int from) {
  /*return*/ ((QString*)this_)->indexOf(arg0, from);
}
// /usr/include/qt/QtCore/qstring.h:340
// int lastIndexOf(class QRegExp &, int)
extern "C"
void C_ZNK7QString11lastIndexOfER7QRegExpi(void *this_, QRegExp & arg0, int from) {
  /*return*/ ((QString*)this_)->lastIndexOf(arg0, from);
}
// inline
// /usr/include/qt/QtCore/qstring.h:341
// bool contains(class QRegExp &)
extern "C"
void C_ZNK7QString8containsER7QRegExp(void *this_, QRegExp & rx) {
  /*return*/ ((QString*)this_)->contains(rx);
}
// /usr/include/qt/QtCore/qstring.h:345
// int indexOf(const class QRegularExpression &, int)
extern "C"
void C_ZNK7QString7indexOfERK18QRegularExpressioni(void *this_, const QRegularExpression & re, int from) {
  /*return*/ ((QString*)this_)->indexOf(re, from);
}
// /usr/include/qt/QtCore/qstring.h:346
// int indexOf(const class QRegularExpression &, int, class QRegularExpressionMatch *)
extern "C"
void C_ZNK7QString7indexOfERK18QRegularExpressioniP23QRegularExpressionMatch(void *this_, const QRegularExpression & re, int from, QRegularExpressionMatch * rmatch) {
  /*return*/ ((QString*)this_)->indexOf(re, from, rmatch);
}
// /usr/include/qt/QtCore/qstring.h:347
// int lastIndexOf(const class QRegularExpression &, int)
extern "C"
void C_ZNK7QString11lastIndexOfERK18QRegularExpressioni(void *this_, const QRegularExpression & re, int from) {
  /*return*/ ((QString*)this_)->lastIndexOf(re, from);
}
// /usr/include/qt/QtCore/qstring.h:348
// int lastIndexOf(const class QRegularExpression &, int, class QRegularExpressionMatch *)
extern "C"
void C_ZNK7QString11lastIndexOfERK18QRegularExpressioniP23QRegularExpressionMatch(void *this_, const QRegularExpression & re, int from, QRegularExpressionMatch * rmatch) {
  /*return*/ ((QString*)this_)->lastIndexOf(re, from, rmatch);
}
// /usr/include/qt/QtCore/qstring.h:349
// bool contains(const class QRegularExpression &)
extern "C"
void C_ZNK7QString8containsERK18QRegularExpression(void *this_, const QRegularExpression & re) {
  /*return*/ ((QString*)this_)->contains(re);
}
// /usr/include/qt/QtCore/qstring.h:350
// bool contains(const class QRegularExpression &, class QRegularExpressionMatch *)
extern "C"
void C_ZNK7QString8containsERK18QRegularExpressionP23QRegularExpressionMatch(void *this_, const QRegularExpression & re, QRegularExpressionMatch * match) {
  /*return*/ ((QString*)this_)->contains(re, match);
}
// /usr/include/qt/QtCore/qstring.h:351
// int count(const class QRegularExpression &)
extern "C"
void C_ZNK7QString5countERK18QRegularExpression(void *this_, const QRegularExpression & re) {
  /*return*/ ((QString*)this_)->count(re);
}
// /usr/include/qt/QtCore/qstring.h:363
// QString section(class QChar, int, int, SectionFlags)
extern "C"
void C_ZNK7QString7sectionE5QCharii6QFlagsINS_11SectionFlagEE(void *this_, QChar sep, int start, int end, QFlags<QString::SectionFlag> flags) {
  /*return*/ ((QString*)this_)->section(sep, start, end, flags);
}
// /usr/include/qt/QtCore/qstring.h:364
// QString section(const class QString &, int, int, SectionFlags)
extern "C"
void C_ZNK7QString7sectionERKS_ii6QFlagsINS_11SectionFlagEE(void *this_, const QString & in_sep, int start, int end, QFlags<QString::SectionFlag> flags) {
  /*return*/ ((QString*)this_)->section(in_sep, start, end, flags);
}
// /usr/include/qt/QtCore/qstring.h:366
// QString section(const class QRegExp &, int, int, SectionFlags)
extern "C"
void C_ZNK7QString7sectionERK7QRegExpii6QFlagsINS_11SectionFlagEE(void *this_, const QRegExp & reg, int start, int end, QFlags<QString::SectionFlag> flags) {
  /*return*/ ((QString*)this_)->section(reg, start, end, flags);
}
// /usr/include/qt/QtCore/qstring.h:369
// QString section(const class QRegularExpression &, int, int, SectionFlags)
extern "C"
void C_ZNK7QString7sectionERK18QRegularExpressionii6QFlagsINS_11SectionFlagEE(void *this_, const QRegularExpression & re, int start, int end, QFlags<QString::SectionFlag> flags) {
  /*return*/ ((QString*)this_)->section(re, start, end, flags);
}
// /usr/include/qt/QtCore/qstring.h:371
// QString left(int)
extern "C"
void C_ZNK7QString4leftEi(void *this_, int n) {
  /*return*/ ((QString*)this_)->left(n);
}
// /usr/include/qt/QtCore/qstring.h:372
// QString right(int)
extern "C"
void C_ZNK7QString5rightEi(void *this_, int n) {
  /*return*/ ((QString*)this_)->right(n);
}
// /usr/include/qt/QtCore/qstring.h:373
// QString mid(int, int)
extern "C"
void C_ZNK7QString3midEii(void *this_, int position, int n) {
  /*return*/ ((QString*)this_)->mid(position, n);
}
// /usr/include/qt/QtCore/qstring.h:374
// QStringRef leftRef(int)
extern "C"
void C_ZNK7QString7leftRefEi(void *this_, int n) {
  /*return*/ ((QString*)this_)->leftRef(n);
}
// /usr/include/qt/QtCore/qstring.h:375
// QStringRef rightRef(int)
extern "C"
void C_ZNK7QString8rightRefEi(void *this_, int n) {
  /*return*/ ((QString*)this_)->rightRef(n);
}
// /usr/include/qt/QtCore/qstring.h:376
// QStringRef midRef(int, int)
extern "C"
void C_ZNK7QString6midRefEii(void *this_, int position, int n) {
  /*return*/ ((QString*)this_)->midRef(position, n);
}
// /usr/include/qt/QtCore/qstring.h:378
// bool startsWith(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString10startsWithERKS_N2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->startsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:379
// bool startsWith(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString10startsWithERK10QStringRefN2Qt15CaseSensitivityE(void *this_, const QStringRef & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->startsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:380
// bool startsWith(class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString10startsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->startsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:381
// bool startsWith(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar c, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->startsWith(c, cs);
}
// /usr/include/qt/QtCore/qstring.h:382
// bool endsWith(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8endsWithERKS_N2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->endsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:383
// bool endsWith(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8endsWithERK10QStringRefN2Qt15CaseSensitivityE(void *this_, const QStringRef & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->endsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:384
// bool endsWith(class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8endsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->endsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:385
// bool endsWith(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar c, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->endsWith(c, cs);
}
// /usr/include/qt/QtCore/qstring.h:387
// QString leftJustified(int, class QChar, _Bool)
extern "C"
void C_ZNK7QString13leftJustifiedEi5QCharb(void *this_, int width, QChar fill, bool trunc) {
  /*return*/ ((QString*)this_)->leftJustified(width, fill, trunc);
}
// /usr/include/qt/QtCore/qstring.h:388
// QString rightJustified(int, class QChar, _Bool)
extern "C"
void C_ZNK7QString14rightJustifiedEi5QCharb(void *this_, int width, QChar fill, bool trunc) {
  /*return*/ ((QString*)this_)->rightJustified(width, fill, trunc);
}
// inline
// /usr/include/qt/QtCore/qstring.h:398
// QString toLower()
extern "C"
void C_ZNKR7QString7toLowerEv(void *this_) {
  /*return*/ ((QString*)this_)->toLower();
}
// inline
// /usr/include/qt/QtCore/qstring.h:400
// QString toLower()
extern "C"
void C_ZNO7QString7toLowerEv(void *this_) {
  /*return*/ ((QString*)this_)->toLower();
}
// inline
// /usr/include/qt/QtCore/qstring.h:402
// QString toUpper()
extern "C"
void C_ZNKR7QString7toUpperEv(void *this_) {
  /*return*/ ((QString*)this_)->toUpper();
}
// inline
// /usr/include/qt/QtCore/qstring.h:404
// QString toUpper()
extern "C"
void C_ZNO7QString7toUpperEv(void *this_) {
  /*return*/ ((QString*)this_)->toUpper();
}
// inline
// /usr/include/qt/QtCore/qstring.h:406
// QString toCaseFolded()
extern "C"
void C_ZNKR7QString12toCaseFoldedEv(void *this_) {
  /*return*/ ((QString*)this_)->toCaseFolded();
}
// inline
// /usr/include/qt/QtCore/qstring.h:408
// QString toCaseFolded()
extern "C"
void C_ZNO7QString12toCaseFoldedEv(void *this_) {
  /*return*/ ((QString*)this_)->toCaseFolded();
}
// inline
// /usr/include/qt/QtCore/qstring.h:410
// QString trimmed()
extern "C"
void C_ZNKR7QString7trimmedEv(void *this_) {
  /*return*/ ((QString*)this_)->trimmed();
}
// inline
// /usr/include/qt/QtCore/qstring.h:412
// QString trimmed()
extern "C"
void C_ZNO7QString7trimmedEv(void *this_) {
  /*return*/ ((QString*)this_)->trimmed();
}
// inline
// /usr/include/qt/QtCore/qstring.h:414
// QString simplified()
extern "C"
void C_ZNKR7QString10simplifiedEv(void *this_) {
  /*return*/ ((QString*)this_)->simplified();
}
// inline
// /usr/include/qt/QtCore/qstring.h:416
// QString simplified()
extern "C"
void C_ZNO7QString10simplifiedEv(void *this_) {
  /*return*/ ((QString*)this_)->simplified();
}
// /usr/include/qt/QtCore/qstring.h:428
// QString toHtmlEscaped()
extern "C"
void C_ZNK7QString13toHtmlEscapedEv(void *this_) {
  /*return*/ ((QString*)this_)->toHtmlEscaped();
}
// /usr/include/qt/QtCore/qstring.h:459
// QString & remove(int, int)
extern "C"
void C_ZN7QString6removeEii(void *this_, int i, int len) {
  /*return*/ ((QString*)this_)->remove(i, len);
}
// /usr/include/qt/QtCore/qstring.h:460
// QString & remove(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString6removeE5QCharN2Qt15CaseSensitivityE(void *this_, QChar c, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->remove(c, cs);
}
// /usr/include/qt/QtCore/qstring.h:461
// QString & remove(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString6removeERKS_N2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->remove(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:462
// QString & replace(int, int, class QChar)
extern "C"
void C_ZN7QString7replaceEii5QChar(void *this_, int i, int len, QChar after) {
  /*return*/ ((QString*)this_)->replace(i, len, after);
}
// /usr/include/qt/QtCore/qstring.h:463
// QString & replace(int, int, const class QChar *, int)
extern "C"
void C_ZN7QString7replaceEiiPK5QChari(void *this_, int i, int len, const QChar * s, int slen) {
  /*return*/ ((QString*)this_)->replace(i, len, s, slen);
}
// /usr/include/qt/QtCore/qstring.h:464
// QString & replace(int, int, const class QString &)
extern "C"
void C_ZN7QString7replaceEiiRKS_(void *this_, int i, int len, const QString & after) {
  /*return*/ ((QString*)this_)->replace(i, len, after);
}
// /usr/include/qt/QtCore/qstring.h:465
// QString & replace(class QChar, class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7replaceE5QCharS0_N2Qt15CaseSensitivityE(void *this_, QChar before, QChar after, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->replace(before, after, cs);
}
// /usr/include/qt/QtCore/qstring.h:466
// QString & replace(const class QChar *, int, const class QChar *, int, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7replaceEPK5QChariS2_iN2Qt15CaseSensitivityE(void *this_, const QChar * before, int blen, const QChar * after, int alen, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->replace(before, blen, after, alen, cs);
}
// /usr/include/qt/QtCore/qstring.h:467
// QString & replace(class QLatin1String, class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7replaceE13QLatin1StringS0_N2Qt15CaseSensitivityE(void *this_, QLatin1String before, QLatin1String after, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->replace(before, after, cs);
}
// /usr/include/qt/QtCore/qstring.h:468
// QString & replace(class QLatin1String, const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7replaceE13QLatin1StringRKS_N2Qt15CaseSensitivityE(void *this_, QLatin1String before, const QString & after, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->replace(before, after, cs);
}
// /usr/include/qt/QtCore/qstring.h:469
// QString & replace(const class QString &, class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7replaceERKS_13QLatin1StringN2Qt15CaseSensitivityE(void *this_, const QString & before, QLatin1String after, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->replace(before, after, cs);
}
// /usr/include/qt/QtCore/qstring.h:470
// QString & replace(const class QString &, const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7replaceERKS_S1_N2Qt15CaseSensitivityE(void *this_, const QString & before, const QString & after, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->replace(before, after, cs);
}
// /usr/include/qt/QtCore/qstring.h:472
// QString & replace(class QChar, const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7replaceE5QCharRKS_N2Qt15CaseSensitivityE(void *this_, QChar c, const QString & after, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->replace(c, after, cs);
}
// /usr/include/qt/QtCore/qstring.h:473
// QString & replace(class QChar, class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7replaceE5QChar13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QChar c, QLatin1String after, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->replace(c, after, cs);
}
// /usr/include/qt/QtCore/qstring.h:475
// QString & replace(const class QRegExp &, const class QString &)
extern "C"
void C_ZN7QString7replaceERK7QRegExpRKS_(void *this_, const QRegExp & rx, const QString & after) {
  /*return*/ ((QString*)this_)->replace(rx, after);
}
// inline
// /usr/include/qt/QtCore/qstring.h:476
// QString & remove(const class QRegExp &)
extern "C"
void C_ZN7QString6removeERK7QRegExp(void *this_, const QRegExp & rx) {
  /*return*/ ((QString*)this_)->remove(rx);
}
// /usr/include/qt/QtCore/qstring.h:480
// QString & replace(const class QRegularExpression &, const class QString &)
extern "C"
void C_ZN7QString7replaceERK18QRegularExpressionRKS_(void *this_, const QRegularExpression & re, const QString & after) {
  /*return*/ ((QString*)this_)->replace(re, after);
}
// inline
// /usr/include/qt/QtCore/qstring.h:481
// QString & remove(const class QRegularExpression &)
extern "C"
void C_ZN7QString6removeERK18QRegularExpression(void *this_, const QRegularExpression & re) {
  /*return*/ ((QString*)this_)->remove(re);
}
// /usr/include/qt/QtCore/qstring.h:487
// QStringList split(const class QString &, enum QString::SplitBehavior, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString5splitERKS_NS_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, const QString & sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->split(sep, behavior, cs);
}
// /usr/include/qt/QtCore/qstring.h:489
// QVector<QStringRef> splitRef(const class QString &, enum QString::SplitBehavior, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8splitRefERKS_NS_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, const QString & sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->splitRef(sep, behavior, cs);
}
// /usr/include/qt/QtCore/qstring.h:491
// QStringList split(class QChar, enum QString::SplitBehavior, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString5splitE5QCharNS_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QChar sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->split(sep, behavior, cs);
}
// /usr/include/qt/QtCore/qstring.h:493
// QVector<QStringRef> splitRef(class QChar, enum QString::SplitBehavior, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString8splitRefE5QCharNS_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QChar sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->splitRef(sep, behavior, cs);
}
// /usr/include/qt/QtCore/qstring.h:496
// QStringList split(const class QRegExp &, enum QString::SplitBehavior)
extern "C"
void C_ZNK7QString5splitERK7QRegExpNS_13SplitBehaviorE(void *this_, const QRegExp & sep, QString::SplitBehavior behavior) {
  /*return*/ ((QString*)this_)->split(sep, behavior);
}
// /usr/include/qt/QtCore/qstring.h:497
// QVector<QStringRef> splitRef(const class QRegExp &, enum QString::SplitBehavior)
extern "C"
void C_ZNK7QString8splitRefERK7QRegExpNS_13SplitBehaviorE(void *this_, const QRegExp & sep, QString::SplitBehavior behavior) {
  /*return*/ ((QString*)this_)->splitRef(sep, behavior);
}
// /usr/include/qt/QtCore/qstring.h:500
// QStringList split(const class QRegularExpression &, enum QString::SplitBehavior)
extern "C"
void C_ZNK7QString5splitERK18QRegularExpressionNS_13SplitBehaviorE(void *this_, const QRegularExpression & sep, QString::SplitBehavior behavior) {
  /*return*/ ((QString*)this_)->split(sep, behavior);
}
// /usr/include/qt/QtCore/qstring.h:501
// QVector<QStringRef> splitRef(const class QRegularExpression &, enum QString::SplitBehavior)
extern "C"
void C_ZNK7QString8splitRefERK18QRegularExpressionNS_13SplitBehaviorE(void *this_, const QRegularExpression & sep, QString::SplitBehavior behavior) {
  /*return*/ ((QString*)this_)->splitRef(sep, behavior);
}
// /usr/include/qt/QtCore/qstring.h:509
// QString normalized(enum QString::NormalizationForm, class QChar::UnicodeVersion)
extern "C"
void C_ZNK7QString10normalizedENS_17NormalizationFormEN5QChar14UnicodeVersionE(void *this_, QString::NormalizationForm mode, QChar::UnicodeVersion version) {
  /*return*/ ((QString*)this_)->normalized(mode, version);
}
// /usr/include/qt/QtCore/qstring.h:511
// QString repeated(int)
extern "C"
void C_ZNK7QString8repeatedEi(void *this_, int times) {
  /*return*/ ((QString*)this_)->repeated(times);
}
// /usr/include/qt/QtCore/qstring.h:513
// const ushort * utf16()
extern "C"
void C_ZNK7QString5utf16Ev(void *this_) {
  /*return*/ ((QString*)this_)->utf16();
}
// inline
// /usr/include/qt/QtCore/qstring.h:516
// QByteArray toLatin1()
extern "C"
void C_ZNKR7QString8toLatin1Ev(void *this_) {
  /*return*/ ((QString*)this_)->toLatin1();
}
// inline
// /usr/include/qt/QtCore/qstring.h:518
// QByteArray toLatin1()
extern "C"
void C_ZNO7QString8toLatin1Ev(void *this_) {
  /*return*/ ((QString*)this_)->toLatin1();
}
// inline
// /usr/include/qt/QtCore/qstring.h:520
// QByteArray toUtf8()
extern "C"
void C_ZNKR7QString6toUtf8Ev(void *this_) {
  /*return*/ ((QString*)this_)->toUtf8();
}
// inline
// /usr/include/qt/QtCore/qstring.h:522
// QByteArray toUtf8()
extern "C"
void C_ZNO7QString6toUtf8Ev(void *this_) {
  /*return*/ ((QString*)this_)->toUtf8();
}
// inline
// /usr/include/qt/QtCore/qstring.h:524
// QByteArray toLocal8Bit()
extern "C"
void C_ZNKR7QString11toLocal8BitEv(void *this_) {
  /*return*/ ((QString*)this_)->toLocal8Bit();
}
// inline
// /usr/include/qt/QtCore/qstring.h:526
// QByteArray toLocal8Bit()
extern "C"
void C_ZNO7QString11toLocal8BitEv(void *this_) {
  /*return*/ ((QString*)this_)->toLocal8Bit();
}
// /usr/include/qt/QtCore/qstring.h:533
// QVector<uint> toUcs4()
extern "C"
void C_ZNK7QString6toUcs4Ev(void *this_) {
  /*return*/ ((QString*)this_)->toUcs4();
}
// static inline
// /usr/include/qt/QtCore/qstring.h:536
// QString fromLatin1(const char *, int)
extern "C"
void C_ZN7QString10fromLatin1EPKci(const char * str, int size) {
  /*return*/ QString::fromLatin1(str, size);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:541
// QString fromUtf8(const char *, int)
extern "C"
void C_ZN7QString8fromUtf8EPKci(const char * str, int size) {
  /*return*/ QString::fromUtf8(str, size);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:545
// QString fromLocal8Bit(const char *, int)
extern "C"
void C_ZN7QString13fromLocal8BitEPKci(const char * str, int size) {
  /*return*/ QString::fromLocal8Bit(str, size);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:549
// QString fromLatin1(const class QByteArray &)
extern "C"
void C_ZN7QString10fromLatin1ERK10QByteArray(const QByteArray & str) {
  /*return*/ QString::fromLatin1(str);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:551
// QString fromUtf8(const class QByteArray &)
extern "C"
void C_ZN7QString8fromUtf8ERK10QByteArray(const QByteArray & str) {
  /*return*/ QString::fromUtf8(str);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:553
// QString fromLocal8Bit(const class QByteArray &)
extern "C"
void C_ZN7QString13fromLocal8BitERK10QByteArray(const QByteArray & str) {
  /*return*/ QString::fromLocal8Bit(str);
}
// static
// /usr/include/qt/QtCore/qstring.h:555
// QString fromUtf16(const ushort *, int)
extern "C"
void C_ZN7QString9fromUtf16EPKti(const ushort * arg0, int size) {
  /*return*/ QString::fromUtf16(arg0, size);
}
// static
// /usr/include/qt/QtCore/qstring.h:556
// QString fromUcs4(const uint *, int)
extern "C"
void C_ZN7QString8fromUcs4EPKji(const uint * arg0, int size) {
  /*return*/ QString::fromUcs4(arg0, size);
}
// static
// /usr/include/qt/QtCore/qstring.h:557
// QString fromRawData(const class QChar *, int)
extern "C"
void C_ZN7QString11fromRawDataEPK5QChari(const QChar * arg0, int size) {
  /*return*/ QString::fromRawData(arg0, size);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:560
// QString fromUtf16(const char16_t *, int)
extern "C"
void C_ZN7QString9fromUtf16EPKDsi(const char16_t * str, int size) {
  /*return*/ QString::fromUtf16(str, size);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:562
// QString fromUcs4(const char32_t *, int)
extern "C"
void C_ZN7QString8fromUcs4EPKDii(const char32_t * str, int size) {
  /*return*/ QString::fromUcs4(str, size);
}
// inline
// /usr/include/qt/QtCore/qstring.h:575
// int toWCharArray(wchar_t *)
extern "C"
void C_ZNK7QString12toWCharArrayEPw(void *this_, wchar_t * array) {
  /*return*/ ((QString*)this_)->toWCharArray(array);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:576
// QString fromWCharArray(const wchar_t *, int)
extern "C"
void C_ZN7QString14fromWCharArrayEPKwi(const wchar_t * string, int size) {
  /*return*/ QString::fromWCharArray(string, size);
}
// /usr/include/qt/QtCore/qstring.h:578
// QString & setRawData(const class QChar *, int)
extern "C"
void C_ZN7QString10setRawDataEPK5QChari(void *this_, const QChar * unicode, int size) {
  /*return*/ ((QString*)this_)->setRawData(unicode, size);
}
// /usr/include/qt/QtCore/qstring.h:579
// QString & setUnicode(const class QChar *, int)
extern "C"
void C_ZN7QString10setUnicodeEPK5QChari(void *this_, const QChar * unicode, int size) {
  /*return*/ ((QString*)this_)->setUnicode(unicode, size);
}
// inline
// /usr/include/qt/QtCore/qstring.h:580
// QString & setUtf16(const ushort *, int)
extern "C"
void C_ZN7QString8setUtf16EPKti(void *this_, const ushort * utf16, int size) {
  /*return*/ ((QString*)this_)->setUtf16(utf16, size);
}
// /usr/include/qt/QtCore/qstring.h:582
// int compare(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString7compareERKS_N2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->compare(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:583
// int compare(class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString7compareE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String other, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->compare(other, cs);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:585
// int compare(const class QString &, const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7compareERKS_S1_N2Qt15CaseSensitivityE(const QString & s1, const QString & s2, Qt::CaseSensitivity cs) {
  /*return*/ QString::compare(s1, s2, cs);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:589
// int compare(const class QString &, class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE(const QString & s1, QLatin1String s2, Qt::CaseSensitivity cs) {
  /*return*/ QString::compare(s1, s2, cs);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:592
// int compare(class QLatin1String, const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7compareE13QLatin1StringRKS_N2Qt15CaseSensitivityE(QLatin1String s1, const QString & s2, Qt::CaseSensitivity cs) {
  /*return*/ QString::compare(s1, s2, cs);
}
// /usr/include/qt/QtCore/qstring.h:596
// int compare(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK7QString7compareERK10QStringRefN2Qt15CaseSensitivityE(void *this_, const QStringRef & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QString*)this_)->compare(s, cs);
}
// static
// /usr/include/qt/QtCore/qstring.h:597
// int compare(const class QString &, const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZN7QString7compareERKS_RK10QStringRefN2Qt15CaseSensitivityE(const QString & s1, const QStringRef & s2, Qt::CaseSensitivity arg2) {
  /*return*/ QString::compare(s1, s2, arg2);
}
// /usr/include/qt/QtCore/qstring.h:600
// int localeAwareCompare(const class QString &)
extern "C"
void C_ZNK7QString18localeAwareCompareERKS_(void *this_, const QString & s) {
  /*return*/ ((QString*)this_)->localeAwareCompare(s);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:601
// int localeAwareCompare(const class QString &, const class QString &)
extern "C"
void C_ZN7QString18localeAwareCompareERKS_S1_(const QString & s1, const QString & s2) {
  /*return*/ QString::localeAwareCompare(s1, s2);
}
// /usr/include/qt/QtCore/qstring.h:604
// int localeAwareCompare(const class QStringRef &)
extern "C"
void C_ZNK7QString18localeAwareCompareERK10QStringRef(void *this_, const QStringRef & s) {
  /*return*/ ((QString*)this_)->localeAwareCompare(s);
}
// static
// /usr/include/qt/QtCore/qstring.h:605
// int localeAwareCompare(const class QString &, const class QStringRef &)
extern "C"
void C_ZN7QString18localeAwareCompareERKS_RK10QStringRef(const QString & s1, const QStringRef & s2) {
  /*return*/ QString::localeAwareCompare(s1, s2);
}
// /usr/include/qt/QtCore/qstring.h:608
// short toShort(_Bool *, int)
extern "C"
void C_ZNK7QString7toShortEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QString*)this_)->toShort(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:609
// ushort toUShort(_Bool *, int)
extern "C"
void C_ZNK7QString8toUShortEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QString*)this_)->toUShort(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:610
// int toInt(_Bool *, int)
extern "C"
void C_ZNK7QString5toIntEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QString*)this_)->toInt(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:611
// uint toUInt(_Bool *, int)
extern "C"
void C_ZNK7QString6toUIntEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QString*)this_)->toUInt(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:612
// long toLong(_Bool *, int)
extern "C"
void C_ZNK7QString6toLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QString*)this_)->toLong(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:613
// ulong toULong(_Bool *, int)
extern "C"
void C_ZNK7QString7toULongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QString*)this_)->toULong(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:614
// qlonglong toLongLong(_Bool *, int)
extern "C"
void C_ZNK7QString10toLongLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QString*)this_)->toLongLong(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:615
// qulonglong toULongLong(_Bool *, int)
extern "C"
void C_ZNK7QString11toULongLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QString*)this_)->toULongLong(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:616
// float toFloat(_Bool *)
extern "C"
void C_ZNK7QString7toFloatEPb(void *this_, bool * ok) {
  /*return*/ ((QString*)this_)->toFloat(ok);
}
// /usr/include/qt/QtCore/qstring.h:617
// double toDouble(_Bool *)
extern "C"
void C_ZNK7QString8toDoubleEPb(void *this_, bool * ok) {
  /*return*/ ((QString*)this_)->toDouble(ok);
}
// /usr/include/qt/QtCore/qstring.h:619
// QString & setNum(short, int)
extern "C"
void C_ZN7QString6setNumEsi(void *this_, short arg0, int base) {
  /*return*/ ((QString*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qstring.h:620
// QString & setNum(ushort, int)
extern "C"
void C_ZN7QString6setNumEti(void *this_, ushort arg0, int base) {
  /*return*/ ((QString*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qstring.h:621
// QString & setNum(int, int)
extern "C"
void C_ZN7QString6setNumEii(void *this_, int arg0, int base) {
  /*return*/ ((QString*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qstring.h:622
// QString & setNum(uint, int)
extern "C"
void C_ZN7QString6setNumEji(void *this_, uint arg0, int base) {
  /*return*/ ((QString*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qstring.h:623
// QString & setNum(long, int)
extern "C"
void C_ZN7QString6setNumEli(void *this_, long arg0, int base) {
  /*return*/ ((QString*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qstring.h:624
// QString & setNum(ulong, int)
extern "C"
void C_ZN7QString6setNumEmi(void *this_, ulong arg0, int base) {
  /*return*/ ((QString*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qstring.h:625
// QString & setNum(qlonglong, int)
extern "C"
void C_ZN7QString6setNumExi(void *this_, qlonglong arg0, int base) {
  /*return*/ ((QString*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qstring.h:626
// QString & setNum(qulonglong, int)
extern "C"
void C_ZN7QString6setNumEyi(void *this_, qulonglong arg0, int base) {
  /*return*/ ((QString*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qstring.h:627
// QString & setNum(float, char, int)
extern "C"
void C_ZN7QString6setNumEfci(void *this_, float arg0, char f, int prec) {
  /*return*/ ((QString*)this_)->setNum(arg0, f, prec);
}
// /usr/include/qt/QtCore/qstring.h:628
// QString & setNum(double, char, int)
extern "C"
void C_ZN7QString6setNumEdci(void *this_, double arg0, char f, int prec) {
  /*return*/ ((QString*)this_)->setNum(arg0, f, prec);
}
// static
// /usr/include/qt/QtCore/qstring.h:630
// QString number(int, int)
extern "C"
void C_ZN7QString6numberEii(int arg0, int base) {
  /*return*/ QString::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qstring.h:631
// QString number(uint, int)
extern "C"
void C_ZN7QString6numberEji(uint arg0, int base) {
  /*return*/ QString::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qstring.h:632
// QString number(long, int)
extern "C"
void C_ZN7QString6numberEli(long arg0, int base) {
  /*return*/ QString::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qstring.h:633
// QString number(ulong, int)
extern "C"
void C_ZN7QString6numberEmi(ulong arg0, int base) {
  /*return*/ QString::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qstring.h:634
// QString number(qlonglong, int)
extern "C"
void C_ZN7QString6numberExi(qlonglong arg0, int base) {
  /*return*/ QString::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qstring.h:635
// QString number(qulonglong, int)
extern "C"
void C_ZN7QString6numberEyi(qulonglong arg0, int base) {
  /*return*/ QString::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qstring.h:636
// QString number(double, char, int)
extern "C"
void C_ZN7QString6numberEdci(double arg0, char f, int prec) {
  /*return*/ QString::number(arg0, f, prec);
}
// inline
// /usr/include/qt/QtCore/qstring.h:663
// void QString(const char *)
extern "C"
void* C_ZN7QStringC1EPKc(const char * ch) {
  return new QString(ch);
}
// inline
// /usr/include/qt/QtCore/qstring.h:666
// void QString(const class QByteArray &)
extern "C"
void* C_ZN7QStringC1ERK10QByteArray(const QByteArray & a) {
  return new QString(a);
}
// inline
// /usr/include/qt/QtCore/qstring.h:731
// iterator begin()
extern "C"
void C_ZN7QString5beginEv(void *this_) {
  /*return*/ ((QString*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qstring.h:732
// const_iterator begin()
extern "C"
void C_ZNK7QString5beginEv(void *this_) {
  /*return*/ ((QString*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qstring.h:733
// const_iterator cbegin()
extern "C"
void C_ZNK7QString6cbeginEv(void *this_) {
  /*return*/ ((QString*)this_)->cbegin();
}
// inline
// /usr/include/qt/QtCore/qstring.h:734
// const_iterator constBegin()
extern "C"
void C_ZNK7QString10constBeginEv(void *this_) {
  /*return*/ ((QString*)this_)->constBegin();
}
// inline
// /usr/include/qt/QtCore/qstring.h:735
// iterator end()
extern "C"
void C_ZN7QString3endEv(void *this_) {
  /*return*/ ((QString*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qstring.h:736
// const_iterator end()
extern "C"
void C_ZNK7QString3endEv(void *this_) {
  /*return*/ ((QString*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qstring.h:737
// const_iterator cend()
extern "C"
void C_ZNK7QString4cendEv(void *this_) {
  /*return*/ ((QString*)this_)->cend();
}
// inline
// /usr/include/qt/QtCore/qstring.h:738
// const_iterator constEnd()
extern "C"
void C_ZNK7QString8constEndEv(void *this_) {
  /*return*/ ((QString*)this_)->constEnd();
}
// inline
// /usr/include/qt/QtCore/qstring.h:754
// void push_back(class QChar)
extern "C"
void C_ZN7QString9push_backE5QChar(void *this_, QChar c) {
  ((QString*)this_)->push_back(c);
}
// inline
// /usr/include/qt/QtCore/qstring.h:755
// void push_back(const class QString &)
extern "C"
void C_ZN7QString9push_backERKS_(void *this_, const QString & s) {
  ((QString*)this_)->push_back(s);
}
// inline
// /usr/include/qt/QtCore/qstring.h:756
// void push_front(class QChar)
extern "C"
void C_ZN7QString10push_frontE5QChar(void *this_, QChar c) {
  ((QString*)this_)->push_front(c);
}
// inline
// /usr/include/qt/QtCore/qstring.h:757
// void push_front(const class QString &)
extern "C"
void C_ZN7QString10push_frontERKS_(void *this_, const QString & s) {
  ((QString*)this_)->push_front(s);
}
// static inline
// /usr/include/qt/QtCore/qstring.h:759
// QString fromStdString(const std::string &)
extern "C"
void C_ZN7QString13fromStdStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(const std::string & s) {
  /*return*/ QString::fromStdString(s);
}
// inline
// /usr/include/qt/QtCore/qstring.h:760
// std::string toStdString()
extern "C"
void C_ZNK7QString11toStdStringB5cxx11Ev(void *this_) {
  /*return*/ ((QString*)this_)->toStdString();
}
// static inline
// /usr/include/qt/QtCore/qstring.h:761
// QString fromStdWString(const std::wstring &)
extern "C"
void C_ZN7QString14fromStdWStringERKNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEE(const std::wstring & s) {
  /*return*/ QString::fromStdWString(s);
}
// inline
// /usr/include/qt/QtCore/qstring.h:762
// std::wstring toStdWString()
extern "C"
void C_ZNK7QString12toStdWStringB5cxx11Ev(void *this_) {
  /*return*/ ((QString*)this_)->toStdWString();
}
// static inline
// /usr/include/qt/QtCore/qstring.h:765
// QString fromStdU16String(const std::u16string &)
extern "C"
void C_ZN7QString16fromStdU16StringERKNSt7__cxx1112basic_stringIDsSt11char_traitsIDsESaIDsEEE(const std::u16string & s) {
  /*return*/ QString::fromStdU16String(s);
}
// inline
// /usr/include/qt/QtCore/qstring.h:766
// std::u16string toStdU16String()
extern "C"
void C_ZNK7QString14toStdU16StringB5cxx11Ev(void *this_) {
  /*return*/ ((QString*)this_)->toStdU16String();
}
// static inline
// /usr/include/qt/QtCore/qstring.h:767
// QString fromStdU32String(const std::u32string &)
extern "C"
void C_ZN7QString16fromStdU32StringERKNSt7__cxx1112basic_stringIDiSt11char_traitsIDiESaIDiEEE(const std::u32string & s) {
  /*return*/ QString::fromStdU32String(s);
}
// inline
// /usr/include/qt/QtCore/qstring.h:768
// std::u32string toStdU32String()
extern "C"
void C_ZNK7QString14toStdU32StringB5cxx11Ev(void *this_) {
  /*return*/ ((QString*)this_)->toStdU32String();
}
// inline
// /usr/include/qt/QtCore/qstring.h:782
// void QString(const struct QString::Null &)
extern "C"
void* C_ZN7QStringC1ERKNS_4NullE(const QString::Null & arg0) {
  return new QString(arg0);
}
// inline
// /usr/include/qt/QtCore/qstring.h:784
// bool isNull()
extern "C"
void C_ZNK7QString6isNullEv(void *this_) {
  /*return*/ ((QString*)this_)->isNull();
}
// /usr/include/qt/QtCore/qstring.h:787
// bool isSimpleText()
extern "C"
void C_ZNK7QString12isSimpleTextEv(void *this_) {
  /*return*/ ((QString*)this_)->isSimpleText();
}
// /usr/include/qt/QtCore/qstring.h:788
// bool isRightToLeft()
extern "C"
void C_ZNK7QString13isRightToLeftEv(void *this_) {
  /*return*/ ((QString*)this_)->isRightToLeft();
}
// /usr/include/qt/QtCore/qstring.h:790
// void QString(int, Qt::Initialization)
extern "C"
void* C_ZN7QStringC1EiN2Qt14InitializationE(int size, Qt::Initialization arg1) {
  return new QString(size, arg1);
}
// inline
// /usr/include/qt/QtCore/qstring.h:791
// void QString(struct QStringDataPtr)
extern "C"
void* C_ZN7QStringC1E14QStringDataPtr(QStringDataPtr dd) {
  return new QString(dd);
}
//  main block end
