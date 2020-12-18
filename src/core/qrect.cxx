//  header block begin

// /usr/include/qt/QtCore/qrect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrect.h>
#include <QtCore>
#include "callback_inherit.h"

// QRect is pure virtual: false false
// QRect has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRect_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRect_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRect_t qt_meta_stringdata_MyQRect = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQRect"
  },
  "MyQRect"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRect[] = {
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
class Q_DECL_EXPORT MyQRect : public QRect {
public:
  virtual ~MyQRect() {}
// void QRect()
MyQRect() : QRect() {}
// void QRect(const QPoint &, const QPoint &)
MyQRect(const QPoint & topleft, const QPoint & bottomright) : QRect(topleft, bottomright) {}
// void QRect(const QPoint &, const QSize &)
MyQRect(const QPoint & topleft, const QSize & size) : QRect(topleft, size) {}
// void QRect(int, int, int, int)
MyQRect(int left, int top, int width, int height) : QRect(left, top, width, height) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrect(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:60
// [-2] void QRect() 
// (12)qm1318468973 (13)_ZN5QRectC2Ev
/*void* qm1318468973()*/{
  ;
  this_ =  new QRect();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:61
// [-2] void QRect(const QPoint &, const QPoint &) 
// (12)qm3152721428 (24)_ZN5QRectC2ERK6QPointS2_
/*void* qm3152721428(const QPoint & topleft, const QPoint & bottomright)*/{
  const QPoint & topleft = *(const QPoint *)this_; const QPoint & bottomright = *(const QPoint *)this_;
  this_ =  new QRect(topleft, bottomright);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:62
// [-2] void QRect(const QPoint &, const QSize &) 
// (12)qm2817523317 (29)_ZN5QRectC2ERK6QPointRK5QSize
/*void* qm2817523317(const QPoint & topleft, const QSize & size)*/{
  const QPoint & topleft = *(const QPoint *)this_; const QSize & size = *(const QSize *)this_;
  this_ =  new QRect(topleft, size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:63
// [-2] void QRect(int, int, int, int) 
// (10)qm65487252 (16)_ZN5QRectC2Eiiii
/*void* qm65487252(int left, int top, int width, int height)*/{
  int left = *(int*)this_; int top = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  this_ =  new QRect(left, top, width, height);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:65
// [1] bool isNull() const
// (12)qm3424420210 (19)_ZNK5QRect6isNullEv
//static
/*void qm3424420210()*/ {
  ;
  (void) ((QRect*)this_)->isNull();
   auto xptr = (bool (QRect::*)() const ) &QRect::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:66
// [1] bool isEmpty() const
// (12)qm1044706320 (20)_ZNK5QRect7isEmptyEv
//static
/*void qm1044706320()*/ {
  ;
  (void) ((QRect*)this_)->isEmpty();
   auto xptr = (bool (QRect::*)() const ) &QRect::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:67
// [1] bool isValid() const
// (11)qm204306394 (20)_ZNK5QRect7isValidEv
//static
/*void qm204306394()*/ {
  ;
  (void) ((QRect*)this_)->isValid();
   auto xptr = (bool (QRect::*)() const ) &QRect::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:69
// [4] int left() const
// (12)qm3169620863 (17)_ZNK5QRect4leftEv
//static
/*void qm3169620863()*/ {
  ;
  (void) ((QRect*)this_)->left();
   auto xptr = (int (QRect::*)() const ) &QRect::left;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:70
// [4] int top() const
// (12)qm3329531928 (16)_ZNK5QRect3topEv
//static
/*void qm3329531928()*/ {
  ;
  (void) ((QRect*)this_)->top();
   auto xptr = (int (QRect::*)() const ) &QRect::top;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:71
// [4] int right() const
// (12)qm3515267020 (18)_ZNK5QRect5rightEv
//static
/*void qm3515267020()*/ {
  ;
  (void) ((QRect*)this_)->right();
   auto xptr = (int (QRect::*)() const ) &QRect::right;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:72
// [4] int bottom() const
// (12)qm3137250108 (19)_ZNK5QRect6bottomEv
//static
/*void qm3137250108()*/ {
  ;
  (void) ((QRect*)this_)->bottom();
   auto xptr = (int (QRect::*)() const ) &QRect::bottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:75
// [4] int x() const
// (12)qm1050399888 (14)_ZNK5QRect1xEv
//static
/*void qm1050399888()*/ {
  ;
  (void) ((QRect*)this_)->x();
   auto xptr = (int (QRect::*)() const ) &QRect::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:76
// [4] int y() const
// (12)qm1062846119 (14)_ZNK5QRect1yEv
//static
/*void qm1062846119()*/ {
  ;
  (void) ((QRect*)this_)->y();
   auto xptr = (int (QRect::*)() const ) &QRect::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:77
// [-2] void setLeft(int) 
// (11)qm990488254 (19)_ZN5QRect7setLeftEi
//static
/*void qm990488254(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QRect*)this_)->setLeft(pos);
   auto xptr = (void (QRect::*)(int) ) &QRect::setLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:78
// [-2] void setTop(int) 
// (12)qm2895420056 (18)_ZN5QRect6setTopEi
//static
/*void qm2895420056(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QRect*)this_)->setTop(pos);
   auto xptr = (void (QRect::*)(int) ) &QRect::setTop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:79
// [-2] void setRight(int) 
// (11)qm576870380 (20)_ZN5QRect8setRightEi
//static
/*void qm576870380(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QRect*)this_)->setRight(pos);
   auto xptr = (void (QRect::*)(int) ) &QRect::setRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:80
// [-2] void setBottom(int) 
// (12)qm1662588117 (21)_ZN5QRect9setBottomEi
//static
/*void qm1662588117(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QRect*)this_)->setBottom(pos);
   auto xptr = (void (QRect::*)(int) ) &QRect::setBottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:81
// [-2] void setX(int) 
// (12)qm2433102519 (16)_ZN5QRect4setXEi
//static
/*void qm2433102519(int x)*/ {
  int x = *(int*)this_;
  (void) ((QRect*)this_)->setX(x);
   auto xptr = (void (QRect::*)(int) ) &QRect::setX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:82
// [-2] void setY(int) 
// (12)qm2428786816 (16)_ZN5QRect4setYEi
//static
/*void qm2428786816(int y)*/ {
  int y = *(int*)this_;
  (void) ((QRect*)this_)->setY(y);
   auto xptr = (void (QRect::*)(int) ) &QRect::setY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:84
// [-2] void setTopLeft(const QPoint &) 
// (11)qm780182972 (31)_ZN5QRect10setTopLeftERK6QPoint
//static
/*void qm780182972(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->setTopLeft(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::setTopLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:85
// [-2] void setBottomRight(const QPoint &) 
// (12)qm3121617645 (35)_ZN5QRect14setBottomRightERK6QPoint
//static
/*void qm3121617645(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->setBottomRight(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::setBottomRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:86
// [-2] void setTopRight(const QPoint &) 
// (11)qm709782968 (32)_ZN5QRect11setTopRightERK6QPoint
//static
/*void qm709782968(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->setTopRight(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::setTopRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:87
// [-2] void setBottomLeft(const QPoint &) 
// (12)qm1630066010 (34)_ZN5QRect13setBottomLeftERK6QPoint
//static
/*void qm1630066010(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->setBottomLeft(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::setBottomLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:89
// [8] QPoint topLeft() const
// (11)qm616316289 (20)_ZNK5QRect7topLeftEv
//static
/*void qm616316289()*/ {
  ;
  (void) ((QRect*)this_)->topLeft();
   auto xptr = (QPoint (QRect::*)() const ) &QRect::topLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:90
// [8] QPoint bottomRight() const
// (12)qm3698516642 (25)_ZNK5QRect11bottomRightEv
//static
/*void qm3698516642()*/ {
  ;
  (void) ((QRect*)this_)->bottomRight();
   auto xptr = (QPoint (QRect::*)() const ) &QRect::bottomRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:91
// [8] QPoint topRight() const
// (12)qm3561606177 (21)_ZNK5QRect8topRightEv
//static
/*void qm3561606177()*/ {
  ;
  (void) ((QRect*)this_)->topRight();
   auto xptr = (QPoint (QRect::*)() const ) &QRect::topRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:92
// [8] QPoint bottomLeft() const
// (12)qm1580339652 (24)_ZNK5QRect10bottomLeftEv
//static
/*void qm1580339652()*/ {
  ;
  (void) ((QRect*)this_)->bottomLeft();
   auto xptr = (QPoint (QRect::*)() const ) &QRect::bottomLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:93
// [8] QPoint center() const
// (11)qm145676600 (19)_ZNK5QRect6centerEv
//static
/*void qm145676600()*/ {
  ;
  (void) ((QRect*)this_)->center();
   auto xptr = (QPoint (QRect::*)() const ) &QRect::center;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:95
// [-2] void moveLeft(int) 
// (12)qm1823752286 (20)_ZN5QRect8moveLeftEi
//static
/*void qm1823752286(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QRect*)this_)->moveLeft(pos);
   auto xptr = (void (QRect::*)(int) ) &QRect::moveLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:96
// [-2] void moveTop(int) 
// (12)qm2679574562 (19)_ZN5QRect7moveTopEi
//static
/*void qm2679574562(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QRect*)this_)->moveTop(pos);
   auto xptr = (void (QRect::*)(int) ) &QRect::moveTop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:97
// [-2] void moveRight(int) 
// (12)qm2321723611 (21)_ZN5QRect9moveRightEi
//static
/*void qm2321723611(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QRect*)this_)->moveRight(pos);
   auto xptr = (void (QRect::*)(int) ) &QRect::moveRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:98
// [-2] void moveBottom(int) 
// (12)qm3099851360 (23)_ZN5QRect10moveBottomEi
//static
/*void qm3099851360(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QRect*)this_)->moveBottom(pos);
   auto xptr = (void (QRect::*)(int) ) &QRect::moveBottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:99
// [-2] void moveTopLeft(const QPoint &) 
// (11)qm154115636 (32)_ZN5QRect11moveTopLeftERK6QPoint
//static
/*void qm154115636(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->moveTopLeft(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::moveTopLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:100
// [-2] void moveBottomRight(const QPoint &) 
// (12)qm3883878176 (36)_ZN5QRect15moveBottomRightERK6QPoint
//static
/*void qm3883878176(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->moveBottomRight(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::moveBottomRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:101
// [-2] void moveTopRight(const QPoint &) 
// (12)qm2831651948 (33)_ZN5QRect12moveTopRightERK6QPoint
//static
/*void qm2831651948(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->moveTopRight(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::moveTopRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:102
// [-2] void moveBottomLeft(const QPoint &) 
// (12)qm4076715481 (35)_ZN5QRect14moveBottomLeftERK6QPoint
//static
/*void qm4076715481(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->moveBottomLeft(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::moveBottomLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:103
// [-2] void moveCenter(const QPoint &) 
// (11)qm207816485 (31)_ZN5QRect10moveCenterERK6QPoint
//static
/*void qm207816485(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->moveCenter(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::moveCenter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:105
// [-2] void translate(int, int) 
// (12)qm3088834939 (22)_ZN5QRect9translateEii
//static
/*void qm3088834939(int dx, int dy)*/ {
  int dx = *(int*)this_; int dy = *(int*)this_;
  (void) ((QRect*)this_)->translate(dx, dy);
   auto xptr = (void (QRect::*)(int, int) ) &QRect::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:106
// [-2] void translate(const QPoint &) 
// (12)qm3405580365 (29)_ZN5QRect9translateERK6QPoint
//static
/*void qm3405580365(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->translate(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:107
// [16] QRect translated(int, int) const
// (11)qm689894716 (25)_ZNK5QRect10translatedEii
//static
/*void qm689894716(int dx, int dy)*/ {
  int dx = *(int*)this_; int dy = *(int*)this_;
  (void) ((QRect*)this_)->translated(dx, dy);
   auto xptr = (QRect (QRect::*)(int, int) const ) &QRect::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:108
// [16] QRect translated(const QPoint &) const
// (11)qm503974534 (32)_ZNK5QRect10translatedERK6QPoint
//static
/*void qm503974534(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->translated(p);
   auto xptr = (QRect (QRect::*)(QPoint const&) const ) &QRect::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:109
// [16] QRect transposed() const
// (12)qm1829409305 (24)_ZNK5QRect10transposedEv
//static
/*void qm1829409305()*/ {
  ;
  (void) ((QRect*)this_)->transposed();
   auto xptr = (QRect (QRect::*)() const ) &QRect::transposed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:111
// [-2] void moveTo(int, int) 
// (12)qm1810118601 (19)_ZN5QRect6moveToEii
//static
/*void qm1810118601(int x, int t)*/ {
  int x = *(int*)this_; int t = *(int*)this_;
  (void) ((QRect*)this_)->moveTo(x, t);
   auto xptr = (void (QRect::*)(int, int) ) &QRect::moveTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:112
// [-2] void moveTo(const QPoint &) 
// (12)qm1207269389 (26)_ZN5QRect6moveToERK6QPoint
//static
/*void qm1207269389(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRect*)this_)->moveTo(p);
   auto xptr = (void (QRect::*)(QPoint const&) ) &QRect::moveTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:114
// [-2] void setRect(int, int, int, int) 
// (12)qm1080944129 (22)_ZN5QRect7setRectEiiii
//static
/*void qm1080944129(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QRect*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QRect::*)(int, int, int, int) ) &QRect::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:115
// [-2] void getRect(int *, int *, int *, int *) const
// (12)qm3060719866 (30)_ZNK5QRect7getRectEPiS0_S0_S0_
//static
/*void qm3060719866(int * x, int * y, int * w, int * h)*/ {
  int * x = *(int **)this_; int * y = *(int **)this_; int * w = *(int **)this_; int * h = *(int **)this_;
  (void) ((QRect*)this_)->getRect(x, y, w, h);
   auto xptr = (void (QRect::*)(int*, int*, int*, int*) const ) &QRect::getRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:117
// [-2] void setCoords(int, int, int, int) 
// (12)qm3946747256 (24)_ZN5QRect9setCoordsEiiii
//static
/*void qm3946747256(int x1, int y1, int x2, int y2)*/ {
  int x1 = *(int*)this_; int y1 = *(int*)this_; int x2 = *(int*)this_; int y2 = *(int*)this_;
  (void) ((QRect*)this_)->setCoords(x1, y1, x2, y2);
   auto xptr = (void (QRect::*)(int, int, int, int) ) &QRect::setCoords;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:118
// [-2] void getCoords(int *, int *, int *, int *) const
// (11)qm251863978 (32)_ZNK5QRect9getCoordsEPiS0_S0_S0_
//static
/*void qm251863978(int * x1, int * y1, int * x2, int * y2)*/ {
  int * x1 = *(int **)this_; int * y1 = *(int **)this_; int * x2 = *(int **)this_; int * y2 = *(int **)this_;
  (void) ((QRect*)this_)->getCoords(x1, y1, x2, y2);
   auto xptr = (void (QRect::*)(int*, int*, int*, int*) const ) &QRect::getCoords;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:120
// [-2] void adjust(int, int, int, int) 
// (12)qm3300107573 (21)_ZN5QRect6adjustEiiii
//static
/*void qm3300107573(int x1, int y1, int x2, int y2)*/ {
  int x1 = *(int*)this_; int y1 = *(int*)this_; int x2 = *(int*)this_; int y2 = *(int*)this_;
  (void) ((QRect*)this_)->adjust(x1, y1, x2, y2);
   auto xptr = (void (QRect::*)(int, int, int, int) ) &QRect::adjust;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:121
// [16] QRect adjusted(int, int, int, int) const
// (12)qm4044718670 (24)_ZNK5QRect8adjustedEiiii
//static
/*void qm4044718670(int x1, int y1, int x2, int y2)*/ {
  int x1 = *(int*)this_; int y1 = *(int*)this_; int x2 = *(int*)this_; int y2 = *(int*)this_;
  (void) ((QRect*)this_)->adjusted(x1, y1, x2, y2);
   auto xptr = (QRect (QRect::*)(int, int, int, int) const ) &QRect::adjusted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:123
// [8] QSize size() const
// (12)qm2360864592 (17)_ZNK5QRect4sizeEv
//static
/*void qm2360864592()*/ {
  ;
  (void) ((QRect*)this_)->size();
   auto xptr = (QSize (QRect::*)() const ) &QRect::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:124
// [4] int width() const
// (12)qm3421327496 (18)_ZNK5QRect5widthEv
//static
/*void qm3421327496()*/ {
  ;
  (void) ((QRect*)this_)->width();
   auto xptr = (int (QRect::*)() const ) &QRect::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:125
// [4] int height() const
// (12)qm2573647083 (19)_ZNK5QRect6heightEv
//static
/*void qm2573647083()*/ {
  ;
  (void) ((QRect*)this_)->height();
   auto xptr = (int (QRect::*)() const ) &QRect::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:126
// [-2] void setWidth(int) 
// (11)qm940159144 (20)_ZN5QRect8setWidthEi
//static
/*void qm940159144(int w)*/ {
  int w = *(int*)this_;
  (void) ((QRect*)this_)->setWidth(w);
   auto xptr = (void (QRect::*)(int) ) &QRect::setWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:127
// [-2] void setHeight(int) 
// (12)qm1082198786 (21)_ZN5QRect9setHeightEi
//static
/*void qm1082198786(int h)*/ {
  int h = *(int*)this_;
  (void) ((QRect*)this_)->setHeight(h);
   auto xptr = (void (QRect::*)(int) ) &QRect::setHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:128
// [-2] void setSize(const QSize &) 
// (12)qm1266535568 (26)_ZN5QRect7setSizeERK5QSize
//static
/*void qm1266535568(const QSize & s)*/ {
  const QSize & s = *(const QSize *)this_;
  (void) ((QRect*)this_)->setSize(s);
   auto xptr = (void (QRect::*)(QSize const&) ) &QRect::setSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:132
// [16] QRect & operator|=(const QRect &) 
// (12)qm4127112168 (16)_ZN5QRectoRERKS_
//static
/*void qm4127112168(const QRect & r)*/ {
  const QRect & r = *(const QRect *)this_;
  (void) ((QRect*)this_)->operator|=(r);
  // auto xptr = (QRect & (QRect::*)(QRect const&) ) &QRect::operator|=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:133
// [16] QRect & operator&=(const QRect &) 
// (12)qm3520397909 (16)_ZN5QRectaNERKS_
//static
/*void qm3520397909(const QRect & r)*/ {
  const QRect & r = *(const QRect *)this_;
  (void) ((QRect*)this_)->operator&=(r);
  // auto xptr = (QRect & (QRect::*)(QRect const&) ) &QRect::operator&=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:137
// [1] bool contains(int, int) const
// (12)qm2687475721 (22)_ZNK5QRect8containsEii
//static
/*void qm2687475721(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QRect*)this_)->contains(x, y);
   auto xptr = (bool (QRect::*)(int, int) const ) &QRect::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:138
// [1] bool contains(int, int, bool) const
// (11)qm146962685 (23)_ZNK5QRect8containsEiib
//static
/*void qm146962685(int x, int y, bool proper)*/ {
  int x = *(int*)this_; int y = *(int*)this_; bool proper = *(bool*)this_;
  (void) ((QRect*)this_)->contains(x, y, proper);
   auto xptr = (bool (QRect::*)(int, int, bool) const ) &QRect::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:139
// [16] QRect united(const QRect &) const
// (12)qm2185100289 (22)_ZNK5QRect6unitedERKS_
//static
/*void qm2185100289(const QRect & other)*/ {
  const QRect & other = *(const QRect *)this_;
  (void) ((QRect*)this_)->united(other);
   auto xptr = (QRect (QRect::*)(QRect const&) const ) &QRect::united;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:140
// [16] QRect intersected(const QRect &) const
// (12)qm2777744285 (28)_ZNK5QRect11intersectedERKS_
//static
/*void qm2777744285(const QRect & other)*/ {
  const QRect & other = *(const QRect *)this_;
  (void) ((QRect*)this_)->intersected(other);
   auto xptr = (QRect (QRect::*)(QRect const&) const ) &QRect::intersected;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:143
// [16] QRect marginsAdded(const QMargins &) const
// (12)qm1021662290 (36)_ZNK5QRect12marginsAddedERK8QMargins
//static
/*void qm1021662290(const QMargins & margins)*/ {
  const QMargins & margins = *(const QMargins *)this_;
  (void) ((QRect*)this_)->marginsAdded(margins);
   auto xptr = (QRect (QRect::*)(QMargins const&) const ) &QRect::marginsAdded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:144
// [16] QRect marginsRemoved(const QMargins &) const
// (12)qm3236089459 (38)_ZNK5QRect14marginsRemovedERK8QMargins
//static
/*void qm3236089459(const QMargins & margins)*/ {
  const QMargins & margins = *(const QMargins *)this_;
  (void) ((QRect*)this_)->marginsRemoved(margins);
   auto xptr = (QRect (QRect::*)(QMargins const&) const ) &QRect::marginsRemoved;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:145
// [16] QRect & operator+=(const QMargins &) 
// (12)qm2550845945 (23)_ZN5QRectpLERK8QMargins
//static
/*void qm2550845945(const QMargins & margins)*/ {
  const QMargins & margins = *(const QMargins *)this_;
  (void) ((QRect*)this_)->operator+=(margins);
  // auto xptr = (QRect & (QRect::*)(QMargins const&) ) &QRect::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:146
// [16] QRect & operator-=(const QMargins &) 
// (12)qm1416441565 (23)_ZN5QRectmIERK8QMargins
//static
/*void qm1416441565(const QMargins & margins)*/ {
  const QMargins & margins = *(const QMargins *)this_;
  (void) ((QRect*)this_)->operator-=(margins);
  // auto xptr = (QRect & (QRect::*)(QMargins const&) ) &QRect::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QRectD2Ev(void *this_)*/ {
  delete (QRect*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrect
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
