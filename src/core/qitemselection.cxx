//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(itemmodel)
// /usr/include/qt/QtCore/qitemselectionmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemselectionmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QItemSelection is pure virtual: false false
// QItemSelection has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qitemselection(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:252
// [-2] void QItemSelection() 
// (12)qm3922188993 (23)_ZN14QItemSelectionC2Ev
/*void* qm3922188993()*/{
  ;
  this_ =  new QItemSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:253
// [-2] void QItemSelection(const QModelIndex &, const QModelIndex &) 
// (12)qm1842449250 (40)_ZN14QItemSelectionC2ERK11QModelIndexS2_
/*void* qm1842449250(const QModelIndex & topLeft, const QModelIndex & bottomRight)*/{
  const QModelIndex & topLeft = *(const QModelIndex *)this_; const QModelIndex & bottomRight = *(const QModelIndex *)this_;
  this_ =  new QItemSelection(topLeft, bottomRight);
}


/*void C_ZN14QItemSelectionD2Ev(void *this_)*/ {
  delete (QItemSelection*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qitemselection
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
