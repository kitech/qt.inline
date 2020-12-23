//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(timezone)
// /usr/include/qt/QtCore/qtimezone.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtimezone.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimeZone is pure virtual: false false
// QTimeZone has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtimezone(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:92
// [-2] void QTimeZone() 
// (12)qm3919516725 (17)_ZN9QTimeZoneC2Ev
/*void* qm3919516725()*/{
  ;
  this_ =  new QTimeZone();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:93
// [-2] void QTimeZone(const QByteArray &) 
// (12)qm1091704219 (30)_ZN9QTimeZoneC2ERK10QByteArray
/*void* qm1091704219(const QByteArray & ianaId)*/{
  const QByteArray & ianaId = *(const QByteArray *)this_;
  this_ =  new QTimeZone(ianaId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:94
// [-2] void QTimeZone(int) 
// (12)qm1687624128 (17)_ZN9QTimeZoneC2Ei
/*void* qm1687624128(int offsetSeconds)*/{
  int offsetSeconds = *(int*)this_;
  this_ =  new QTimeZone(offsetSeconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:95
// [-2] void QTimeZone(const QByteArray &, int, const QString &, const QString &, QLocale::Country, const QString &) 
// (12)qm1931350210 (65)_ZN9QTimeZoneC2ERK10QByteArrayiRK7QStringS5_N7QLocale7CountryES5_
/*void* qm1931350210(const QByteArray & zoneId, int offsetSeconds, const QString & name, const QString & abbreviation, QLocale::Country country, const QString & comment)*/{
  const QByteArray & zoneId = *(const QByteArray *)this_; int offsetSeconds = *(int*)this_; const QString & name = *(const QString *)this_; const QString & abbreviation = *(const QString *)this_; QLocale::Country country = *(QLocale::Country*)this_; const QString & comment = *(const QString *)this_;
  this_ =  new QTimeZone(zoneId, offsetSeconds, name, abbreviation, country, comment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:98
// [-2] void QTimeZone(const QTimeZone &) 
// (12)qm2854404026 (20)_ZN9QTimeZoneC2ERKS_
/*void* qm2854404026(const QTimeZone & other)*/{
  const QTimeZone & other = *(const QTimeZone *)this_;
  this_ =  new QTimeZone(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:102
// [8] QTimeZone & operator=(QTimeZone &&) 
// (12)qm1459391366 (19)_ZN9QTimeZoneaSEOS_
//static
/*void qm1459391366(QTimeZone && other)*/ {
  QTimeZone && other =  static_cast<QTimeZone &&>(*(QTimeZone *)this_);
  (void) ((QTimeZone*)this_)->operator=(other);
  // auto xptr = (QTimeZone & (QTimeZone::*)(QTimeZone&&) ) &QTimeZone::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:104
// [-2] void swap(QTimeZone &) 
// (11)qm164867472 (22)_ZN9QTimeZone4swapERS_
//static
/*void qm164867472(QTimeZone & other)*/ {
  QTimeZone & other = *(QTimeZone *)this_;
  (void) ((QTimeZone*)this_)->swap(other);
   auto xptr = (void (QTimeZone::*)(QTimeZone&) ) &QTimeZone::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QTimeZoneD2Ev(void *this_)*/ {
  delete (QTimeZone*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtimezone
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(timezone)
#endif // #ifndef QT_MINIMAL
//  footer block end
