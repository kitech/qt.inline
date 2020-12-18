//  header block begin

// /usr/include/qt/QtCore/qdatetime.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetime.h>
#include <QtCore>
#include "callback_inherit.h"

// QDateTime is pure virtual: false false
// QDateTime has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDateTime_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDateTime_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDateTime_t qt_meta_stringdata_MyQDateTime = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQDateTime"
  },
  "MyQDateTime"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDateTime[] = {
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
class Q_DECL_EXPORT MyQDateTime : public QDateTime {
public:
  virtual ~MyQDateTime() {}
// void QDateTime()
MyQDateTime() : QDateTime() {}
// void QDateTime(const QDate &)
MyQDateTime(const QDate & arg0) : QDateTime(arg0) {}
// void QDateTime(const QDate &, const QTime &, Qt::TimeSpec)
MyQDateTime(const QDate & arg0, const QTime & arg1, Qt::TimeSpec spec) : QDateTime(arg0, arg1, spec) {}
// void QDateTime(const QDate &, const QTime &, Qt::TimeSpec, int)
MyQDateTime(const QDate & date, const QTime & time, Qt::TimeSpec spec, int offsetSeconds) : QDateTime(date, time, spec, offsetSeconds) {}
// void QDateTime(const QDate &, const QTime &, const QTimeZone &)
MyQDateTime(const QDate & date, const QTime & time, const QTimeZone & timeZone) : QDateTime(date, time, timeZone) {}
// void QDateTime(const QDateTime &)
MyQDateTime(const QDateTime & other) : QDateTime(other) {}
// void QDateTime(QDateTime &&)
MyQDateTime(QDateTime && other) : QDateTime(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdatetime(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:310
// [8] QDateTime & operator=(QDateTime &&) 
// (11)qm413203760 (19)_ZN9QDateTimeaSEOS_
//static
/*void qm413203760(QDateTime && other)*/ {
  QDateTime && other =  static_cast<QDateTime &&>(*(QDateTime *)this_);
  (void) ((QDateTime*)this_)->operator=(other);
  // auto xptr = (QDateTime & (QDateTime::*)(QDateTime&&) ) &QDateTime::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:313
// [-2] void swap(QDateTime &) 
// (12)qm3552111827 (22)_ZN9QDateTime4swapERS_
//static
/*void qm3552111827(QDateTime & other)*/ {
  QDateTime & other = *(QDateTime *)this_;
  (void) ((QDateTime*)this_)->swap(other);
   auto xptr = (void (QDateTime::*)(QDateTime&) ) &QDateTime::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:357
// [8] QDateTime toLocalTime() const
// (11)qm670330312 (29)_ZNK9QDateTime11toLocalTimeEv
//static
/*void qm670330312()*/ {
  ;
  (void) ((QDateTime*)this_)->toLocalTime();
   auto xptr = (QDateTime (QDateTime::*)() const ) &QDateTime::toLocalTime;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:358
// [8] QDateTime toUTC() const
// (12)qm4253918202 (22)_ZNK9QDateTime5toUTCEv
//static
/*void qm4253918202()*/ {
  ;
  (void) ((QDateTime*)this_)->toUTC();
   auto xptr = (QDateTime (QDateTime::*)() const ) &QDateTime::toUTC;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:369
// [1] bool operator!=(const QDateTime &) const
// (12)qm3205798979 (21)_ZNK9QDateTimeneERKS_
//static
/*void qm3205798979(const QDateTime & other)*/ {
  const QDateTime & other = *(const QDateTime *)this_;
  (void) ((QDateTime*)this_)->operator!=(other);
  // auto xptr = (bool (QDateTime::*)(QDateTime const&) const ) &QDateTime::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:371
// [1] bool operator<=(const QDateTime &) const
// (11)qm680234346 (21)_ZNK9QDateTimeleERKS_
//static
/*void qm680234346(const QDateTime & other)*/ {
  const QDateTime & other = *(const QDateTime *)this_;
  (void) ((QDateTime*)this_)->operator<=(other);
  // auto xptr = (bool (QDateTime::*)(QDateTime const&) const ) &QDateTime::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:372
// [1] bool operator>(const QDateTime &) const
// (12)qm3792046254 (21)_ZNK9QDateTimegtERKS_
//static
/*void qm3792046254(const QDateTime & other)*/ {
  const QDateTime & other = *(const QDateTime *)this_;
  (void) ((QDateTime*)this_)->operator>(other);
  // auto xptr = (bool (QDateTime::*)(QDateTime const&) const ) &QDateTime::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:373
// [1] bool operator>=(const QDateTime &) const
// (11)qm713873808 (21)_ZNK9QDateTimegeERKS_
//static
/*void qm713873808(const QDateTime & other)*/ {
  const QDateTime & other = *(const QDateTime *)this_;
  (void) ((QDateTime*)this_)->operator>=(other);
  // auto xptr = (bool (QDateTime::*)(QDateTime const&) const ) &QDateTime::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QDateTimeD2Ev(void *this_)*/ {
  delete (QDateTime*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdatetime
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
