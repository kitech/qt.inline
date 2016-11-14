// /usr/include/qt/QtCore/qstring.h
#include <qstring.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qstring.h:1369
// void QStringRef()
extern "C"
void* C_ZN10QStringRefC1Ev() {
  return new QStringRef();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1370
// void QStringRef(const class QString *, int, int)
extern "C"
void* C_ZN10QStringRefC1EPK7QStringii(const QString * string, int position, int size) {
  return new QStringRef(string, position, size);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1371
// void QStringRef(const class QString *)
extern "C"
void* C_ZN10QStringRefC1EPK7QString(const QString * string) {
  return new QStringRef(string);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1386
// void ~QStringRef()
extern "C"
void C_ZN10QStringRefD1Ev(void *this_) {
  delete (QStringRef*)(this_);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1389
// const QString * string()
extern "C"
void C_ZNK10QStringRef6stringEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->string();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1390
// int position()
extern "C"
void C_ZNK10QStringRef8positionEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->position();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1391
// int size()
extern "C"
void C_ZNK10QStringRef4sizeEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->size();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1392
// int count()
extern "C"
void C_ZNK10QStringRef5countEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->count();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1393
// int length()
extern "C"
void C_ZNK10QStringRef6lengthEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->length();
}
// /usr/include/qt/QtCore/qstring.h:1395
// int indexOf(const class QString &, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef7indexOfERK7QStringiN2Qt15CaseSensitivityE(void *this_, const QString & str, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->indexOf(str, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:1396
// int indexOf(class QChar, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef7indexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar ch, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->indexOf(ch, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:1397
// int indexOf(class QLatin1String, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef7indexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String str, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->indexOf(str, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:1398
// int indexOf(const class QStringRef &, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef7indexOfERKS_iN2Qt15CaseSensitivityE(void *this_, const QStringRef & str, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->indexOf(str, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:1399
// int lastIndexOf(const class QString &, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef11lastIndexOfERK7QStringiN2Qt15CaseSensitivityE(void *this_, const QString & str, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->lastIndexOf(str, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:1400
// int lastIndexOf(class QChar, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef11lastIndexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar ch, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->lastIndexOf(ch, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:1401
// int lastIndexOf(class QLatin1String, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef11lastIndexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String str, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->lastIndexOf(str, from, cs);
}
// /usr/include/qt/QtCore/qstring.h:1402
// int lastIndexOf(const class QStringRef &, int, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef11lastIndexOfERKS_iN2Qt15CaseSensitivityE(void *this_, const QStringRef & str, int from, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->lastIndexOf(str, from, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1404
// bool contains(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef8containsERK7QStringN2Qt15CaseSensitivityE(void *this_, const QString & str, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->contains(str, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1405
// bool contains(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef8containsE5QCharN2Qt15CaseSensitivityE(void *this_, QChar ch, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->contains(ch, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1406
// bool contains(class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String str, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->contains(str, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1407
// bool contains(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef8containsERKS_N2Qt15CaseSensitivityE(void *this_, const QStringRef & str, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->contains(str, cs);
}
// /usr/include/qt/QtCore/qstring.h:1409
// int count(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef5countERK7QStringN2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->count(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:1410
// int count(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef5countE5QCharN2Qt15CaseSensitivityE(void *this_, QChar c, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->count(c, cs);
}
// /usr/include/qt/QtCore/qstring.h:1411
// int count(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef5countERKS_N2Qt15CaseSensitivityE(void *this_, const QStringRef & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->count(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:1413
// QVector<QStringRef> split(const class QString &, class QString::SplitBehavior, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef5splitERK7QStringNS0_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, const QString & sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->split(sep, behavior, cs);
}
// /usr/include/qt/QtCore/qstring.h:1415
// QVector<QStringRef> split(class QChar, class QString::SplitBehavior, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef5splitE5QCharN7QString13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QChar sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->split(sep, behavior, cs);
}
// /usr/include/qt/QtCore/qstring.h:1418
// QStringRef left(int)
extern "C"
void C_ZNK10QStringRef4leftEi(void *this_, int n) {
  /*return*/ ((QStringRef*)this_)->left(n);
}
// /usr/include/qt/QtCore/qstring.h:1419
// QStringRef right(int)
extern "C"
void C_ZNK10QStringRef5rightEi(void *this_, int n) {
  /*return*/ ((QStringRef*)this_)->right(n);
}
// /usr/include/qt/QtCore/qstring.h:1420
// QStringRef mid(int, int)
extern "C"
void C_ZNK10QStringRef3midEii(void *this_, int pos, int n) {
  /*return*/ ((QStringRef*)this_)->mid(pos, n);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1422
// void truncate(int)
extern "C"
void C_ZN10QStringRef8truncateEi(void *this_, int pos) {
  ((QStringRef*)this_)->truncate(pos);
}
// /usr/include/qt/QtCore/qstring.h:1424
// bool startsWith(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef10startsWithERK7QStringN2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->startsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:1425
// bool startsWith(class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef10startsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->startsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:1426
// bool startsWith(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar c, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->startsWith(c, cs);
}
// /usr/include/qt/QtCore/qstring.h:1427
// bool startsWith(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef10startsWithERKS_N2Qt15CaseSensitivityE(void *this_, const QStringRef & c, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->startsWith(c, cs);
}
// /usr/include/qt/QtCore/qstring.h:1429
// bool endsWith(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef8endsWithERK7QStringN2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->endsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:1430
// bool endsWith(class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef8endsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->endsWith(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:1431
// bool endsWith(class QChar, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar c, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->endsWith(c, cs);
}
// /usr/include/qt/QtCore/qstring.h:1432
// bool endsWith(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef8endsWithERKS_N2Qt15CaseSensitivityE(void *this_, const QStringRef & c, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->endsWith(c, cs);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1436
// const QChar * unicode()
extern "C"
void C_ZNK10QStringRef7unicodeEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->unicode();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1441
// const QChar * data()
extern "C"
void C_ZNK10QStringRef4dataEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->data();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1442
// const QChar * constData()
extern "C"
void C_ZNK10QStringRef9constDataEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->constData();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1444
// const_iterator begin()
extern "C"
void C_ZNK10QStringRef5beginEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1445
// const_iterator cbegin()
extern "C"
void C_ZNK10QStringRef6cbeginEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->cbegin();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1446
// const_iterator end()
extern "C"
void C_ZNK10QStringRef3endEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1447
// const_iterator cend()
extern "C"
void C_ZNK10QStringRef4cendEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->cend();
}
// /usr/include/qt/QtCore/qstring.h:1457
// QByteArray toLatin1()
extern "C"
void C_ZNK10QStringRef8toLatin1Ev(void *this_) {
  /*return*/ ((QStringRef*)this_)->toLatin1();
}
// /usr/include/qt/QtCore/qstring.h:1458
// QByteArray toUtf8()
extern "C"
void C_ZNK10QStringRef6toUtf8Ev(void *this_) {
  /*return*/ ((QStringRef*)this_)->toUtf8();
}
// /usr/include/qt/QtCore/qstring.h:1459
// QByteArray toLocal8Bit()
extern "C"
void C_ZNK10QStringRef11toLocal8BitEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->toLocal8Bit();
}
// /usr/include/qt/QtCore/qstring.h:1460
// QVector<uint> toUcs4()
extern "C"
void C_ZNK10QStringRef6toUcs4Ev(void *this_) {
  /*return*/ ((QStringRef*)this_)->toUcs4();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1462
// void clear()
extern "C"
void C_ZN10QStringRef5clearEv(void *this_) {
  ((QStringRef*)this_)->clear();
}
// /usr/include/qt/QtCore/qstring.h:1463
// QString toString()
extern "C"
void C_ZNK10QStringRef8toStringEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->toString();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1464
// bool isEmpty()
extern "C"
void C_ZNK10QStringRef7isEmptyEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->isEmpty();
}
// inline
// /usr/include/qt/QtCore/qstring.h:1465
// bool isNull()
extern "C"
void C_ZNK10QStringRef6isNullEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->isNull();
}
// /usr/include/qt/QtCore/qstring.h:1467
// QStringRef appendTo(class QString *)
extern "C"
void C_ZNK10QStringRef8appendToEP7QString(void *this_, QString * string) {
  /*return*/ ((QStringRef*)this_)->appendTo(string);
}
// inline
// /usr/include/qt/QtCore/qstring.h:1469
// const QChar at(int)
extern "C"
void C_ZNK10QStringRef2atEi(void *this_, int i) {
  /*return*/ ((QStringRef*)this_)->at(i);
}
// /usr/include/qt/QtCore/qstring.h:1483
// int compare(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef7compareERK7QStringN2Qt15CaseSensitivityE(void *this_, const QString & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->compare(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:1484
// int compare(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef7compareERKS_N2Qt15CaseSensitivityE(void *this_, const QStringRef & s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->compare(s, cs);
}
// /usr/include/qt/QtCore/qstring.h:1485
// int compare(class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZNK10QStringRef7compareE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String s, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringRef*)this_)->compare(s, cs);
}
// static
// /usr/include/qt/QtCore/qstring.h:1486
// int compare(const class QStringRef &, const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZN10QStringRef7compareERKS_RK7QStringN2Qt15CaseSensitivityE(const QStringRef & s1, const QString & s2, Qt::CaseSensitivity a2) {
  /*return*/ QStringRef::compare(s1, s2, a2);
}
// static
// /usr/include/qt/QtCore/qstring.h:1488
// int compare(const class QStringRef &, const class QStringRef &, Qt::CaseSensitivity)
extern "C"
void C_ZN10QStringRef7compareERKS_S1_N2Qt15CaseSensitivityE(const QStringRef & s1, const QStringRef & s2, Qt::CaseSensitivity a2) {
  /*return*/ QStringRef::compare(s1, s2, a2);
}
// static
// /usr/include/qt/QtCore/qstring.h:1490
// int compare(const class QStringRef &, class QLatin1String, Qt::CaseSensitivity)
extern "C"
void C_ZN10QStringRef7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE(const QStringRef & s1, QLatin1String s2, Qt::CaseSensitivity cs) {
  /*return*/ QStringRef::compare(s1, s2, cs);
}
// /usr/include/qt/QtCore/qstring.h:1493
// int localeAwareCompare(const class QString &)
extern "C"
void C_ZNK10QStringRef18localeAwareCompareERK7QString(void *this_, const QString & s) {
  /*return*/ ((QStringRef*)this_)->localeAwareCompare(s);
}
// /usr/include/qt/QtCore/qstring.h:1494
// int localeAwareCompare(const class QStringRef &)
extern "C"
void C_ZNK10QStringRef18localeAwareCompareERKS_(void *this_, const QStringRef & s) {
  /*return*/ ((QStringRef*)this_)->localeAwareCompare(s);
}
// static
// /usr/include/qt/QtCore/qstring.h:1495
// int localeAwareCompare(const class QStringRef &, const class QString &)
extern "C"
void C_ZN10QStringRef18localeAwareCompareERKS_RK7QString(const QStringRef & s1, const QString & s2) {
  /*return*/ QStringRef::localeAwareCompare(s1, s2);
}
// static
// /usr/include/qt/QtCore/qstring.h:1496
// int localeAwareCompare(const class QStringRef &, const class QStringRef &)
extern "C"
void C_ZN10QStringRef18localeAwareCompareERKS_S1_(const QStringRef & s1, const QStringRef & s2) {
  /*return*/ QStringRef::localeAwareCompare(s1, s2);
}
// /usr/include/qt/QtCore/qstring.h:1498
// QStringRef trimmed()
extern "C"
void C_ZNK10QStringRef7trimmedEv(void *this_) {
  /*return*/ ((QStringRef*)this_)->trimmed();
}
// /usr/include/qt/QtCore/qstring.h:1499
// short toShort(_Bool *, int)
extern "C"
void C_ZNK10QStringRef7toShortEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QStringRef*)this_)->toShort(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:1500
// ushort toUShort(_Bool *, int)
extern "C"
void C_ZNK10QStringRef8toUShortEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QStringRef*)this_)->toUShort(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:1501
// int toInt(_Bool *, int)
extern "C"
void C_ZNK10QStringRef5toIntEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QStringRef*)this_)->toInt(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:1502
// uint toUInt(_Bool *, int)
extern "C"
void C_ZNK10QStringRef6toUIntEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QStringRef*)this_)->toUInt(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:1503
// long toLong(_Bool *, int)
extern "C"
void C_ZNK10QStringRef6toLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QStringRef*)this_)->toLong(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:1504
// ulong toULong(_Bool *, int)
extern "C"
void C_ZNK10QStringRef7toULongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QStringRef*)this_)->toULong(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:1505
// qlonglong toLongLong(_Bool *, int)
extern "C"
void C_ZNK10QStringRef10toLongLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QStringRef*)this_)->toLongLong(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:1506
// qulonglong toULongLong(_Bool *, int)
extern "C"
void C_ZNK10QStringRef11toULongLongEPbi(void *this_, bool * ok, int base) {
  /*return*/ ((QStringRef*)this_)->toULongLong(ok, base);
}
// /usr/include/qt/QtCore/qstring.h:1507
// float toFloat(_Bool *)
extern "C"
void C_ZNK10QStringRef7toFloatEPb(void *this_, bool * ok) {
  /*return*/ ((QStringRef*)this_)->toFloat(ok);
}
// /usr/include/qt/QtCore/qstring.h:1508
// double toDouble(_Bool *)
extern "C"
void C_ZNK10QStringRef8toDoubleEPb(void *this_, bool * ok) {
  /*return*/ ((QStringRef*)this_)->toDouble(ok);
}