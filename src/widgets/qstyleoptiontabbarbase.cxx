//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTabBarBase is pure virtual: false false
// QStyleOptionTabBarBase has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionTabBarBase_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionTabBarBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionTabBarBase_t qt_meta_stringdata_MyQStyleOptionTabBarBase = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQStyleOptionTabBarBase"
  },
  "MyQStyleOptionTabBarBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionTabBarBase[] = {
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
class Q_DECL_EXPORT MyQStyleOptionTabBarBase : public QStyleOptionTabBarBase {
public:
  virtual ~MyQStyleOptionTabBarBase() {}
// void QStyleOptionTabBarBase()
MyQStyleOptionTabBarBase() : QStyleOptionTabBarBase() {}
// void QStyleOptionTabBarBase(const QStyleOptionTabBarBase &)
MyQStyleOptionTabBarBase(const QStyleOptionTabBarBase & other) : QStyleOptionTabBarBase(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontabbarbase(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:198
// [-2] void QStyleOptionTabBarBase() 
// (12)qm1558999134 (31)_ZN22QStyleOptionTabBarBaseC2Ev
/*void* qm1558999134()*/{
  ;
  this_ =  new QStyleOptionTabBarBase();
  this_ =  new MyQStyleOptionTabBarBase();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:199
// [-2] void QStyleOptionTabBarBase(const QStyleOptionTabBarBase &) 
// (11)qm641537515 (34)_ZN22QStyleOptionTabBarBaseC2ERKS_
/*void* qm641537515(const QStyleOptionTabBarBase & other)*/{
  const QStyleOptionTabBarBase & other = *(const QStyleOptionTabBarBase *)this_;
  this_ =  new QStyleOptionTabBarBase(other);
  this_ =  new MyQStyleOptionTabBarBase(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:200
// [104] QStyleOptionTabBarBase & operator=(const QStyleOptionTabBarBase &) 
// (12)qm3182944673 (34)_ZN22QStyleOptionTabBarBaseaSERKS_
//static
/*void qm3182944673(const QStyleOptionTabBarBase & arg0)*/ {
  const QStyleOptionTabBarBase & arg0 = *(const QStyleOptionTabBarBase *)this_;
  (void) ((QStyleOptionTabBarBase*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionTabBarBase & (QStyleOptionTabBarBase::*)(QStyleOptionTabBarBase const&) ) &QStyleOptionTabBarBase::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QStyleOptionTabBarBaseD2Ev(void *this_)*/ {
  delete (QStyleOptionTabBarBase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontabbarbase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
