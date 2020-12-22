//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOption is pure virtual: false false
// QStyleOption has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOption_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOption_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOption_t qt_meta_stringdata_MyQStyleOption = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQStyleOption"
  },
  "MyQStyleOption"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOption[] = {
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
class Q_DECL_EXPORT MyQStyleOption : public QStyleOption {
public:
  virtual ~MyQStyleOption() {}
// void QStyleOption(int, int)
MyQStyleOption(int version, int type_) : QStyleOption(version, type_) {}
// void QStyleOption(const QStyleOption &)
MyQStyleOption(const QStyleOption & other) : QStyleOption(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoption(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:102
// [-2] void QStyleOption(int, int) 
// (12)qm1020180947 (22)_ZN12QStyleOptionC2Eii
/*void* qm1020180947(int version, int type_)*/{
  int version = *(int*)this_; int type_ = *(int*)this_;
  this_ =  new QStyleOption(version, type_);
  this_ =  new MyQStyleOption(version, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:103
// [-2] void QStyleOption(const QStyleOption &) 
// (11)qm802167833 (24)_ZN12QStyleOptionC2ERKS_
/*void* qm802167833(const QStyleOption & other)*/{
  const QStyleOption & other = *(const QStyleOption *)this_;
  this_ =  new QStyleOption(other);
  this_ =  new MyQStyleOption(other);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:107
// [-2] void initFrom(const QWidget *) 
// (11)qm924829608 (37)_ZN12QStyleOption8initFromEPK7QWidget
//static
/*void qm924829608(const QWidget * w)*/ {
  const QWidget * w = *(const QWidget **)this_;
  (void) ((QStyleOption*)this_)->initFrom(w);
   auto xptr = (void (QStyleOption::*)(QWidget const*) ) &QStyleOption::initFrom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QStyleOptionD2Ev(void *this_)*/ {
  delete (QStyleOption*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoption
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
