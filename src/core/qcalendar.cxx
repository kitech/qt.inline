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


struct qt_meta_stringdata_MyQCalendar_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCalendar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCalendar_t qt_meta_stringdata_MyQCalendar = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQCalendar"
  },
  "MyQCalendar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCalendar[] = {
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
class Q_DECL_EXPORT MyQCalendar : public QCalendar {
public:
  virtual ~MyQCalendar() {}
// void QCalendar()
MyQCalendar() : QCalendar() {}
// void QCalendar(QCalendar::System)
MyQCalendar(QCalendar::System system) : QCalendar(system) {}
// void QCalendar(QLatin1String)
MyQCalendar(QLatin1String name) : QCalendar(name) {}
// void QCalendar(QStringView)
MyQCalendar(QStringView name) : QCalendar(name) {}
};

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
  this_ =  new MyQCalendar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcalendar.h:135
// [-2] void QCalendar(QCalendar::System) 
// (12)qm1041500418 (27)_ZN9QCalendarC2ENS_6SystemE
/*void* qm1041500418(QCalendar::System system)*/{
  QCalendar::System system = *(QCalendar::System*)this_;
  this_ =  new QCalendar(system);
  this_ =  new MyQCalendar(system);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcalendar.h:136
// [-2] void QCalendar(QLatin1String) 
// (11)qm195008927 (31)_ZN9QCalendarC2E13QLatin1String
/*void* qm195008927(QLatin1String name)*/{
  QLatin1String name = *(QLatin1String*)this_;
  this_ =  new QCalendar(name);
  this_ =  new MyQCalendar(name);
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
