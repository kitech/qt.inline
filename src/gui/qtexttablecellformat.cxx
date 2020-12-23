//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTableCellFormat is pure virtual: false false
// QTextTableCellFormat has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtexttablecellformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1013
// [-2] void QTextTableCellFormat() 
// (12)qm1834837491 (29)_ZN20QTextTableCellFormatC2Ev
/*void* qm1834837491()*/{
  ;
  this_ =  new QTextTableCellFormat();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1015
// [1] bool isValid() const
// (12)qm2873986208 (36)_ZNK20QTextTableCellFormat7isValidEv
//static
/*void qm2873986208()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->isValid();
   auto xptr = (bool (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1017
// [-2] void setTopPadding(qreal) 
// (12)qm1388631763 (42)_ZN20QTextTableCellFormat13setTopPaddingEd
//static
/*void qm1388631763(double padding)*/ {
  double padding = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setTopPadding(padding);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setTopPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1018
// [8] qreal topPadding() const
// (12)qm2390008661 (40)_ZNK20QTextTableCellFormat10topPaddingEv
//static
/*void qm2390008661()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->topPadding();
   auto xptr = (double (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::topPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1020
// [-2] void setBottomPadding(qreal) 
// (12)qm1963146381 (45)_ZN20QTextTableCellFormat16setBottomPaddingEd
//static
/*void qm1963146381(double padding)*/ {
  double padding = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setBottomPadding(padding);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setBottomPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1021
// [8] qreal bottomPadding() const
// (11)qm393851464 (43)_ZNK20QTextTableCellFormat13bottomPaddingEv
//static
/*void qm393851464()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->bottomPadding();
   auto xptr = (double (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::bottomPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1023
// [-2] void setLeftPadding(qreal) 
// (11)qm374053911 (43)_ZN20QTextTableCellFormat14setLeftPaddingEd
//static
/*void qm374053911(double padding)*/ {
  double padding = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setLeftPadding(padding);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setLeftPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1024
// [8] qreal leftPadding() const
// (11)qm614242001 (41)_ZNK20QTextTableCellFormat11leftPaddingEv
//static
/*void qm614242001()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->leftPadding();
   auto xptr = (double (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::leftPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1026
// [-2] void setRightPadding(qreal) 
// (11)qm258770548 (44)_ZN20QTextTableCellFormat15setRightPaddingEd
//static
/*void qm258770548(double padding)*/ {
  double padding = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setRightPadding(padding);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setRightPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1027
// [8] qreal rightPadding() const
// (11)qm138144760 (42)_ZNK20QTextTableCellFormat12rightPaddingEv
//static
/*void qm138144760()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->rightPadding();
   auto xptr = (double (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::rightPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1029
// [-2] void setPadding(qreal) 
// (11)qm900011035 (39)_ZN20QTextTableCellFormat10setPaddingEd
//static
/*void qm900011035(double padding)*/ {
  double padding = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setPadding(padding);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1031
// [-2] void setTopBorder(qreal) 
// (11)qm364532038 (41)_ZN20QTextTableCellFormat12setTopBorderEd
//static
/*void qm364532038(double width)*/ {
  double width = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setTopBorder(width);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setTopBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1033
// [8] qreal topBorder() const
// (12)qm4155109142 (38)_ZNK20QTextTableCellFormat9topBorderEv
//static
/*void qm4155109142()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->topBorder();
   auto xptr = (double (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::topBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1036
// [-2] void setBottomBorder(qreal) 
// (12)qm2204935101 (44)_ZN20QTextTableCellFormat15setBottomBorderEd
//static
/*void qm2204935101(double width)*/ {
  double width = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setBottomBorder(width);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setBottomBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1038
// [8] qreal bottomBorder() const
// (12)qm2218511921 (42)_ZNK20QTextTableCellFormat12bottomBorderEv
//static
/*void qm2218511921()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->bottomBorder();
   auto xptr = (double (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::bottomBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1041
// [-2] void setLeftBorder(qreal) 
// (12)qm3672098231 (42)_ZN20QTextTableCellFormat13setLeftBorderEd
//static
/*void qm3672098231(double width)*/ {
  double width = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setLeftBorder(width);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setLeftBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1043
// [8] qreal leftBorder() const
// (11)qm107982897 (40)_ZNK20QTextTableCellFormat10leftBorderEv
//static
/*void qm107982897()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->leftBorder();
   auto xptr = (double (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::leftBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1046
// [-2] void setRightBorder(qreal) 
// (12)qm3953976343 (43)_ZN20QTextTableCellFormat14setRightBorderEd
//static
/*void qm3953976343(double width)*/ {
  double width = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setRightBorder(width);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setRightBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1048
// [8] qreal rightBorder() const
// (12)qm3648777937 (41)_ZNK20QTextTableCellFormat11rightBorderEv
//static
/*void qm3648777937()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->rightBorder();
   auto xptr = (double (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::rightBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1051
// [-2] void setBorder(qreal) 
// (10)qm78160494 (37)_ZN20QTextTableCellFormat9setBorderEd
//static
/*void qm78160494(double width)*/ {
  double width = *(double*)this_;
  (void) ((QTextTableCellFormat*)this_)->setBorder(width);
   auto xptr = (void (QTextTableCellFormat::*)(double) ) &QTextTableCellFormat::setBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1053
// [-2] void setTopBorderStyle(QTextFrameFormat::BorderStyle) 
// (12)qm4167109576 (78)_ZN20QTextTableCellFormat17setTopBorderStyleEN16QTextFrameFormat11BorderStyleE
//static
/*void qm4167109576(QTextFrameFormat::BorderStyle style)*/ {
  QTextFrameFormat::BorderStyle style = *(QTextFrameFormat::BorderStyle*)this_;
  (void) ((QTextTableCellFormat*)this_)->setTopBorderStyle(style);
   auto xptr = (void (QTextTableCellFormat::*)(QTextFrameFormat::BorderStyle) ) &QTextTableCellFormat::setTopBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1055
// [4] QTextFrameFormat::BorderStyle topBorderStyle() const
// (12)qm2552562553 (44)_ZNK20QTextTableCellFormat14topBorderStyleEv
//static
/*void qm2552562553()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->topBorderStyle();
   auto xptr = (QTextFrameFormat::BorderStyle (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::topBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1058
// [-2] void setBottomBorderStyle(QTextFrameFormat::BorderStyle) 
// (12)qm2514097351 (81)_ZN20QTextTableCellFormat20setBottomBorderStyleEN16QTextFrameFormat11BorderStyleE
//static
/*void qm2514097351(QTextFrameFormat::BorderStyle style)*/ {
  QTextFrameFormat::BorderStyle style = *(QTextFrameFormat::BorderStyle*)this_;
  (void) ((QTextTableCellFormat*)this_)->setBottomBorderStyle(style);
   auto xptr = (void (QTextTableCellFormat::*)(QTextFrameFormat::BorderStyle) ) &QTextTableCellFormat::setBottomBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1060
// [4] QTextFrameFormat::BorderStyle bottomBorderStyle() const
// (11)qm640343111 (47)_ZNK20QTextTableCellFormat17bottomBorderStyleEv
//static
/*void qm640343111()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->bottomBorderStyle();
   auto xptr = (QTextFrameFormat::BorderStyle (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::bottomBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1063
// [-2] void setLeftBorderStyle(QTextFrameFormat::BorderStyle) 
// (11)qm517361638 (79)_ZN20QTextTableCellFormat18setLeftBorderStyleEN16QTextFrameFormat11BorderStyleE
//static
/*void qm517361638(QTextFrameFormat::BorderStyle style)*/ {
  QTextFrameFormat::BorderStyle style = *(QTextFrameFormat::BorderStyle*)this_;
  (void) ((QTextTableCellFormat*)this_)->setLeftBorderStyle(style);
   auto xptr = (void (QTextTableCellFormat::*)(QTextFrameFormat::BorderStyle) ) &QTextTableCellFormat::setLeftBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1065
// [4] QTextFrameFormat::BorderStyle leftBorderStyle() const
// (10)qm12240565 (45)_ZNK20QTextTableCellFormat15leftBorderStyleEv
//static
/*void qm12240565()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->leftBorderStyle();
   auto xptr = (QTextFrameFormat::BorderStyle (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::leftBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1068
// [-2] void setRightBorderStyle(QTextFrameFormat::BorderStyle) 
// (12)qm3445656439 (80)_ZN20QTextTableCellFormat19setRightBorderStyleEN16QTextFrameFormat11BorderStyleE
//static
/*void qm3445656439(QTextFrameFormat::BorderStyle style)*/ {
  QTextFrameFormat::BorderStyle style = *(QTextFrameFormat::BorderStyle*)this_;
  (void) ((QTextTableCellFormat*)this_)->setRightBorderStyle(style);
   auto xptr = (void (QTextTableCellFormat::*)(QTextFrameFormat::BorderStyle) ) &QTextTableCellFormat::setRightBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1070
// [4] QTextFrameFormat::BorderStyle rightBorderStyle() const
// (12)qm2968994091 (46)_ZNK20QTextTableCellFormat16rightBorderStyleEv
//static
/*void qm2968994091()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->rightBorderStyle();
   auto xptr = (QTextFrameFormat::BorderStyle (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::rightBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1073
// [-2] void setBorderStyle(QTextFrameFormat::BorderStyle) 
// (12)qm2181994343 (75)_ZN20QTextTableCellFormat14setBorderStyleEN16QTextFrameFormat11BorderStyleE
//static
/*void qm2181994343(QTextFrameFormat::BorderStyle style)*/ {
  QTextFrameFormat::BorderStyle style = *(QTextFrameFormat::BorderStyle*)this_;
  (void) ((QTextTableCellFormat*)this_)->setBorderStyle(style);
   auto xptr = (void (QTextTableCellFormat::*)(QTextFrameFormat::BorderStyle) ) &QTextTableCellFormat::setBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1075
// [-2] void setTopBorderBrush(const QBrush &) 
// (12)qm2140131892 (54)_ZN20QTextTableCellFormat17setTopBorderBrushERK6QBrush
//static
/*void qm2140131892(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTextTableCellFormat*)this_)->setTopBorderBrush(brush);
   auto xptr = (void (QTextTableCellFormat::*)(QBrush const&) ) &QTextTableCellFormat::setTopBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1077
// [8] QBrush topBorderBrush() const
// (12)qm1250381445 (44)_ZNK20QTextTableCellFormat14topBorderBrushEv
//static
/*void qm1250381445()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->topBorderBrush();
   auto xptr = (QBrush (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::topBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1080
// [-2] void setBottomBorderBrush(const QBrush &) 
// (12)qm4197766298 (57)_ZN20QTextTableCellFormat20setBottomBorderBrushERK6QBrush
//static
/*void qm4197766298(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTextTableCellFormat*)this_)->setBottomBorderBrush(brush);
   auto xptr = (void (QTextTableCellFormat::*)(QBrush const&) ) &QTextTableCellFormat::setBottomBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1082
// [8] QBrush bottomBorderBrush() const
// (12)qm4102590907 (47)_ZNK20QTextTableCellFormat17bottomBorderBrushEv
//static
/*void qm4102590907()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->bottomBorderBrush();
   auto xptr = (QBrush (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::bottomBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1085
// [-2] void setLeftBorderBrush(const QBrush &) 
// (12)qm1944003504 (55)_ZN20QTextTableCellFormat18setLeftBorderBrushERK6QBrush
//static
/*void qm1944003504(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTextTableCellFormat*)this_)->setLeftBorderBrush(brush);
   auto xptr = (void (QTextTableCellFormat::*)(QBrush const&) ) &QTextTableCellFormat::setLeftBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1087
// [8] QBrush leftBorderBrush() const
// (12)qm3524823881 (45)_ZNK20QTextTableCellFormat15leftBorderBrushEv
//static
/*void qm3524823881()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->leftBorderBrush();
   auto xptr = (QBrush (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::leftBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1090
// [-2] void setRightBorderBrush(const QBrush &) 
// (12)qm4260354262 (56)_ZN20QTextTableCellFormat19setRightBorderBrushERK6QBrush
//static
/*void qm4260354262(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTextTableCellFormat*)this_)->setRightBorderBrush(brush);
   auto xptr = (void (QTextTableCellFormat::*)(QBrush const&) ) &QTextTableCellFormat::setRightBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1092
// [8] QBrush rightBorderBrush() const
// (12)qm1649741015 (46)_ZNK20QTextTableCellFormat16rightBorderBrushEv
//static
/*void qm1649741015()*/ {
  ;
  (void) ((QTextTableCellFormat*)this_)->rightBorderBrush();
   auto xptr = (QBrush (QTextTableCellFormat::*)() const ) &QTextTableCellFormat::rightBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1095
// [-2] void setBorderBrush(const QBrush &) 
// (11)qm732943559 (51)_ZN20QTextTableCellFormat14setBorderBrushERK6QBrush
//static
/*void qm732943559(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTextTableCellFormat*)this_)->setBorderBrush(brush);
   auto xptr = (void (QTextTableCellFormat::*)(QBrush const&) ) &QTextTableCellFormat::setBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QTextTableCellFormatD2Ev(void *this_)*/ {
  delete (QTextTableCellFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtexttablecellformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
