//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFrameFormat is pure virtual: false false
// QTextFrameFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextFrameFormat_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextFrameFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextFrameFormat_t qt_meta_stringdata_MyQTextFrameFormat = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQTextFrameFormat"
  },
  "MyQTextFrameFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextFrameFormat[] = {
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
class Q_DECL_EXPORT MyQTextFrameFormat : public QTextFrameFormat {
public:
  virtual ~MyQTextFrameFormat() {}
// void QTextFrameFormat()
MyQTextFrameFormat() : QTextFrameFormat() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextframeformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:835
// [1] bool isValid() const
// (12)qm1369551570 (32)_ZNK16QTextFrameFormat7isValidEv
//static
/*void qm1369551570()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->isValid();
   auto xptr = (bool (QTextFrameFormat::*)() const ) &QTextFrameFormat::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:859
// [-2] void setPosition(QTextFrameFormat::Position) 
// (12)qm1537169015 (48)_ZN16QTextFrameFormat11setPositionENS_8PositionE
//static
/*void qm1537169015(QTextFrameFormat::Position f)*/ {
  QTextFrameFormat::Position f = *(QTextFrameFormat::Position*)this_;
  (void) ((QTextFrameFormat*)this_)->setPosition(f);
   auto xptr = (void (QTextFrameFormat::*)(QTextFrameFormat::Position) ) &QTextFrameFormat::setPosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:861
// [4] QTextFrameFormat::Position position() const
// (12)qm2077306844 (33)_ZNK16QTextFrameFormat8positionEv
//static
/*void qm2077306844()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->position();
   auto xptr = (QTextFrameFormat::Position (QTextFrameFormat::*)() const ) &QTextFrameFormat::position;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:864
// [-2] void setBorder(qreal) 
// (12)qm2274446265 (33)_ZN16QTextFrameFormat9setBorderEd
//static
/*void qm2274446265(double border)*/ {
  double border = *(double*)this_;
  (void) ((QTextFrameFormat*)this_)->setBorder(border);
   auto xptr = (void (QTextFrameFormat::*)(double) ) &QTextFrameFormat::setBorder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:865
// [8] qreal border() const
// (12)qm2422135152 (31)_ZNK16QTextFrameFormat6borderEv
//static
/*void qm2422135152()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->border();
   auto xptr = (double (QTextFrameFormat::*)() const ) &QTextFrameFormat::border;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:868
// [-2] void setBorderBrush(const QBrush &) 
// (12)qm2761289938 (47)_ZN16QTextFrameFormat14setBorderBrushERK6QBrush
//static
/*void qm2761289938(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTextFrameFormat*)this_)->setBorderBrush(brush);
   auto xptr = (void (QTextFrameFormat::*)(QBrush const&) ) &QTextFrameFormat::setBorderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:870
// [8] QBrush borderBrush() const
// (11)qm869184742 (37)_ZNK16QTextFrameFormat11borderBrushEv
//static
/*void qm869184742()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->borderBrush();
   auto xptr = (QBrush (QTextFrameFormat::*)() const ) &QTextFrameFormat::borderBrush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:873
// [-2] void setBorderStyle(QTextFrameFormat::BorderStyle) 
// (11)qm751260110 (55)_ZN16QTextFrameFormat14setBorderStyleENS_11BorderStyleE
//static
/*void qm751260110(QTextFrameFormat::BorderStyle style)*/ {
  QTextFrameFormat::BorderStyle style = *(QTextFrameFormat::BorderStyle*)this_;
  (void) ((QTextFrameFormat*)this_)->setBorderStyle(style);
   auto xptr = (void (QTextFrameFormat::*)(QTextFrameFormat::BorderStyle) ) &QTextFrameFormat::setBorderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:875
// [4] QTextFrameFormat::BorderStyle borderStyle() const
// (12)qm3782015258 (37)_ZNK16QTextFrameFormat11borderStyleEv
//static
/*void qm3782015258()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->borderStyle();
   auto xptr = (QTextFrameFormat::BorderStyle (QTextFrameFormat::*)() const ) &QTextFrameFormat::borderStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:879
// [8] qreal margin() const
// (10)qm17510397 (31)_ZNK16QTextFrameFormat6marginEv
//static
/*void qm17510397()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->margin();
   auto xptr = (double (QTextFrameFormat::*)() const ) &QTextFrameFormat::margin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:882
// [-2] void setTopMargin(qreal) 
// (12)qm3815412452 (37)_ZN16QTextFrameFormat12setTopMarginEd
//static
/*void qm3815412452(double margin)*/ {
  double margin = *(double*)this_;
  (void) ((QTextFrameFormat*)this_)->setTopMargin(margin);
   auto xptr = (void (QTextFrameFormat::*)(double) ) &QTextFrameFormat::setTopMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:885
// [-2] void setBottomMargin(qreal) 
// (11)qm516678035 (40)_ZN16QTextFrameFormat15setBottomMarginEd
//static
/*void qm516678035(double margin)*/ {
  double margin = *(double*)this_;
  (void) ((QTextFrameFormat*)this_)->setBottomMargin(margin);
   auto xptr = (void (QTextFrameFormat::*)(double) ) &QTextFrameFormat::setBottomMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:888
// [-2] void setLeftMargin(qreal) 
// (12)qm3762064214 (38)_ZN16QTextFrameFormat13setLeftMarginEd
//static
/*void qm3762064214(double margin)*/ {
  double margin = *(double*)this_;
  (void) ((QTextFrameFormat*)this_)->setLeftMargin(margin);
   auto xptr = (void (QTextFrameFormat::*)(double) ) &QTextFrameFormat::setLeftMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:891
// [-2] void setRightMargin(qreal) 
// (12)qm1045858641 (39)_ZN16QTextFrameFormat14setRightMarginEd
//static
/*void qm1045858641(double margin)*/ {
  double margin = *(double*)this_;
  (void) ((QTextFrameFormat*)this_)->setRightMargin(margin);
   auto xptr = (void (QTextFrameFormat::*)(double) ) &QTextFrameFormat::setRightMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:894
// [-2] void setPadding(qreal) 
// (11)qm571121190 (35)_ZN16QTextFrameFormat10setPaddingEd
//static
/*void qm571121190(double padding)*/ {
  double padding = *(double*)this_;
  (void) ((QTextFrameFormat*)this_)->setPadding(padding);
   auto xptr = (void (QTextFrameFormat::*)(double) ) &QTextFrameFormat::setPadding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:895
// [8] qreal padding() const
// (12)qm1461476598 (32)_ZNK16QTextFrameFormat7paddingEv
//static
/*void qm1461476598()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->padding();
   auto xptr = (double (QTextFrameFormat::*)() const ) &QTextFrameFormat::padding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:898
// [-2] void setWidth(qreal) 
// (12)qm3753673443 (32)_ZN16QTextFrameFormat8setWidthEd
//static
/*void qm3753673443(double width)*/ {
  double width = *(double*)this_;
  (void) ((QTextFrameFormat*)this_)->setWidth(width);
   auto xptr = (void (QTextFrameFormat::*)(double) ) &QTextFrameFormat::setWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:899
// [-2] void setWidth(const QTextLength &) 
// (12)qm4110743402 (46)_ZN16QTextFrameFormat8setWidthERK11QTextLength
//static
/*void qm4110743402(const QTextLength & length)*/ {
  const QTextLength & length = *(const QTextLength *)this_;
  (void) ((QTextFrameFormat*)this_)->setWidth(length);
   auto xptr = (void (QTextFrameFormat::*)(QTextLength const&) ) &QTextFrameFormat::setWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:901
// [16] QTextLength width() const
// (11)qm455647492 (30)_ZNK16QTextFrameFormat5widthEv
//static
/*void qm455647492()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->width();
   auto xptr = (QTextLength (QTextFrameFormat::*)() const ) &QTextFrameFormat::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:904
// [-2] void setHeight(qreal) 
// (12)qm1786193112 (33)_ZN16QTextFrameFormat9setHeightEd
//static
/*void qm1786193112(double height)*/ {
  double height = *(double*)this_;
  (void) ((QTextFrameFormat*)this_)->setHeight(height);
   auto xptr = (void (QTextFrameFormat::*)(double) ) &QTextFrameFormat::setHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:905
// [-2] void setHeight(const QTextLength &) 
// (12)qm2918291411 (47)_ZN16QTextFrameFormat9setHeightERK11QTextLength
//static
/*void qm2918291411(const QTextLength & height)*/ {
  const QTextLength & height = *(const QTextLength *)this_;
  (void) ((QTextFrameFormat*)this_)->setHeight(height);
   auto xptr = (void (QTextFrameFormat::*)(QTextLength const&) ) &QTextFrameFormat::setHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:906
// [16] QTextLength height() const
// (12)qm2109257233 (31)_ZNK16QTextFrameFormat6heightEv
//static
/*void qm2109257233()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->height();
   auto xptr = (QTextLength (QTextFrameFormat::*)() const ) &QTextFrameFormat::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:909
// [-2] void setPageBreakPolicy(QTextFormat::PageBreakFlags) 
// (12)qm3160641324 (81)_ZN16QTextFrameFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE
//static
/*void qm3160641324(QFlags<QTextFormat::PageBreakFlag> flags)*/ {
  QFlags<QTextFormat::PageBreakFlag> flags = *(QFlags<QTextFormat::PageBreakFlag>*)this_;
  (void) ((QTextFrameFormat*)this_)->setPageBreakPolicy(flags);
   auto xptr = (void (QTextFrameFormat::*)(QFlags<QTextFormat::PageBreakFlag>) ) &QTextFrameFormat::setPageBreakPolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:911
// [4] QTextFormat::PageBreakFlags pageBreakPolicy() const
// (11)qm128252763 (41)_ZNK16QTextFrameFormat15pageBreakPolicyEv
//static
/*void qm128252763()*/ {
  ;
  (void) ((QTextFrameFormat*)this_)->pageBreakPolicy();
   auto xptr = (QFlags<QTextFormat::PageBreakFlag> (QTextFrameFormat::*)() const ) &QTextFrameFormat::pageBreakPolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QTextFrameFormatD2Ev(void *this_)*/ {
  delete (QTextFrameFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextframeformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
