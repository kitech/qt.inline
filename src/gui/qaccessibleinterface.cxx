//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleInterface is pure virtual: true true
// QAccessibleInterface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleinterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:491
// [8] QAccessibleTextInterface * textInterface() 
// (11)qm117926435 (42)_ZN20QAccessibleInterface13textInterfaceEv
//static
/*void qm117926435()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->textInterface();
   auto xptr = (QAccessibleTextInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::textInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:494
// [8] QAccessibleEditableTextInterface * editableTextInterface() 
// (12)qm2801871774 (50)_ZN20QAccessibleInterface21editableTextInterfaceEv
//static
/*void qm2801871774()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->editableTextInterface();
   auto xptr = (QAccessibleEditableTextInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::editableTextInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:497
// [8] QAccessibleValueInterface * valueInterface() 
// (11)qm336514848 (43)_ZN20QAccessibleInterface14valueInterfaceEv
//static
/*void qm336514848()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->valueInterface();
   auto xptr = (QAccessibleValueInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::valueInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:500
// [8] QAccessibleActionInterface * actionInterface() 
// (12)qm3514993555 (44)_ZN20QAccessibleInterface15actionInterfaceEv
//static
/*void qm3514993555()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->actionInterface();
   auto xptr = (QAccessibleActionInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::actionInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:503
// [8] QAccessibleImageInterface * imageInterface() 
// (12)qm1519869098 (43)_ZN20QAccessibleInterface14imageInterfaceEv
//static
/*void qm1519869098()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->imageInterface();
   auto xptr = (QAccessibleImageInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::imageInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:506
// [8] QAccessibleTableInterface * tableInterface() 
// (12)qm1806111729 (43)_ZN20QAccessibleInterface14tableInterfaceEv
//static
/*void qm1806111729()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->tableInterface();
   auto xptr = (QAccessibleTableInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::tableInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:509
// [8] QAccessibleTableCellInterface * tableCellInterface() 
// (12)qm3431663401 (47)_ZN20QAccessibleInterface18tableCellInterfaceEv
//static
/*void qm3431663401()*/ {
  ;
  (void) ((QAccessibleInterface*)this_)->tableCellInterface();
   auto xptr = (QAccessibleTableCellInterface * (QAccessibleInterface::*)() ) &QAccessibleInterface::tableCellInterface;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:514
// [8] void * interface_cast(QAccessible::InterfaceType) 
// (12)qm3395622546 (72)_ZN20QAccessibleInterface14interface_castEN11QAccessible13InterfaceTypeE
//static
/*void qm3395622546(QAccessible::InterfaceType arg0)*/ {
  QAccessible::InterfaceType arg0 = *(QAccessible::InterfaceType*)this_;
  (void) ((QAccessibleInterface*)this_)->interface_cast(arg0);
   auto xptr = (void * (QAccessibleInterface::*)(QAccessible::InterfaceType) ) &QAccessibleInterface::interface_cast;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
