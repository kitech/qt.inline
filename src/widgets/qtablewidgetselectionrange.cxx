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


struct qt_meta_stringdata_MyQTableWidgetSelectionRange_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTableWidgetSelectionRange_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTableWidgetSelectionRange_t qt_meta_stringdata_MyQTableWidgetSelectionRange = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQTableWidgetSelectionRange"
  },
  "MyQTableWidgetSelectionRange"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTableWidgetSelectionRange[] = {
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
class Q_DECL_EXPORT MyQTableWidgetSelectionRange : public QTableWidgetSelectionRange {
public:
  virtual ~MyQTableWidgetSelectionRange() {}
// void QTableWidgetSelectionRange()
MyQTableWidgetSelectionRange() : QTableWidgetSelectionRange() {}
// void QTableWidgetSelectionRange(int, int, int, int)
MyQTableWidgetSelectionRange(int top, int left, int bottom, int right) : QTableWidgetSelectionRange(top, left, bottom, right) {}
// void QTableWidgetSelectionRange(const QTableWidgetSelectionRange &)
MyQTableWidgetSelectionRange(const QTableWidgetSelectionRange & other) : QTableWidgetSelectionRange(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtablewidgetselectionrange(void* this_) {
  uint64_t fnptrsumval = 0;

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
