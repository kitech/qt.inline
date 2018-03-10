//  header block begin
// since 0x040300
// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringRef is pure virtual: false
// QStringRef has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStringRef : public QStringRef {
public:
  virtual ~MyQStringRef() {}
// void QStringRef()
MyQStringRef() : QStringRef() {}
// void QStringRef(const class QString *, int, int)
MyQStringRef(const QString * string, int position, int size) : QStringRef(string, position, size) {}
// void QStringRef(const class QString *)
MyQStringRef(const QString * string) : QStringRef(string) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1420
// [-2] void QStringRef()
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefC2Ev() {
  return  new QStringRef();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1421
// [-2] void QStringRef(const class QString *, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefC2EPK7QStringii(const QString * string, int position, int size) {
  return  new QStringRef(string, position, size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1422
// [-2] void QStringRef(const class QString *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefC2EPK7QString(const QString * string) {
  return  new QStringRef(string);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1431
// [16] QStringRef & operator=(class QStringRef &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefaSEOS_(void *this_, QStringRef && other) {
  auto& rv = ((QStringRef*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1433
// [16] QStringRef & operator=(const class QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefaSERKS_(void *this_, QStringRef* other) {
  auto& rv = ((QStringRef*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1438
// [-2] void ~QStringRef()
extern "C" Q_DECL_EXPORT
void C_ZN10QStringRefD2Ev(void *this_) {
  delete (QStringRef*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1441
// [8] const QString * string()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef6stringEv(void *this_) {
  return (void*)((QStringRef*)this_)->string();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1442
// [4] int position()
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef8positionEv(void *this_) {
  return (int)((QStringRef*)this_)->position();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1443
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef4sizeEv(void *this_) {
  return (int)((QStringRef*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1444
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5countEv(void *this_) {
  return (int)((QStringRef*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1445
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef6lengthEv(void *this_) {
  return (int)((QStringRef*)this_)->length();
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1447
// [4] int indexOf(const class QString &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7indexOfERK7QStringiN2Qt15CaseSensitivityE(void *this_, QString* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1448
// [4] int indexOf(class QChar, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7indexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar* ch, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*ch, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1449
// [4] int indexOf(class QLatin1String, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7indexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1450
// [4] int indexOf(const class QStringRef &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7indexOfERKS_iN2Qt15CaseSensitivityE(void *this_, QStringRef* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1451
// [4] int lastIndexOf(const class QString &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef11lastIndexOfERK7QStringiN2Qt15CaseSensitivityE(void *this_, QString* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1452
// [4] int lastIndexOf(class QChar, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef11lastIndexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar* ch, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*ch, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1453
// [4] int lastIndexOf(class QLatin1String, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef11lastIndexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1454
// [4] int lastIndexOf(const class QStringRef &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef11lastIndexOfERKS_iN2Qt15CaseSensitivityE(void *this_, QStringRef* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1456
// [1] bool contains(const class QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8containsERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1457
// [1] bool contains(class QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8containsE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* ch, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*ch, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1458
// [1] bool contains(class QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1459
// [1] bool contains(const class QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8containsERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1461
// [4] int count(const class QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5countERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1462
// [4] int count(class QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5countE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1463
// [4] int count(const class QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5countERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qstring.h:1470
// [16] QStringRef left(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef4leftEi(void *this_, int n) {
  auto rv = ((QStringRef*)this_)->left(n);
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qstring.h:1471
// [16] QStringRef right(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef5rightEi(void *this_, int n) {
  auto rv = ((QStringRef*)this_)->right(n);
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qstring.h:1472
// [16] QStringRef mid(int, int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef3midEii(void *this_, int pos, int n) {
  auto rv = ((QStringRef*)this_)->mid(pos, n);
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:1473
// [16] QStringRef chopped(int)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef7choppedEi(void *this_, int n) {
  auto rv = ((QStringRef*)this_)->chopped(n);
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstring.h:1476
// [-2] void truncate(int)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN10QStringRef8truncateEi(void *this_, int pos) {
  ((QStringRef*)this_)->truncate(pos);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:1477
// [-2] void chop(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN10QStringRef4chopEi(void *this_, int n) {
  ((QStringRef*)this_)->chop(n);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtCore/qstring.h:1485
// [1] bool isRightToLeft()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef13isRightToLeftEv(void *this_) {
  return (bool)((QStringRef*)this_)->isRightToLeft();
}
#endif // QT_VERSION >= 0x050900

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:1487
// [1] bool startsWith(class QStringView, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1489
// [1] bool startsWith(class QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1490
// [1] bool startsWith(class QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1492
// [1] bool startsWith(const class QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1493
// [1] bool startsWith(const class QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:1496
// [1] bool endsWith(class QStringView, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1498
// [1] bool endsWith(class QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1499
// [1] bool endsWith(class QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1501
// [1] bool endsWith(const class QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1502
// [1] bool endsWith(const class QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1505
// [16] QStringRef & operator=(const class QString *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefaSEPK7QString(void *this_, const QString * string) {
  auto& rv = ((QStringRef*)this_)->operator=(string);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1507
// [8] const QChar * unicode()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef7unicodeEv(void *this_) {
  return (void*)((QStringRef*)this_)->unicode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1513
// [8] const QChar * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef4dataEv(void *this_) {
  return (void*)((QStringRef*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1514
// [8] const QChar * constData()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef9constDataEv(void *this_) {
  return (void*)((QStringRef*)this_)->constData();
}

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstring.h:1516
// [8] QStringRef::const_iterator begin()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef5beginEv(void *this_) {
  auto rv = ((QStringRef*)this_)->begin();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstring.h:1517
// [8] QStringRef::const_iterator cbegin()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef6cbeginEv(void *this_) {
  auto rv = ((QStringRef*)this_)->cbegin();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtCore/qstring.h:1518
// [8] QStringRef::const_iterator constBegin()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef10constBeginEv(void *this_) {
  auto rv = ((QStringRef*)this_)->constBegin();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050900

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstring.h:1519
// [8] QStringRef::const_iterator end()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef3endEv(void *this_) {
  auto rv = ((QStringRef*)this_)->end();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstring.h:1520
// [8] QStringRef::const_iterator cend()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef4cendEv(void *this_) {
  auto rv = ((QStringRef*)this_)->cend();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtCore/qstring.h:1521
// [8] QStringRef::const_iterator constEnd()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef8constEndEv(void *this_) {
  auto rv = ((QStringRef*)this_)->constEnd();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1531
// [8] QByteArray toLatin1()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef8toLatin1Ev(void *this_) {
  auto rv = ((QStringRef*)this_)->toLatin1();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1532
// [8] QByteArray toUtf8()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef6toUtf8Ev(void *this_) {
  auto rv = ((QStringRef*)this_)->toUtf8();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1533
// [8] QByteArray toLocal8Bit()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef11toLocal8BitEv(void *this_) {
  auto rv = ((QStringRef*)this_)->toLocal8Bit();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1536
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN10QStringRef5clearEv(void *this_) {
  ((QStringRef*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1537
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef8toStringEv(void *this_) {
  auto rv = ((QStringRef*)this_)->toString();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1538
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef7isEmptyEv(void *this_) {
  return (bool)((QStringRef*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1539
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef6isNullEv(void *this_) {
  return (bool)((QStringRef*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1541
// [16] QStringRef appendTo(class QString *)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef8appendToEP7QString(void *this_, QString * string) {
  auto rv = ((QStringRef*)this_)->appendTo(string);
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1543
// [2] const QChar at(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef2atEi(void *this_, int i) {
  auto rv = ((QStringRef*)this_)->at(i);
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1545
// [2] QChar operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRefixEi(void *this_, int i) {
  auto rv = ((QStringRef*)this_)->operator[](i);
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:1546
// [2] QChar front()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef5frontEv(void *this_) {
  auto rv = ((QStringRef*)this_)->front();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:1547
// [2] QChar back()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef4backEv(void *this_) {
  auto rv = ((QStringRef*)this_)->back();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1551
// [1] bool operator==(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefeqEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator==(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1552
// [1] bool operator!=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefneEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator!=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1553
// [1] bool operator<(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefltEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator<(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1554
// [1] bool operator<=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefleEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator<=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1555
// [1] bool operator>(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefgtEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator>(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1556
// [1] bool operator>=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefgeEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator>=(s);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1559
// [4] int compare(const class QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7compareERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1560
// [4] int compare(const class QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7compareERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1561
// [4] int compare(class QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7compareE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:1563
// [4] int compare(const class QByteArray &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7compareERK10QByteArrayN2Qt15CaseSensitivityE(void *this_, QByteArray* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1566
// [4] int compare(const class QStringRef &, const class QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef7compareERKS_RK7QStringN2Qt15CaseSensitivityE(QStringRef* s1, QString* s2, Qt::CaseSensitivity arg2) {
  return (int)QStringRef::compare(*s1, *s2, arg2);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1568
// [4] int compare(const class QStringRef &, const class QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef7compareERKS_S1_N2Qt15CaseSensitivityE(QStringRef* s1, QStringRef* s2, Qt::CaseSensitivity arg2) {
  return (int)QStringRef::compare(*s1, *s2, arg2);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1570
// [4] int compare(const class QStringRef &, class QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE(QStringRef* s1, QLatin1String* s2, Qt::CaseSensitivity cs) {
  return (int)QStringRef::compare(*s1, *s2, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1573
// [4] int localeAwareCompare(const class QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef18localeAwareCompareERK7QString(void *this_, QString* s) {
  return (int)((QStringRef*)this_)->localeAwareCompare(*s);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1574
// [4] int localeAwareCompare(const class QStringRef &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef18localeAwareCompareERKS_(void *this_, QStringRef* s) {
  return (int)((QStringRef*)this_)->localeAwareCompare(*s);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1575
// [4] int localeAwareCompare(const class QStringRef &, const class QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef18localeAwareCompareERKS_RK7QString(QStringRef* s1, QString* s2) {
  return (int)QStringRef::localeAwareCompare(*s1, *s2);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1576
// [4] int localeAwareCompare(const class QStringRef &, const class QStringRef &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef18localeAwareCompareERKS_S1_(QStringRef* s1, QStringRef* s2) {
  return (int)QStringRef::localeAwareCompare(*s1, *s2);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1578
// [16] QStringRef trimmed()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef7trimmedEv(void *this_) {
  auto rv = ((QStringRef*)this_)->trimmed();
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1579
// [2] short toShort(_Bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
short C_ZNK10QStringRef7toShortEPbi(void *this_, bool * ok, int base) {
  return (short)((QStringRef*)this_)->toShort(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1580
// [2] ushort toUShort(_Bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
ushort C_ZNK10QStringRef8toUShortEPbi(void *this_, bool * ok, int base) {
  return (ushort)((QStringRef*)this_)->toUShort(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1581
// [4] int toInt(_Bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5toIntEPbi(void *this_, bool * ok, int base) {
  return (int)((QStringRef*)this_)->toInt(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1582
// [4] uint toUInt(_Bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
uint C_ZNK10QStringRef6toUIntEPbi(void *this_, bool * ok, int base) {
  return (uint)((QStringRef*)this_)->toUInt(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1583
// [8] long toLong(_Bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
long C_ZNK10QStringRef6toLongEPbi(void *this_, bool * ok, int base) {
  return (long)((QStringRef*)this_)->toLong(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1584
// [8] ulong toULong(_Bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
ulong C_ZNK10QStringRef7toULongEPbi(void *this_, bool * ok, int base) {
  return (ulong)((QStringRef*)this_)->toULong(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1585
// [8] qlonglong toLongLong(_Bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK10QStringRef10toLongLongEPbi(void *this_, bool * ok, int base) {
  return (qlonglong)((QStringRef*)this_)->toLongLong(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1586
// [8] qulonglong toULongLong(_Bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK10QStringRef11toULongLongEPbi(void *this_, bool * ok, int base) {
  return (qulonglong)((QStringRef*)this_)->toULongLong(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1587
// [4] float toFloat(_Bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
float C_ZNK10QStringRef7toFloatEPb(void *this_, bool * ok) {
  return (float)((QStringRef*)this_)->toFloat(ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1588
// [8] double toDouble(_Bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
double C_ZNK10QStringRef8toDoubleEPb(void *this_, bool * ok) {
  return (double)((QStringRef*)this_)->toDouble(ok);
}
#endif // QT_VERSION >= 0x050100

//  main block end
