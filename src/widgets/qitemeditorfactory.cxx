//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(itemviews)
// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemeditorfactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemEditorFactory is pure virtual: false false
// QItemEditorFactory has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qitemeditorfactory(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:98
// [-2] void QItemEditorFactory() 
// (12)qm2809309265 (27)_ZN18QItemEditorFactoryC2Ev
/*void* qm2809309265()*/{
  ;
  this_ =  new QItemEditorFactory();
}


/*void C_ZN18QItemEditorFactoryD2Ev(void *this_)*/ {
  delete (QItemEditorFactory*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qitemeditorfactory
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemviews)
#endif // #ifndef QT_MINIMAL
//  footer block end
