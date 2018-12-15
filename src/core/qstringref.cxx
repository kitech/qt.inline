//  header block begin

// since 0x040300
// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringRef is pure virtual: false
// QStringRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStringRef_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStringRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStringRef_t qt_meta_stringdata_MyQStringRef = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQStringRef"
  },
  "MyQStringRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStringRef[] = {
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
class Q_DECL_EXPORT MyQStringRef : public QStringRef {
public:
  virtual ~MyQStringRef() {}
// void QStringRef()
MyQStringRef() : QStringRef() {}
// void QStringRef(const QString *, int, int)
MyQStringRef(const QString * string, int position, int size) : QStringRef(string, position, size) {}
// void QStringRef(const QString *)
MyQStringRef(const QString * string) : QStringRef(string) {}
// void QStringRef(const QStringRef &)
MyQStringRef(const QStringRef & other) : QStringRef(other) {}
// void QStringRef(QStringRef &&)
MyQStringRef(QStringRef && other) : QStringRef(other) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1436
// [-2] void QStringRef()
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefC2Ev() {
  return  new QStringRef();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1437
// [-2] void QStringRef(const QString *, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefC2EPK7QStringii(const QString * string, int position, int size) {
  return  new QStringRef(string, position, size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1438
// [-2] void QStringRef(const QString *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefC2EPK7QString(const QString * string) {
  return  new QStringRef(string);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1442
// [-2] void QStringRef(const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefC2ERKS_(QStringRef* other) {
  return  new QStringRef(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1446
// [-2] void QStringRef(QStringRef &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefC2EOS_(QStringRef && other) {
  return  new QStringRef(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1447
// [16] QStringRef & operator=(QStringRef &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefaSEOS_(void *this_, QStringRef && other) {
  auto& rv = ((QStringRef*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1449
// [16] QStringRef & operator=(const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefaSERKS_(void *this_, QStringRef* other) {
  auto& rv = ((QStringRef*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1454
// [-2] void ~QStringRef()
extern "C" Q_DECL_EXPORT
void C_ZN10QStringRefD2Ev(void *this_) {
  delete (QStringRef*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1457
// [8] const QString * string()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef6stringEv(void *this_) {
  return (void*)((QStringRef*)this_)->string();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1458
// [4] int position()
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef8positionEv(void *this_) {
  return (int)((QStringRef*)this_)->position();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1459
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef4sizeEv(void *this_) {
  return (int)((QStringRef*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1460
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5countEv(void *this_) {
  return (int)((QStringRef*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1461
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef6lengthEv(void *this_) {
  return (int)((QStringRef*)this_)->length();
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1463
// [4] int indexOf(const QString &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7indexOfERK7QStringiN2Qt15CaseSensitivityE(void *this_, QString* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1464
// [4] int indexOf(QChar, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7indexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar* ch, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*ch, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1465
// [4] int indexOf(QLatin1String, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7indexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1466
// [4] int indexOf(const QStringRef &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7indexOfERKS_iN2Qt15CaseSensitivityE(void *this_, QStringRef* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->indexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1467
// [4] int lastIndexOf(const QString &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef11lastIndexOfERK7QStringiN2Qt15CaseSensitivityE(void *this_, QString* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1468
// [4] int lastIndexOf(QChar, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef11lastIndexOfE5QChariN2Qt15CaseSensitivityE(void *this_, QChar* ch, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*ch, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1469
// [4] int lastIndexOf(QLatin1String, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef11lastIndexOfE13QLatin1StringiN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1470
// [4] int lastIndexOf(const QStringRef &, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef11lastIndexOfERKS_iN2Qt15CaseSensitivityE(void *this_, QStringRef* str, int from, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->lastIndexOf(*str, from, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1472
// [1] bool contains(const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8containsERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1473
// [1] bool contains(QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8containsE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* ch, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*ch, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1474
// [1] bool contains(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1475
// [1] bool contains(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8containsERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->contains(*str, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1477
// [4] int count(const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5countERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1478
// [4] int count(QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5countE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1479
// [4] int count(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5countERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->count(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstring.h:1481
// [-2] QVector<QStringRef> split(const QString &, QString::SplitBehavior, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef5splitERK7QStringNS0_13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QString* sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  auto rv = ((QStringRef*)this_)->split(*sep, behavior, cs);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstring.h:1483
// [-2] QVector<QStringRef> split(QChar, QString::SplitBehavior, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef5splitE5QCharN7QString13SplitBehaviorEN2Qt15CaseSensitivityE(void *this_, QChar* sep, QString::SplitBehavior behavior, Qt::CaseSensitivity cs) {
  auto rv = ((QStringRef*)this_)->split(*sep, behavior, cs);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qstring.h:1486
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
// /usr/include/qt/QtCore/qstring.h:1487
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
// /usr/include/qt/QtCore/qstring.h:1488
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
// /usr/include/qt/QtCore/qstring.h:1489
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
// /usr/include/qt/QtCore/qstring.h:1492
// [-2] void truncate(int)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN10QStringRef8truncateEi(void *this_, int pos) {
  ((QStringRef*)this_)->truncate(pos);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:1493
// [-2] void chop(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN10QStringRef4chopEi(void *this_, int n) {
  ((QStringRef*)this_)->chop(n);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtCore/qstring.h:1501
// [1] bool isRightToLeft()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef13isRightToLeftEv(void *this_) {
  return (bool)((QStringRef*)this_)->isRightToLeft();
}
#endif // QT_VERSION >= 0x050900

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:1503
// [1] bool startsWith(QStringView, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1505
// [1] bool startsWith(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1506
// [1] bool startsWith(QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1508
// [1] bool startsWith(const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1509
// [1] bool startsWith(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef10startsWithERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->startsWith(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:1512
// [1] bool endsWith(QStringView, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithE11QStringViewN2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1514
// [1] bool endsWith(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1515
// [1] bool endsWith(QChar, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1517
// [1] bool endsWith(const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*s, cs);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1518
// [1] bool endsWith(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef8endsWithERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringRef*)this_)->endsWith(*c, cs);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1521
// [16] QStringRef & operator=(const QString *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStringRefaSEPK7QString(void *this_, const QString * string) {
  auto& rv = ((QStringRef*)this_)->operator=(string);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1523
// [8] const QChar * unicode()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef7unicodeEv(void *this_) {
  return (void*)((QStringRef*)this_)->unicode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1529
// [8] const QChar * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef4dataEv(void *this_) {
  return (void*)((QStringRef*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1530
// [8] const QChar * constData()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef9constDataEv(void *this_) {
  return (void*)((QStringRef*)this_)->constData();
}

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstring.h:1532
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
// /usr/include/qt/QtCore/qstring.h:1533
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
// /usr/include/qt/QtCore/qstring.h:1534
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
// /usr/include/qt/QtCore/qstring.h:1535
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
// /usr/include/qt/QtCore/qstring.h:1536
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
// /usr/include/qt/QtCore/qstring.h:1537
// [8] QStringRef::const_iterator constEnd()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef8constEndEv(void *this_) {
  auto rv = ((QStringRef*)this_)->constEnd();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050900

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qstring.h:1538
// [8] QStringRef::const_reverse_iterator rbegin()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
QStringRef::const_reverse_iterator* C_ZNK10QStringRef6rbeginEv(void *this_) {
  auto rv = ((QStringRef*)this_)->rbegin();
return new QStringRef::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050700

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qstring.h:1539
// [8] QStringRef::const_reverse_iterator crbegin()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
QStringRef::const_reverse_iterator* C_ZNK10QStringRef7crbeginEv(void *this_) {
  auto rv = ((QStringRef*)this_)->crbegin();
return new QStringRef::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050700

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qstring.h:1540
// [8] QStringRef::const_reverse_iterator rend()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
QStringRef::const_reverse_iterator* C_ZNK10QStringRef4rendEv(void *this_) {
  auto rv = ((QStringRef*)this_)->rend();
return new QStringRef::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050700

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qstring.h:1541
// [8] QStringRef::const_reverse_iterator crend()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
QStringRef::const_reverse_iterator* C_ZNK10QStringRef5crendEv(void *this_) {
  auto rv = ((QStringRef*)this_)->crend();
return new QStringRef::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1547
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
// /usr/include/qt/QtCore/qstring.h:1548
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
// /usr/include/qt/QtCore/qstring.h:1549
// [8] QByteArray toLocal8Bit()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef11toLocal8BitEv(void *this_) {
  auto rv = ((QStringRef*)this_)->toLocal8Bit();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstring.h:1550
// [8] QVector<uint> toUcs4()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZNK10QStringRef6toUcs4Ev(void *this_) {
  auto rv = ((QStringRef*)this_)->toUcs4();
/*return rv;*/
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1552
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN10QStringRef5clearEv(void *this_) {
  ((QStringRef*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1553
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef8toStringEv(void *this_) {
  auto rv = ((QStringRef*)this_)->toString();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1554
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef7isEmptyEv(void *this_) {
  return (bool)((QStringRef*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1555
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRef6isNullEv(void *this_) {
  return (bool)((QStringRef*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1557
// [16] QStringRef appendTo(QString *)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef8appendToEP7QString(void *this_, QString * string) {
  auto rv = ((QStringRef*)this_)->appendTo(string);
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1559
// [2] const QChar at(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef2atEi(void *this_, int i) {
  auto rv = ((QStringRef*)this_)->at(i);
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1561
// [2] QChar operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRefixEi(void *this_, int i) {
  auto rv = ((QStringRef*)this_)->operator[](i);
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qstring.h:1562
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
// /usr/include/qt/QtCore/qstring.h:1563
// [2] QChar back()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStringRef4backEv(void *this_) {
  auto rv = ((QStringRef*)this_)->back();
return new QChar(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1567
// [1] bool operator==(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefeqEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator==(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1568
// [1] bool operator!=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefneEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator!=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1569
// [1] bool operator<(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefltEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator<(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1570
// [1] bool operator<=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefleEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator<=(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1571
// [1] bool operator>(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefgtEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator>(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1572
// [1] bool operator>=(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStringRefgeEPKc(void *this_, const char * s) {
  return (bool)((QStringRef*)this_)->operator>=(s);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1575
// [4] int compare(const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7compareERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1576
// [4] int compare(const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7compareERKS_N2Qt15CaseSensitivityE(void *this_, QStringRef* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1577
// [4] int compare(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7compareE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qstring.h:1579
// [4] int compare(const QByteArray &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef7compareERK10QByteArrayN2Qt15CaseSensitivityE(void *this_, QByteArray* s, Qt::CaseSensitivity cs) {
  return (int)((QStringRef*)this_)->compare(*s, cs);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1582
// [4] int compare(const QStringRef &, const QString &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef7compareERKS_RK7QStringN2Qt15CaseSensitivityE(QStringRef* s1, QString* s2, Qt::CaseSensitivity arg2) {
  return (int)QStringRef::compare(*s1, *s2, arg2);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1584
// [4] int compare(const QStringRef &, const QStringRef &, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef7compareERKS_S1_N2Qt15CaseSensitivityE(QStringRef* s1, QStringRef* s2, Qt::CaseSensitivity arg2) {
  return (int)QStringRef::compare(*s1, *s2, arg2);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1586
// [4] int compare(const QStringRef &, QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE(QStringRef* s1, QLatin1String* s2, Qt::CaseSensitivity cs) {
  return (int)QStringRef::compare(*s1, *s2, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1589
// [4] int localeAwareCompare(const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef18localeAwareCompareERK7QString(void *this_, QString* s) {
  return (int)((QStringRef*)this_)->localeAwareCompare(*s);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1590
// [4] int localeAwareCompare(const QStringRef &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef18localeAwareCompareERKS_(void *this_, QStringRef* s) {
  return (int)((QStringRef*)this_)->localeAwareCompare(*s);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1591
// [4] int localeAwareCompare(const QStringRef &, const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef18localeAwareCompareERKS_RK7QString(QStringRef* s1, QString* s2) {
  return (int)QStringRef::localeAwareCompare(*s1, *s2);
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstring.h:1592
// [4] int localeAwareCompare(const QStringRef &, const QStringRef &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZN10QStringRef18localeAwareCompareERKS_S1_(QStringRef* s1, QStringRef* s2) {
  return (int)QStringRef::localeAwareCompare(*s1, *s2);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1594
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
// /usr/include/qt/QtCore/qstring.h:1595
// [2] short toShort(bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
short C_ZNK10QStringRef7toShortEPbi(void *this_, bool * ok, int base) {
  return (short)((QStringRef*)this_)->toShort(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1596
// [2] ushort toUShort(bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
ushort C_ZNK10QStringRef8toUShortEPbi(void *this_, bool * ok, int base) {
  return (ushort)((QStringRef*)this_)->toUShort(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1597
// [4] int toInt(bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
int C_ZNK10QStringRef5toIntEPbi(void *this_, bool * ok, int base) {
  return (int)((QStringRef*)this_)->toInt(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1598
// [4] uint toUInt(bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
uint C_ZNK10QStringRef6toUIntEPbi(void *this_, bool * ok, int base) {
  return (uint)((QStringRef*)this_)->toUInt(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1599
// [8] long toLong(bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
long C_ZNK10QStringRef6toLongEPbi(void *this_, bool * ok, int base) {
  return (long)((QStringRef*)this_)->toLong(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1600
// [8] ulong toULong(bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
ulong C_ZNK10QStringRef7toULongEPbi(void *this_, bool * ok, int base) {
  return (ulong)((QStringRef*)this_)->toULong(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1601
// [8] qlonglong toLongLong(bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK10QStringRef10toLongLongEPbi(void *this_, bool * ok, int base) {
  return (qlonglong)((QStringRef*)this_)->toLongLong(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1602
// [8] qulonglong toULongLong(bool *, int)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK10QStringRef11toULongLongEPbi(void *this_, bool * ok, int base) {
  return (qulonglong)((QStringRef*)this_)->toULongLong(ok, base);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1603
// [4] float toFloat(bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
float C_ZNK10QStringRef7toFloatEPb(void *this_, bool * ok) {
  return (float)((QStringRef*)this_)->toFloat(ok);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qstring.h:1604
// [8] double toDouble(bool *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
double C_ZNK10QStringRef8toDoubleEPb(void *this_, bool * ok) {
  return (double)((QStringRef*)this_)->toDouble(ok);
}
#endif // QT_VERSION >= 0x050100

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
