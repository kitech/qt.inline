//  header block begin

// /usr/include/qt/QtCore/qline.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qline.h>
#include <QtCore>
#include "callback_inherit.h"

// QLineF is pure virtual: false false
// QLineF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLineF_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLineF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLineF_t qt_meta_stringdata_MyQLineF = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQLineF"
  },
  "MyQLineF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLineF[] = {
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
class Q_DECL_EXPORT MyQLineF : public QLineF {
public:
  virtual ~MyQLineF() {}
// void QLineF()
MyQLineF() : QLineF() {}
// void QLineF(const QPointF &, const QPointF &)
MyQLineF(const QPointF & pt1, const QPointF & pt2) : QLineF(pt1, pt2) {}
// void QLineF(qreal, qreal, qreal, qreal)
MyQLineF(qreal x1, qreal y1, qreal x2, qreal y2) : QLineF(x1, y1, x2, y2) {}
// void QLineF(const QLine &)
MyQLineF(const QLine & line) : QLineF(line) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlinef(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:220
// [-2] void QLineF() 
// (12)qm3851270499 (14)_ZN6QLineFC2Ev
/*void* qm3851270499()*/{
  ;
  this_ =  new QLineF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:221
// [-2] void QLineF(const QPointF &, const QPointF &) 
// (12)qm2601427614 (26)_ZN6QLineFC2ERK7QPointFS2_
/*void* qm2601427614(const QPointF & pt1, const QPointF & pt2)*/{
  const QPointF & pt1 = *(const QPointF *)this_; const QPointF & pt2 = *(const QPointF *)this_;
  this_ =  new QLineF(pt1, pt2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:222
// [-2] void QLineF(qreal, qreal, qreal, qreal) 
// (12)qm3982406120 (17)_ZN6QLineFC2Edddd
/*void* qm3982406120(double x1, double y1, double x2, double y2)*/{
  double x1 = *(double*)this_; double y1 = *(double*)this_; double x2 = *(double*)this_; double y2 = *(double*)this_;
  this_ =  new QLineF(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:223
// [-2] void QLineF(const QLine &) 
// (12)qm2293692172 (21)_ZN6QLineFC2ERK5QLine
/*void* qm2293692172(const QLine & line)*/{
  const QLine & line = *(const QLine *)this_;
  this_ =  new QLineF(line);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:227
// [1] bool isNull() const
// (12)qm2247668121 (20)_ZNK6QLineF6isNullEv
//static
/*void qm2247668121()*/ {
  ;
  (void) ((QLineF*)this_)->isNull();
   auto xptr = (bool (QLineF::*)() const ) &QLineF::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:229
// [16] QPointF p1() const
// (12)qm3245024169 (16)_ZNK6QLineF2p1Ev
//static
/*void qm3245024169()*/ {
  ;
  (void) ((QLineF*)this_)->p1();
   auto xptr = (QPointF (QLineF::*)() const ) &QLineF::p1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:230
// [16] QPointF p2() const
// (12)qm3274546672 (16)_ZNK6QLineF2p2Ev
//static
/*void qm3274546672()*/ {
  ;
  (void) ((QLineF*)this_)->p2();
   auto xptr = (QPointF (QLineF::*)() const ) &QLineF::p2;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:232
// [8] qreal x1() const
// (10)qm81726278 (16)_ZNK6QLineF2x1Ev
//static
/*void qm81726278()*/ {
  ;
  (void) ((QLineF*)this_)->x1();
   auto xptr = (double (QLineF::*)() const ) &QLineF::x1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:233
// [8] qreal y1() const
// (12)qm3160632355 (16)_ZNK6QLineF2y1Ev
//static
/*void qm3160632355()*/ {
  ;
  (void) ((QLineF*)this_)->y1();
   auto xptr = (double (QLineF::*)() const ) &QLineF::y1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:235
// [8] qreal x2() const
// (11)qm110736671 (16)_ZNK6QLineF2x2Ev
//static
/*void qm110736671()*/ {
  ;
  (void) ((QLineF*)this_)->x2();
   auto xptr = (double (QLineF::*)() const ) &QLineF::x2;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:236
// [8] qreal y2() const
// (12)qm3190149754 (16)_ZNK6QLineF2y2Ev
//static
/*void qm3190149754()*/ {
  ;
  (void) ((QLineF*)this_)->y2();
   auto xptr = (double (QLineF::*)() const ) &QLineF::y2;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:238
// [8] qreal dx() const
// (12)qm1633375534 (16)_ZNK6QLineF2dxEv
//static
/*void qm1633375534()*/ {
  ;
  (void) ((QLineF*)this_)->dx();
   auto xptr = (double (QLineF::*)() const ) &QLineF::dx;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:239
// [8] qreal dy() const
// (12)qm1620655897 (16)_ZNK6QLineF2dyEv
//static
/*void qm1620655897()*/ {
  ;
  (void) ((QLineF*)this_)->dy();
   auto xptr = (double (QLineF::*)() const ) &QLineF::dy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:242
// [-2] void setLength(qreal) 
// (12)qm2948168642 (22)_ZN6QLineF9setLengthEd
//static
/*void qm2948168642(double len_)*/ {
  double len_ = *(double*)this_;
  (void) ((QLineF*)this_)->setLength(len_);
   auto xptr = (void (QLineF::*)(double) ) &QLineF::setLength;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:250
// [32] QLineF normalVector() const
// (12)qm1249219296 (27)_ZNK6QLineF12normalVectorEv
//static
/*void qm1249219296()*/ {
  ;
  (void) ((QLineF*)this_)->normalVector();
   auto xptr = (QLineF (QLineF::*)() const ) &QLineF::normalVector;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:261
// [16] QPointF pointAt(qreal) const
// (12)qm1698666128 (21)_ZNK6QLineF7pointAtEd
//static
/*void qm1698666128(double t)*/ {
  double t = *(double*)this_;
  (void) ((QLineF*)this_)->pointAt(t);
   auto xptr = (QPointF (QLineF::*)(double) const ) &QLineF::pointAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:262
// [-2] void translate(const QPointF &) 
// (12)qm3688957712 (31)_ZN6QLineF9translateERK7QPointF
//static
/*void qm3688957712(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QLineF*)this_)->translate(p);
   auto xptr = (void (QLineF::*)(QPointF const&) ) &QLineF::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:263
// [-2] void translate(qreal, qreal) 
// (12)qm2058721824 (23)_ZN6QLineF9translateEdd
//static
/*void qm2058721824(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QLineF*)this_)->translate(dx, dy);
   auto xptr = (void (QLineF::*)(double, double) ) &QLineF::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:265
// [32] QLineF translated(const QPointF &) const
// (11)qm615222877 (34)_ZNK6QLineF10translatedERK7QPointF
//static
/*void qm615222877(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QLineF*)this_)->translated(p);
   auto xptr = (QLineF (QLineF::*)(QPointF const&) const ) &QLineF::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:266
// [32] QLineF translated(qreal, qreal) const
// (11)qm435536939 (26)_ZNK6QLineF10translatedEdd
//static
/*void qm435536939(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QLineF*)this_)->translated(dx, dy);
   auto xptr = (QLineF (QLineF::*)(double, double) const ) &QLineF::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:268
// [16] QPointF center() const
// (12)qm1095428563 (20)_ZNK6QLineF6centerEv
//static
/*void qm1095428563()*/ {
  ;
  (void) ((QLineF*)this_)->center();
   auto xptr = (QPointF (QLineF::*)() const ) &QLineF::center;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:270
// [-2] void setP1(const QPointF &) 
// (11)qm528198665 (27)_ZN6QLineF5setP1ERK7QPointF
//static
/*void qm528198665(const QPointF & p1)*/ {
  const QPointF & p1 = *(const QPointF *)this_;
  (void) ((QLineF*)this_)->setP1(p1);
   auto xptr = (void (QLineF::*)(QPointF const&) ) &QLineF::setP1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:271
// [-2] void setP2(const QPointF &) 
// (12)qm1759870713 (27)_ZN6QLineF5setP2ERK7QPointF
//static
/*void qm1759870713(const QPointF & p2)*/ {
  const QPointF & p2 = *(const QPointF *)this_;
  (void) ((QLineF*)this_)->setP2(p2);
   auto xptr = (void (QLineF::*)(QPointF const&) ) &QLineF::setP2;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:272
// [-2] void setPoints(const QPointF &, const QPointF &) 
// (11)qm730615200 (34)_ZN6QLineF9setPointsERK7QPointFS2_
//static
/*void qm730615200(const QPointF & p1, const QPointF & p2)*/ {
  const QPointF & p1 = *(const QPointF *)this_; const QPointF & p2 = *(const QPointF *)this_;
  (void) ((QLineF*)this_)->setPoints(p1, p2);
   auto xptr = (void (QLineF::*)(QPointF const&, QPointF const&) ) &QLineF::setPoints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:273
// [-2] void setLine(qreal, qreal, qreal, qreal) 
// (12)qm3800164998 (23)_ZN6QLineF7setLineEdddd
//static
/*void qm3800164998(double x1, double y1, double x2, double y2)*/ {
  double x1 = *(double*)this_; double y1 = *(double*)this_; double x2 = *(double*)this_; double y2 = *(double*)this_;
  (void) ((QLineF*)this_)->setLine(x1, y1, x2, y2);
   auto xptr = (void (QLineF::*)(double, double, double, double) ) &QLineF::setLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:275
// [1] bool operator==(const QLineF &) const
// (11)qm909688002 (18)_ZNK6QLineFeqERKS_
//static
/*void qm909688002(const QLineF & d)*/ {
  const QLineF & d = *(const QLineF *)this_;
  (void) ((QLineF*)this_)->operator==(d);
  // auto xptr = (bool (QLineF::*)(QLineF const&) const ) &QLineF::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:276
// [1] bool operator!=(const QLineF &) const
// (12)qm2893588661 (18)_ZNK6QLineFneERKS_
//static
/*void qm2893588661(const QLineF & d)*/ {
  const QLineF & d = *(const QLineF *)this_;
  (void) ((QLineF*)this_)->operator!=(d);
  // auto xptr = (bool (QLineF::*)(QLineF const&) const ) &QLineF::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:278
// [16] QLine toLine() const
// (12)qm2402831189 (20)_ZNK6QLineF6toLineEv
//static
/*void qm2402831189()*/ {
  ;
  (void) ((QLineF*)this_)->toLine();
   auto xptr = (QLine (QLineF::*)() const ) &QLineF::toLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QLineFD2Ev(void *this_)*/ {
  delete (QLineF*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlinef
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
