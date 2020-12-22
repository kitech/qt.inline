//  header block begin

// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariant is pure virtual: false false
// QVariant has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVariant_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVariant_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVariant_t qt_meta_stringdata_MyQVariant = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQVariant"
  },
  "MyQVariant"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVariant[] = {
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
class Q_DECL_EXPORT MyQVariant : public QVariant {
public:
  virtual ~MyQVariant() {}
// void QVariant()
MyQVariant() : QVariant() {}
// void QVariant(QVariant::Type)
MyQVariant(QVariant::Type type_) : QVariant(type_) {}
// void QVariant(int, const void *)
MyQVariant(int typeId, const void * copy) : QVariant(typeId, copy) {}
// void QVariant(int, const void *, uint)
MyQVariant(int typeId, const void * copy, uint flags) : QVariant(typeId, copy, flags) {}
// void QVariant(const QVariant &)
MyQVariant(const QVariant & other) : QVariant(other) {}
// void QVariant(QDataStream &)
MyQVariant(QDataStream & s) : QVariant(s) {}
// void QVariant(int)
MyQVariant(int i) : QVariant(i) {}
// void QVariant(uint)
MyQVariant(uint ui) : QVariant(ui) {}
// void QVariant(qlonglong)
MyQVariant(qlonglong ll) : QVariant(ll) {}
// void QVariant(qulonglong)
MyQVariant(qulonglong ull) : QVariant(ull) {}
// void QVariant(bool)
MyQVariant(bool b) : QVariant(b) {}
// void QVariant(double)
MyQVariant(double d) : QVariant(d) {}
// void QVariant(float)
MyQVariant(float f) : QVariant(f) {}
// void QVariant(const char *)
MyQVariant(const char * str) : QVariant(str) {}
// void QVariant(const QByteArray &)
MyQVariant(const QByteArray & bytearray) : QVariant(bytearray) {}
// void QVariant(const QBitArray &)
MyQVariant(const QBitArray & bitarray) : QVariant(bitarray) {}
// void QVariant(const QString &)
MyQVariant(const QString & string) : QVariant(string) {}
// void QVariant(QLatin1String)
MyQVariant(QLatin1String string) : QVariant(string) {}
// void QVariant(const QStringList &)
MyQVariant(const QStringList & stringlist) : QVariant(stringlist) {}
// void QVariant(QChar)
MyQVariant(QChar qchar) : QVariant(qchar) {}
// void QVariant(const QDate &)
MyQVariant(const QDate & date) : QVariant(date) {}
// void QVariant(const QTime &)
MyQVariant(const QTime & time) : QVariant(time) {}
// void QVariant(const QDateTime &)
MyQVariant(const QDateTime & datetime) : QVariant(datetime) {}
// void QVariant(const QList<QVariant> &)
MyQVariant(const QList<QVariant> & list) : QVariant(list) {}
// void QVariant(const QMap<QString, QVariant> &)
MyQVariant(const QMap<QString, QVariant> & map_) : QVariant(map_) {}
// void QVariant(const QHash<QString, QVariant> &)
MyQVariant(const QHash<QString, QVariant> & hash) : QVariant(hash) {}
// void QVariant(const QSize &)
MyQVariant(const QSize & size) : QVariant(size) {}
// void QVariant(const QSizeF &)
MyQVariant(const QSizeF & size) : QVariant(size) {}
// void QVariant(const QPoint &)
MyQVariant(const QPoint & pt) : QVariant(pt) {}
// void QVariant(const QPointF &)
MyQVariant(const QPointF & pt) : QVariant(pt) {}
// void QVariant(const QLine &)
MyQVariant(const QLine & line) : QVariant(line) {}
// void QVariant(const QLineF &)
MyQVariant(const QLineF & line) : QVariant(line) {}
// void QVariant(const QRect &)
MyQVariant(const QRect & rect) : QVariant(rect) {}
// void QVariant(const QRectF &)
MyQVariant(const QRectF & rect) : QVariant(rect) {}
// void QVariant(const QLocale &)
MyQVariant(const QLocale & locale) : QVariant(locale) {}
// void QVariant(const QRegExp &)
MyQVariant(const QRegExp & regExp) : QVariant(regExp) {}
// void QVariant(const QRegularExpression &)
MyQVariant(const QRegularExpression & re) : QVariant(re) {}
// void QVariant(const QEasingCurve &)
MyQVariant(const QEasingCurve & easing) : QVariant(easing) {}
// void QVariant(const QUuid &)
MyQVariant(const QUuid & uuid) : QVariant(uuid) {}
// void QVariant(const QUrl &)
MyQVariant(const QUrl & url) : QVariant(url) {}
// void QVariant(const QJsonValue &)
MyQVariant(const QJsonValue & jsonValue) : QVariant(jsonValue) {}
// void QVariant(const QJsonObject &)
MyQVariant(const QJsonObject & jsonObject) : QVariant(jsonObject) {}
// void QVariant(const QJsonArray &)
MyQVariant(const QJsonArray & jsonArray) : QVariant(jsonArray) {}
// void QVariant(const QJsonDocument &)
MyQVariant(const QJsonDocument & jsonDocument) : QVariant(jsonDocument) {}
// void QVariant(const QModelIndex &)
MyQVariant(const QModelIndex & modelIndex) : QVariant(modelIndex) {}
// void QVariant(const QPersistentModelIndex &)
MyQVariant(const QPersistentModelIndex & modelIndex) : QVariant(modelIndex) {}
// void QVariant(QVariant &&)
MyQVariant(QVariant && other) : QVariant(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvariant(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:208
// [-2] void QVariant() 
// (10)qm93067653 (16)_ZN8QVariantC2Ev
/*void* qm93067653()*/{
  ;
  this_ =  new QVariant();
  this_ =  new MyQVariant();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:210
// [-2] void QVariant(QVariant::Type) 
// (12)qm3094501539 (24)_ZN8QVariantC2ENS_4TypeE
/*void* qm3094501539(QVariant::Type type_)*/{
  QVariant::Type type_ = *(QVariant::Type*)this_;
  this_ =  new QVariant(type_);
  this_ =  new MyQVariant(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:211
// [-2] void QVariant(int, const void *) 
// (12)qm2845593041 (19)_ZN8QVariantC2EiPKv
/*void* qm2845593041(int typeId, const void * copy)*/{
  int typeId = *(int*)this_; const void * copy = *(const void **)this_;
  this_ =  new QVariant(typeId, copy);
  this_ =  new MyQVariant(typeId, copy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:212
// [-2] void QVariant(int, const void *, uint) 
// (12)qm2383944132 (20)_ZN8QVariantC2EiPKvj
/*void* qm2383944132(int typeId, const void * copy, unsigned int flags)*/{
  int typeId = *(int*)this_; const void * copy = *(const void **)this_; unsigned int flags = *(unsigned int*)this_;
  this_ =  new QVariant(typeId, copy, flags);
  this_ =  new MyQVariant(typeId, copy, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:213
// [-2] void QVariant(const QVariant &) 
// (12)qm1584168661 (19)_ZN8QVariantC2ERKS_
/*void* qm1584168661(const QVariant & other)*/{
  const QVariant & other = *(const QVariant *)this_;
  this_ =  new QVariant(other);
  this_ =  new MyQVariant(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:216
// [-2] void QVariant(QDataStream &) 
// (11)qm534519966 (29)_ZN8QVariantC2ER11QDataStream
/*void* qm534519966(QDataStream & s)*/{
  QDataStream & s = *(QDataStream *)this_;
  this_ =  new QVariant(s);
  this_ =  new MyQVariant(s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:219
// [-2] void QVariant(int) 
// (12)qm2290357360 (16)_ZN8QVariantC2Ei
/*void* qm2290357360(int i)*/{
  int i = *(int*)this_;
  this_ =  new QVariant(i);
  this_ =  new MyQVariant(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:220
// [-2] void QVariant(uint) 
// (11)qm294471114 (16)_ZN8QVariantC2Ej
/*void* qm294471114(unsigned int ui)*/{
  unsigned int ui = *(unsigned int*)this_;
  this_ =  new QVariant(ui);
  this_ =  new MyQVariant(ui);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:221
// [-2] void QVariant(qlonglong) 
// (12)qm3795072130 (16)_ZN8QVariantC2Ex
/*void* qm3795072130(long long ll)*/{
  long long ll = *(long long*)this_;
  this_ =  new QVariant(ll);
  this_ =  new MyQVariant(ll);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:222
// [-2] void QVariant(qulonglong) 
// (12)qm2503148564 (16)_ZN8QVariantC2Ey
/*void* qm2503148564(unsigned long long ull)*/{
  unsigned long long ull = *(unsigned long long*)this_;
  this_ =  new QVariant(ull);
  this_ =  new MyQVariant(ull);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:223
// [-2] void QVariant(bool) 
// (11)qm525782520 (16)_ZN8QVariantC2Eb
/*void* qm525782520(bool b)*/{
  bool b = *(bool*)this_;
  this_ =  new QVariant(b);
  this_ =  new MyQVariant(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:224
// [-2] void QVariant(double) 
// (12)qm4130695373 (16)_ZN8QVariantC2Ed
/*void* qm4130695373(double d)*/{
  double d = *(double*)this_;
  this_ =  new QVariant(d);
  this_ =  new MyQVariant(d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:225
// [-2] void QVariant(float) 
// (11)qm406522337 (16)_ZN8QVariantC2Ef
/*void* qm406522337(float f)*/{
  float f = *(float*)this_;
  this_ =  new QVariant(f);
  this_ =  new MyQVariant(f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:227
// [-2] void QVariant(const char *) 
// (12)qm2561691587 (18)_ZN8QVariantC2EPKc
/*void* qm2561691587(const char * str)*/{
  const char * str = *(const char **)this_;
  this_ =  new QVariant(str);
  this_ =  new MyQVariant(str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:230
// [-2] void QVariant(const QByteArray &) 
// (12)qm1650758520 (29)_ZN8QVariantC2ERK10QByteArray
/*void* qm1650758520(const QByteArray & bytearray)*/{
  const QByteArray & bytearray = *(const QByteArray *)this_;
  this_ =  new QVariant(bytearray);
  this_ =  new MyQVariant(bytearray);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:231
// [-2] void QVariant(const QBitArray &) 
// (11)qm575686680 (27)_ZN8QVariantC2ERK9QBitArray
/*void* qm575686680(const QBitArray & bitarray)*/{
  const QBitArray & bitarray = *(const QBitArray *)this_;
  this_ =  new QVariant(bitarray);
  this_ =  new MyQVariant(bitarray);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:232
// [-2] void QVariant(const QString &) 
// (12)qm2387606192 (25)_ZN8QVariantC2ERK7QString
/*void* qm2387606192(const QString & string)*/{
  const QString & string = *(const QString *)this_;
  this_ =  new QVariant(string);
  this_ =  new MyQVariant(string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:233
// [-2] void QVariant(QLatin1String) 
// (12)qm3955657314 (30)_ZN8QVariantC2E13QLatin1String
/*void* qm3955657314(QLatin1String string)*/{
  QLatin1String string = *(QLatin1String*)this_;
  this_ =  new QVariant(string);
  this_ =  new MyQVariant(string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:234
// [-2] void QVariant(const QStringList &) 
// (12)qm3261955225 (30)_ZN8QVariantC2ERK11QStringList
/*void* qm3261955225(const QStringList & stringlist)*/{
  const QStringList & stringlist = *(const QStringList *)this_;
  this_ =  new QVariant(stringlist);
  this_ =  new MyQVariant(stringlist);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:235
// [-2] void QVariant(QChar) 
// (12)qm2254077775 (21)_ZN8QVariantC2E5QChar
/*void* qm2254077775(QChar qchar)*/{
  QChar qchar = *(QChar*)this_;
  this_ =  new QVariant(qchar);
  this_ =  new MyQVariant(qchar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:236
// [-2] void QVariant(const QDate &) 
// (12)qm1632607947 (23)_ZN8QVariantC2ERK5QDate
/*void* qm1632607947(const QDate & date)*/{
  const QDate & date = *(const QDate *)this_;
  this_ =  new QVariant(date);
  this_ =  new MyQVariant(date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:237
// [-2] void QVariant(const QTime &) 
// (12)qm2755998196 (23)_ZN8QVariantC2ERK5QTime
/*void* qm2755998196(const QTime & time)*/{
  const QTime & time = *(const QTime *)this_;
  this_ =  new QVariant(time);
  this_ =  new MyQVariant(time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:238
// [-2] void QVariant(const QDateTime &) 
// (12)qm3457100044 (27)_ZN8QVariantC2ERK9QDateTime
/*void* qm3457100044(const QDateTime & datetime)*/{
  const QDateTime & datetime = *(const QDateTime *)this_;
  this_ =  new QVariant(datetime);
  this_ =  new MyQVariant(datetime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:239
// [-2] void QVariant(const QList<QVariant> &) 
// (11)qm690850151 (27)_ZN8QVariantC2ERK5QListIS_E
/*void* qm690850151(const QList<QVariant> & list)*/{
  const QList<QVariant> & list = *(const QList<QVariant> *)this_;
  this_ =  new QVariant(list);
  this_ =  new MyQVariant(list);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:240
// [-2] void QVariant(const QMap<QString, QVariant> &) 
// (12)qm2994946793 (34)_ZN8QVariantC2ERK4QMapI7QStringS_E
/*void* qm2994946793(const QMap<QString, QVariant> & map_)*/{
  const QMap<QString, QVariant> & map_ = *(const QMap<QString, QVariant> *)this_;
  this_ =  new QVariant(map_);
  this_ =  new MyQVariant(map_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:241
// [-2] void QVariant(const QHash<QString, QVariant> &) 
// (12)qm1760596389 (35)_ZN8QVariantC2ERK5QHashI7QStringS_E
/*void* qm1760596389(const QHash<QString, QVariant> & hash)*/{
  const QHash<QString, QVariant> & hash = *(const QHash<QString, QVariant> *)this_;
  this_ =  new QVariant(hash);
  this_ =  new MyQVariant(hash);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:243
// [-2] void QVariant(const QSize &) 
// (12)qm1007783387 (23)_ZN8QVariantC2ERK5QSize
/*void* qm1007783387(const QSize & size)*/{
  const QSize & size = *(const QSize *)this_;
  this_ =  new QVariant(size);
  this_ =  new MyQVariant(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:244
// [-2] void QVariant(const QSizeF &) 
// (12)qm1835535204 (24)_ZN8QVariantC2ERK6QSizeF
/*void* qm1835535204(const QSizeF & size)*/{
  const QSizeF & size = *(const QSizeF *)this_;
  this_ =  new QVariant(size);
  this_ =  new MyQVariant(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:245
// [-2] void QVariant(const QPoint &) 
// (11)qm987806474 (24)_ZN8QVariantC2ERK6QPoint
/*void* qm987806474(const QPoint & pt)*/{
  const QPoint & pt = *(const QPoint *)this_;
  this_ =  new QVariant(pt);
  this_ =  new MyQVariant(pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:246
// [-2] void QVariant(const QPointF &) 
// (12)qm1643643411 (25)_ZN8QVariantC2ERK7QPointF
/*void* qm1643643411(const QPointF & pt)*/{
  const QPointF & pt = *(const QPointF *)this_;
  this_ =  new QVariant(pt);
  this_ =  new MyQVariant(pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:247
// [-2] void QVariant(const QLine &) 
// (11)qm449125703 (23)_ZN8QVariantC2ERK5QLine
/*void* qm449125703(const QLine & line)*/{
  const QLine & line = *(const QLine *)this_;
  this_ =  new QVariant(line);
  this_ =  new MyQVariant(line);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:248
// [-2] void QVariant(const QLineF &) 
// (12)qm2499215515 (24)_ZN8QVariantC2ERK6QLineF
/*void* qm2499215515(const QLineF & line)*/{
  const QLineF & line = *(const QLineF *)this_;
  this_ =  new QVariant(line);
  this_ =  new MyQVariant(line);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:249
// [-2] void QVariant(const QRect &) 
// (12)qm2080873008 (23)_ZN8QVariantC2ERK5QRect
/*void* qm2080873008(const QRect & rect)*/{
  const QRect & rect = *(const QRect *)this_;
  this_ =  new QVariant(rect);
  this_ =  new MyQVariant(rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:250
// [-2] void QVariant(const QRectF &) 
// (12)qm1525687939 (24)_ZN8QVariantC2ERK6QRectF
/*void* qm1525687939(const QRectF & rect)*/{
  const QRectF & rect = *(const QRectF *)this_;
  this_ =  new QVariant(rect);
  this_ =  new MyQVariant(rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:252
// [-2] void QVariant(const QLocale &) 
// (12)qm1366396545 (25)_ZN8QVariantC2ERK7QLocale
/*void* qm1366396545(const QLocale & locale)*/{
  const QLocale & locale = *(const QLocale *)this_;
  this_ =  new QVariant(locale);
  this_ =  new MyQVariant(locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:254
// [-2] void QVariant(const QRegExp &) 
// (12)qm3511205662 (25)_ZN8QVariantC2ERK7QRegExp
/*void* qm3511205662(const QRegExp & regExp)*/{
  const QRegExp & regExp = *(const QRegExp *)this_;
  this_ =  new QVariant(regExp);
  this_ =  new MyQVariant(regExp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:257
// [-2] void QVariant(const QRegularExpression &) 
// (12)qm1097778072 (37)_ZN8QVariantC2ERK18QRegularExpression
/*void* qm1097778072(const QRegularExpression & re)*/{
  const QRegularExpression & re = *(const QRegularExpression *)this_;
  this_ =  new QVariant(re);
  this_ =  new MyQVariant(re);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:260
// [-2] void QVariant(const QEasingCurve &) 
// (12)qm3772086060 (31)_ZN8QVariantC2ERK12QEasingCurve
/*void* qm3772086060(const QEasingCurve & easing)*/{
  const QEasingCurve & easing = *(const QEasingCurve *)this_;
  this_ =  new QVariant(easing);
  this_ =  new MyQVariant(easing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:262
// [-2] void QVariant(const QUuid &) 
// (11)qm447674647 (23)_ZN8QVariantC2ERK5QUuid
/*void* qm447674647(const QUuid & uuid)*/{
  const QUuid & uuid = *(const QUuid *)this_;
  this_ =  new QVariant(uuid);
  this_ =  new MyQVariant(uuid);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:264
// [-2] void QVariant(const QUrl &) 
// (12)qm2030850478 (22)_ZN8QVariantC2ERK4QUrl
/*void* qm2030850478(const QUrl & url)*/{
  const QUrl & url = *(const QUrl *)this_;
  this_ =  new QVariant(url);
  this_ =  new MyQVariant(url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:265
// [-2] void QVariant(const QJsonValue &) 
// (12)qm4212761564 (29)_ZN8QVariantC2ERK10QJsonValue
/*void* qm4212761564(const QJsonValue & jsonValue)*/{
  const QJsonValue & jsonValue = *(const QJsonValue *)this_;
  this_ =  new QVariant(jsonValue);
  this_ =  new MyQVariant(jsonValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:266
// [-2] void QVariant(const QJsonObject &) 
// (12)qm2638209842 (30)_ZN8QVariantC2ERK11QJsonObject
/*void* qm2638209842(const QJsonObject & jsonObject)*/{
  const QJsonObject & jsonObject = *(const QJsonObject *)this_;
  this_ =  new QVariant(jsonObject);
  this_ =  new MyQVariant(jsonObject);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:267
// [-2] void QVariant(const QJsonArray &) 
// (12)qm1197610335 (29)_ZN8QVariantC2ERK10QJsonArray
/*void* qm1197610335(const QJsonArray & jsonArray)*/{
  const QJsonArray & jsonArray = *(const QJsonArray *)this_;
  this_ =  new QVariant(jsonArray);
  this_ =  new MyQVariant(jsonArray);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:268
// [-2] void QVariant(const QJsonDocument &) 
// (12)qm1589336698 (32)_ZN8QVariantC2ERK13QJsonDocument
/*void* qm1589336698(const QJsonDocument & jsonDocument)*/{
  const QJsonDocument & jsonDocument = *(const QJsonDocument *)this_;
  this_ =  new QVariant(jsonDocument);
  this_ =  new MyQVariant(jsonDocument);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:271
// [-2] void QVariant(const QModelIndex &) 
// (12)qm2350874306 (30)_ZN8QVariantC2ERK11QModelIndex
/*void* qm2350874306(const QModelIndex & modelIndex)*/{
  const QModelIndex & modelIndex = *(const QModelIndex *)this_;
  this_ =  new QVariant(modelIndex);
  this_ =  new MyQVariant(modelIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:272
// [-2] void QVariant(const QPersistentModelIndex &) 
// (12)qm3727440816 (40)_ZN8QVariantC2ERK21QPersistentModelIndex
/*void* qm3727440816(const QPersistentModelIndex & modelIndex)*/{
  const QPersistentModelIndex & modelIndex = *(const QPersistentModelIndex *)this_;
  this_ =  new QVariant(modelIndex);
  this_ =  new MyQVariant(modelIndex);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:276
// [-2] void QVariant(QVariant &&) 
// (11)qm582897488 (18)_ZN8QVariantC2EOS_
/*void* qm582897488(QVariant && other)*/{
  QVariant && other =  static_cast<QVariant &&>(*(QVariant *)this_);
  this_ =  new QVariant(other);
  this_ =  new MyQVariant(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:278
// [16] QVariant & operator=(QVariant &&) 
// (12)qm3431511440 (18)_ZN8QVariantaSEOS_
//static
/*void qm3431511440(QVariant && other)*/ {
  QVariant && other =  static_cast<QVariant &&>(*(QVariant *)this_);
  (void) ((QVariant*)this_)->operator=(other);
  // auto xptr = (QVariant & (QVariant::*)(QVariant&&) ) &QVariant::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:281
// [-2] void swap(QVariant &) 
// (11)qm131456144 (21)_ZN8QVariant4swapERS_
//static
/*void qm131456144(QVariant & other)*/ {
  QVariant & other = *(QVariant *)this_;
  (void) ((QVariant*)this_)->swap(other);
   auto xptr = (void (QVariant::*)(QVariant&) ) &QVariant::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:290
// [1] bool isValid() const
// (12)qm2204930347 (23)_ZNK8QVariant7isValidEv
//static
/*void qm2204930347()*/ {
  ;
  (void) ((QVariant*)this_)->isValid();
   auto xptr = (bool (QVariant::*)() const ) &QVariant::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:296
// [1] bool isDetached() const
// (12)qm3109827116 (27)_ZNK8QVariant10isDetachedEv
//static
/*void qm3109827116()*/ {
  ;
  (void) ((QVariant*)this_)->isDetached();
   auto xptr = (bool (QVariant::*)() const ) &QVariant::isDetached;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:360
// [8] const void * data() const
// (12)qm3838783465 (20)_ZNK8QVariant4dataEv
//static
/*void qm3838783465()*/ {
  ;
  (void) ((QVariant*)this_)->data();
   auto xptr = (const void * (QVariant::*)() const ) &QVariant::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:462
// [1] bool operator==(const QVariant &) const
// (12)qm3902720361 (20)_ZNK8QVarianteqERKS_
//static
/*void qm3902720361(const QVariant & v)*/ {
  const QVariant & v = *(const QVariant *)this_;
  (void) ((QVariant*)this_)->operator==(v);
  // auto xptr = (bool (QVariant::*)(QVariant const&) const ) &QVariant::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:464
// [1] bool operator!=(const QVariant &) const
// (12)qm1927208222 (20)_ZNK8QVariantneERKS_
//static
/*void qm1927208222(const QVariant & v)*/ {
  const QVariant & v = *(const QVariant *)this_;
  (void) ((QVariant*)this_)->operator!=(v);
  // auto xptr = (bool (QVariant::*)(QVariant const&) const ) &QVariant::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:523
// [16] QVariant::DataPtr & data_ptr() 
// (12)qm2062150323 (23)_ZN8QVariant8data_ptrEv
//static
/*void qm2062150323()*/ {
  ;
  (void) ((QVariant*)this_)->data_ptr();
   auto xptr = (QVariant::Private & (QVariant::*)() ) &QVariant::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:524
// [16] const QVariant::DataPtr & data_ptr() const
// (12)qm4067467189 (24)_ZNK8QVariant8data_ptrEv
//static
/*void qm4067467189()*/ {
  ;
  (void) ((QVariant*)this_)->data_ptr();
   auto xptr = (const QVariant::Private & (QVariant::*)() const ) &QVariant::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QVariantD2Ev(void *this_)*/ {
  delete (QVariant*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvariant
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
