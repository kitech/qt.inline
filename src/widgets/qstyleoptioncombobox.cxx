//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComboBox is pure virtual: false false
// QStyleOptionComboBox has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptioncombobox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:627
// [-2] void QStyleOptionComboBox() 
// (12)qm1715716597 (29)_ZN20QStyleOptionComboBoxC2Ev
/*void* qm1715716597()*/{
  ;
  this_ =  new QStyleOptionComboBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:628
// [-2] void QStyleOptionComboBox(const QStyleOptionComboBox &) 
// (12)qm1218938576 (32)_ZN20QStyleOptionComboBoxC2ERKS_
/*void* qm1218938576(const QStyleOptionComboBox & other)*/{
  const QStyleOptionComboBox & other = *(const QStyleOptionComboBox *)this_;
  this_ =  new QStyleOptionComboBox(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:629
// [120] QStyleOptionComboBox & operator=(const QStyleOptionComboBox &) 
// (12)qm3542971034 (32)_ZN20QStyleOptionComboBoxaSERKS_
//static
/*void qm3542971034(const QStyleOptionComboBox & arg0)*/ {
  const QStyleOptionComboBox & arg0 = *(const QStyleOptionComboBox *)this_;
  (void) ((QStyleOptionComboBox*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionComboBox & (QStyleOptionComboBox::*)(QStyleOptionComboBox const&) ) &QStyleOptionComboBox::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionComboBoxD2Ev(void *this_)*/ {
  delete (QStyleOptionComboBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptioncombobox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
