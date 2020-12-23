//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTableFormat is pure virtual: false false
// QTextTableFormat has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtexttableformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:950
// [-2] void QTextTableFormat() 
// (12)qm4119534005 (25)_ZN16QTextTableFormatC2Ev
/*void* qm4119534005()*/{
  ;
  this_ =  new QTextTableFormat();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:952
// [1] bool isValid() const
// (12)qm4260001764 (32)_ZNK16QTextTableFormat7isValidEv
//static
/*void qm4260001764()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->isValid();
   auto xptr = (bool (QTextTableFormat::*)() const ) &QTextTableFormat::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:954
// [4] int columns() const
// (12)qm1851443059 (32)_ZNK16QTextTableFormat7columnsEv
//static
/*void qm1851443059()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->columns();
   auto xptr = (int (QTextTableFormat::*)() const ) &QTextTableFormat::columns;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:956
// [-2] void setColumns(int) 
// (12)qm1199519475 (35)_ZN16QTextTableFormat10setColumnsEi
//static
/*void qm1199519475(int columns)*/ {
  int columns = *(int*)this_;
  (void) ((QTextTableFormat*)this_)->setColumns(columns);
   auto xptr = (void (QTextTableFormat::*)(int) ) &QTextTableFormat::setColumns;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:958
// [-2] void setColumnWidthConstraints(const QVector<QTextLength> &) 
// (11)qm613711034 (74)_ZN16QTextTableFormat25setColumnWidthConstraintsERK7QVectorI11QTextLengthE
//static
/*void qm613711034(const QVector<QTextLength> & constraints)*/ {
  const QVector<QTextLength> & constraints = *(const QVector<QTextLength> *)this_;
  (void) ((QTextTableFormat*)this_)->setColumnWidthConstraints(constraints);
   auto xptr = (void (QTextTableFormat::*)(QVector<QTextLength> const&) ) &QTextTableFormat::setColumnWidthConstraints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:961
// [8] QVector<QTextLength> columnWidthConstraints() const
// (11)qm544266344 (48)_ZNK16QTextTableFormat22columnWidthConstraintsEv
//static
/*void qm544266344()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->columnWidthConstraints();
   auto xptr = (QVector<QTextLength> (QTextTableFormat::*)() const ) &QTextTableFormat::columnWidthConstraints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:964
// [-2] void clearColumnWidthConstraints() 
// (12)qm3096503360 (52)_ZN16QTextTableFormat27clearColumnWidthConstraintsEv
//static
/*void qm3096503360()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->clearColumnWidthConstraints();
   auto xptr = (void (QTextTableFormat::*)() ) &QTextTableFormat::clearColumnWidthConstraints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:967
// [8] qreal cellSpacing() const
// (12)qm3747157515 (37)_ZNK16QTextTableFormat11cellSpacingEv
//static
/*void qm3747157515()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->cellSpacing();
   auto xptr = (double (QTextTableFormat::*)() const ) &QTextTableFormat::cellSpacing;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:969
// [-2] void setCellSpacing(qreal) 
// (12)qm1747729392 (39)_ZN16QTextTableFormat14setCellSpacingEd
//static
/*void qm1747729392(double spacing)*/ {
  double spacing = *(double*)this_;
  (void) ((QTextTableFormat*)this_)->setCellSpacing(spacing);
   auto xptr = (void (QTextTableFormat::*)(double) ) &QTextTableFormat::setCellSpacing;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:972
// [8] qreal cellPadding() const
// (11)qm435684452 (37)_ZNK16QTextTableFormat11cellPaddingEv
//static
/*void qm435684452()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->cellPadding();
   auto xptr = (double (QTextTableFormat::*)() const ) &QTextTableFormat::cellPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:974
// [-2] void setCellPadding(qreal) 
// (12)qm2928486815 (39)_ZN16QTextTableFormat14setCellPaddingEd
//static
/*void qm2928486815(double padding)*/ {
  double padding = *(double*)this_;
  (void) ((QTextTableFormat*)this_)->setCellPadding(padding);
   auto xptr = (void (QTextTableFormat::*)(double) ) &QTextTableFormat::setCellPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:976
// [-2] void setAlignment(Qt::Alignment) 
// (12)qm2620967671 (65)_ZN16QTextTableFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE
//static
/*void qm2620967671(QFlags<Qt::AlignmentFlag> alignment)*/ {
  QFlags<Qt::AlignmentFlag> alignment = *(QFlags<Qt::AlignmentFlag>*)this_;
  (void) ((QTextTableFormat*)this_)->setAlignment(alignment);
   auto xptr = (void (QTextTableFormat::*)(QFlags<Qt::AlignmentFlag>) ) &QTextTableFormat::setAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:977
// [4] Qt::Alignment alignment() const
// (12)qm1990933071 (34)_ZNK16QTextTableFormat9alignmentEv
//static
/*void qm1990933071()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->alignment();
   auto xptr = (QFlags<Qt::AlignmentFlag> (QTextTableFormat::*)() const ) &QTextTableFormat::alignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:980
// [-2] void setHeaderRowCount(int) 
// (12)qm2514489280 (42)_ZN16QTextTableFormat17setHeaderRowCountEi
//static
/*void qm2514489280(int count)*/ {
  int count = *(int*)this_;
  (void) ((QTextTableFormat*)this_)->setHeaderRowCount(count);
   auto xptr = (void (QTextTableFormat::*)(int) ) &QTextTableFormat::setHeaderRowCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:982
// [4] int headerRowCount() const
// (9)qm2850749 (40)_ZNK16QTextTableFormat14headerRowCountEv
//static
/*void qm2850749()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->headerRowCount();
   auto xptr = (int (QTextTableFormat::*)() const ) &QTextTableFormat::headerRowCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:985
// [-2] void setBorderCollapse(bool) 
// (11)qm375926302 (42)_ZN16QTextTableFormat17setBorderCollapseEb
//static
/*void qm375926302(bool borderCollapse)*/ {
  bool borderCollapse = *(bool*)this_;
  (void) ((QTextTableFormat*)this_)->setBorderCollapse(borderCollapse);
   auto xptr = (void (QTextTableFormat::*)(bool) ) &QTextTableFormat::setBorderCollapse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:987
// [1] bool borderCollapse() const
// (11)qm342984683 (40)_ZNK16QTextTableFormat14borderCollapseEv
//static
/*void qm342984683()*/ {
  ;
  (void) ((QTextTableFormat*)this_)->borderCollapse();
   auto xptr = (bool (QTextTableFormat::*)() const ) &QTextTableFormat::borderCollapse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QTextTableFormatD2Ev(void *this_)*/ {
  delete (QTextTableFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtexttableformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
