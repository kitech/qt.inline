//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlockFormat is pure virtual: false false
// QTextBlockFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextBlockFormat_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextBlockFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextBlockFormat_t qt_meta_stringdata_MyQTextBlockFormat = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQTextBlockFormat"
  },
  "MyQTextBlockFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextBlockFormat[] = {
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
class Q_DECL_EXPORT MyQTextBlockFormat : public QTextBlockFormat {
public:
  virtual ~MyQTextBlockFormat() {}
// void QTextBlockFormat()
MyQTextBlockFormat() : QTextBlockFormat() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextblockformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:638
// [1] bool isValid() const
// (12)qm1980934818 (32)_ZNK16QTextBlockFormat7isValidEv
//static
/*void qm1980934818()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->isValid();
   auto xptr = (bool (QTextBlockFormat::*)() const ) &QTextBlockFormat::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:640
// [-2] void setAlignment(Qt::Alignment) 
// (10)qm28204792 (65)_ZN16QTextBlockFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE
//static
/*void qm28204792(QFlags<Qt::AlignmentFlag> alignment)*/ {
  QFlags<Qt::AlignmentFlag> alignment = *(QFlags<Qt::AlignmentFlag>*)this_;
  (void) ((QTextBlockFormat*)this_)->setAlignment(alignment);
   auto xptr = (void (QTextBlockFormat::*)(QFlags<Qt::AlignmentFlag>) ) &QTextBlockFormat::setAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:641
// [4] Qt::Alignment alignment() const
// (11)qm686487389 (34)_ZNK16QTextBlockFormat9alignmentEv
//static
/*void qm686487389()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->alignment();
   auto xptr = (QFlags<Qt::AlignmentFlag> (QTextBlockFormat::*)() const ) &QTextBlockFormat::alignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:644
// [-2] void setTopMargin(qreal) 
// (12)qm2317218423 (37)_ZN16QTextBlockFormat12setTopMarginEd
//static
/*void qm2317218423(double margin)*/ {
  double margin = *(double*)this_;
  (void) ((QTextBlockFormat*)this_)->setTopMargin(margin);
   auto xptr = (void (QTextBlockFormat::*)(double) ) &QTextBlockFormat::setTopMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:646
// [8] qreal topMargin() const
// (12)qm2261197755 (34)_ZNK16QTextBlockFormat9topMarginEv
//static
/*void qm2261197755()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->topMargin();
   auto xptr = (double (QTextBlockFormat::*)() const ) &QTextBlockFormat::topMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:649
// [-2] void setBottomMargin(qreal) 
// (12)qm1241671787 (40)_ZN16QTextBlockFormat15setBottomMarginEd
//static
/*void qm1241671787(double margin)*/ {
  double margin = *(double*)this_;
  (void) ((QTextBlockFormat*)this_)->setBottomMargin(margin);
   auto xptr = (void (QTextBlockFormat::*)(double) ) &QTextBlockFormat::setBottomMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:651
// [8] qreal bottomMargin() const
// (9)qm1636996 (38)_ZNK16QTextBlockFormat12bottomMarginEv
//static
/*void qm1636996()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->bottomMargin();
   auto xptr = (double (QTextBlockFormat::*)() const ) &QTextBlockFormat::bottomMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:654
// [-2] void setLeftMargin(qreal) 
// (12)qm2303934152 (38)_ZN16QTextBlockFormat13setLeftMarginEd
//static
/*void qm2303934152(double margin)*/ {
  double margin = *(double*)this_;
  (void) ((QTextBlockFormat*)this_)->setLeftMargin(margin);
   auto xptr = (void (QTextBlockFormat::*)(double) ) &QTextBlockFormat::setLeftMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:656
// [8] qreal leftMargin() const
// (12)qm3300023191 (36)_ZNK16QTextBlockFormat10leftMarginEv
//static
/*void qm3300023191()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->leftMargin();
   auto xptr = (double (QTextBlockFormat::*)() const ) &QTextBlockFormat::leftMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:659
// [-2] void setRightMargin(qreal) 
// (11)qm696801447 (39)_ZN16QTextBlockFormat14setRightMarginEd
//static
/*void qm696801447(double margin)*/ {
  double margin = *(double*)this_;
  (void) ((QTextBlockFormat*)this_)->setRightMargin(margin);
   auto xptr = (void (QTextBlockFormat::*)(double) ) &QTextBlockFormat::setRightMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:661
// [8] qreal rightMargin() const
// (12)qm3837880577 (37)_ZNK16QTextBlockFormat11rightMarginEv
//static
/*void qm3837880577()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->rightMargin();
   auto xptr = (double (QTextBlockFormat::*)() const ) &QTextBlockFormat::rightMargin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:664
// [-2] void setTextIndent(qreal) 
// (12)qm3943417467 (38)_ZN16QTextBlockFormat13setTextIndentEd
//static
/*void qm3943417467(double aindent)*/ {
  double aindent = *(double*)this_;
  (void) ((QTextBlockFormat*)this_)->setTextIndent(aindent);
   auto xptr = (void (QTextBlockFormat::*)(double) ) &QTextBlockFormat::setTextIndent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:666
// [8] qreal textIndent() const
// (12)qm2800395044 (36)_ZNK16QTextBlockFormat10textIndentEv
//static
/*void qm2800395044()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->textIndent();
   auto xptr = (double (QTextBlockFormat::*)() const ) &QTextBlockFormat::textIndent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:669
// [-2] void setIndent(int) 
// (10)qm84792688 (33)_ZN16QTextBlockFormat9setIndentEi
//static
/*void qm84792688(int indent)*/ {
  int indent = *(int*)this_;
  (void) ((QTextBlockFormat*)this_)->setIndent(indent);
   auto xptr = (void (QTextBlockFormat::*)(int) ) &QTextBlockFormat::setIndent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:670
// [4] int indent() const
// (12)qm3782813542 (31)_ZNK16QTextBlockFormat6indentEv
//static
/*void qm3782813542()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->indent();
   auto xptr = (int (QTextBlockFormat::*)() const ) &QTextBlockFormat::indent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:673
// [-2] void setHeadingLevel(int) 
// (11)qm517503947 (40)_ZN16QTextBlockFormat15setHeadingLevelEi
//static
/*void qm517503947(int alevel)*/ {
  int alevel = *(int*)this_;
  (void) ((QTextBlockFormat*)this_)->setHeadingLevel(alevel);
   auto xptr = (void (QTextBlockFormat::*)(int) ) &QTextBlockFormat::setHeadingLevel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:675
// [4] int headingLevel() const
// (11)qm712218009 (38)_ZNK16QTextBlockFormat12headingLevelEv
//static
/*void qm712218009()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->headingLevel();
   auto xptr = (int (QTextBlockFormat::*)() const ) &QTextBlockFormat::headingLevel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:678
// [-2] void setLineHeight(qreal, int) 
// (12)qm2906616853 (39)_ZN16QTextBlockFormat13setLineHeightEdi
//static
/*void qm2906616853(double height, int heightType)*/ {
  double height = *(double*)this_; int heightType = *(int*)this_;
  (void) ((QTextBlockFormat*)this_)->setLineHeight(height, heightType);
   auto xptr = (void (QTextBlockFormat::*)(double, int) ) &QTextBlockFormat::setLineHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:680
// [8] qreal lineHeight(qreal, qreal) const
// (12)qm1357108603 (37)_ZNK16QTextBlockFormat10lineHeightEdd
//static
/*void qm1357108603(double scriptLineHeight, double scaling)*/ {
  double scriptLineHeight = *(double*)this_; double scaling = *(double*)this_;
  (void) ((QTextBlockFormat*)this_)->lineHeight(scriptLineHeight, scaling);
   auto xptr = (double (QTextBlockFormat::*)(double, double) const ) &QTextBlockFormat::lineHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:681
// [8] qreal lineHeight() const
// (11)qm444024442 (36)_ZNK16QTextBlockFormat10lineHeightEv
//static
/*void qm444024442()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->lineHeight();
   auto xptr = (double (QTextBlockFormat::*)() const ) &QTextBlockFormat::lineHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:683
// [4] int lineHeightType() const
// (12)qm3830767587 (40)_ZNK16QTextBlockFormat14lineHeightTypeEv
//static
/*void qm3830767587()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->lineHeightType();
   auto xptr = (int (QTextBlockFormat::*)() const ) &QTextBlockFormat::lineHeightType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:686
// [-2] void setNonBreakableLines(bool) 
// (12)qm2394139079 (45)_ZN16QTextBlockFormat20setNonBreakableLinesEb
//static
/*void qm2394139079(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QTextBlockFormat*)this_)->setNonBreakableLines(b);
   auto xptr = (void (QTextBlockFormat::*)(bool) ) &QTextBlockFormat::setNonBreakableLines;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:688
// [1] bool nonBreakableLines() const
// (12)qm2485523538 (43)_ZNK16QTextBlockFormat17nonBreakableLinesEv
//static
/*void qm2485523538()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->nonBreakableLines();
   auto xptr = (bool (QTextBlockFormat::*)() const ) &QTextBlockFormat::nonBreakableLines;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:691
// [-2] void setPageBreakPolicy(QTextFormat::PageBreakFlags) 
// (12)qm3782882748 (81)_ZN16QTextBlockFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE
//static
/*void qm3782882748(QFlags<QTextFormat::PageBreakFlag> flags)*/ {
  QFlags<QTextFormat::PageBreakFlag> flags = *(QFlags<QTextFormat::PageBreakFlag>*)this_;
  (void) ((QTextBlockFormat*)this_)->setPageBreakPolicy(flags);
   auto xptr = (void (QTextBlockFormat::*)(QFlags<QTextFormat::PageBreakFlag>) ) &QTextBlockFormat::setPageBreakPolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:693
// [4] QTextFormat::PageBreakFlags pageBreakPolicy() const
// (12)qm1399681699 (41)_ZNK16QTextBlockFormat15pageBreakPolicyEv
//static
/*void qm1399681699()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->pageBreakPolicy();
   auto xptr = (QFlags<QTextFormat::PageBreakFlag> (QTextBlockFormat::*)() const ) &QTextBlockFormat::pageBreakPolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:699
// [-2] void setMarker(QTextBlockFormat::MarkerType) 
// (12)qm1189892518 (48)_ZN16QTextBlockFormat9setMarkerENS_10MarkerTypeE
//static
/*void qm1189892518(QTextBlockFormat::MarkerType marker)*/ {
  QTextBlockFormat::MarkerType marker = *(QTextBlockFormat::MarkerType*)this_;
  (void) ((QTextBlockFormat*)this_)->setMarker(marker);
   auto xptr = (void (QTextBlockFormat::*)(QTextBlockFormat::MarkerType) ) &QTextBlockFormat::setMarker;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:701
// [4] QTextBlockFormat::MarkerType marker() const
// (11)qm709426465 (31)_ZNK16QTextBlockFormat6markerEv
//static
/*void qm709426465()*/ {
  ;
  (void) ((QTextBlockFormat*)this_)->marker();
   auto xptr = (QTextBlockFormat::MarkerType (QTextBlockFormat::*)() const ) &QTextBlockFormat::marker;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QTextBlockFormatD2Ev(void *this_)*/ {
  delete (QTextBlockFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextblockformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
