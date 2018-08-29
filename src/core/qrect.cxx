//  header block begin
// /usr/include/qt/QtCore/qrect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrect.h>
#include <QtCore>
#include "callback_inherit.h"

// QRect is pure virtual: false
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
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:60
// [-2] void QRect()
extern "C" Q_DECL_EXPORT
void* C_ZN5QRectC2Ev() {
  return  new QRect();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:61
// [-2] void QRect(const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QRectC2ERK6QPointS2_(QPoint* topleft, QPoint* bottomright) {
  return  new QRect(*topleft, *bottomright);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:62
// [-2] void QRect(const QPoint &, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QRectC2ERK6QPointRK5QSize(QPoint* topleft, QSize* size) {
  return  new QRect(*topleft, *size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:63
// [-2] void QRect(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QRectC2Eiiii(int left, int top, int width, int height) {
  return  new QRect(left, top, width, height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:65
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QRect6isNullEv(void *this_) {
  return (bool)((QRect*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:66
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QRect7isEmptyEv(void *this_) {
  return (bool)((QRect*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:67
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QRect7isValidEv(void *this_) {
  return (bool)((QRect*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:69
// [4] int left()
extern "C" Q_DECL_EXPORT
int C_ZNK5QRect4leftEv(void *this_) {
  return (int)((QRect*)this_)->left();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:70
// [4] int top()
extern "C" Q_DECL_EXPORT
int C_ZNK5QRect3topEv(void *this_) {
  return (int)((QRect*)this_)->top();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:71
// [4] int right()
extern "C" Q_DECL_EXPORT
int C_ZNK5QRect5rightEv(void *this_) {
  return (int)((QRect*)this_)->right();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:72
// [4] int bottom()
extern "C" Q_DECL_EXPORT
int C_ZNK5QRect6bottomEv(void *this_) {
  return (int)((QRect*)this_)->bottom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:73
// [16] QRect normalized()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect10normalizedEv(void *this_) {
  auto rv = ((QRect*)this_)->normalized();
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:75
// [4] int x()
extern "C" Q_DECL_EXPORT
int C_ZNK5QRect1xEv(void *this_) {
  return (int)((QRect*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:76
// [4] int y()
extern "C" Q_DECL_EXPORT
int C_ZNK5QRect1yEv(void *this_) {
  return (int)((QRect*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:77
// [-2] void setLeft(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect7setLeftEi(void *this_, int pos) {
  ((QRect*)this_)->setLeft(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:78
// [-2] void setTop(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect6setTopEi(void *this_, int pos) {
  ((QRect*)this_)->setTop(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:79
// [-2] void setRight(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect8setRightEi(void *this_, int pos) {
  ((QRect*)this_)->setRight(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:80
// [-2] void setBottom(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect9setBottomEi(void *this_, int pos) {
  ((QRect*)this_)->setBottom(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:81
// [-2] void setX(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect4setXEi(void *this_, int x) {
  ((QRect*)this_)->setX(x);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:82
// [-2] void setY(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect4setYEi(void *this_, int y) {
  ((QRect*)this_)->setY(y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:84
// [-2] void setTopLeft(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect10setTopLeftERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->setTopLeft(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:85
// [-2] void setBottomRight(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect14setBottomRightERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->setBottomRight(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:86
// [-2] void setTopRight(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect11setTopRightERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->setTopRight(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:87
// [-2] void setBottomLeft(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect13setBottomLeftERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->setBottomLeft(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:89
// [8] QPoint topLeft()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect7topLeftEv(void *this_) {
  auto rv = ((QRect*)this_)->topLeft();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:90
// [8] QPoint bottomRight()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect11bottomRightEv(void *this_) {
  auto rv = ((QRect*)this_)->bottomRight();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:91
// [8] QPoint topRight()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect8topRightEv(void *this_) {
  auto rv = ((QRect*)this_)->topRight();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:92
// [8] QPoint bottomLeft()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect10bottomLeftEv(void *this_) {
  auto rv = ((QRect*)this_)->bottomLeft();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:93
// [8] QPoint center()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect6centerEv(void *this_) {
  auto rv = ((QRect*)this_)->center();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:95
// [-2] void moveLeft(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect8moveLeftEi(void *this_, int pos) {
  ((QRect*)this_)->moveLeft(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:96
// [-2] void moveTop(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect7moveTopEi(void *this_, int pos) {
  ((QRect*)this_)->moveTop(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:97
// [-2] void moveRight(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect9moveRightEi(void *this_, int pos) {
  ((QRect*)this_)->moveRight(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:98
// [-2] void moveBottom(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect10moveBottomEi(void *this_, int pos) {
  ((QRect*)this_)->moveBottom(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:99
// [-2] void moveTopLeft(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect11moveTopLeftERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->moveTopLeft(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:100
// [-2] void moveBottomRight(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect15moveBottomRightERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->moveBottomRight(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:101
// [-2] void moveTopRight(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect12moveTopRightERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->moveTopRight(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:102
// [-2] void moveBottomLeft(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect14moveBottomLeftERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->moveBottomLeft(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:103
// [-2] void moveCenter(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect10moveCenterERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->moveCenter(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:105
// [-2] void translate(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect9translateEii(void *this_, int dx, int dy) {
  ((QRect*)this_)->translate(dx, dy);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:106
// [-2] void translate(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect9translateERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->translate(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:107
// [16] QRect translated(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect10translatedEii(void *this_, int dx, int dy) {
  auto rv = ((QRect*)this_)->translated(dx, dy);
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:108
// [16] QRect translated(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect10translatedERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QRect*)this_)->translated(*p);
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qrect.h:109
// [16] QRect transposed()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect10transposedEv(void *this_) {
  auto rv = ((QRect*)this_)->transposed();
return new QRect(rv);
}
#endif // QT_VERSION >= 0x050700

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:111
// [-2] void moveTo(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect6moveToEii(void *this_, int x, int t) {
  ((QRect*)this_)->moveTo(x, t);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:112
// [-2] void moveTo(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect6moveToERK6QPoint(void *this_, QPoint* p) {
  ((QRect*)this_)->moveTo(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:114
// [-2] void setRect(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect7setRectEiiii(void *this_, int x, int y, int w, int h) {
  ((QRect*)this_)->setRect(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:115
// [-2] void getRect(int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK5QRect7getRectEPiS0_S0_S0_(void *this_, int * x, int * y, int * w, int * h) {
  ((QRect*)this_)->getRect(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:117
// [-2] void setCoords(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect9setCoordsEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QRect*)this_)->setCoords(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:118
// [-2] void getCoords(int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK5QRect9getCoordsEPiS0_S0_S0_(void *this_, int * x1, int * y1, int * x2, int * y2) {
  ((QRect*)this_)->getCoords(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:120
// [-2] void adjust(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect6adjustEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QRect*)this_)->adjust(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:121
// [16] QRect adjusted(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect8adjustedEiiii(void *this_, int x1, int y1, int x2, int y2) {
  auto rv = ((QRect*)this_)->adjusted(x1, y1, x2, y2);
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:123
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect4sizeEv(void *this_) {
  auto rv = ((QRect*)this_)->size();
return new QSize(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:124
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK5QRect5widthEv(void *this_) {
  return (int)((QRect*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:125
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK5QRect6heightEv(void *this_) {
  return (int)((QRect*)this_)->height();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:126
// [-2] void setWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect8setWidthEi(void *this_, int w) {
  ((QRect*)this_)->setWidth(w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:127
// [-2] void setHeight(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect9setHeightEi(void *this_, int h) {
  ((QRect*)this_)->setHeight(h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:128
// [-2] void setSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN5QRect7setSizeERK5QSize(void *this_, QSize* s) {
  ((QRect*)this_)->setSize(*s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:130
// [16] QRect operator|(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRectorERKS_(void *this_, QRect* r) {
  auto rv = ((QRect*)this_)->operator|(*r);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:131
// [16] QRect operator&(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRectanERKS_(void *this_, QRect* r) {
  auto rv = ((QRect*)this_)->operator&(*r);
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:132
// [16] QRect & operator|=(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QRectoRERKS_(void *this_, QRect* r) {
  auto& rv = ((QRect*)this_)->operator|=(*r);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:133
// [16] QRect & operator&=(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QRectaNERKS_(void *this_, QRect* r) {
  auto& rv = ((QRect*)this_)->operator&=(*r);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:135
// [1] bool contains(const QRect &, bool)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QRect8containsERKS_b(void *this_, QRect* r, bool proper) {
  return (bool)((QRect*)this_)->contains(*r, proper);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:136
// [1] bool contains(const QPoint &, bool)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QRect8containsERK6QPointb(void *this_, QPoint* p, bool proper) {
  return (bool)((QRect*)this_)->contains(*p, proper);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:137
// [1] bool contains(int, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QRect8containsEii(void *this_, int x, int y) {
  return (bool)((QRect*)this_)->contains(x, y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:138
// [1] bool contains(int, int, bool)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QRect8containsEiib(void *this_, int x, int y, bool proper) {
  return (bool)((QRect*)this_)->contains(x, y, proper);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qrect.h:139
// [16] QRect united(const QRect &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect6unitedERKS_(void *this_, QRect* other) {
  auto rv = ((QRect*)this_)->united(*other);
return new QRect(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qrect.h:140
// [16] QRect intersected(const QRect &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect11intersectedERKS_(void *this_, QRect* other) {
  auto rv = ((QRect*)this_)->intersected(*other);
return new QRect(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:141
// [1] bool intersects(const QRect &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QRect10intersectsERKS_(void *this_, QRect* r) {
  return (bool)((QRect*)this_)->intersects(*r);
}

// Public inline Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qrect.h:143
// [16] QRect marginsAdded(const QMargins &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect12marginsAddedERK8QMargins(void *this_, QMargins* margins) {
  auto rv = ((QRect*)this_)->marginsAdded(*margins);
return new QRect(rv);
}
#endif // QT_VERSION >= 0x050100

// Public inline Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qrect.h:144
// [16] QRect marginsRemoved(const QMargins &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZNK5QRect14marginsRemovedERK8QMargins(void *this_, QMargins* margins) {
  auto rv = ((QRect*)this_)->marginsRemoved(*margins);
return new QRect(rv);
}
#endif // QT_VERSION >= 0x050100

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:145
// [16] QRect & operator+=(const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QRectpLERK8QMargins(void *this_, QMargins* margins) {
  auto& rv = ((QRect*)this_)->operator+=(*margins);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:146
// [16] QRect & operator-=(const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QRectmIERK8QMargins(void *this_, QMargins* margins) {
  auto& rv = ((QRect*)this_)->operator-=(*margins);
return &rv;
}


extern "C" Q_DECL_EXPORT
void C_ZN5QRectD2Ev(void *this_) {
  delete (QRect*)(this_);
}
//  main block end
