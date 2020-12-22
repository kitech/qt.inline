//  header block begin

// /usr/include/qt/QtCore/qrect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrect.h>
#include <QtCore>
#include "callback_inherit.h"

// QRectF is pure virtual: false false
// QRectF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRectF_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRectF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRectF_t qt_meta_stringdata_MyQRectF = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQRectF"
  },
  "MyQRectF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRectF[] = {
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
class Q_DECL_EXPORT MyQRectF : public QRectF {
public:
  virtual ~MyQRectF() {}
// void QRectF()
MyQRectF() : QRectF() {}
// void QRectF(const QPointF &, const QSizeF &)
MyQRectF(const QPointF & topleft, const QSizeF & size) : QRectF(topleft, size) {}
// void QRectF(const QPointF &, const QPointF &)
MyQRectF(const QPointF & topleft, const QPointF & bottomRight) : QRectF(topleft, bottomRight) {}
// void QRectF(qreal, qreal, qreal, qreal)
MyQRectF(qreal left, qreal top, qreal width, qreal height) : QRectF(left, top, width, height) {}
// void QRectF(const QRect &)
MyQRectF(const QRect & rect) : QRectF(rect) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrectf(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:514
// [-2] void QRectF() 
// (12)qm2138932529 (14)_ZN6QRectFC2Ev
/*void* qm2138932529()*/{
  ;
  this_ =  new QRectF();
  this_ =  new MyQRectF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:515
// [-2] void QRectF(const QPointF &, const QSizeF &) 
// (12)qm3303482793 (32)_ZN6QRectFC2ERK7QPointFRK6QSizeF
/*void* qm3303482793(const QPointF & topleft, const QSizeF & size)*/{
  const QPointF & topleft = *(const QPointF *)this_; const QSizeF & size = *(const QSizeF *)this_;
  this_ =  new QRectF(topleft, size);
  this_ =  new MyQRectF(topleft, size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:516
// [-2] void QRectF(const QPointF &, const QPointF &) 
// (11)qm650771439 (26)_ZN6QRectFC2ERK7QPointFS2_
/*void* qm650771439(const QPointF & topleft, const QPointF & bottomRight)*/{
  const QPointF & topleft = *(const QPointF *)this_; const QPointF & bottomRight = *(const QPointF *)this_;
  this_ =  new QRectF(topleft, bottomRight);
  this_ =  new MyQRectF(topleft, bottomRight);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:517
// [-2] void QRectF(qreal, qreal, qreal, qreal) 
// (12)qm1277739087 (17)_ZN6QRectFC2Edddd
/*void* qm1277739087(double left, double top, double width, double height)*/{
  double left = *(double*)this_; double top = *(double*)this_; double width = *(double*)this_; double height = *(double*)this_;
  this_ =  new QRectF(left, top, width, height);
  this_ =  new MyQRectF(left, top, width, height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:518
// [-2] void QRectF(const QRect &) 
// (12)qm3008306862 (21)_ZN6QRectFC2ERK5QRect
/*void* qm3008306862(const QRect & rect)*/{
  const QRect & rect = *(const QRect *)this_;
  this_ =  new QRectF(rect);
  this_ =  new MyQRectF(rect);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:520
// [1] bool isNull() const
// (12)qm1136425835 (20)_ZNK6QRectF6isNullEv
//static
/*void qm1136425835()*/ {
  ;
  (void) ((QRectF*)this_)->isNull();
   auto xptr = (bool (QRectF::*)() const ) &QRectF::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:521
// [1] bool isEmpty() const
// (12)qm1520499754 (21)_ZNK6QRectF7isEmptyEv
//static
/*void qm1520499754()*/ {
  ;
  (void) ((QRectF*)this_)->isEmpty();
   auto xptr = (bool (QRectF::*)() const ) &QRectF::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:522
// [1] bool isValid() const
// (12)qm1758035936 (21)_ZNK6QRectF7isValidEv
//static
/*void qm1758035936()*/ {
  ;
  (void) ((QRectF*)this_)->isValid();
   auto xptr = (bool (QRectF::*)() const ) &QRectF::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:525
// [8] qreal left() const
// (12)qm1647440327 (18)_ZNK6QRectF4leftEv
//static
/*void qm1647440327()*/ {
  ;
  (void) ((QRectF*)this_)->left();
   auto xptr = (double (QRectF::*)() const ) &QRectF::left;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:526
// [8] qreal top() const
// (12)qm2693324277 (17)_ZNK6QRectF3topEv
//static
/*void qm2693324277()*/ {
  ;
  (void) ((QRectF*)this_)->top();
   auto xptr = (double (QRectF::*)() const ) &QRectF::top;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:527
// [8] qreal right() const
// (11)qm350376208 (19)_ZNK6QRectF5rightEv
//static
/*void qm350376208()*/ {
  ;
  (void) ((QRectF*)this_)->right();
   auto xptr = (double (QRectF::*)() const ) &QRectF::right;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:528
// [8] qreal bottom() const
// (11)qm895375653 (20)_ZNK6QRectF6bottomEv
//static
/*void qm895375653()*/ {
  ;
  (void) ((QRectF*)this_)->bottom();
   auto xptr = (double (QRectF::*)() const ) &QRectF::bottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:530
// [8] qreal x() const
// (12)qm2004970894 (15)_ZNK6QRectF1xEv
//static
/*void qm2004970894()*/ {
  ;
  (void) ((QRectF*)this_)->x();
   auto xptr = (double (QRectF::*)() const ) &QRectF::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:531
// [8] qreal y() const
// (12)qm1984104377 (15)_ZNK6QRectF1yEv
//static
/*void qm1984104377()*/ {
  ;
  (void) ((QRectF*)this_)->y();
   auto xptr = (double (QRectF::*)() const ) &QRectF::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:532
// [-2] void setLeft(qreal) 
// (11)qm982784196 (20)_ZN6QRectF7setLeftEd
//static
/*void qm982784196(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->setLeft(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::setLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:533
// [-2] void setTop(qreal) 
// (12)qm2498402921 (19)_ZN6QRectF6setTopEd
//static
/*void qm2498402921(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->setTop(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::setTop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:534
// [-2] void setRight(qreal) 
// (12)qm1504465024 (21)_ZN6QRectF8setRightEd
//static
/*void qm1504465024(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->setRight(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::setRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:535
// [-2] void setBottom(qreal) 
// (12)qm3967415633 (22)_ZN6QRectF9setBottomEd
//static
/*void qm3967415633(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->setBottom(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::setBottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:536
// [-2] void setX(qreal) 
// (12)qm2446689967 (17)_ZN6QRectF4setXEd
//static
/*void qm2446689967(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->setX(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::setX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:537
// [-2] void setY(qreal) 
// (12)qm2417487000 (17)_ZN6QRectF4setYEd
//static
/*void qm2417487000(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->setY(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::setY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:539
// [16] QPointF topLeft() const
// (12)qm1079522747 (21)_ZNK6QRectF7topLeftEv
//static
/*void qm1079522747()*/ {
  ;
  (void) ((QRectF*)this_)->topLeft();
   auto xptr = (QPointF (QRectF::*)() const ) &QRectF::topLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:540
// [16] QPointF bottomRight() const
// (12)qm1563278517 (26)_ZNK6QRectF11bottomRightEv
//static
/*void qm1563278517()*/ {
  ;
  (void) ((QRectF*)this_)->bottomRight();
   auto xptr = (QPointF (QRectF::*)() const ) &QRectF::bottomRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:541
// [16] QPointF topRight() const
// (11)qm304214427 (22)_ZNK6QRectF8topRightEv
//static
/*void qm304214427()*/ {
  ;
  (void) ((QRectF*)this_)->topRight();
   auto xptr = (QPointF (QRectF::*)() const ) &QRectF::topRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:542
// [16] QPointF bottomLeft() const
// (12)qm3212495632 (25)_ZNK6QRectF10bottomLeftEv
//static
/*void qm3212495632()*/ {
  ;
  (void) ((QRectF*)this_)->bottomLeft();
   auto xptr = (QPointF (QRectF::*)() const ) &QRectF::bottomLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:543
// [16] QPointF center() const
// (12)qm2265850657 (20)_ZNK6QRectF6centerEv
//static
/*void qm2265850657()*/ {
  ;
  (void) ((QRectF*)this_)->center();
   auto xptr = (QPointF (QRectF::*)() const ) &QRectF::center;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:545
// [-2] void setTopLeft(const QPointF &) 
// (11)qm337724378 (33)_ZN6QRectF10setTopLeftERK7QPointF
//static
/*void qm337724378(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->setTopLeft(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::setTopLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:546
// [-2] void setBottomRight(const QPointF &) 
// (11)qm480704922 (37)_ZN6QRectF14setBottomRightERK7QPointF
//static
/*void qm480704922(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->setBottomRight(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::setBottomRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:547
// [-2] void setTopRight(const QPointF &) 
// (12)qm4007329037 (34)_ZN6QRectF11setTopRightERK7QPointF
//static
/*void qm4007329037(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->setTopRight(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::setTopRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:548
// [-2] void setBottomLeft(const QPointF &) 
// (12)qm3546088161 (36)_ZN6QRectF13setBottomLeftERK7QPointF
//static
/*void qm3546088161(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->setBottomLeft(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::setBottomLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:550
// [-2] void moveLeft(qreal) 
// (11)qm393889586 (21)_ZN6QRectF8moveLeftEd
//static
/*void qm393889586(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->moveLeft(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::moveLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:551
// [-2] void moveTop(qreal) 
// (12)qm2653597272 (20)_ZN6QRectF7moveTopEd
//static
/*void qm2653597272(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->moveTop(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::moveTop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:552
// [-2] void moveRight(qreal) 
// (10)qm84037983 (22)_ZN6QRectF9moveRightEd
//static
/*void qm84037983(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->moveRight(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::moveRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:553
// [-2] void moveBottom(qreal) 
// (12)qm1179129167 (24)_ZN6QRectF10moveBottomEd
//static
/*void qm1179129167(double pos)*/ {
  double pos = *(double*)this_;
  (void) ((QRectF*)this_)->moveBottom(pos);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::moveBottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:554
// [-2] void moveTopLeft(const QPointF &) 
// (11)qm183981045 (34)_ZN6QRectF11moveTopLeftERK7QPointF
//static
/*void qm183981045(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->moveTopLeft(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::moveTopLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:555
// [-2] void moveBottomRight(const QPointF &) 
// (12)qm2657699811 (38)_ZN6QRectF15moveBottomRightERK7QPointF
//static
/*void qm2657699811(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->moveBottomRight(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::moveBottomRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:556
// [-2] void moveTopRight(const QPointF &) 
// (12)qm2256033208 (35)_ZN6QRectF12moveTopRightERK7QPointF
//static
/*void qm2256033208(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->moveTopRight(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::moveTopRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:557
// [-2] void moveBottomLeft(const QPointF &) 
// (12)qm1029365896 (37)_ZN6QRectF14moveBottomLeftERK7QPointF
//static
/*void qm1029365896(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->moveBottomLeft(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::moveBottomLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:558
// [-2] void moveCenter(const QPointF &) 
// (12)qm2647690136 (33)_ZN6QRectF10moveCenterERK7QPointF
//static
/*void qm2647690136(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->moveCenter(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::moveCenter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:560
// [-2] void translate(qreal, qreal) 
// (11)qm753973790 (23)_ZN6QRectF9translateEdd
//static
/*void qm753973790(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QRectF*)this_)->translate(dx, dy);
   auto xptr = (void (QRectF::*)(double, double) ) &QRectF::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:561
// [-2] void translate(const QPointF &) 
// (12)qm1826479735 (31)_ZN6QRectF9translateERK7QPointF
//static
/*void qm1826479735(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->translate(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:563
// [32] QRectF translated(qreal, qreal) const
// (12)qm1667148251 (26)_ZNK6QRectF10translatedEdd
//static
/*void qm1667148251(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QRectF*)this_)->translated(dx, dy);
   auto xptr = (QRectF (QRectF::*)(double, double) const ) &QRectF::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:564
// [32] QRectF translated(const QPointF &) const
// (12)qm4044926577 (34)_ZNK6QRectF10translatedERK7QPointF
//static
/*void qm4044926577(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->translated(p);
   auto xptr = (QRectF (QRectF::*)(QPointF const&) const ) &QRectF::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:566
// [32] QRectF transposed() const
// (12)qm2353154253 (25)_ZNK6QRectF10transposedEv
//static
/*void qm2353154253()*/ {
  ;
  (void) ((QRectF*)this_)->transposed();
   auto xptr = (QRectF (QRectF::*)() const ) &QRectF::transposed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:568
// [-2] void moveTo(qreal, qreal) 
// (12)qm3755472894 (20)_ZN6QRectF6moveToEdd
//static
/*void qm3755472894(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QRectF*)this_)->moveTo(x, y);
   auto xptr = (void (QRectF::*)(double, double) ) &QRectF::moveTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:569
// [-2] void moveTo(const QPointF &) 
// (12)qm3756847276 (28)_ZN6QRectF6moveToERK7QPointF
//static
/*void qm3756847276(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) ((QRectF*)this_)->moveTo(p);
   auto xptr = (void (QRectF::*)(QPointF const&) ) &QRectF::moveTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:571
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (11)qm775223018 (23)_ZN6QRectF7setRectEdddd
//static
/*void qm775223018(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QRectF*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QRectF::*)(double, double, double, double) ) &QRectF::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:572
// [-2] void getRect(qreal *, qreal *, qreal *, qreal *) const
// (12)qm4294613198 (31)_ZNK6QRectF7getRectEPdS0_S0_S0_
//static
/*void qm4294613198(double * x, double * y, double * w, double * h)*/ {
  double * x = *(double **)this_; double * y = *(double **)this_; double * w = *(double **)this_; double * h = *(double **)this_;
  (void) ((QRectF*)this_)->getRect(x, y, w, h);
   auto xptr = (void (QRectF::*)(double*, double*, double*, double*) const ) &QRectF::getRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:574
// [-2] void setCoords(qreal, qreal, qreal, qreal) 
// (12)qm3289519357 (25)_ZN6QRectF9setCoordsEdddd
//static
/*void qm3289519357(double x1, double y1, double x2, double y2)*/ {
  double x1 = *(double*)this_; double y1 = *(double*)this_; double x2 = *(double*)this_; double y2 = *(double*)this_;
  (void) ((QRectF*)this_)->setCoords(x1, y1, x2, y2);
   auto xptr = (void (QRectF::*)(double, double, double, double) ) &QRectF::setCoords;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:575
// [-2] void getCoords(qreal *, qreal *, qreal *, qreal *) const
// (12)qm2175199897 (33)_ZNK6QRectF9getCoordsEPdS0_S0_S0_
//static
/*void qm2175199897(double * x1, double * y1, double * x2, double * y2)*/ {
  double * x1 = *(double **)this_; double * y1 = *(double **)this_; double * x2 = *(double **)this_; double * y2 = *(double **)this_;
  (void) ((QRectF*)this_)->getCoords(x1, y1, x2, y2);
   auto xptr = (void (QRectF::*)(double*, double*, double*, double*) const ) &QRectF::getCoords;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:577
// [-2] void adjust(qreal, qreal, qreal, qreal) 
// (10)qm80703858 (22)_ZN6QRectF6adjustEdddd
//static
/*void qm80703858(double x1, double y1, double x2, double y2)*/ {
  double x1 = *(double*)this_; double y1 = *(double*)this_; double x2 = *(double*)this_; double y2 = *(double*)this_;
  (void) ((QRectF*)this_)->adjust(x1, y1, x2, y2);
   auto xptr = (void (QRectF::*)(double, double, double, double) ) &QRectF::adjust;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:578
// [32] QRectF adjusted(qreal, qreal, qreal, qreal) const
// (11)qm569381348 (25)_ZNK6QRectF8adjustedEdddd
//static
/*void qm569381348(double x1, double y1, double x2, double y2)*/ {
  double x1 = *(double*)this_; double y1 = *(double*)this_; double x2 = *(double*)this_; double y2 = *(double*)this_;
  (void) ((QRectF*)this_)->adjusted(x1, y1, x2, y2);
   auto xptr = (QRectF (QRectF::*)(double, double, double, double) const ) &QRectF::adjusted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:580
// [16] QSizeF size() const
// (12)qm1382714856 (18)_ZNK6QRectF4sizeEv
//static
/*void qm1382714856()*/ {
  ;
  (void) ((QRectF*)this_)->size();
   auto xptr = (QSizeF (QRectF::*)() const ) &QRectF::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:581
// [8] qreal width() const
// (11)qm243906132 (19)_ZNK6QRectF5widthEv
//static
/*void qm243906132()*/ {
  ;
  (void) ((QRectF*)this_)->width();
   auto xptr = (double (QRectF::*)() const ) &QRectF::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:582
// [8] qreal height() const
// (11)qm382093042 (20)_ZNK6QRectF6heightEv
//static
/*void qm382093042()*/ {
  ;
  (void) ((QRectF*)this_)->height();
   auto xptr = (double (QRectF::*)() const ) &QRectF::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:583
// [-2] void setWidth(qreal) 
// (12)qm1137162180 (21)_ZN6QRectF8setWidthEd
//static
/*void qm1137162180(double w)*/ {
  double w = *(double*)this_;
  (void) ((QRectF*)this_)->setWidth(w);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::setWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:584
// [-2] void setHeight(qreal) 
// (12)qm3487689350 (22)_ZN6QRectF9setHeightEd
//static
/*void qm3487689350(double h)*/ {
  double h = *(double*)this_;
  (void) ((QRectF*)this_)->setHeight(h);
   auto xptr = (void (QRectF::*)(double) ) &QRectF::setHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:585
// [-2] void setSize(const QSizeF &) 
// (12)qm2887552482 (28)_ZN6QRectF7setSizeERK6QSizeF
//static
/*void qm2887552482(const QSizeF & s)*/ {
  const QSizeF & s = *(const QSizeF *)this_;
  (void) ((QRectF*)this_)->setSize(s);
   auto xptr = (void (QRectF::*)(QSizeF const&) ) &QRectF::setSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:589
// [32] QRectF & operator|=(const QRectF &) 
// (12)qm2342286157 (17)_ZN6QRectFoRERKS_
//static
/*void qm2342286157(const QRectF & r)*/ {
  const QRectF & r = *(const QRectF *)this_;
  (void) ((QRectF*)this_)->operator|=(r);
  // auto xptr = (QRectF & (QRectF::*)(QRectF const&) ) &QRectF::operator|=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:590
// [32] QRectF & operator&=(const QRectF &) 
// (12)qm2948057840 (17)_ZN6QRectFaNERKS_
//static
/*void qm2948057840(const QRectF & r)*/ {
  const QRectF & r = *(const QRectF *)this_;
  (void) ((QRectF*)this_)->operator&=(r);
  // auto xptr = (QRectF & (QRectF::*)(QRectF const&) ) &QRectF::operator&=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:594
// [1] bool contains(qreal, qreal) const
// (12)qm1078104150 (23)_ZNK6QRectF8containsEdd
//static
/*void qm1078104150(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QRectF*)this_)->contains(x, y);
   auto xptr = (bool (QRectF::*)(double, double) const ) &QRectF::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:595
// [32] QRectF united(const QRectF &) const
// (12)qm2840579758 (23)_ZNK6QRectF6unitedERKS_
//static
/*void qm2840579758(const QRectF & other)*/ {
  const QRectF & other = *(const QRectF *)this_;
  (void) ((QRectF*)this_)->united(other);
   auto xptr = (QRectF (QRectF::*)(QRectF const&) const ) &QRectF::united;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:596
// [32] QRectF intersected(const QRectF &) const
// (12)qm1662290518 (29)_ZNK6QRectF11intersectedERKS_
//static
/*void qm1662290518(const QRectF & other)*/ {
  const QRectF & other = *(const QRectF *)this_;
  (void) ((QRectF*)this_)->intersected(other);
   auto xptr = (QRectF (QRectF::*)(QRectF const&) const ) &QRectF::intersected;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:599
// [32] QRectF marginsAdded(const QMarginsF &) const
// (12)qm1281330690 (38)_ZNK6QRectF12marginsAddedERK9QMarginsF
//static
/*void qm1281330690(const QMarginsF & margins)*/ {
  const QMarginsF & margins = *(const QMarginsF *)this_;
  (void) ((QRectF*)this_)->marginsAdded(margins);
   auto xptr = (QRectF (QRectF::*)(QMarginsF const&) const ) &QRectF::marginsAdded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:600
// [32] QRectF marginsRemoved(const QMarginsF &) const
// (12)qm1663049745 (40)_ZNK6QRectF14marginsRemovedERK9QMarginsF
//static
/*void qm1663049745(const QMarginsF & margins)*/ {
  const QMarginsF & margins = *(const QMarginsF *)this_;
  (void) ((QRectF*)this_)->marginsRemoved(margins);
   auto xptr = (QRectF (QRectF::*)(QMarginsF const&) const ) &QRectF::marginsRemoved;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:601
// [32] QRectF & operator+=(const QMarginsF &) 
// (12)qm2013784196 (25)_ZN6QRectFpLERK9QMarginsF
//static
/*void qm2013784196(const QMarginsF & margins)*/ {
  const QMarginsF & margins = *(const QMarginsF *)this_;
  (void) ((QRectF*)this_)->operator+=(margins);
  // auto xptr = (QRectF & (QRectF::*)(QMarginsF const&) ) &QRectF::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:602
// [32] QRectF & operator-=(const QMarginsF &) 
// (12)qm1153985450 (25)_ZN6QRectFmIERK9QMarginsF
//static
/*void qm1153985450(const QMarginsF & margins)*/ {
  const QMarginsF & margins = *(const QMarginsF *)this_;
  (void) ((QRectF*)this_)->operator-=(margins);
  // auto xptr = (QRectF & (QRectF::*)(QMarginsF const&) ) &QRectF::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:612
// [16] QRect toRect() const
// (12)qm1524506327 (20)_ZNK6QRectF6toRectEv
//static
/*void qm1524506327()*/ {
  ;
  (void) ((QRectF*)this_)->toRect();
   auto xptr = (QRect (QRectF::*)() const ) &QRectF::toRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QRectFD2Ev(void *this_)*/ {
  delete (QRectF*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrectf
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
