//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionDockWidget is pure virtual: false false
// QStyleOptionDockWidget has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionDockWidget_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionDockWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionDockWidget_t qt_meta_stringdata_MyQStyleOptionDockWidget = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQStyleOptionDockWidget"
  },
  "MyQStyleOptionDockWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionDockWidget[] = {
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
class Q_DECL_EXPORT MyQStyleOptionDockWidget : public QStyleOptionDockWidget {
public:
  virtual ~MyQStyleOptionDockWidget() {}
// void QStyleOptionDockWidget()
MyQStyleOptionDockWidget() : QStyleOptionDockWidget() {}
// void QStyleOptionDockWidget(const QStyleOptionDockWidget &)
MyQStyleOptionDockWidget(const QStyleOptionDockWidget & other) : QStyleOptionDockWidget(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiondockwidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:409
// [-2] void QStyleOptionDockWidget() 
// (11)qm963809843 (31)_ZN22QStyleOptionDockWidgetC2Ev
/*void* qm963809843()*/{
  ;
  this_ =  new QStyleOptionDockWidget();
  this_ =  new MyQStyleOptionDockWidget();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:410
// [-2] void QStyleOptionDockWidget(const QStyleOptionDockWidget &) 
// (11)qm499999440 (34)_ZN22QStyleOptionDockWidgetC2ERKS_
/*void* qm499999440(const QStyleOptionDockWidget & other)*/{
  const QStyleOptionDockWidget & other = *(const QStyleOptionDockWidget *)this_;
  this_ =  new QStyleOptionDockWidget(other);
  this_ =  new MyQStyleOptionDockWidget(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:411
// [80] QStyleOptionDockWidget & operator=(const QStyleOptionDockWidget &) 
// (12)qm2252838554 (34)_ZN22QStyleOptionDockWidgetaSERKS_
//static
/*void qm2252838554(const QStyleOptionDockWidget & arg0)*/ {
  const QStyleOptionDockWidget & arg0 = *(const QStyleOptionDockWidget *)this_;
  (void) ((QStyleOptionDockWidget*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionDockWidget & (QStyleOptionDockWidget::*)(QStyleOptionDockWidget const&) ) &QStyleOptionDockWidget::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QStyleOptionDockWidgetD2Ev(void *this_)*/ {
  delete (QStyleOptionDockWidget*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiondockwidget
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
