//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTab is pure virtual: false false
// QStyleOptionTab has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionTab_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionTab_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionTab_t qt_meta_stringdata_MyQStyleOptionTab = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQStyleOptionTab"
  },
  "MyQStyleOptionTab"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionTab[] = {
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
class Q_DECL_EXPORT MyQStyleOptionTab : public QStyleOptionTab {
public:
  virtual ~MyQStyleOptionTab() {}
// void QStyleOptionTab()
MyQStyleOptionTab() : QStyleOptionTab() {}
// void QStyleOptionTab(const QStyleOptionTab &)
MyQStyleOptionTab(const QStyleOptionTab & other) : QStyleOptionTab(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontab(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:291
// [-2] void QStyleOptionTab() 
// (12)qm2025447193 (24)_ZN15QStyleOptionTabC2Ev
/*void* qm2025447193()*/{
  ;
  this_ =  new QStyleOptionTab();
  this_ =  new MyQStyleOptionTab();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:292
// [-2] void QStyleOptionTab(const QStyleOptionTab &) 
// (12)qm1635158999 (27)_ZN15QStyleOptionTabC2ERKS_
/*void* qm1635158999(const QStyleOptionTab & other)*/{
  const QStyleOptionTab & other = *(const QStyleOptionTab *)this_;
  this_ =  new QStyleOptionTab(other);
  this_ =  new MyQStyleOptionTab(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:293
// [136] QStyleOptionTab & operator=(const QStyleOptionTab &) 
// (12)qm4210851741 (27)_ZN15QStyleOptionTabaSERKS_
//static
/*void qm4210851741(const QStyleOptionTab & arg0)*/ {
  const QStyleOptionTab & arg0 = *(const QStyleOptionTab *)this_;
  (void) ((QStyleOptionTab*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionTab & (QStyleOptionTab::*)(QStyleOptionTab const&) ) &QStyleOptionTab::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QStyleOptionTabD2Ev(void *this_)*/ {
  delete (QStyleOptionTab*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontab
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
