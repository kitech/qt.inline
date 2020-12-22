//  header block begin

// /usr/include/qt/QtGui/qtextoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextoption.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextOption is pure virtual: false false
// QTextOption has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextOption_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextOption_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextOption_t qt_meta_stringdata_MyQTextOption = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextOption"
  },
  "MyQTextOption"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextOption[] = {
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
class Q_DECL_EXPORT MyQTextOption : public QTextOption {
public:
  virtual ~MyQTextOption() {}
// void QTextOption()
MyQTextOption() : QTextOption() {}
// void QTextOption(Qt::Alignment)
MyQTextOption(QFlags<Qt::AlignmentFlag> alignment) : QTextOption(alignment) {}
// void QTextOption(const QTextOption &)
MyQTextOption(const QTextOption & o) : QTextOption(o) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextoption(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:85
// [-2] void QTextOption() 
// (12)qm1571547807 (20)_ZN11QTextOptionC2Ev
/*void* qm1571547807()*/{
  ;
  this_ =  new QTextOption();
  this_ =  new MyQTextOption();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:86
// [-2] void QTextOption(Qt::Alignment) 
// (12)qm1397842795 (48)_ZN11QTextOptionC2E6QFlagsIN2Qt13AlignmentFlagEE
/*void* qm1397842795(QFlags<Qt::AlignmentFlag> alignment)*/{
  QFlags<Qt::AlignmentFlag> alignment = *(QFlags<Qt::AlignmentFlag>*)this_;
  this_ =  new QTextOption(alignment);
  this_ =  new MyQTextOption(alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:89
// [-2] void QTextOption(const QTextOption &) 
// (12)qm3578158910 (23)_ZN11QTextOptionC2ERKS_
/*void* qm3578158910(const QTextOption & o)*/{
  const QTextOption & o = *(const QTextOption *)this_;
  this_ =  new QTextOption(o);
  this_ =  new MyQTextOption(o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:92
// [-2] void setAlignment(Qt::Alignment) 
// (12)qm1368939239 (60)_ZN11QTextOption12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE
//static
/*void qm1368939239(QFlags<Qt::AlignmentFlag> alignment)*/ {
  QFlags<Qt::AlignmentFlag> alignment = *(QFlags<Qt::AlignmentFlag>*)this_;
  (void) ((QTextOption*)this_)->setAlignment(alignment);
   auto xptr = (void (QTextOption::*)(QFlags<Qt::AlignmentFlag>) ) &QTextOption::setAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:93
// [4] Qt::Alignment alignment() const
// (12)qm3797253204 (29)_ZNK11QTextOption9alignmentEv
//static
/*void qm3797253204()*/ {
  ;
  (void) ((QTextOption*)this_)->alignment();
   auto xptr = (QFlags<Qt::AlignmentFlag> (QTextOption::*)() const ) &QTextOption::alignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:95
// [-2] void setTextDirection(Qt::LayoutDirection) 
// (12)qm2227094180 (57)_ZN11QTextOption16setTextDirectionEN2Qt15LayoutDirectionE
//static
/*void qm2227094180(Qt::LayoutDirection aDirection)*/ {
  Qt::LayoutDirection aDirection = *(Qt::LayoutDirection*)this_;
  (void) ((QTextOption*)this_)->setTextDirection(aDirection);
   auto xptr = (void (QTextOption::*)(Qt::LayoutDirection) ) &QTextOption::setTextDirection;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:96
// [4] Qt::LayoutDirection textDirection() const
// (11)qm740552098 (34)_ZNK11QTextOption13textDirectionEv
//static
/*void qm740552098()*/ {
  ;
  (void) ((QTextOption*)this_)->textDirection();
   auto xptr = (Qt::LayoutDirection (QTextOption::*)() const ) &QTextOption::textDirection;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:105
// [-2] void setWrapMode(QTextOption::WrapMode) 
// (12)qm1286407213 (43)_ZN11QTextOption11setWrapModeENS_8WrapModeE
//static
/*void qm1286407213(QTextOption::WrapMode wrap)*/ {
  QTextOption::WrapMode wrap = *(QTextOption::WrapMode*)this_;
  (void) ((QTextOption*)this_)->setWrapMode(wrap);
   auto xptr = (void (QTextOption::*)(QTextOption::WrapMode) ) &QTextOption::setWrapMode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:106
// [4] QTextOption::WrapMode wrapMode() const
// (11)qm709948472 (28)_ZNK11QTextOption8wrapModeEv
//static
/*void qm709948472()*/ {
  ;
  (void) ((QTextOption*)this_)->wrapMode();
   auto xptr = (QTextOption::WrapMode (QTextOption::*)() const ) &QTextOption::wrapMode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:117
// [-2] void setFlags(QTextOption::Flags) 
// (11)qm267934386 (44)_ZN11QTextOption8setFlagsE6QFlagsINS_4FlagEE
//static
/*void qm267934386(QFlags<QTextOption::Flag> flags)*/ {
  QFlags<QTextOption::Flag> flags = *(QFlags<QTextOption::Flag>*)this_;
  (void) ((QTextOption*)this_)->setFlags(flags);
   auto xptr = (void (QTextOption::*)(QFlags<QTextOption::Flag>) ) &QTextOption::setFlags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:118
// [4] QTextOption::Flags flags() const
// (12)qm1513632662 (25)_ZNK11QTextOption5flagsEv
//static
/*void qm1513632662()*/ {
  ;
  (void) ((QTextOption*)this_)->flags();
   auto xptr = (QFlags<QTextOption::Flag> (QTextOption::*)() const ) &QTextOption::flags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:125
// [-2] void setTabStopDistance(qreal) 
// (12)qm1480251831 (38)_ZN11QTextOption18setTabStopDistanceEd
//static
/*void qm1480251831(double tabStopDistance)*/ {
  double tabStopDistance = *(double*)this_;
  (void) ((QTextOption*)this_)->setTabStopDistance(tabStopDistance);
   auto xptr = (void (QTextOption::*)(double) ) &QTextOption::setTabStopDistance;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:126
// [8] qreal tabStopDistance() const
// (12)qm1322564266 (36)_ZNK11QTextOption15tabStopDistanceEv
//static
/*void qm1322564266()*/ {
  ;
  (void) ((QTextOption*)this_)->tabStopDistance();
   auto xptr = (double (QTextOption::*)() const ) &QTextOption::tabStopDistance;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:134
// [-2] void setUseDesignMetrics(bool) 
// (12)qm1355757453 (39)_ZN11QTextOption19setUseDesignMetricsEb
//static
/*void qm1355757453(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QTextOption*)this_)->setUseDesignMetrics(b);
   auto xptr = (void (QTextOption::*)(bool) ) &QTextOption::setUseDesignMetrics;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:135
// [1] bool useDesignMetrics() const
// (12)qm3851416560 (37)_ZNK11QTextOption16useDesignMetricsEv
//static
/*void qm3851416560()*/ {
  ;
  (void) ((QTextOption*)this_)->useDesignMetrics();
   auto xptr = (bool (QTextOption::*)() const ) &QTextOption::useDesignMetrics;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTextOptionD2Ev(void *this_)*/ {
  delete (QTextOption*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextoption
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
