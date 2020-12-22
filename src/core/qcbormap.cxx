//  header block begin

// /usr/include/qt/QtCore/qcbormap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcbormap.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborMap is pure virtual: false false
// QCborMap has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborMap_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborMap_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborMap_t qt_meta_stringdata_MyQCborMap = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQCborMap"
  },
  "MyQCborMap"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborMap[] = {
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
class Q_DECL_EXPORT MyQCborMap : public QCborMap {
public:
  virtual ~MyQCborMap() {}
// void QCborMap()
MyQCborMap() : QCborMap() {}
// void QCborMap(const QCborMap &)
MyQCborMap(const QCborMap & other) : QCborMap(other) {}
// void QCborMap(std::initializer_list<value_type>)
MyQCborMap(std::initializer_list<value_type> args) : QCborMap(args) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcbormap(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:171
// [-2] void QCborMap() 
// (12)qm1099892137 (16)_ZN8QCborMapC2Ev
/*void* qm1099892137()*/{
  ;
  this_ =  new QCborMap();
  this_ =  new MyQCborMap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:172
// [-2] void QCborMap(const QCborMap &) 
// (11)qm273010162 (19)_ZN8QCborMapC2ERKS_
/*void* qm273010162(const QCborMap & other)*/{
  const QCborMap & other = *(const QCborMap *)this_;
  this_ =  new QCborMap(other);
  this_ =  new MyQCborMap(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:174
// [-2] void QCborMap(std::initializer_list<value_type>) 
// (12)qm2711232054 (60)_ZN8QCborMapC2ESt16initializer_listI5QPairI10QCborValueS2_EE
/*void* qm2711232054(std::initializer_list<QPair<QCborValue, QCborValue>> args)*/{
  std::initializer_list<QPair<QCborValue, QCborValue>> args = *(std::initializer_list<QPair<QCborValue, QCborValue>>*)this_;
  this_ =  new QCborMap(args);
  this_ =  new MyQCborMap(args);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:183
// [-2] void swap(QCborMap &) 
// (12)qm2407056106 (21)_ZN8QCborMap4swapERS_
//static
/*void qm2407056106(QCborMap & other)*/ {
  QCborMap & other = *(QCborMap *)this_;
  (void) ((QCborMap*)this_)->swap(other);
   auto xptr = (void (QCborMap::*)(QCborMap&) ) &QCborMap::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:188
// [24] QCborValue toCborValue() const
// (12)qm4177284774 (28)_ZNK8QCborMap11toCborValueEv
//static
/*void qm4177284774()*/ {
  ;
  (void) ((QCborMap*)this_)->toCborValue();
   auto xptr = (QCborValue (QCborMap::*)() const ) &QCborMap::toCborValue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:191
// [1] bool isEmpty() const
// (10)qm22882269 (23)_ZNK8QCborMap7isEmptyEv
//static
/*void qm22882269()*/ {
  ;
  (void) ((QCborMap*)this_)->isEmpty();
   auto xptr = (bool (QCborMap::*)() const ) &QCborMap::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:195
// [24] QCborValue value(qint64) const
// (12)qm2408361354 (21)_ZNK8QCborMap5valueEx
//static
/*void qm2408361354(long long key)*/ {
  long long key = *(long long*)this_;
  (void) ((QCborMap*)this_)->value(key);
   auto xptr = (QCborValue (QCborMap::*)(long long) const ) &QCborMap::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:197
// [24] QCborValue value(QLatin1String) const
// (12)qm2730879316 (35)_ZNK8QCborMap5valueE13QLatin1String
//static
/*void qm2730879316(QLatin1String key)*/ {
  QLatin1String key = *(QLatin1String*)this_;
  (void) ((QCborMap*)this_)->value(key);
   auto xptr = (QCborValue (QCborMap::*)(QLatin1String) const ) &QCborMap::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:199
// [24] QCborValue value(const QString &) const
// (12)qm2728978993 (30)_ZNK8QCborMap5valueERK7QString
//static
/*void qm2728978993(const QString & key)*/ {
  const QString & key = *(const QString *)this_;
  (void) ((QCborMap*)this_)->value(key);
   auto xptr = (QCborValue (QCborMap::*)(QString const&) const ) &QCborMap::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:201
// [24] QCborValue value(const QCborValue &) const
// (12)qm4187725108 (34)_ZNK8QCborMap5valueERK10QCborValue
//static
/*void qm4187725108(const QCborValue & key)*/ {
  const QCborValue & key = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->value(key);
   auto xptr = (QCborValue (QCborMap::*)(QCborValue const&) const ) &QCborMap::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:207
// [24] const QCborValue operator[](qint64) const
// (12)qm2375045889 (17)_ZNK8QCborMapixEx
//static
/*void qm2375045889(long long key)*/ {
  long long key = *(long long*)this_;
  (void) ((QCborMap*)this_)->operator[](key);
  // auto xptr = (const QCborValue (QCborMap::*)(long long) const ) &QCborMap::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:209
// [24] const QCborValue operator[](QLatin1String) const
// (12)qm3750261188 (31)_ZNK8QCborMapixE13QLatin1String
//static
/*void qm3750261188(QLatin1String key)*/ {
  QLatin1String key = *(QLatin1String*)this_;
  (void) ((QCborMap*)this_)->operator[](key);
  // auto xptr = (const QCborValue (QCborMap::*)(QLatin1String) const ) &QCborMap::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:211
// [24] const QCborValue operator[](const QString &) const
// (12)qm1107240298 (26)_ZNK8QCborMapixERK7QString
//static
/*void qm1107240298(const QString & key)*/ {
  const QString & key = *(const QString *)this_;
  (void) ((QCborMap*)this_)->operator[](key);
  // auto xptr = (const QCborValue (QCborMap::*)(QString const&) const ) &QCborMap::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:213
// [24] const QCborValue operator[](const QCborValue &) const
// (12)qm3013459131 (30)_ZNK8QCborMapixERK10QCborValue
//static
/*void qm3013459131(const QCborValue & key)*/ {
  const QCborValue & key = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->operator[](key);
  // auto xptr = (const QCborValue (QCborMap::*)(QCborValue const&) const ) &QCborMap::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:224
// [24] QCborValue take(qint64) 
// (12)qm3534266271 (19)_ZN8QCborMap4takeEx
//static
/*void qm3534266271(long long key)*/ {
  long long key = *(long long*)this_;
  (void) ((QCborMap*)this_)->take(key);
   auto xptr = (QCborValue (QCborMap::*)(long long) ) &QCborMap::take;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:226
// [24] QCborValue take(QLatin1String) 
// (12)qm2414646165 (33)_ZN8QCborMap4takeE13QLatin1String
//static
/*void qm2414646165(QLatin1String key)*/ {
  QLatin1String key = *(QLatin1String*)this_;
  (void) ((QCborMap*)this_)->take(key);
   auto xptr = (QCborValue (QCborMap::*)(QLatin1String) ) &QCborMap::take;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:228
// [24] QCborValue take(const QString &) 
// (11)qm150323113 (28)_ZN8QCborMap4takeERK7QString
//static
/*void qm150323113(const QString & key)*/ {
  const QString & key = *(const QString *)this_;
  (void) ((QCborMap*)this_)->take(key);
   auto xptr = (QCborValue (QCborMap::*)(QString const&) ) &QCborMap::take;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:230
// [24] QCborValue take(const QCborValue &) 
// (12)qm3524186571 (32)_ZN8QCborMap4takeERK10QCborValue
//static
/*void qm3524186571(const QCborValue & key)*/ {
  const QCborValue & key = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->take(key);
   auto xptr = (QCborValue (QCborMap::*)(QCborValue const&) ) &QCborMap::take;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:232
// [-2] void remove(qint64) 
// (12)qm1916732379 (21)_ZN8QCborMap6removeEx
//static
/*void qm1916732379(long long key)*/ {
  long long key = *(long long*)this_;
  (void) ((QCborMap*)this_)->remove(key);
   auto xptr = (void (QCborMap::*)(long long) ) &QCborMap::remove;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:234
// [-2] void remove(QLatin1String) 
// (12)qm2954100882 (35)_ZN8QCborMap6removeE13QLatin1String
//static
/*void qm2954100882(QLatin1String key)*/ {
  QLatin1String key = *(QLatin1String*)this_;
  (void) ((QCborMap*)this_)->remove(key);
   auto xptr = (void (QCborMap::*)(QLatin1String) ) &QCborMap::remove;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:236
// [-2] void remove(const QString &) 
// (12)qm3235321152 (30)_ZN8QCborMap6removeERK7QString
//static
/*void qm3235321152(const QString & key)*/ {
  const QString & key = *(const QString *)this_;
  (void) ((QCborMap*)this_)->remove(key);
   auto xptr = (void (QCborMap::*)(QString const&) ) &QCborMap::remove;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:238
// [-2] void remove(const QCborValue &) 
// (12)qm2677738349 (34)_ZN8QCborMap6removeERK10QCborValue
//static
/*void qm2677738349(const QCborValue & key)*/ {
  const QCborValue & key = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->remove(key);
   auto xptr = (void (QCborMap::*)(QCborValue const&) ) &QCborMap::remove;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:240
// [1] bool contains(qint64) const
// (12)qm2775746179 (24)_ZNK8QCborMap8containsEx
//static
/*void qm2775746179(long long key)*/ {
  long long key = *(long long*)this_;
  (void) ((QCborMap*)this_)->contains(key);
   auto xptr = (bool (QCborMap::*)(long long) const ) &QCborMap::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:242
// [1] bool contains(QLatin1String) const
// (12)qm2443905051 (38)_ZNK8QCborMap8containsE13QLatin1String
//static
/*void qm2443905051(QLatin1String key)*/ {
  QLatin1String key = *(QLatin1String*)this_;
  (void) ((QCborMap*)this_)->contains(key);
   auto xptr = (bool (QCborMap::*)(QLatin1String) const ) &QCborMap::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:244
// [1] bool contains(const QString &) const
// (11)qm945898942 (33)_ZNK8QCborMap8containsERK7QString
//static
/*void qm945898942(const QString & key)*/ {
  const QString & key = *(const QString *)this_;
  (void) ((QCborMap*)this_)->contains(key);
   auto xptr = (bool (QCborMap::*)(QString const&) const ) &QCborMap::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:246
// [1] bool contains(const QCborValue &) const
// (12)qm2489792345 (37)_ZNK8QCborMap8containsERK10QCborValue
//static
/*void qm2489792345(const QCborValue & key)*/ {
  const QCborValue & key = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->contains(key);
   auto xptr = (bool (QCborMap::*)(QCborValue const&) const ) &QCborMap::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:259
// [1] bool operator==(const QCborMap &) const
// (12)qm2797042254 (20)_ZNK8QCborMapeqERKS_
//static
/*void qm2797042254(const QCborMap & other)*/ {
  const QCborMap & other = *(const QCborMap *)this_;
  (void) ((QCborMap*)this_)->operator==(other);
  // auto xptr = (bool (QCborMap::*)(QCborMap const&) const ) &QCborMap::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:261
// [1] bool operator!=(const QCborMap &) const
// (12)qm1022848569 (20)_ZNK8QCborMapneERKS_
//static
/*void qm1022848569(const QCborMap & other)*/ {
  const QCborMap & other = *(const QCborMap *)this_;
  (void) ((QCborMap*)this_)->operator!=(other);
  // auto xptr = (bool (QCborMap::*)(QCborMap const&) const ) &QCborMap::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:263
// [1] bool operator<(const QCborMap &) const
// (12)qm1675800110 (20)_ZNK8QCborMapltERKS_
//static
/*void qm1675800110(const QCborMap & other)*/ {
  const QCborMap & other = *(const QCborMap *)this_;
  (void) ((QCborMap*)this_)->operator<(other);
  // auto xptr = (bool (QCborMap::*)(QCborMap const&) const ) &QCborMap::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:269
// [16] QCborMap::iterator begin() 
// (12)qm2313504180 (20)_ZN8QCborMap5beginEv
//static
/*void qm2313504180()*/ {
  ;
  (void) ((QCborMap*)this_)->begin();
   auto xptr = (QCborMap::Iterator (QCborMap::*)() ) &QCborMap::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:270
// [16] QCborMap::const_iterator constBegin() const
// (12)qm3160493490 (27)_ZNK8QCborMap10constBeginEv
//static
/*void qm3160493490()*/ {
  ;
  (void) ((QCborMap*)this_)->constBegin();
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)() const ) &QCborMap::constBegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:271
// [16] QCborMap::const_iterator begin() const
// (10)qm25054353 (21)_ZNK8QCborMap5beginEv
//static
/*void qm25054353()*/ {
  ;
  (void) ((QCborMap*)this_)->begin();
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)() const ) &QCborMap::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:272
// [16] QCborMap::const_iterator cbegin() const
// (12)qm1940983597 (22)_ZNK8QCborMap6cbeginEv
//static
/*void qm1940983597()*/ {
  ;
  (void) ((QCborMap*)this_)->cbegin();
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)() const ) &QCborMap::cbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:273
// [16] QCborMap::iterator end() 
// (12)qm2476641837 (18)_ZN8QCborMap3endEv
//static
/*void qm2476641837()*/ {
  ;
  (void) ((QCborMap*)this_)->end();
   auto xptr = (QCborMap::Iterator (QCborMap::*)() ) &QCborMap::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:274
// [16] QCborMap::const_iterator constEnd() const
// (12)qm3375264210 (24)_ZNK8QCborMap8constEndEv
//static
/*void qm3375264210()*/ {
  ;
  (void) ((QCborMap*)this_)->constEnd();
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)() const ) &QCborMap::constEnd;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:275
// [16] QCborMap::const_iterator end() const
// (12)qm3382889376 (19)_ZNK8QCborMap3endEv
//static
/*void qm3382889376()*/ {
  ;
  (void) ((QCborMap*)this_)->end();
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)() const ) &QCborMap::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:276
// [16] QCborMap::const_iterator cend() const
// (12)qm2064416678 (20)_ZNK8QCborMap4cendEv
//static
/*void qm2064416678()*/ {
  ;
  (void) ((QCborMap*)this_)->cend();
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)() const ) &QCborMap::cend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:278
// [16] QCborMap::iterator erase(QCborMap::const_iterator) 
// (12)qm4009397593 (38)_ZN8QCborMap5eraseENS_13ConstIteratorE
//static
/*void qm4009397593(QCborMap::ConstIterator it)*/ {
  QCborMap::ConstIterator it = *(QCborMap::ConstIterator*)this_;
  (void) ((QCborMap*)this_)->erase(it);
   auto xptr = (QCborMap::Iterator (QCborMap::*)(QCborMap::ConstIterator) ) &QCborMap::erase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:280
// [24] QCborValue extract(QCborMap::const_iterator) 
// (12)qm3788197828 (40)_ZN8QCborMap7extractENS_13ConstIteratorE
//static
/*void qm3788197828(QCborMap::ConstIterator it)*/ {
  QCborMap::ConstIterator it = *(QCborMap::ConstIterator*)this_;
  (void) ((QCborMap*)this_)->extract(it);
   auto xptr = (QCborValue (QCborMap::*)(QCborMap::ConstIterator) ) &QCborMap::extract;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:281
// [1] bool empty() const
// (12)qm1095795031 (21)_ZNK8QCborMap5emptyEv
//static
/*void qm1095795031()*/ {
  ;
  (void) ((QCborMap*)this_)->empty();
   auto xptr = (bool (QCborMap::*)() const ) &QCborMap::empty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:291
// [16] QCborMap::const_iterator find(qint64) const
// (11)qm159985171 (20)_ZNK8QCborMap4findEx
//static
/*void qm159985171(long long key)*/ {
  long long key = *(long long*)this_;
  (void) ((QCborMap*)this_)->find(key);
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)(long long) const ) &QCborMap::find;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:292
// [16] QCborMap::const_iterator find(QLatin1String) const
// (12)qm4077192335 (34)_ZNK8QCborMap4findE13QLatin1String
//static
/*void qm4077192335(QLatin1String key)*/ {
  QLatin1String key = *(QLatin1String*)this_;
  (void) ((QCborMap*)this_)->find(key);
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)(QLatin1String) const ) &QCborMap::find;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:293
// [16] QCborMap::const_iterator find(const QString &) const
// (12)qm2214282255 (29)_ZNK8QCborMap4findERK7QString
//static
/*void qm2214282255(const QString & key)*/ {
  const QString & key = *(const QString *)this_;
  (void) ((QCborMap*)this_)->find(key);
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)(QString const&) const ) &QCborMap::find;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:294
// [16] QCborMap::const_iterator find(const QCborValue &) const
// (12)qm3883301893 (33)_ZNK8QCborMap4findERK10QCborValue
//static
/*void qm3883301893(const QCborValue & key)*/ {
  const QCborValue & key = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->find(key);
   auto xptr = (QCborMap::ConstIterator (QCborMap::*)(QCborValue const&) const ) &QCborMap::find;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:296
// [16] QCborMap::iterator insert(qint64, const QCborValue &) 
// (11)qm383125904 (35)_ZN8QCborMap6insertExRK10QCborValue
//static
/*void qm383125904(long long key, const QCborValue & value_)*/ {
  long long key = *(long long*)this_; const QCborValue & value_ = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->insert(key, value_);
   auto xptr = (QCborMap::Iterator (QCborMap::*)(long long, QCborValue const&) ) &QCborMap::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:302
// [16] QCborMap::iterator insert(QLatin1String, const QCborValue &) 
// (12)qm2577214352 (49)_ZN8QCborMap6insertE13QLatin1StringRK10QCborValue
//static
/*void qm2577214352(QLatin1String key, const QCborValue & value_)*/ {
  QLatin1String key = *(QLatin1String*)this_; const QCborValue & value_ = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->insert(key, value_);
   auto xptr = (QCborMap::Iterator (QCborMap::*)(QLatin1String, QCborValue const&) ) &QCborMap::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:308
// [16] QCborMap::iterator insert(const QString &, const QCborValue &) 
// (12)qm3840330638 (44)_ZN8QCborMap6insertERK7QStringRK10QCborValue
//static
/*void qm3840330638(const QString & key, const QCborValue & value_)*/ {
  const QString & key = *(const QString *)this_; const QCborValue & value_ = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->insert(key, value_);
   auto xptr = (QCborMap::Iterator (QCborMap::*)(QString const&, QCborValue const&) ) &QCborMap::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:314
// [16] QCborMap::iterator insert(const QCborValue &, const QCborValue &) 
// (12)qm3911410805 (37)_ZN8QCborMap6insertERK10QCborValueS2_
//static
/*void qm3911410805(const QCborValue & key, const QCborValue & value_)*/ {
  const QCborValue & key = *(const QCborValue *)this_; const QCborValue & value_ = *(const QCborValue *)this_;
  (void) ((QCborMap*)this_)->insert(key, value_);
   auto xptr = (QCborMap::Iterator (QCborMap::*)(QCborValue const&, QCborValue const&) ) &QCborMap::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:320
// [16] QCborMap::iterator insert(QCborMap::value_type) 
// (11)qm861213708 (43)_ZN8QCborMap6insertE5QPairI10QCborValueS1_E
//static
/*void qm861213708(QPair<QCborValue, QCborValue> v)*/ {
  QPair<QCborValue, QCborValue> v = *(QPair<QCborValue, QCborValue>*)this_;
  (void) ((QCborMap*)this_)->insert(v);
   auto xptr = (QCborMap::Iterator (QCborMap::*)(QPair<QCborValue, QCborValue>) ) &QCborMap::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QCborMapD2Ev(void *this_)*/ {
  delete (QCborMap*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcbormap
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
