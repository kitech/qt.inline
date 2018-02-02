//  header block begin
// /usr/include/qt/QtCore/qstring.h
#include <qstring.h>
#include <QtCore>

// QStringRef is pure virtual: false
// QStringRef has virtual projected: false
//  header block end

//  main block begin

class MyQStringRef : public QStringRef {
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
extern "C"
void* C_ZN10QStringRefC2Ev() {
  return  new QStringRef();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1421
// [-2] void QStringRef(const class QString *, int, int)
extern "C"
void* C_ZN10QStringRefC2EPK7QStringii(const QString * string, int position, int size) {
  return  new QStringRef(string, position, size);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1422
// [-2] void QStringRef(const class QString *)
extern "C"
void* C_ZN10QStringRefC2EPK7QString(const QString * string) {
  return  new QStringRef(string);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1438
// [-2] void ~QStringRef()
extern "C"
void C_ZN10QStringRefD2Ev(void *this_) {
  delete (QStringRef*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1441
// [8] const QString * string()
extern "C"
void* C_ZNK10QStringRef6stringEv(void *this_) {
  return (void*)((QStringRef*)this_)->string();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1442
// [4] int position()
extern "C"
int C_ZNK10QStringRef8positionEv(void *this_) {
  return (int)((QStringRef*)this_)->position();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1443
// [4] int size()
extern "C"
int C_ZNK10QStringRef4sizeEv(void *this_) {
  return (int)((QStringRef*)this_)->size();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1444
// [4] int count()
extern "C"
int C_ZNK10QStringRef5countEv(void *this_) {
  return (int)((QStringRef*)this_)->count();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1445
// [4] int length()
extern "C"
int C_ZNK10QStringRef6lengthEv(void *this_) {
  return (int)((QStringRef*)this_)->length();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1447
// [4] int indexOf(const class QString &, int, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef7indexOfERK7QStringiN2Qt15CaseSensitivityE(void *this_, QString* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1448
// [4] int indexOf(class QChar, int, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef7indexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar* ch, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*ch, from, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1449
// [4] int indexOf(class QLatin1String, int, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef7indexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1450
// [4] int indexOf(const class QStringRef &, int, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef7indexOfERKS_iN2Qt15CaseSensitivityE(void *this_, QStringRef* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1451
// [4] int lastIndexOf(const class QString &, int, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef11lastIndexOfERK7QStringiN2Qt15CaseSensitivityE(void *this_, QString* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1452
// [4] int lastIndexOf(class QChar, int, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef11lastIndexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar* ch, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*ch, from, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1453
// [4] int lastIndexOf(class QLatin1String, int, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef11lastIndexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1454
// [4] int lastIndexOf(const class QStringRef &, int, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef11lastIndexOfERKS_iN2Qt15CaseSensitivityE(void *this_, QStringRef* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1456
// [1] bool contains(const class QString &, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8containsERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1457
// [1] bool contains(class QChar, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8containsE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* ch, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*ch, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1458
// [1] bool contains(class QLatin1String, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1459
// [1] bool contains(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8containsERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1461
// [4] int count(const class QString &, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef5countERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1462
// [4] int count(class QChar, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef5countE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*c, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1463
// [4] int count(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef5countERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1470
// [16] QStringRef left(int)
extern "C"
void* C_ZNK10QStringRef4leftEi(void *this_, int n) {
  auto rv = ((QStringRef*)this_)->left(n);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1471
// [16] QStringRef right(int)
extern "C"
void* C_ZNK10QStringRef5rightEi(void *this_, int n) {
  auto rv = ((QStringRef*)this_)->right(n);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1472
// [16] QStringRef mid(int, int)
extern "C"
void* C_ZNK10QStringRef3midEii(void *this_, int pos, int n) {
  auto rv = ((QStringRef*)this_)->mid(pos, n);
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1473
// [16] QStringRef chopped(int)
extern "C"
void* C_ZNK10QStringRef7choppedEi(void *this_, int n) {
  auto rv = ((QStringRef*)this_)->chopped(n);
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1476
// [-2] void truncate(int)
extern "C"
void C_ZN10QStringRef8truncateEi(void *this_, int pos) {
  ((QStringRef*)this_)->truncate(pos);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1477
// [-2] void chop(int)
extern "C"
void C_ZN10QStringRef4chopEi(void *this_, int n) {
  ((QStringRef*)this_)->chop(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1485
// [1] bool isRightToLeft()
extern "C"
bool C_ZNK10QStringRef13isRightToLeftEv(void *this_) {
  return (bool)((QStringRef*)this_)->isRightToLeft();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1487
// [1] bool startsWith(class QStringView, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef10startsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1489
// [1] bool startsWith(class QLatin1String, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef10startsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1490
// [1] bool startsWith(class QChar, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*c, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1492
// [1] bool startsWith(const class QString &, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef10startsWithERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1493
// [1] bool startsWith(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef10startsWithERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*c, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1496
// [1] bool endsWith(class QStringView, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8endsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1498
// [1] bool endsWith(class QLatin1String, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8endsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1499
// [1] bool endsWith(class QChar, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*c, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1501
// [1] bool endsWith(const class QString &, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8endsWithERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1502
// [1] bool endsWith(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
bool C_ZNK10QStringRef8endsWithERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*c, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1507
// [8] const QChar * unicode()
extern "C"
void* C_ZNK10QStringRef7unicodeEv(void *this_) {
  return (void*)((QStringRef*)this_)->unicode();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1513
// [8] const QChar * data()
extern "C"
void* C_ZNK10QStringRef4dataEv(void *this_) {
  return (void*)((QStringRef*)this_)->data();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1514
// [8] const QChar * constData()
extern "C"
void* C_ZNK10QStringRef9constDataEv(void *this_) {
  return (void*)((QStringRef*)this_)->constData();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1516
// [8] QStringRef::const_iterator begin()
extern "C"
void C_ZNK10QStringRef5beginEv(void *this_) {
  auto rv = ((QStringRef*)this_)->begin();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1517
// [8] QStringRef::const_iterator cbegin()
extern "C"
void C_ZNK10QStringRef6cbeginEv(void *this_) {
  auto rv = ((QStringRef*)this_)->cbegin();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1518
// [8] QStringRef::const_iterator constBegin()
extern "C"
void C_ZNK10QStringRef10constBeginEv(void *this_) {
  auto rv = ((QStringRef*)this_)->constBegin();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1519
// [8] QStringRef::const_iterator end()
extern "C"
void C_ZNK10QStringRef3endEv(void *this_) {
  auto rv = ((QStringRef*)this_)->end();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1520
// [8] QStringRef::const_iterator cend()
extern "C"
void C_ZNK10QStringRef4cendEv(void *this_) {
  auto rv = ((QStringRef*)this_)->cend();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1521
// [8] QStringRef::const_iterator constEnd()
extern "C"
void C_ZNK10QStringRef8constEndEv(void *this_) {
  auto rv = ((QStringRef*)this_)->constEnd();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1531
// [8] QByteArray toLatin1()
extern "C"
void* C_ZNK10QStringRef8toLatin1Ev(void *this_) {
  auto rv = ((QStringRef*)this_)->toLatin1();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1532
// [8] QByteArray toUtf8()
extern "C"
void* C_ZNK10QStringRef6toUtf8Ev(void *this_) {
  auto rv = ((QStringRef*)this_)->toUtf8();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1533
// [8] QByteArray toLocal8Bit()
extern "C"
void* C_ZNK10QStringRef11toLocal8BitEv(void *this_) {
  auto rv = ((QStringRef*)this_)->toLocal8Bit();
return new QByteArray(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1536
// [-2] void clear()
extern "C"
void C_ZN10QStringRef5clearEv(void *this_) {
  ((QStringRef*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1537
// [8] QString toString()
extern "C"
void* C_ZNK10QStringRef8toStringEv(void *this_) {
  auto rv = ((QStringRef*)this_)->toString();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1538
// [1] bool isEmpty()
extern "C"
bool C_ZNK10QStringRef7isEmptyEv(void *this_) {
  return (bool)((QStringRef*)this_)->isEmpty();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1539
// [1] bool isNull()
extern "C"
bool C_ZNK10QStringRef6isNullEv(void *this_) {
  return (bool)((QStringRef*)this_)->isNull();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1541
// [16] QStringRef appendTo(class QString *)
extern "C"
void* C_ZNK10QStringRef8appendToEP7QString(void *this_, QString * string) {
  auto rv = ((QStringRef*)this_)->appendTo(string);
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1543
// [2] const QChar at(int)
extern "C"
void* C_ZNK10QStringRef2atEi(void *this_, int i) {
  auto rv = ((QStringRef*)this_)->at(i);
return new QChar(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1546
// [2] QChar front()
extern "C"
void* C_ZNK10QStringRef5frontEv(void *this_) {
  auto rv = ((QStringRef*)this_)->front();
return new QChar(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1547
// [2] QChar back()
extern "C"
void* C_ZNK10QStringRef4backEv(void *this_) {
  auto rv = ((QStringRef*)this_)->back();
return new QChar(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1559
// [4] int compare(const class QString &, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef7compareERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1560
// [4] int compare(const class QStringRef &, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef7compareERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1561
// [4] int compare(class QLatin1String, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef7compareE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1563
// [4] int compare(const class QByteArray &, Qt::CaseSensitivity)
extern "C"
int C_ZNK10QStringRef7compareERK10QByteArrayN2Qt15CaseSensitivityE(void *this_, QByteArray* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1566
// [4] int compare(const class QStringRef &, const class QString &, Qt::CaseSensitivity)
extern "C"
int C_ZN10QStringRef7compareERKS_RK7QStringN2Qt15CaseSensitivityE(QStringRef* s1, QString* s2, Qt::CaseSensitivity arg2) {
  return (int)QStringRef::compare(*s1, *s2, arg2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1568
// [4] int compare(const class QStringRef &, const class QStringRef &, Qt::CaseSensitivity)
extern "C"
int C_ZN10QStringRef7compareERKS_S1_N2Qt15CaseSensitivityE(QStringRef* s1, QStringRef* s2, Qt::CaseSensitivity arg2) {
  return (int)QStringRef::compare(*s1, *s2, arg2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1570
// [4] int compare(const class QStringRef &, class QLatin1String, Qt::CaseSensitivity)
extern "C"
int C_ZN10QStringRef7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE(QStringRef* s1, QLatin1String* s2, Qt::CaseSensitivity cs) {
  return (int)QStringRef::compare(*s1, *s2, cs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1573
// [4] int localeAwareCompare(const class QString &)
extern "C"
int C_ZNK10QStringRef18localeAwareCompareERK7QString(void *this_, QString* s) {
  return (int)((QStringRef*)this_)->localeAwareCompare(*s);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1574
// [4] int localeAwareCompare(const class QStringRef &)
extern "C"
int C_ZNK10QStringRef18localeAwareCompareERKS_(void *this_, QStringRef* s) {
  return (int)((QStringRef*)this_)->localeAwareCompare(*s);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1575
// [4] int localeAwareCompare(const class QStringRef &, const class QString &)
extern "C"
int C_ZN10QStringRef18localeAwareCompareERKS_RK7QString(QStringRef* s1, QString* s2) {
  return (int)QStringRef::localeAwareCompare(*s1, *s2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1576
// [4] int localeAwareCompare(const class QStringRef &, const class QStringRef &)
extern "C"
int C_ZN10QStringRef18localeAwareCompareERKS_S1_(QStringRef* s1, QStringRef* s2) {
  return (int)QStringRef::localeAwareCompare(*s1, *s2);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1578
// [16] QStringRef trimmed()
extern "C"
void* C_ZNK10QStringRef7trimmedEv(void *this_) {
  auto rv = ((QStringRef*)this_)->trimmed();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1579
// [2] short toShort(_Bool *, int)
extern "C"
short C_ZNK10QStringRef7toShortEPbi(void *this_, bool * ok, int base) {
  return (short)((QStringRef*)this_)->toShort(ok, base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1580
// [2] ushort toUShort(_Bool *, int)
extern "C"
ushort C_ZNK10QStringRef8toUShortEPbi(void *this_, bool * ok, int base) {
  return (ushort)((QStringRef*)this_)->toUShort(ok, base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1581
// [4] int toInt(_Bool *, int)
extern "C"
int C_ZNK10QStringRef5toIntEPbi(void *this_, bool * ok, int base) {
  return (int)((QStringRef*)this_)->toInt(ok, base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1582
// [4] uint toUInt(_Bool *, int)
extern "C"
uint C_ZNK10QStringRef6toUIntEPbi(void *this_, bool * ok, int base) {
  return (uint)((QStringRef*)this_)->toUInt(ok, base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1583
// [8] long toLong(_Bool *, int)
extern "C"
long C_ZNK10QStringRef6toLongEPbi(void *this_, bool * ok, int base) {
  return (long)((QStringRef*)this_)->toLong(ok, base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1584
// [8] ulong toULong(_Bool *, int)
extern "C"
ulong C_ZNK10QStringRef7toULongEPbi(void *this_, bool * ok, int base) {
  return (ulong)((QStringRef*)this_)->toULong(ok, base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1585
// [8] qlonglong toLongLong(_Bool *, int)
extern "C"
qlonglong C_ZNK10QStringRef10toLongLongEPbi(void *this_, bool * ok, int base) {
  return (qlonglong)((QStringRef*)this_)->toLongLong(ok, base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1586
// [8] qulonglong toULongLong(_Bool *, int)
extern "C"
qulonglong C_ZNK10QStringRef11toULongLongEPbi(void *this_, bool * ok, int base) {
  return (qulonglong)((QStringRef*)this_)->toULongLong(ok, base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1587
// [4] float toFloat(_Bool *)
extern "C"
float C_ZNK10QStringRef7toFloatEPb(void *this_, bool * ok) {
  return (float)((QStringRef*)this_)->toFloat(ok);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1588
// [8] double toDouble(_Bool *)
extern "C"
double C_ZNK10QStringRef8toDoubleEPb(void *this_, bool * ok) {
  return (double)((QStringRef*)this_)->toDouble(ok);
}
//  main block end
