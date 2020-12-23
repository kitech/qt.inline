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
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollerproperties.h:61
// [-2] void QScrollerProperties(const QScrollerProperties &) 
// (12)qm4136066039 (31)_ZN19QScrollerPropertiesC2ERKS_
/*void* qm4136066039(const QScrollerProperties & sp)*/{
  const QScrollerProperties & sp = *(const QScrollerProperties *)this_;
  this_ =  new QScrollerProperties(sp);
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
