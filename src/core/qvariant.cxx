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
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:276
// [-2] void QVariant(QVariant &&) 
// (11)qm582897488 (18)_ZN8QVariantC2EOS_
/*void* qm582897488(QVariant && other)*/{
  QVariant && other =  static_cast<QVariant &&>(*(QVariant *)this_);
  this_ =  new QVariant(other);
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
