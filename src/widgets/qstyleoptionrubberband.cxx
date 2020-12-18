//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionRubberBand is pure virtual: false false
// QStyleOptionRubberBand has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionRubberBand_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionRubberBand_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionRubberBand_t qt_meta_stringdata_MyQStyleOptionRubberBand = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQStyleOptionRubberBand"
  },
  "MyQStyleOptionRubberBand"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionRubberBand[] = {
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
class Q_DECL_EXPORT MyQStyleOptionRubberBand : public QStyleOptionRubberBand {
public:
  virtual ~MyQStyleOptionRubberBand() {}
// void QStyleOptionRubberBand()
MyQStyleOptionRubberBand() : QStyleOptionRubberBand() {}
// void QStyleOptionRubberBand(const QStyleOptionRubberBand &)
MyQStyleOptionRubberBand(const QStyleOptionRubberBand & other) : QStyleOptionRubberBand(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionrubberband(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:513
// [-2] void QStyleOptionRubberBand(const QStyleOptionRubberBand &) 
// (11)qm803694348 (34)_ZN22QStyleOptionRubberBandC2ERKS_
/*void* qm803694348(const QStyleOptionRubberBand & other)*/{
  const QStyleOptionRubberBand & other = *(const QStyleOptionRubberBand *)this_;
  this_ =  new QStyleOptionRubberBand(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:514
// [72] QStyleOptionRubberBand & operator=(const QStyleOptionRubberBand &) 
// (12)qm3027080006 (34)_ZN22QStyleOptionRubberBandaSERKS_
//static
/*void qm3027080006(const QStyleOptionRubberBand & arg0)*/ {
  const QStyleOptionRubberBand & arg0 = *(const QStyleOptionRubberBand *)this_;
  (void) ((QStyleOptionRubberBand*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionRubberBand & (QStyleOptionRubberBand::*)(QStyleOptionRubberBand const&) ) &QStyleOptionRubberBand::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QStyleOptionRubberBandD2Ev(void *this_)*/ {
  delete (QStyleOptionRubberBand*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionrubberband
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
