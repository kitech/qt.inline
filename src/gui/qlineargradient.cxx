//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QLinearGradient is pure virtual: false false
// QLinearGradient has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLinearGradient_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLinearGradient_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLinearGradient_t qt_meta_stringdata_MyQLinearGradient = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQLinearGradient"
  },
  "MyQLinearGradient"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLinearGradient[] = {
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
class Q_DECL_EXPORT MyQLinearGradient : public QLinearGradient {
public:
  virtual ~MyQLinearGradient() {}
// void QLinearGradient()
MyQLinearGradient() : QLinearGradient() {}
// void QLinearGradient(const QPointF &, const QPointF &)
MyQLinearGradient(const QPointF & start, const QPointF & finalStop) : QLinearGradient(start, finalStop) {}
// void QLinearGradient(qreal, qreal, qreal, qreal)
MyQLinearGradient(qreal xStart, qreal yStart, qreal xFinalStop, qreal yFinalStop) : QLinearGradient(xStart, yStart, xFinalStop, yFinalStop) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlineargradient(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:439
// [-2] void QLinearGradient() 
// (12)qm2457760289 (24)_ZN15QLinearGradientC2Ev
/*void* qm2457760289()*/{
  ;
  this_ =  new QLinearGradient();
  this_ =  new MyQLinearGradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:440
// [-2] void QLinearGradient(const QPointF &, const QPointF &) 
// (12)qm2858924355 (36)_ZN15QLinearGradientC2ERK7QPointFS2_
/*void* qm2858924355(const QPointF & start, const QPointF & finalStop)*/{
  const QPointF & start = *(const QPointF *)this_; const QPointF & finalStop = *(const QPointF *)this_;
  this_ =  new QLinearGradient(start, finalStop);
  this_ =  new MyQLinearGradient(start, finalStop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:441
// [-2] void QLinearGradient(qreal, qreal, qreal, qreal) 
// (12)qm2465875218 (27)_ZN15QLinearGradientC2Edddd
/*void* qm2465875218(double xStart, double yStart, double xFinalStop, double yFinalStop)*/{
  double xStart = *(double*)this_; double yStart = *(double*)this_; double xFinalStop = *(double*)this_; double yFinalStop = *(double*)this_;
  this_ =  new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
  this_ =  new MyQLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:446
// [-2] void setStart(qreal, qreal) 
// (12)qm3357847726 (32)_ZN15QLinearGradient8setStartEdd
//static
/*void qm3357847726(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QLinearGradient*)this_)->setStart(x, y);
   auto xptr = (void (QLinearGradient::*)(double, double) ) &QLinearGradient::setStart;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:450
// [-2] void setFinalStop(qreal, qreal) 
// (12)qm3335903427 (37)_ZN15QLinearGradient12setFinalStopEdd
//static
/*void qm3335903427(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QLinearGradient*)this_)->setFinalStop(x, y);
   auto xptr = (void (QLinearGradient::*)(double, double) ) &QLinearGradient::setFinalStop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QLinearGradientD2Ev(void *this_)*/ {
  delete (QLinearGradient*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlineargradient
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
