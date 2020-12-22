//  header block begin

// /usr/include/qt/QtCore/qdatetime.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetime.h>
#include <QtCore>
#include "callback_inherit.h"

// QTime is pure virtual: false false
// QTime has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTime_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTime_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTime_t qt_meta_stringdata_MyQTime = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQTime"
  },
  "MyQTime"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTime[] = {
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
class Q_DECL_EXPORT MyQTime : public QTime {
public:
  virtual ~MyQTime() {}
// void QTime()
MyQTime() : QTime() {}
// void QTime(int, int, int, int)
MyQTime(int h, int m, int s, int ms) : QTime(h, m, s, ms) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtime(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:192
// [-2] void QTime() 
// (11)qm684949980 (13)_ZN5QTimeC2Ev
/*void* qm684949980()*/{
  ;
  this_ =  new QTime();
  this_ =  new MyQTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:194
// [-2] void QTime(int, int, int, int) 
// (12)qm2310898046 (16)_ZN5QTimeC2Eiiii
/*void* qm2310898046(int h, int m, int s, int ms)*/{
  int h = *(int*)this_; int m = *(int*)this_; int s = *(int*)this_; int ms = *(int*)this_;
  this_ =  new QTime(h, m, s, ms);
  this_ =  new MyQTime(h, m, s, ms);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:196
// [1] bool isNull() const
// (12)qm4092187390 (19)_ZNK5QTime6isNullEv
//static
/*void qm4092187390()*/ {
  ;
  (void) ((QTime*)this_)->isNull();
   auto xptr = (bool (QTime::*)() const ) &QTime::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:217
// [1] bool operator==(const QTime &) const
// (12)qm3284758327 (17)_ZNK5QTimeeqERKS_
//static
/*void qm3284758327(const QTime & other)*/ {
  const QTime & other = *(const QTime *)this_;
  (void) ((QTime*)this_)->operator==(other);
  // auto xptr = (bool (QTime::*)(QTime const&) const ) &QTime::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:218
// [1] bool operator!=(const QTime &) const
// (12)qm1502182208 (17)_ZNK5QTimeneERKS_
//static
/*void qm1502182208(const QTime & other)*/ {
  const QTime & other = *(const QTime *)this_;
  (void) ((QTime*)this_)->operator!=(other);
  // auto xptr = (bool (QTime::*)(QTime const&) const ) &QTime::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:219
// [1] bool operator<(const QTime &) const
// (11)qm110934871 (17)_ZNK5QTimeltERKS_
//static
/*void qm110934871(const QTime & other)*/ {
  const QTime & other = *(const QTime *)this_;
  (void) ((QTime*)this_)->operator<(other);
  // auto xptr = (bool (QTime::*)(QTime const&) const ) &QTime::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:220
// [1] bool operator<=(const QTime &) const
// (12)qm3457575529 (17)_ZNK5QTimeleERKS_
//static
/*void qm3457575529(const QTime & other)*/ {
  const QTime & other = *(const QTime *)this_;
  (void) ((QTime*)this_)->operator<=(other);
  // auto xptr = (bool (QTime::*)(QTime const&) const ) &QTime::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:221
// [1] bool operator>(const QTime &) const
// (10)qm77328301 (17)_ZNK5QTimegtERKS_
//static
/*void qm77328301(const QTime & other)*/ {
  const QTime & other = *(const QTime *)this_;
  (void) ((QTime*)this_)->operator>(other);
  // auto xptr = (bool (QTime::*)(QTime const&) const ) &QTime::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:222
// [1] bool operator>=(const QTime &) const
// (12)qm3423682195 (17)_ZNK5QTimegeERKS_
//static
/*void qm3423682195(const QTime & other)*/ {
  const QTime & other = *(const QTime *)this_;
  (void) ((QTime*)this_)->operator>=(other);
  // auto xptr = (bool (QTime::*)(QTime const&) const ) &QTime::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:224
// [4] QTime fromMSecsSinceStartOfDay(int) 
// (11)qm676535615 (37)_ZN5QTime24fromMSecsSinceStartOfDayEi
//static
/*void qm676535615(int msecs)*/ {
  int msecs = *(int*)this_;
  (void) QTime::fromMSecsSinceStartOfDay(msecs);
   auto xptr = (QTime (*)(int) ) &QTime::fromMSecsSinceStartOfDay;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:225
// [4] int msecsSinceStartOfDay() const
// (12)qm3263502930 (34)_ZNK5QTime20msecsSinceStartOfDayEv
//static
/*void qm3263502930()*/ {
  ;
  (void) ((QTime*)this_)->msecsSinceStartOfDay();
   auto xptr = (int (QTime::*)() const ) &QTime::msecsSinceStartOfDay;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QTimeD2Ev(void *this_)*/ {
  delete (QTime*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtime
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
