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
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:410
// [-2] void QStyleOptionDockWidget(const QStyleOptionDockWidget &) 
// (11)qm499999440 (34)_ZN22QStyleOptionDockWidgetC2ERKS_
/*void* qm499999440(const QStyleOptionDockWidget & other)*/{
  const QStyleOptionDockWidget & other = *(const QStyleOptionDockWidget *)this_;
  this_ =  new QStyleOptionDockWidget(other);
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
