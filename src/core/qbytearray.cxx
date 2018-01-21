//  header block begin
// /usr/include/qt/QtCore/qbytearray.h
#include <qbytearray.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qbytearray.h:182
// void QByteArray()
extern "C"
void* C_ZN10QByteArrayC1Ev() {
  return new QByteArray();
}
// /usr/include/qt/QtCore/qbytearray.h:183
// void QByteArray(const char *, int)
extern "C"
void* C_ZN10QByteArrayC1EPKci(const char * arg0, int size) {
  return new QByteArray(arg0, size);
}
// /usr/include/qt/QtCore/qbytearray.h:184
// void QByteArray(int, char)
extern "C"
void* C_ZN10QByteArrayC1Eic(int size, char c) {
  return new QByteArray(size, c);
}
// /usr/include/qt/QtCore/qbytearray.h:185
// void QByteArray(int, Qt::Initialization)
extern "C"
void* C_ZN10QByteArrayC1EiN2Qt14InitializationE(int size, Qt::Initialization arg1) {
  return new QByteArray(size, arg1);
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:187
// void ~QByteArray()
extern "C"
void C_ZN10QByteArrayD1Ev(void *this_) {
  delete (QByteArray*)(this_);
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:197
// void swap(class QByteArray &)
extern "C"
void C_ZN10QByteArray4swapERS_(void *this_, QByteArray & other) {
  ((QByteArray*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:200
// int size()
extern "C"
void C_ZNK10QByteArray4sizeEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->size();
}
// /usr/include/qt/QtCore/qbytearray.h:201
// bool isEmpty()
extern "C"
void C_ZNK10QByteArray7isEmptyEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qbytearray.h:202
// void resize(int)
extern "C"
void C_ZN10QByteArray6resizeEi(void *this_, int size) {
  ((QByteArray*)this_)->resize(size);
}
// /usr/include/qt/QtCore/qbytearray.h:204
// QByteArray & fill(char, int)
extern "C"
void C_ZN10QByteArray4fillEci(void *this_, char c, int size) {
  /*return*/ ((QByteArray*)this_)->fill(c, size);
}
// /usr/include/qt/QtCore/qbytearray.h:206
// int capacity()
extern "C"
void C_ZNK10QByteArray8capacityEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->capacity();
}
// /usr/include/qt/QtCore/qbytearray.h:207
// void reserve(int)
extern "C"
void C_ZN10QByteArray7reserveEi(void *this_, int size) {
  ((QByteArray*)this_)->reserve(size);
}
// /usr/include/qt/QtCore/qbytearray.h:208
// void squeeze()
extern "C"
void C_ZN10QByteArray7squeezeEv(void *this_) {
  ((QByteArray*)this_)->squeeze();
}
// /usr/include/qt/QtCore/qbytearray.h:214
// char * data()
extern "C"
void C_ZN10QByteArray4dataEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->data();
}
// /usr/include/qt/QtCore/qbytearray.h:215
// const char * data()
extern "C"
void C_ZNK10QByteArray4dataEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->data();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:216
// const char * constData()
extern "C"
void C_ZNK10QByteArray9constDataEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->constData();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:217
// void detach()
extern "C"
void C_ZN10QByteArray6detachEv(void *this_) {
  ((QByteArray*)this_)->detach();
}
// /usr/include/qt/QtCore/qbytearray.h:218
// bool isDetached()
extern "C"
void C_ZNK10QByteArray10isDetachedEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->isDetached();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:219
// bool isSharedWith(const class QByteArray &)
extern "C"
void C_ZNK10QByteArray12isSharedWithERKS_(void *this_, const QByteArray & other) {
  /*return*/ ((QByteArray*)this_)->isSharedWith(other);
}
// /usr/include/qt/QtCore/qbytearray.h:220
// void clear()
extern "C"
void C_ZN10QByteArray5clearEv(void *this_) {
  ((QByteArray*)this_)->clear();
}
// /usr/include/qt/QtCore/qbytearray.h:222
// char at(int)
extern "C"
void C_ZNK10QByteArray2atEi(void *this_, int i) {
  /*return*/ ((QByteArray*)this_)->at(i);
}
// /usr/include/qt/QtCore/qbytearray.h:228
// int indexOf(char, int)
extern "C"
void C_ZNK10QByteArray7indexOfEci(void *this_, char c, int from) {
  /*return*/ ((QByteArray*)this_)->indexOf(c, from);
}
// /usr/include/qt/QtCore/qbytearray.h:229
// int indexOf(const char *, int)
extern "C"
void C_ZNK10QByteArray7indexOfEPKci(void *this_, const char * c, int from) {
  /*return*/ ((QByteArray*)this_)->indexOf(c, from);
}
// /usr/include/qt/QtCore/qbytearray.h:230
// int indexOf(const class QByteArray &, int)
extern "C"
void C_ZNK10QByteArray7indexOfERKS_i(void *this_, const QByteArray & a, int from) {
  /*return*/ ((QByteArray*)this_)->indexOf(a, from);
}
// /usr/include/qt/QtCore/qbytearray.h:231
// int lastIndexOf(char, int)
extern "C"
void C_ZNK10QByteArray11lastIndexOfEci(void *this_, char c, int from) {
  /*return*/ ((QByteArray*)this_)->lastIndexOf(c, from);
}
// /usr/include/qt/QtCore/qbytearray.h:232
// int lastIndexOf(const char *, int)
extern "C"
void C_ZNK10QByteArray11lastIndexOfEPKci(void *this_, const char * c, int from) {
  /*return*/ ((QByteArray*)this_)->lastIndexOf(c, from);
}
// /usr/include/qt/QtCore/qbytearray.h:233
// int lastIndexOf(const class QByteArray &, int)
extern "C"
void C_ZNK10QByteArray11lastIndexOfERKS_i(void *this_, const QByteArray & a, int from) {
  /*return*/ ((QByteArray*)this_)->lastIndexOf(a, from);
}
// /usr/include/qt/QtCore/qbytearray.h:235
// bool contains(char)
extern "C"
void C_ZNK10QByteArray8containsEc(void *this_, char c) {
  /*return*/ ((QByteArray*)this_)->contains(c);
}
// /usr/include/qt/QtCore/qbytearray.h:236
// bool contains(const char *)
extern "C"
void C_ZNK10QByteArray8containsEPKc(void *this_, const char * a) {
  /*return*/ ((QByteArray*)this_)->contains(a);
}
// /usr/include/qt/QtCore/qbytearray.h:237
// bool contains(const class QByteArray &)
extern "C"
void C_ZNK10QByteArray8containsERKS_(void *this_, const QByteArray & a) {
  /*return*/ ((QByteArray*)this_)->contains(a);
}
// /usr/include/qt/QtCore/qbytearray.h:238
// int count(char)
extern "C"
void C_ZNK10QByteArray5countEc(void *this_, char c) {
  /*return*/ ((QByteArray*)this_)->count(c);
}
// /usr/include/qt/QtCore/qbytearray.h:239
// int count(const char *)
extern "C"
void C_ZNK10QByteArray5countEPKc(void *this_, const char * a) {
  /*return*/ ((QByteArray*)this_)->count(a);
}
// /usr/include/qt/QtCore/qbytearray.h:240
// int count(const class QByteArray &)
extern "C"
void C_ZNK10QByteArray5countERKS_(void *this_, const QByteArray & a) {
  /*return*/ ((QByteArray*)this_)->count(a);
}
// /usr/include/qt/QtCore/qbytearray.h:242
// QByteArray left(int)
extern "C"
void C_ZNK10QByteArray4leftEi(void *this_, int len) {
  /*return*/ ((QByteArray*)this_)->left(len);
}
// /usr/include/qt/QtCore/qbytearray.h:243
// QByteArray right(int)
extern "C"
void C_ZNK10QByteArray5rightEi(void *this_, int len) {
  /*return*/ ((QByteArray*)this_)->right(len);
}
// /usr/include/qt/QtCore/qbytearray.h:244
// QByteArray mid(int, int)
extern "C"
void C_ZNK10QByteArray3midEii(void *this_, int index, int len) {
  /*return*/ ((QByteArray*)this_)->mid(index, len);
}
// /usr/include/qt/QtCore/qbytearray.h:246
// bool startsWith(const class QByteArray &)
extern "C"
void C_ZNK10QByteArray10startsWithERKS_(void *this_, const QByteArray & a) {
  /*return*/ ((QByteArray*)this_)->startsWith(a);
}
// /usr/include/qt/QtCore/qbytearray.h:247
// bool startsWith(char)
extern "C"
void C_ZNK10QByteArray10startsWithEc(void *this_, char c) {
  /*return*/ ((QByteArray*)this_)->startsWith(c);
}
// /usr/include/qt/QtCore/qbytearray.h:248
// bool startsWith(const char *)
extern "C"
void C_ZNK10QByteArray10startsWithEPKc(void *this_, const char * c) {
  /*return*/ ((QByteArray*)this_)->startsWith(c);
}
// /usr/include/qt/QtCore/qbytearray.h:250
// bool endsWith(const class QByteArray &)
extern "C"
void C_ZNK10QByteArray8endsWithERKS_(void *this_, const QByteArray & a) {
  /*return*/ ((QByteArray*)this_)->endsWith(a);
}
// /usr/include/qt/QtCore/qbytearray.h:251
// bool endsWith(char)
extern "C"
void C_ZNK10QByteArray8endsWithEc(void *this_, char c) {
  /*return*/ ((QByteArray*)this_)->endsWith(c);
}
// /usr/include/qt/QtCore/qbytearray.h:252
// bool endsWith(const char *)
extern "C"
void C_ZNK10QByteArray8endsWithEPKc(void *this_, const char * c) {
  /*return*/ ((QByteArray*)this_)->endsWith(c);
}
// /usr/include/qt/QtCore/qbytearray.h:254
// void truncate(int)
extern "C"
void C_ZN10QByteArray8truncateEi(void *this_, int pos) {
  ((QByteArray*)this_)->truncate(pos);
}
// /usr/include/qt/QtCore/qbytearray.h:255
// void chop(int)
extern "C"
void C_ZN10QByteArray4chopEi(void *this_, int n) {
  ((QByteArray*)this_)->chop(n);
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:265
// QByteArray toLower()
extern "C"
void C_ZNKR10QByteArray7toLowerEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->toLower();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:267
// QByteArray toLower()
extern "C"
void C_ZNO10QByteArray7toLowerEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->toLower();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:269
// QByteArray toUpper()
extern "C"
void C_ZNKR10QByteArray7toUpperEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->toUpper();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:271
// QByteArray toUpper()
extern "C"
void C_ZNO10QByteArray7toUpperEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->toUpper();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:273
// QByteArray trimmed()
extern "C"
void C_ZNKR10QByteArray7trimmedEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->trimmed();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:275
// QByteArray trimmed()
extern "C"
void C_ZNO10QByteArray7trimmedEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->trimmed();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:277
// QByteArray simplified()
extern "C"
void C_ZNKR10QByteArray10simplifiedEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->simplified();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:279
// QByteArray simplified()
extern "C"
void C_ZNO10QByteArray10simplifiedEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->simplified();
}
// /usr/include/qt/QtCore/qbytearray.h:291
// QByteArray leftJustified(int, char, _Bool)
extern "C"
void C_ZNK10QByteArray13leftJustifiedEicb(void *this_, int width, char fill, bool truncate) {
  /*return*/ ((QByteArray*)this_)->leftJustified(width, fill, truncate);
}
// /usr/include/qt/QtCore/qbytearray.h:292
// QByteArray rightJustified(int, char, _Bool)
extern "C"
void C_ZNK10QByteArray14rightJustifiedEicb(void *this_, int width, char fill, bool truncate) {
  /*return*/ ((QByteArray*)this_)->rightJustified(width, fill, truncate);
}
// /usr/include/qt/QtCore/qbytearray.h:309
// QByteArray & remove(int, int)
extern "C"
void C_ZN10QByteArray6removeEii(void *this_, int index, int len) {
  /*return*/ ((QByteArray*)this_)->remove(index, len);
}
// /usr/include/qt/QtCore/qbytearray.h:310
// QByteArray & replace(int, int, const char *)
extern "C"
void C_ZN10QByteArray7replaceEiiPKc(void *this_, int index, int len, const char * s) {
  /*return*/ ((QByteArray*)this_)->replace(index, len, s);
}
// /usr/include/qt/QtCore/qbytearray.h:311
// QByteArray & replace(int, int, const char *, int)
extern "C"
void C_ZN10QByteArray7replaceEiiPKci(void *this_, int index, int len, const char * s, int alen) {
  /*return*/ ((QByteArray*)this_)->replace(index, len, s, alen);
}
// /usr/include/qt/QtCore/qbytearray.h:312
// QByteArray & replace(int, int, const class QByteArray &)
extern "C"
void C_ZN10QByteArray7replaceEiiRKS_(void *this_, int index, int len, const QByteArray & s) {
  /*return*/ ((QByteArray*)this_)->replace(index, len, s);
}
// /usr/include/qt/QtCore/qbytearray.h:313
// QByteArray & replace(char, const char *)
extern "C"
void C_ZN10QByteArray7replaceEcPKc(void *this_, char before, const char * after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:314
// QByteArray & replace(char, const class QByteArray &)
extern "C"
void C_ZN10QByteArray7replaceEcRKS_(void *this_, char before, const QByteArray & after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:315
// QByteArray & replace(const char *, const char *)
extern "C"
void C_ZN10QByteArray7replaceEPKcS1_(void *this_, const char * before, const char * after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:316
// QByteArray & replace(const char *, int, const char *, int)
extern "C"
void C_ZN10QByteArray7replaceEPKciS1_i(void *this_, const char * before, int bsize, const char * after, int asize) {
  /*return*/ ((QByteArray*)this_)->replace(before, bsize, after, asize);
}
// /usr/include/qt/QtCore/qbytearray.h:317
// QByteArray & replace(const class QByteArray &, const class QByteArray &)
extern "C"
void C_ZN10QByteArray7replaceERKS_S1_(void *this_, const QByteArray & before, const QByteArray & after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:318
// QByteArray & replace(const class QByteArray &, const char *)
extern "C"
void C_ZN10QByteArray7replaceERKS_PKc(void *this_, const QByteArray & before, const char * after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:319
// QByteArray & replace(const char *, const class QByteArray &)
extern "C"
void C_ZN10QByteArray7replaceEPKcRKS_(void *this_, const char * before, const QByteArray & after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:320
// QByteArray & replace(char, char)
extern "C"
void C_ZN10QByteArray7replaceEcc(void *this_, char before, char after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:325
// QList<QByteArray> split(char)
extern "C"
void C_ZNK10QByteArray5splitEc(void *this_, char sep) {
  /*return*/ ((QByteArray*)this_)->split(sep);
}
// /usr/include/qt/QtCore/qbytearray.h:327
// QByteArray repeated(int)
extern "C"
void C_ZNK10QByteArray8repeatedEi(void *this_, int times) {
  /*return*/ ((QByteArray*)this_)->repeated(times);
}
// /usr/include/qt/QtCore/qbytearray.h:332
// QByteArray & replace(const class QString &, const char *)
extern "C"
void C_ZN10QByteArray7replaceERK7QStringPKc(void *this_, const QString & before, const char * after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:333
// QByteArray & replace(char, const class QString &)
extern "C"
void C_ZN10QByteArray7replaceEcRK7QString(void *this_, char c, const QString & after) {
  /*return*/ ((QByteArray*)this_)->replace(c, after);
}
// /usr/include/qt/QtCore/qbytearray.h:334
// QByteArray & replace(const class QString &, const class QByteArray &)
extern "C"
void C_ZN10QByteArray7replaceERK7QStringRKS_(void *this_, const QString & before, const QByteArray & after) {
  /*return*/ ((QByteArray*)this_)->replace(before, after);
}
// /usr/include/qt/QtCore/qbytearray.h:337
// int indexOf(const class QString &, int)
extern "C"
void C_ZNK10QByteArray7indexOfERK7QStringi(void *this_, const QString & s, int from) {
  /*return*/ ((QByteArray*)this_)->indexOf(s, from);
}
// /usr/include/qt/QtCore/qbytearray.h:338
// int lastIndexOf(const class QString &, int)
extern "C"
void C_ZNK10QByteArray11lastIndexOfERK7QStringi(void *this_, const QString & s, int from) {
  /*return*/ ((QByteArray*)this_)->lastIndexOf(s, from);
}
// /usr/include/qt/QtCore/qbytearray.h:349
// short toShort(_Bool *, int)
extern "C"
void C_ZNK10QByteArray7toShortEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QByteArray*)this_)->toShort(ok, base);
}
// /usr/include/qt/QtCore/qbytearray.h:350
// ushort toUShort(_Bool *, int)
extern "C"
void C_ZNK10QByteArray8toUShortEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QByteArray*)this_)->toUShort(ok, base);
}
// /usr/include/qt/QtCore/qbytearray.h:351
// int toInt(_Bool *, int)
extern "C"
void C_ZNK10QByteArray5toIntEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QByteArray*)this_)->toInt(ok, base);
}
// /usr/include/qt/QtCore/qbytearray.h:352
// uint toUInt(_Bool *, int)
extern "C"
void C_ZNK10QByteArray6toUIntEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QByteArray*)this_)->toUInt(ok, base);
}
// /usr/include/qt/QtCore/qbytearray.h:353
// long toLong(_Bool *, int)
extern "C"
void C_ZNK10QByteArray6toLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QByteArray*)this_)->toLong(ok, base);
}
// /usr/include/qt/QtCore/qbytearray.h:354
// ulong toULong(_Bool *, int)
extern "C"
void C_ZNK10QByteArray7toULongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QByteArray*)this_)->toULong(ok, base);
}
// /usr/include/qt/QtCore/qbytearray.h:355
// qlonglong toLongLong(_Bool *, int)
extern "C"
void C_ZNK10QByteArray10toLongLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QByteArray*)this_)->toLongLong(ok, base);
}
// /usr/include/qt/QtCore/qbytearray.h:356
// qulonglong toULongLong(_Bool *, int)
extern "C"
void C_ZNK10QByteArray11toULongLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QByteArray*)this_)->toULongLong(ok, base);
}
// /usr/include/qt/QtCore/qbytearray.h:357
// float toFloat(_Bool *)
extern "C"
void C_ZNK10QByteArray7toFloatEPb(void *this_, bool * ok) {
  /*return*/ ((QByteArray*)this_)->toFloat(ok);
}
// /usr/include/qt/QtCore/qbytearray.h:358
// double toDouble(_Bool *)
extern "C"
void C_ZNK10QByteArray8toDoubleEPb(void *this_, bool * ok) {
  /*return*/ ((QByteArray*)this_)->toDouble(ok);
}
// /usr/include/qt/QtCore/qbytearray.h:359
// QByteArray toBase64(Base64Options)
extern "C"
void C_ZNK10QByteArray8toBase64E6QFlagsINS_12Base64OptionEE(void *this_, QFlags<QByteArray::Base64Option> options) {
  /*return*/ ((QByteArray*)this_)->toBase64(options);
}
// /usr/include/qt/QtCore/qbytearray.h:360
// QByteArray toBase64()
extern "C"
void C_ZNK10QByteArray8toBase64Ev(void *this_) {
  /*return*/ ((QByteArray*)this_)->toBase64();
}
// /usr/include/qt/QtCore/qbytearray.h:361
// QByteArray toHex()
extern "C"
void C_ZNK10QByteArray5toHexEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->toHex();
}
// /usr/include/qt/QtCore/qbytearray.h:362
// QByteArray toPercentEncoding(const class QByteArray &, const class QByteArray &, char)
extern "C"
void C_ZNK10QByteArray17toPercentEncodingERKS_S1_c(void *this_, const QByteArray & exclude, const QByteArray & include, char percent) {
  /*return*/ ((QByteArray*)this_)->toPercentEncoding(exclude, include, percent);
}
// /usr/include/qt/QtCore/qbytearray.h:366
// QByteArray & setNum(short, int)
extern "C"
void C_ZN10QByteArray6setNumEsi(void *this_, short arg0, int base) {
  /*return*/ ((QByteArray*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qbytearray.h:367
// QByteArray & setNum(ushort, int)
extern "C"
void C_ZN10QByteArray6setNumEti(void *this_, ushort arg0, int base) {
  /*return*/ ((QByteArray*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qbytearray.h:368
// QByteArray & setNum(int, int)
extern "C"
void C_ZN10QByteArray6setNumEii(void *this_, int arg0, int base) {
  /*return*/ ((QByteArray*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qbytearray.h:369
// QByteArray & setNum(uint, int)
extern "C"
void C_ZN10QByteArray6setNumEji(void *this_, uint arg0, int base) {
  /*return*/ ((QByteArray*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qbytearray.h:370
// QByteArray & setNum(qlonglong, int)
extern "C"
void C_ZN10QByteArray6setNumExi(void *this_, qlonglong arg0, int base) {
  /*return*/ ((QByteArray*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qbytearray.h:371
// QByteArray & setNum(qulonglong, int)
extern "C"
void C_ZN10QByteArray6setNumEyi(void *this_, qulonglong arg0, int base) {
  /*return*/ ((QByteArray*)this_)->setNum(arg0, base);
}
// /usr/include/qt/QtCore/qbytearray.h:372
// QByteArray & setNum(float, char, int)
extern "C"
void C_ZN10QByteArray6setNumEfci(void *this_, float arg0, char f, int prec) {
  /*return*/ ((QByteArray*)this_)->setNum(arg0, f, prec);
}
// /usr/include/qt/QtCore/qbytearray.h:373
// QByteArray & setNum(double, char, int)
extern "C"
void C_ZN10QByteArray6setNumEdci(void *this_, double arg0, char f, int prec) {
  /*return*/ ((QByteArray*)this_)->setNum(arg0, f, prec);
}
// /usr/include/qt/QtCore/qbytearray.h:374
// QByteArray & setRawData(const char *, uint)
extern "C"
void C_ZN10QByteArray10setRawDataEPKcj(void *this_, const char * a, uint n) {
  /*return*/ ((QByteArray*)this_)->setRawData(a, n);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:376
// QByteArray number(int, int)
extern "C"
void C_ZN10QByteArray6numberEii(int arg0, int base) {
  /*return*/ QByteArray::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:377
// QByteArray number(uint, int)
extern "C"
void C_ZN10QByteArray6numberEji(uint arg0, int base) {
  /*return*/ QByteArray::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:378
// QByteArray number(qlonglong, int)
extern "C"
void C_ZN10QByteArray6numberExi(qlonglong arg0, int base) {
  /*return*/ QByteArray::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:379
// QByteArray number(qulonglong, int)
extern "C"
void C_ZN10QByteArray6numberEyi(qulonglong arg0, int base) {
  /*return*/ QByteArray::number(arg0, base);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:380
// QByteArray number(double, char, int)
extern "C"
void C_ZN10QByteArray6numberEdci(double arg0, char f, int prec) {
  /*return*/ QByteArray::number(arg0, f, prec);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:381
// QByteArray fromRawData(const char *, int)
extern "C"
void C_ZN10QByteArray11fromRawDataEPKci(const char * arg0, int size) {
  /*return*/ QByteArray::fromRawData(arg0, size);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:382
// QByteArray fromBase64(const class QByteArray &, Base64Options)
extern "C"
void C_ZN10QByteArray10fromBase64ERKS_6QFlagsINS_12Base64OptionEE(const QByteArray & base64, QFlags<QByteArray::Base64Option> options) {
  /*return*/ QByteArray::fromBase64(base64, options);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:383
// QByteArray fromBase64(const class QByteArray &)
extern "C"
void C_ZN10QByteArray10fromBase64ERKS_(const QByteArray & base64) {
  /*return*/ QByteArray::fromBase64(base64);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:384
// QByteArray fromHex(const class QByteArray &)
extern "C"
void C_ZN10QByteArray7fromHexERKS_(const QByteArray & hexEncoded) {
  /*return*/ QByteArray::fromHex(hexEncoded);
}
// static
// /usr/include/qt/QtCore/qbytearray.h:385
// QByteArray fromPercentEncoding(const class QByteArray &, char)
extern "C"
void C_ZN10QByteArray19fromPercentEncodingERKS_c(const QByteArray & pctEncoded, char percent) {
  /*return*/ QByteArray::fromPercentEncoding(pctEncoded, percent);
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:406
// iterator begin()
extern "C"
void C_ZN10QByteArray5beginEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:407
// const_iterator begin()
extern "C"
void C_ZNK10QByteArray5beginEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:408
// const_iterator cbegin()
extern "C"
void C_ZNK10QByteArray6cbeginEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->cbegin();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:409
// const_iterator constBegin()
extern "C"
void C_ZNK10QByteArray10constBeginEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->constBegin();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:410
// iterator end()
extern "C"
void C_ZN10QByteArray3endEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:411
// const_iterator end()
extern "C"
void C_ZNK10QByteArray3endEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:412
// const_iterator cend()
extern "C"
void C_ZNK10QByteArray4cendEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->cend();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:413
// const_iterator constEnd()
extern "C"
void C_ZNK10QByteArray8constEndEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->constEnd();
}
// /usr/include/qt/QtCore/qbytearray.h:429
// void push_back(char)
extern "C"
void C_ZN10QByteArray9push_backEc(void *this_, char c) {
  ((QByteArray*)this_)->push_back(c);
}
// /usr/include/qt/QtCore/qbytearray.h:430
// void push_back(const char *)
extern "C"
void C_ZN10QByteArray9push_backEPKc(void *this_, const char * c) {
  ((QByteArray*)this_)->push_back(c);
}
// /usr/include/qt/QtCore/qbytearray.h:431
// void push_back(const class QByteArray &)
extern "C"
void C_ZN10QByteArray9push_backERKS_(void *this_, const QByteArray & a) {
  ((QByteArray*)this_)->push_back(a);
}
// /usr/include/qt/QtCore/qbytearray.h:432
// void push_front(char)
extern "C"
void C_ZN10QByteArray10push_frontEc(void *this_, char c) {
  ((QByteArray*)this_)->push_front(c);
}
// /usr/include/qt/QtCore/qbytearray.h:433
// void push_front(const char *)
extern "C"
void C_ZN10QByteArray10push_frontEPKc(void *this_, const char * c) {
  ((QByteArray*)this_)->push_front(c);
}
// /usr/include/qt/QtCore/qbytearray.h:434
// void push_front(const class QByteArray &)
extern "C"
void C_ZN10QByteArray10push_frontERKS_(void *this_, const QByteArray & a) {
  ((QByteArray*)this_)->push_front(a);
}
// static inline
// /usr/include/qt/QtCore/qbytearray.h:436
// QByteArray fromStdString(const std::string &)
extern "C"
void C_ZN10QByteArray13fromStdStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(const std::string & s) {
  /*return*/ QByteArray::fromStdString(s);
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:437
// std::string toStdString()
extern "C"
void C_ZNK10QByteArray11toStdStringB5cxx11Ev(void *this_) {
  /*return*/ ((QByteArray*)this_)->toStdString();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:439
// int count()
extern "C"
void C_ZNK10QByteArray5countEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->count();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:440
// int length()
extern "C"
void C_ZNK10QByteArray6lengthEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->length();
}
// /usr/include/qt/QtCore/qbytearray.h:441
// bool isNull()
extern "C"
void C_ZNK10QByteArray6isNullEv(void *this_) {
  /*return*/ ((QByteArray*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qbytearray.h:443
// void QByteArray(struct QByteArrayDataPtr)
extern "C"
void* C_ZN10QByteArrayC1E17QByteArrayDataPtr(QByteArrayDataPtr dd) {
  return new QByteArray(dd);
}
//  main block end
