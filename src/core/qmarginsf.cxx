//  header block begin

// /usr/include/qt/QtCore/qmargins.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmargins.h>
#include <QtCore>
#include "callback_inherit.h"

// QMarginsF is pure virtual: false false
// QMarginsF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMarginsF_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMarginsF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMarginsF_t qt_meta_stringdata_MyQMarginsF = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMarginsF"
  },
  "MyQMarginsF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMarginsF[] = {
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
class Q_DECL_EXPORT MyQMarginsF : public QMarginsF {
public:
  virtual ~MyQMarginsF() {}
// void QMarginsF()
MyQMarginsF() : QMarginsF() {}
// void QMarginsF(qreal, qreal, qreal, qreal)
MyQMarginsF(qreal left, qreal top, qreal right, qreal bottom) : QMarginsF(left, top, right, bottom) {}
// void QMarginsF(const QMargins &)
MyQMarginsF(const QMargins & margins) : QMarginsF(margins) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmarginsf(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:288
// [-2] void QMarginsF() 
// (12)qm2929904453 (17)_ZN9QMarginsFC2Ev
/*void* qm2929904453()*/{
  ;
  this_ =  new QMarginsF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:289
// [-2] void QMarginsF(qreal, qreal, qreal, qreal) 
// (12)qm1732685276 (20)_ZN9QMarginsFC2Edddd
/*void* qm1732685276(double left, double top, double right, double bottom)*/{
  double left = *(double*)this_; double top = *(double*)this_; double right = *(double*)this_; double bottom = *(double*)this_;
  this_ =  new QMarginsF(left, top, right, bottom);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:290
// [-2] void QMarginsF(const QMargins &) 
// (12)qm3035546118 (27)_ZN9QMarginsFC2ERK8QMargins
/*void* qm3035546118(const QMargins & margins)*/{
  const QMargins & margins = *(const QMargins *)this_;
  this_ =  new QMarginsF(margins);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:292
// [1] bool isNull() const
// (11)qm682604345 (23)_ZNK9QMarginsF6isNullEv
//static
/*void qm682604345()*/ {
  ;
  (void) ((QMarginsF*)this_)->isNull();
   auto xptr = (bool (QMarginsF::*)() const ) &QMarginsF::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:294
// [8] qreal left() const
// (12)qm4166910863 (21)_ZNK9QMarginsF4leftEv
//static
/*void qm4166910863()*/ {
  ;
  (void) ((QMarginsF*)this_)->left();
   auto xptr = (double (QMarginsF::*)() const ) &QMarginsF::left;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:295
// [8] qreal top() const
// (12)qm1892230004 (20)_ZNK9QMarginsF3topEv
//static
/*void qm1892230004()*/ {
  ;
  (void) ((QMarginsF*)this_)->top();
   auto xptr = (double (QMarginsF::*)() const ) &QMarginsF::top;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:296
// [8] qreal right() const
// (12)qm1820325696 (22)_ZNK9QMarginsF5rightEv
//static
/*void qm1820325696()*/ {
  ;
  (void) ((QMarginsF*)this_)->right();
   auto xptr = (double (QMarginsF::*)() const ) &QMarginsF::right;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:297
// [8] qreal bottom() const
// (12)qm1582142839 (23)_ZNK9QMarginsF6bottomEv
//static
/*void qm1582142839()*/ {
  ;
  (void) ((QMarginsF*)this_)->bottom();
   auto xptr = (double (QMarginsF::*)() const ) &QMarginsF::bottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:299
// [-2] void setLeft(qreal) 
// (12)qm3214428147 (23)_ZN9QMarginsF7setLeftEd
//static
/*void qm3214428147(double left)*/ {
  double left = *(double*)this_;
  (void) ((QMarginsF*)this_)->setLeft(left);
   auto xptr = (void (QMarginsF::*)(double) ) &QMarginsF::setLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:300
// [-2] void setTop(qreal) 
// (12)qm4253381947 (22)_ZN9QMarginsF6setTopEd
//static
/*void qm4253381947(double top)*/ {
  double top = *(double*)this_;
  (void) ((QMarginsF*)this_)->setTop(top);
   auto xptr = (void (QMarginsF::*)(double) ) &QMarginsF::setTop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:301
// [-2] void setRight(qreal) 
// (12)qm3784636880 (24)_ZN9QMarginsF8setRightEd
//static
/*void qm3784636880(double right)*/ {
  double right = *(double*)this_;
  (void) ((QMarginsF*)this_)->setRight(right);
   auto xptr = (void (QMarginsF::*)(double) ) &QMarginsF::setRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:302
// [-2] void setBottom(qreal) 
// (12)qm2276105228 (25)_ZN9QMarginsF9setBottomEd
//static
/*void qm2276105228(double bottom)*/ {
  double bottom = *(double*)this_;
  (void) ((QMarginsF*)this_)->setBottom(bottom);
   auto xptr = (void (QMarginsF::*)(double) ) &QMarginsF::setBottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:304
// [32] QMarginsF & operator+=(const QMarginsF &) 
// (11)qm146313490 (20)_ZN9QMarginsFpLERKS_
//static
/*void qm146313490(const QMarginsF & margins)*/ {
  const QMarginsF & margins = *(const QMarginsF *)this_;
  (void) ((QMarginsF*)this_)->operator+=(margins);
  // auto xptr = (QMarginsF & (QMarginsF::*)(QMarginsF const&) ) &QMarginsF::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:305
// [32] QMarginsF & operator-=(const QMarginsF &) 
// (12)qm1585249711 (20)_ZN9QMarginsFmIERKS_
//static
/*void qm1585249711(const QMarginsF & margins)*/ {
  const QMarginsF & margins = *(const QMarginsF *)this_;
  (void) ((QMarginsF*)this_)->operator-=(margins);
  // auto xptr = (QMarginsF & (QMarginsF::*)(QMarginsF const&) ) &QMarginsF::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:306
// [32] QMarginsF & operator+=(qreal) 
// (12)qm3790252056 (17)_ZN9QMarginsFpLEd
//static
/*void qm3790252056(double addend)*/ {
  double addend = *(double*)this_;
  (void) ((QMarginsF*)this_)->operator+=(addend);
  // auto xptr = (QMarginsF & (QMarginsF::*)(double) ) &QMarginsF::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:307
// [32] QMarginsF & operator-=(qreal) 
// (12)qm1163060657 (17)_ZN9QMarginsFmIEd
//static
/*void qm1163060657(double subtrahend)*/ {
  double subtrahend = *(double*)this_;
  (void) ((QMarginsF*)this_)->operator-=(subtrahend);
  // auto xptr = (QMarginsF & (QMarginsF::*)(double) ) &QMarginsF::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:308
// [32] QMarginsF & operator*=(qreal) 
// (12)qm1134110554 (17)_ZN9QMarginsFmLEd
//static
/*void qm1134110554(double factor)*/ {
  double factor = *(double*)this_;
  (void) ((QMarginsF*)this_)->operator*=(factor);
  // auto xptr = (QMarginsF & (QMarginsF::*)(double) ) &QMarginsF::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:309
// [32] QMarginsF & operator/=(qreal) 
// (11)qm790646390 (17)_ZN9QMarginsFdVEd
//static
/*void qm790646390(double divisor)*/ {
  double divisor = *(double*)this_;
  (void) ((QMarginsF*)this_)->operator/=(divisor);
  // auto xptr = (QMarginsF & (QMarginsF::*)(double) ) &QMarginsF::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:311
// [16] QMargins toMargins() const
// (12)qm2087446153 (26)_ZNK9QMarginsF9toMarginsEv
//static
/*void qm2087446153()*/ {
  ;
  (void) ((QMarginsF*)this_)->toMargins();
   auto xptr = (QMargins (QMarginsF::*)() const ) &QMarginsF::toMargins;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QMarginsFD2Ev(void *this_)*/ {
  delete (QMarginsF*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmarginsf
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
