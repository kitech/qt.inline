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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdatetime(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:296
// [-2] void QDateTime() 
// (12)qm1949427464 (17)_ZN9QDateTimeC2Ev
/*void* qm1949427464()*/{
  ;
  this_ =  new QDateTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:300
// [-2] void QDateTime(const QDate &, const QTime &, Qt::TimeSpec) 
// (12)qm3960008292 (46)_ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecE
/*void* qm3960008292(const QDate & arg0, const QTime & arg1, Qt::TimeSpec spec)*/{
  const QDate & arg0 = *(const QDate *)this_; const QTime & arg1 = *(const QTime *)this_; Qt::TimeSpec spec = *(Qt::TimeSpec*)this_;
  this_ =  new QDateTime(arg0, arg1, spec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:302
// [-2] void QDateTime(const QDate &, const QTime &, Qt::TimeSpec, int) 
// (12)qm2891946974 (47)_ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecEi
/*void* qm2891946974(const QDate & date, const QTime & time, Qt::TimeSpec spec, int offsetSeconds)*/{
  const QDate & date = *(const QDate *)this_; const QTime & time = *(const QTime *)this_; Qt::TimeSpec spec = *(Qt::TimeSpec*)this_; int offsetSeconds = *(int*)this_;
  this_ =  new QDateTime(date, time, spec, offsetSeconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:304
// [-2] void QDateTime(const QDate &, const QTime &, const QTimeZone &) 
// (11)qm548597330 (44)_ZN9QDateTimeC2ERK5QDateRK5QTimeRK9QTimeZone
/*void* qm548597330(const QDate & date, const QTime & time, const QTimeZone & timeZone)*/{
  const QDate & date = *(const QDate *)this_; const QTime & time = *(const QTime *)this_; const QTimeZone & timeZone = *(const QTimeZone *)this_;
  this_ =  new QDateTime(date, time, timeZone);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:306
// [-2] void QDateTime(const QDateTime &) 
// (12)qm2288973173 (20)_ZN9QDateTimeC2ERKS_
/*void* qm2288973173(const QDateTime & other)*/{
  const QDateTime & other = *(const QDateTime *)this_;
  this_ =  new QDateTime(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:307
// [-2] void QDateTime(QDateTime &&) 
// (12)qm4137027568 (19)_ZN9QDateTimeC2EOS_
/*void* qm4137027568(QDateTime && other)*/{
  QDateTime && other =  static_cast<QDateTime &&>(*(QDateTime *)this_);
  this_ =  new QDateTime(other);
}

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
