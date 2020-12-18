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


struct qt_meta_stringdata_MyQTimeZone_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTimeZone_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTimeZone_t qt_meta_stringdata_MyQTimeZone = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTimeZone"
  },
  "MyQTimeZone"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTimeZone[] = {
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
class Q_DECL_EXPORT MyQTimeZone : public QTimeZone {
public:
  virtual ~MyQTimeZone() {}
// void QTimeZone()
MyQTimeZone() : QTimeZone() {}
// void QTimeZone(const QByteArray &)
MyQTimeZone(const QByteArray & ianaId) : QTimeZone(ianaId) {}
// void QTimeZone(int)
MyQTimeZone(int offsetSeconds) : QTimeZone(offsetSeconds) {}
// void QTimeZone(const QByteArray &, int, const QString &, const QString &, QLocale::Country, const QString &)
MyQTimeZone(const QByteArray & zoneId, int offsetSeconds, const QString & name, const QString & abbreviation, QLocale::Country country, const QString & comment) : QTimeZone(zoneId, offsetSeconds, name, abbreviation, country, comment) {}
// void QTimeZone(const QTimeZone &)
MyQTimeZone(const QTimeZone & other) : QTimeZone(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtimezone(void* this_) {
  uint64_t fnptrsumval = 0;

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
