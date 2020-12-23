//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(tablewidget)
// /usr/include/qt/QtWidgets/qtablewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtablewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableWidgetSelectionRange is pure virtual: false false
// QTableWidgetSelectionRange has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtablewidgetselectionrange(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:56
// [-2] void QTableWidgetSelectionRange() 
// (12)qm2875843222 (35)_ZN26QTableWidgetSelectionRangeC2Ev
/*void* qm2875843222()*/{
  ;
  this_ =  new QTableWidgetSelectionRange();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:57
// [-2] void QTableWidgetSelectionRange(int, int, int, int) 
// (12)qm2446650141 (38)_ZN26QTableWidgetSelectionRangeC2Eiiii
/*void* qm2446650141(int top, int left, int bottom, int right)*/{
  int top = *(int*)this_; int left = *(int*)this_; int bottom = *(int*)this_; int right = *(int*)this_;
  this_ =  new QTableWidgetSelectionRange(top, left, bottom, right);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:60
// [-2] void QTableWidgetSelectionRange(const QTableWidgetSelectionRange &) 
// (12)qm1730432467 (38)_ZN26QTableWidgetSelectionRangeC2ERKS_
/*void* qm1730432467(const QTableWidgetSelectionRange & other)*/{
  const QTableWidgetSelectionRange & other = *(const QTableWidgetSelectionRange *)this_;
  this_ =  new QTableWidgetSelectionRange(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:63
// [4] int topRow() const
// (12)qm2353253254 (41)_ZNK26QTableWidgetSelectionRange6topRowEv
//static
/*void qm2353253254()*/ {
  ;
  (void) ((QTableWidgetSelectionRange*)this_)->topRow();
   auto xptr = (int (QTableWidgetSelectionRange::*)() const ) &QTableWidgetSelectionRange::topRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:64
// [4] int bottomRow() const
// (12)qm3007998145 (44)_ZNK26QTableWidgetSelectionRange9bottomRowEv
//static
/*void qm3007998145()*/ {
  ;
  (void) ((QTableWidgetSelectionRange*)this_)->bottomRow();
   auto xptr = (int (QTableWidgetSelectionRange::*)() const ) &QTableWidgetSelectionRange::bottomRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:65
// [4] int leftColumn() const
// (10)qm87161142 (46)_ZNK26QTableWidgetSelectionRange10leftColumnEv
//static
/*void qm87161142()*/ {
  ;
  (void) ((QTableWidgetSelectionRange*)this_)->leftColumn();
   auto xptr = (int (QTableWidgetSelectionRange::*)() const ) &QTableWidgetSelectionRange::leftColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:66
// [4] int rightColumn() const
// (12)qm4258073487 (47)_ZNK26QTableWidgetSelectionRange11rightColumnEv
//static
/*void qm4258073487()*/ {
  ;
  (void) ((QTableWidgetSelectionRange*)this_)->rightColumn();
   auto xptr = (int (QTableWidgetSelectionRange::*)() const ) &QTableWidgetSelectionRange::rightColumn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:67
// [4] int rowCount() const
// (12)qm2393751315 (43)_ZNK26QTableWidgetSelectionRange8rowCountEv
//static
/*void qm2393751315()*/ {
  ;
  (void) ((QTableWidgetSelectionRange*)this_)->rowCount();
   auto xptr = (int (QTableWidgetSelectionRange::*)() const ) &QTableWidgetSelectionRange::rowCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:68
// [4] int columnCount() const
// (12)qm1703769999 (47)_ZNK26QTableWidgetSelectionRange11columnCountEv
//static
/*void qm1703769999()*/ {
  ;
  (void) ((QTableWidgetSelectionRange*)this_)->columnCount();
   auto xptr = (int (QTableWidgetSelectionRange::*)() const ) &QTableWidgetSelectionRange::columnCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QTableWidgetSelectionRangeD2Ev(void *this_)*/ {
  delete (QTableWidgetSelectionRange*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtablewidgetselectionrange
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(tablewidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
