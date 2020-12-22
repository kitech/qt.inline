//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(scroller)
// /usr/include/qt/QtWidgets/qscrollerproperties.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscrollerproperties.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QScrollerProperties is pure virtual: false false
// QScrollerProperties has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQScrollerProperties_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScrollerProperties_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScrollerProperties_t qt_meta_stringdata_MyQScrollerProperties = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQScrollerProperties"
  },
  "MyQScrollerProperties"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScrollerProperties[] = {
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
class Q_DECL_EXPORT MyQScrollerProperties : public QScrollerProperties {
public:
  virtual ~MyQScrollerProperties() {}
// void QScrollerProperties()
MyQScrollerProperties() : QScrollerProperties() {}
// void QScrollerProperties(const QScrollerProperties &)
MyQScrollerProperties(const QScrollerProperties & sp) : QScrollerProperties(sp) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qscrollerproperties(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:60
// [-2] void QScrollerProperties() 
// (12)qm3608928252 (28)_ZN19QScrollerPropertiesC2Ev
/*void* qm3608928252()*/{
  ;
  this_ =  new QScrollerProperties();
  this_ =  new MyQScrollerProperties();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:61
// [-2] void QScrollerProperties(const QScrollerProperties &) 
// (12)qm4136066039 (31)_ZN19QScrollerPropertiesC2ERKS_
/*void* qm4136066039(const QScrollerProperties & sp)*/{
  const QScrollerProperties & sp = *(const QScrollerProperties *)this_;
  this_ =  new QScrollerProperties(sp);
  this_ =  new MyQScrollerProperties(sp);
}


/*void C_ZN19QScrollerPropertiesD2Ev(void *this_)*/ {
  delete (QScrollerProperties*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qscrollerproperties
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(scroller)
#endif // #ifndef QT_MINIMAL
//  footer block end
