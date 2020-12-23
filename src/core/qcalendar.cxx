//  header block begin

// /usr/include/qt/QtCore/qcalendar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcalendar.h>
#include <QtCore>
#include "callback_inherit.h"

// QCalendar is pure virtual: false false
// QCalendar has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcalendar(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcalendar.h:134
// [-2] void QCalendar() 
// (12)qm3825756679 (17)_ZN9QCalendarC2Ev
/*void* qm3825756679()*/{
  ;
  this_ =  new QCalendar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcalendar.h:135
// [-2] void QCalendar(QCalendar::System) 
// (12)qm1041500418 (27)_ZN9QCalendarC2ENS_6SystemE
/*void* qm1041500418(QCalendar::System system)*/{
  QCalendar::System system = *(QCalendar::System*)this_;
  this_ =  new QCalendar(system);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcalendar.h:136
// [-2] void QCalendar(QLatin1String) 
// (11)qm195008927 (31)_ZN9QCalendarC2E13QLatin1String
/*void* qm195008927(QLatin1String name)*/{
  QLatin1String name = *(QLatin1String*)this_;
  this_ =  new QCalendar(name);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcalendar.h:140
// [1] bool isValid() const
// (12)qm3184242882 (24)_ZNK9QCalendar7isValidEv
//static
/*void qm3184242882()*/ {
  ;
  (void) ((QCalendar*)this_)->isValid();
   auto xptr = (bool (QCalendar::*)() const ) &QCalendar::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QCalendarD2Ev(void *this_)*/ {
  delete (QCalendar*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcalendar
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
