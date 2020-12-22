//  header block begin

// /usr/include/qt/QtGui/qtexttable.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtexttable.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTableCell is pure virtual: false false
// QTextTableCell has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextTableCell_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextTableCell_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextTableCell_t qt_meta_stringdata_MyQTextTableCell = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQTextTableCell"
  },
  "MyQTextTableCell"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextTableCell[] = {
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
class Q_DECL_EXPORT MyQTextTableCell : public QTextTableCell {
public:
  virtual ~MyQTextTableCell() {}
// void QTextTableCell()
MyQTextTableCell() : QTextTableCell() {}
// void QTextTableCell(const QTextTableCell &)
MyQTextTableCell(const QTextTableCell & o) : QTextTableCell(o) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtexttablecell(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:57
// [-2] void QTextTableCell() 
// (12)qm3273602161 (23)_ZN14QTextTableCellC2Ev
/*void* qm3273602161()*/{
  ;
  this_ =  new QTextTableCell();
  this_ =  new MyQTextTableCell();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:58
// [-2] void ~QTextTableCell() 
// (12)qm1590168776 (23)_ZN14QTextTableCellD2Ev
/*void qm1590168776 (void *this_)*/ {
  delete (QTextTableCell*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:59
// [-2] void QTextTableCell(const QTextTableCell &) 
// (12)qm2777496846 (26)_ZN14QTextTableCellC2ERKS_
/*void* qm2777496846(const QTextTableCell & o)*/{
  const QTextTableCell & o = *(const QTextTableCell *)this_;
  this_ =  new QTextTableCell(o);
  this_ =  new MyQTextTableCell(o);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:60
// [16] QTextTableCell & operator=(const QTextTableCell &) 
// (12)qm1040697668 (26)_ZN14QTextTableCellaSERKS_
//static
/*void qm1040697668(const QTextTableCell & o)*/ {
  const QTextTableCell & o = *(const QTextTableCell *)this_;
  (void) ((QTextTableCell*)this_)->operator=(o);
  // auto xptr = (QTextTableCell & (QTextTableCell::*)(QTextTableCell const&) ) &QTextTableCell::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:72
// [1] bool isValid() const
// (12)qm1472400709 (30)_ZNK14QTextTableCell7isValidEv
//static
/*void qm1472400709()*/ {
  ;
  (void) ((QTextTableCell*)this_)->isValid();
   auto xptr = (bool (QTextTableCell::*)() const ) &QTextTableCell::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:79
// [1] bool operator==(const QTextTableCell &) const
// (12)qm1597674243 (27)_ZNK14QTextTableCelleqERKS_
//static
/*void qm1597674243(const QTextTableCell & other)*/ {
  const QTextTableCell & other = *(const QTextTableCell *)this_;
  (void) ((QTextTableCell*)this_)->operator==(other);
  // auto xptr = (bool (QTextTableCell::*)(QTextTableCell const&) const ) &QTextTableCell::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:81
// [1] bool operator!=(const QTextTableCell &) const
// (12)qm3313141620 (27)_ZNK14QTextTableCellneERKS_
//static
/*void qm3313141620(const QTextTableCell & other)*/ {
  const QTextTableCell & other = *(const QTextTableCell *)this_;
  (void) ((QTextTableCell*)this_)->operator!=(other);
  // auto xptr = (bool (QTextTableCell::*)(QTextTableCell const&) const ) &QTextTableCell::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qtexttablecell
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
