//  header block begin

// /usr/include/qt/QtCore/qsize.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsize.h>
#include <QtCore>
#include "callback_inherit.h"

// QSizeF is pure virtual: false false
// QSizeF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSizeF_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSizeF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSizeF_t qt_meta_stringdata_MyQSizeF = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQSizeF"
  },
  "MyQSizeF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSizeF[] = {
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
class Q_DECL_EXPORT MyQSizeF : public QSizeF {
public:
  virtual ~MyQSizeF() {}
// void QSizeF()
MyQSizeF() : QSizeF() {}
// void QSizeF(const QSize &)
MyQSizeF(const QSize & sz) : QSizeF(sz) {}
// void QSizeF(qreal, qreal)
MyQSizeF(qreal w, qreal h) : QSizeF(w, h) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsizef(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:224
// [-2] void QSizeF() 
// (10)qm90541086 (14)_ZN6QSizeFC2Ev
/*void* qm90541086()*/{
  ;
  this_ =  new QSizeF();
  this_ =  new MyQSizeF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:225
// [-2] void QSizeF(const QSize &) 
// (12)qm3115420995 (21)_ZN6QSizeFC2ERK5QSize
/*void* qm3115420995(const QSize & sz)*/{
  const QSize & sz = *(const QSize *)this_;
  this_ =  new QSizeF(sz);
  this_ =  new MyQSizeF(sz);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:226
// [-2] void QSizeF(qreal, qreal) 
// (11)qm438526704 (15)_ZN6QSizeFC2Edd
/*void* qm438526704(double w, double h)*/{
  double w = *(double*)this_; double h = *(double*)this_;
  this_ =  new QSizeF(w, h);
  this_ =  new MyQSizeF(w, h);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:228
// [1] bool isNull() const
// (12)qm3133206400 (20)_ZNK6QSizeF6isNullEv
//static
/*void qm3133206400()*/ {
  ;
  (void) ((QSizeF*)this_)->isNull();
   auto xptr = (bool (QSizeF::*)() const ) &QSizeF::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:229
// [1] bool isEmpty() const
// (12)qm1837218638 (21)_ZNK6QSizeF7isEmptyEv
//static
/*void qm1837218638()*/ {
  ;
  (void) ((QSizeF*)this_)->isEmpty();
   auto xptr = (bool (QSizeF::*)() const ) &QSizeF::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:230
// [1] bool isValid() const
// (12)qm1609054340 (21)_ZNK6QSizeF7isValidEv
//static
/*void qm1609054340()*/ {
  ;
  (void) ((QSizeF*)this_)->isValid();
   auto xptr = (bool (QSizeF::*)() const ) &QSizeF::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:232
// [8] qreal width() const
// (12)qm3418501832 (19)_ZNK6QSizeF5widthEv
//static
/*void qm3418501832()*/ {
  ;
  (void) ((QSizeF*)this_)->width();
   auto xptr = (double (QSizeF::*)() const ) &QSizeF::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:233
// [8] qreal height() const
// (12)qm4021998105 (20)_ZNK6QSizeF6heightEv
//static
/*void qm4021998105()*/ {
  ;
  (void) ((QSizeF*)this_)->height();
   auto xptr = (double (QSizeF::*)() const ) &QSizeF::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:234
// [-2] void setWidth(qreal) 
// (11)qm154088386 (21)_ZN6QSizeF8setWidthEd
//static
/*void qm154088386(double w)*/ {
  double w = *(double*)this_;
  (void) ((QSizeF*)this_)->setWidth(w);
   auto xptr = (void (QSizeF::*)(double) ) &QSizeF::setWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:235
// [-2] void setHeight(qreal) 
// (11)qm650684215 (22)_ZN6QSizeF9setHeightEd
//static
/*void qm650684215(double h)*/ {
  double h = *(double*)this_;
  (void) ((QSizeF*)this_)->setHeight(h);
   auto xptr = (void (QSizeF::*)(double) ) &QSizeF::setHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:237
// [16] QSizeF transposed() const
// (12)qm2045838128 (25)_ZNK6QSizeF10transposedEv
//static
/*void qm2045838128()*/ {
  ;
  (void) ((QSizeF*)this_)->transposed();
   auto xptr = (QSizeF (QSizeF::*)() const ) &QSizeF::transposed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:239
// [-2] void scale(qreal, qreal, Qt::AspectRatioMode) 
// (12)qm3808736656 (41)_ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE
//static
/*void qm3808736656(double w, double h, Qt::AspectRatioMode mode)*/ {
  double w = *(double*)this_; double h = *(double*)this_; Qt::AspectRatioMode mode = *(Qt::AspectRatioMode*)this_;
  (void) ((QSizeF*)this_)->scale(w, h, mode);
   auto xptr = (void (QSizeF::*)(double, double, Qt::AspectRatioMode) ) &QSizeF::scale;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:240
// [-2] void scale(const QSizeF &, Qt::AspectRatioMode) 
// (12)qm2531716871 (43)_ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE
//static
/*void qm2531716871(const QSizeF & s, Qt::AspectRatioMode mode)*/ {
  const QSizeF & s = *(const QSizeF *)this_; Qt::AspectRatioMode mode = *(Qt::AspectRatioMode*)this_;
  (void) ((QSizeF*)this_)->scale(s, mode);
   auto xptr = (void (QSizeF::*)(QSizeF const&, Qt::AspectRatioMode) ) &QSizeF::scale;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:241
// [16] QSizeF scaled(qreal, qreal, Qt::AspectRatioMode) const
// (10)qm75450441 (43)_ZNK6QSizeF6scaledEddN2Qt15AspectRatioModeE
//static
/*void qm75450441(double w, double h, Qt::AspectRatioMode mode)*/ {
  double w = *(double*)this_; double h = *(double*)this_; Qt::AspectRatioMode mode = *(Qt::AspectRatioMode*)this_;
  (void) ((QSizeF*)this_)->scaled(w, h, mode);
   auto xptr = (QSizeF (QSizeF::*)(double, double, Qt::AspectRatioMode) const ) &QSizeF::scaled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:244
// [16] QSizeF expandedTo(const QSizeF &) const
// (12)qm4218392525 (28)_ZNK6QSizeF10expandedToERKS_
//static
/*void qm4218392525(const QSizeF & arg0)*/ {
  const QSizeF & arg0 = *(const QSizeF *)this_;
  (void) ((QSizeF*)this_)->expandedTo(arg0);
   auto xptr = (QSizeF (QSizeF::*)(QSizeF const&) const ) &QSizeF::expandedTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:245
// [16] QSizeF boundedTo(const QSizeF &) const
// (12)qm2862708735 (26)_ZNK6QSizeF9boundedToERKS_
//static
/*void qm2862708735(const QSizeF & arg0)*/ {
  const QSizeF & arg0 = *(const QSizeF *)this_;
  (void) ((QSizeF*)this_)->boundedTo(arg0);
   auto xptr = (QSizeF (QSizeF::*)(QSizeF const&) const ) &QSizeF::boundedTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:247
// [16] QSizeF grownBy(QMarginsF) const
// (12)qm3538048005 (30)_ZNK6QSizeF7grownByE9QMarginsF
//static
/*void qm3538048005(QMarginsF m)*/ {
  QMarginsF m = *(QMarginsF*)this_;
  (void) ((QSizeF*)this_)->grownBy(m);
   auto xptr = (QSizeF (QSizeF::*)(QMarginsF) const ) &QSizeF::grownBy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:249
// [16] QSizeF shrunkBy(QMarginsF) const
// (12)qm3562557642 (31)_ZNK6QSizeF8shrunkByE9QMarginsF
//static
/*void qm3562557642(QMarginsF m)*/ {
  QMarginsF m = *(QMarginsF*)this_;
  (void) ((QSizeF*)this_)->shrunkBy(m);
   auto xptr = (QSizeF (QSizeF::*)(QMarginsF) const ) &QSizeF::shrunkBy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:252
// [8] qreal & rwidth() 
// (11)qm696285478 (19)_ZN6QSizeF6rwidthEv
//static
/*void qm696285478()*/ {
  ;
  (void) ((QSizeF*)this_)->rwidth();
   auto xptr = (double & (QSizeF::*)() ) &QSizeF::rwidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:253
// [8] qreal & rheight() 
// (12)qm2124744918 (20)_ZN6QSizeF7rheightEv
//static
/*void qm2124744918()*/ {
  ;
  (void) ((QSizeF*)this_)->rheight();
   auto xptr = (double & (QSizeF::*)() ) &QSizeF::rheight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:255
// [16] QSizeF & operator+=(const QSizeF &) 
// (12)qm3530153529 (17)_ZN6QSizeFpLERKS_
//static
/*void qm3530153529(const QSizeF & arg0)*/ {
  const QSizeF & arg0 = *(const QSizeF *)this_;
  (void) ((QSizeF*)this_)->operator+=(arg0);
  // auto xptr = (QSizeF & (QSizeF::*)(QSizeF const&) ) &QSizeF::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:256
// [16] QSizeF & operator-=(const QSizeF &) 
// (12)qm2225975940 (17)_ZN6QSizeFmIERKS_
//static
/*void qm2225975940(const QSizeF & arg0)*/ {
  const QSizeF & arg0 = *(const QSizeF *)this_;
  (void) ((QSizeF*)this_)->operator-=(arg0);
  // auto xptr = (QSizeF & (QSizeF::*)(QSizeF const&) ) &QSizeF::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:257
// [16] QSizeF & operator*=(qreal) 
// (12)qm3898499073 (14)_ZN6QSizeFmLEd
//static
/*void qm3898499073(double c)*/ {
  double c = *(double*)this_;
  (void) ((QSizeF*)this_)->operator*=(c);
  // auto xptr = (QSizeF & (QSizeF::*)(double) ) &QSizeF::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:258
// [16] QSizeF & operator/=(qreal) 
// (12)qm2229733677 (14)_ZN6QSizeFdVEd
//static
/*void qm2229733677(double c)*/ {
  double c = *(double*)this_;
  (void) ((QSizeF*)this_)->operator/=(c);
  // auto xptr = (QSizeF & (QSizeF::*)(double) ) &QSizeF::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:268
// [8] QSize toSize() const
// (12)qm2650498506 (20)_ZNK6QSizeF6toSizeEv
//static
/*void qm2650498506()*/ {
  ;
  (void) ((QSizeF*)this_)->toSize();
   auto xptr = (QSize (QSizeF::*)() const ) &QSizeF::toSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QSizeFD2Ev(void *this_)*/ {
  delete (QSizeF*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsizef
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
