//  header block begin

// /usr/include/qt/QtCore/qdatetime.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetime.h>
#include <QtCore>
#include "callback_inherit.h"

// QDate is pure virtual: false false
// QDate has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDate_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDate_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDate_t qt_meta_stringdata_MyQDate = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQDate"
  },
  "MyQDate"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDate[] = {
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
class Q_DECL_EXPORT MyQDate : public QDate {
public:
  virtual ~MyQDate() {}
// void QDate()
MyQDate() : QDate() {}
// void QDate(int, int, int)
MyQDate(int y, int m, int d) : QDate(y, m, d) {}
// void QDate(int, int, int, QCalendar)
MyQDate(int y, int m, int d, QCalendar cal) : QDate(y, m, d, cal) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdate(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:73
// [-2] void QDate() 
// (12)qm1130278339 (13)_ZN5QDateC2Ev
/*void* qm1130278339()*/{
  ;
  this_ =  new QDate();
  this_ =  new MyQDate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:74
// [-2] void QDate(int, int, int) 
// (12)qm2655184678 (15)_ZN5QDateC2Eiii
/*void* qm2655184678(int y, int m, int d)*/{
  int y = *(int*)this_; int m = *(int*)this_; int d = *(int*)this_;
  this_ =  new QDate(y, m, d);
  this_ =  new MyQDate(y, m, d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:75
// [-2] void QDate(int, int, int, QCalendar) 
// (11)qm686022540 (25)_ZN5QDateC2Eiii9QCalendar
/*void* qm686022540(int y, int m, int d, QCalendar cal)*/{
  int y = *(int*)this_; int m = *(int*)this_; int d = *(int*)this_; QCalendar cal = *(QCalendar*)this_;
  this_ =  new QDate(y, m, d, cal);
  this_ =  new MyQDate(y, m, d, cal);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:77
// [1] bool isNull() const
// (12)qm2488924308 (19)_ZNK5QDate6isNullEv
//static
/*void qm2488924308()*/ {
  ;
  (void) ((QDate*)this_)->isNull();
   auto xptr = (bool (QDate::*)() const ) &QDate::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:78
// [1] bool isValid() const
// (12)qm1159493102 (20)_ZNK5QDate7isValidEv
//static
/*void qm1159493102()*/ {
  ;
  (void) ((QDate*)this_)->isValid();
   auto xptr = (bool (QDate::*)() const ) &QDate::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:150
// [1] bool operator==(const QDate &) const
// (12)qm2123046690 (17)_ZNK5QDateeqERKS_
//static
/*void qm2123046690(const QDate & other)*/ {
  const QDate & other = *(const QDate *)this_;
  (void) ((QDate*)this_)->operator==(other);
  // auto xptr = (bool (QDate::*)(QDate const&) const ) &QDate::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:151
// [1] bool operator!=(const QDate &) const
// (12)qm3838511957 (17)_ZNK5QDateneERKS_
//static
/*void qm3838511957(const QDate & other)*/ {
  const QDate & other = *(const QDate *)this_;
  (void) ((QDate*)this_)->operator!=(other);
  // auto xptr = (bool (QDate::*)(QDate const&) const ) &QDate::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:152
// [1] bool operator<(const QDate &) const
// (12)qm3151940418 (17)_ZNK5QDateltERKS_
//static
/*void qm3151940418(const QDate & other)*/ {
  const QDate & other = *(const QDate *)this_;
  (void) ((QDate*)this_)->operator<(other);
  // auto xptr = (bool (QDate::*)(QDate const&) const ) &QDate::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:153
// [1] bool operator<=(const QDate &) const
// (12)qm1934891644 (17)_ZNK5QDateleERKS_
//static
/*void qm1934891644(const QDate & other)*/ {
  const QDate & other = *(const QDate *)this_;
  (void) ((QDate*)this_)->operator<=(other);
  // auto xptr = (bool (QDate::*)(QDate const&) const ) &QDate::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:154
// [1] bool operator>(const QDate &) const
// (12)qm3118047160 (17)_ZNK5QDategtERKS_
//static
/*void qm3118047160(const QDate & other)*/ {
  const QDate & other = *(const QDate *)this_;
  (void) ((QDate*)this_)->operator>(other);
  // auto xptr = (bool (QDate::*)(QDate const&) const ) &QDate::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:155
// [1] bool operator>=(const QDate &) const
// (12)qm1901284998 (17)_ZNK5QDategeERKS_
//static
/*void qm1901284998(const QDate & other)*/ {
  const QDate & other = *(const QDate *)this_;
  (void) ((QDate*)this_)->operator>=(other);
  // auto xptr = (bool (QDate::*)(QDate const&) const ) &QDate::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:166
// [8] QDate fromJulianDay(qint64) 
// (12)qm4288513857 (26)_ZN5QDate13fromJulianDayEx
//static
/*void qm4288513857(long long jd_)*/ {
  long long jd_ = *(long long*)this_;
  (void) QDate::fromJulianDay(jd_);
   auto xptr = (QDate (*)(long long) ) &QDate::fromJulianDay;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:168
// [8] qint64 toJulianDay() const
// (12)qm1829505506 (25)_ZNK5QDate11toJulianDayEv
//static
/*void qm1829505506()*/ {
  ;
  (void) ((QDate*)this_)->toJulianDay();
   auto xptr = (long long (QDate::*)() const ) &QDate::toJulianDay;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QDateD2Ev(void *this_)*/ {
  delete (QDate*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdate
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
