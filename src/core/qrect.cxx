//  header block begin
// /usr/include/qt/QtCore/qrect.h
#include <qrect.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qrect.h:56
// void QRect()
extern "C"
void* C_ZN5QRectC1Ev() {
  return new QRect();
}
// inline
// /usr/include/qt/QtCore/qrect.h:57
// void QRect(const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN5QRectC1ERK6QPointS2_(const QPoint & topleft, const QPoint & bottomright) {
  return new QRect(topleft, bottomright);
}
// inline
// /usr/include/qt/QtCore/qrect.h:58
// void QRect(const class QPoint &, const class QSize &)
extern "C"
void* C_ZN5QRectC1ERK6QPointRK5QSize(const QPoint & topleft, const QSize & size) {
  return new QRect(topleft, size);
}
// inline
// /usr/include/qt/QtCore/qrect.h:59
// void QRect(int, int, int, int)
extern "C"
void* C_ZN5QRectC1Eiiii(int left, int top, int width, int height) {
  return new QRect(left, top, width, height);
}
// inline
// /usr/include/qt/QtCore/qrect.h:61
// bool isNull()
extern "C"
void C_ZNK5QRect6isNullEv(void *this_) {
  /*return*/ ((QRect*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qrect.h:62
// bool isEmpty()
extern "C"
void C_ZNK5QRect7isEmptyEv(void *this_) {
  /*return*/ ((QRect*)this_)->isEmpty();
}
// inline
// /usr/include/qt/QtCore/qrect.h:63
// bool isValid()
extern "C"
void C_ZNK5QRect7isValidEv(void *this_) {
  /*return*/ ((QRect*)this_)->isValid();
}
// inline
// /usr/include/qt/QtCore/qrect.h:65
// int left()
extern "C"
void C_ZNK5QRect4leftEv(void *this_) {
  /*return*/ ((QRect*)this_)->left();
}
// inline
// /usr/include/qt/QtCore/qrect.h:66
// int top()
extern "C"
void C_ZNK5QRect3topEv(void *this_) {
  /*return*/ ((QRect*)this_)->top();
}
// inline
// /usr/include/qt/QtCore/qrect.h:67
// int right()
extern "C"
void C_ZNK5QRect5rightEv(void *this_) {
  /*return*/ ((QRect*)this_)->right();
}
// inline
// /usr/include/qt/QtCore/qrect.h:68
// int bottom()
extern "C"
void C_ZNK5QRect6bottomEv(void *this_) {
  /*return*/ ((QRect*)this_)->bottom();
}
// /usr/include/qt/QtCore/qrect.h:69
// QRect normalized()
extern "C"
void C_ZNK5QRect10normalizedEv(void *this_) {
  /*return*/ ((QRect*)this_)->normalized();
}
// inline
// /usr/include/qt/QtCore/qrect.h:71
// int x()
extern "C"
void C_ZNK5QRect1xEv(void *this_) {
  /*return*/ ((QRect*)this_)->x();
}
// inline
// /usr/include/qt/QtCore/qrect.h:72
// int y()
extern "C"
void C_ZNK5QRect1yEv(void *this_) {
  /*return*/ ((QRect*)this_)->y();
}
// inline
// /usr/include/qt/QtCore/qrect.h:73
// void setLeft(int)
extern "C"
void C_ZN5QRect7setLeftEi(void *this_, int pos) {
  ((QRect*)this_)->setLeft(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:74
// void setTop(int)
extern "C"
void C_ZN5QRect6setTopEi(void *this_, int pos) {
  ((QRect*)this_)->setTop(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:75
// void setRight(int)
extern "C"
void C_ZN5QRect8setRightEi(void *this_, int pos) {
  ((QRect*)this_)->setRight(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:76
// void setBottom(int)
extern "C"
void C_ZN5QRect9setBottomEi(void *this_, int pos) {
  ((QRect*)this_)->setBottom(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:77
// void setX(int)
extern "C"
void C_ZN5QRect4setXEi(void *this_, int x) {
  ((QRect*)this_)->setX(x);
}
// inline
// /usr/include/qt/QtCore/qrect.h:78
// void setY(int)
extern "C"
void C_ZN5QRect4setYEi(void *this_, int y) {
  ((QRect*)this_)->setY(y);
}
// inline
// /usr/include/qt/QtCore/qrect.h:80
// void setTopLeft(const class QPoint &)
extern "C"
void C_ZN5QRect10setTopLeftERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->setTopLeft(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:81
// void setBottomRight(const class QPoint &)
extern "C"
void C_ZN5QRect14setBottomRightERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->setBottomRight(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:82
// void setTopRight(const class QPoint &)
extern "C"
void C_ZN5QRect11setTopRightERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->setTopRight(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:83
// void setBottomLeft(const class QPoint &)
extern "C"
void C_ZN5QRect13setBottomLeftERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->setBottomLeft(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:85
// QPoint topLeft()
extern "C"
void C_ZNK5QRect7topLeftEv(void *this_) {
  /*return*/ ((QRect*)this_)->topLeft();
}
// inline
// /usr/include/qt/QtCore/qrect.h:86
// QPoint bottomRight()
extern "C"
void C_ZNK5QRect11bottomRightEv(void *this_) {
  /*return*/ ((QRect*)this_)->bottomRight();
}
// inline
// /usr/include/qt/QtCore/qrect.h:87
// QPoint topRight()
extern "C"
void C_ZNK5QRect8topRightEv(void *this_) {
  /*return*/ ((QRect*)this_)->topRight();
}
// inline
// /usr/include/qt/QtCore/qrect.h:88
// QPoint bottomLeft()
extern "C"
void C_ZNK5QRect10bottomLeftEv(void *this_) {
  /*return*/ ((QRect*)this_)->bottomLeft();
}
// inline
// /usr/include/qt/QtCore/qrect.h:89
// QPoint center()
extern "C"
void C_ZNK5QRect6centerEv(void *this_) {
  /*return*/ ((QRect*)this_)->center();
}
// inline
// /usr/include/qt/QtCore/qrect.h:91
// void moveLeft(int)
extern "C"
void C_ZN5QRect8moveLeftEi(void *this_, int pos) {
  ((QRect*)this_)->moveLeft(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:92
// void moveTop(int)
extern "C"
void C_ZN5QRect7moveTopEi(void *this_, int pos) {
  ((QRect*)this_)->moveTop(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:93
// void moveRight(int)
extern "C"
void C_ZN5QRect9moveRightEi(void *this_, int pos) {
  ((QRect*)this_)->moveRight(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:94
// void moveBottom(int)
extern "C"
void C_ZN5QRect10moveBottomEi(void *this_, int pos) {
  ((QRect*)this_)->moveBottom(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:95
// void moveTopLeft(const class QPoint &)
extern "C"
void C_ZN5QRect11moveTopLeftERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->moveTopLeft(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:96
// void moveBottomRight(const class QPoint &)
extern "C"
void C_ZN5QRect15moveBottomRightERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->moveBottomRight(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:97
// void moveTopRight(const class QPoint &)
extern "C"
void C_ZN5QRect12moveTopRightERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->moveTopRight(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:98
// void moveBottomLeft(const class QPoint &)
extern "C"
void C_ZN5QRect14moveBottomLeftERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->moveBottomLeft(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:99
// void moveCenter(const class QPoint &)
extern "C"
void C_ZN5QRect10moveCenterERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->moveCenter(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:101
// void translate(int, int)
extern "C"
void C_ZN5QRect9translateEii(void *this_, int dx, int dy) {
  ((QRect*)this_)->translate(dx, dy);
}
// inline
// /usr/include/qt/QtCore/qrect.h:102
// void translate(const class QPoint &)
extern "C"
void C_ZN5QRect9translateERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->translate(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:103
// QRect translated(int, int)
extern "C"
void C_ZNK5QRect10translatedEii(void *this_, int dx, int dy) {
  /*return*/ ((QRect*)this_)->translated(dx, dy);
}
// inline
// /usr/include/qt/QtCore/qrect.h:104
// QRect translated(const class QPoint &)
extern "C"
void C_ZNK5QRect10translatedERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QRect*)this_)->translated(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:105
// QRect transposed()
extern "C"
void C_ZNK5QRect10transposedEv(void *this_) {
  /*return*/ ((QRect*)this_)->transposed();
}
// inline
// /usr/include/qt/QtCore/qrect.h:107
// void moveTo(int, int)
extern "C"
void C_ZN5QRect6moveToEii(void *this_, int x, int t) {
  ((QRect*)this_)->moveTo(x, t);
}
// inline
// /usr/include/qt/QtCore/qrect.h:108
// void moveTo(const class QPoint &)
extern "C"
void C_ZN5QRect6moveToERK6QPoint(void *this_, const QPoint & p) {
  ((QRect*)this_)->moveTo(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:110
// void setRect(int, int, int, int)
extern "C"
void C_ZN5QRect7setRectEiiii(void *this_, int x, int y, int w, int h) {
  ((QRect*)this_)->setRect(x, y, w, h);
}
// inline
// /usr/include/qt/QtCore/qrect.h:111
// void getRect(int *, int *, int *, int *)
extern "C"
void C_ZNK5QRect7getRectEPiS0_S0_S0_(void *this_, int * x, int * y, int * w, int * h) {
  ((QRect*)this_)->getRect(x, y, w, h);
}
// inline
// /usr/include/qt/QtCore/qrect.h:113
// void setCoords(int, int, int, int)
extern "C"
void C_ZN5QRect9setCoordsEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QRect*)this_)->setCoords(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qrect.h:114
// void getCoords(int *, int *, int *, int *)
extern "C"
void C_ZNK5QRect9getCoordsEPiS0_S0_S0_(void *this_, int * x1, int * y1, int * x2, int * y2) {
  ((QRect*)this_)->getCoords(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qrect.h:116
// void adjust(int, int, int, int)
extern "C"
void C_ZN5QRect6adjustEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QRect*)this_)->adjust(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qrect.h:117
// QRect adjusted(int, int, int, int)
extern "C"
void C_ZNK5QRect8adjustedEiiii(void *this_, int x1, int y1, int x2, int y2) {
  /*return*/ ((QRect*)this_)->adjusted(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qrect.h:119
// QSize size()
extern "C"
void C_ZNK5QRect4sizeEv(void *this_) {
  /*return*/ ((QRect*)this_)->size();
}
// inline
// /usr/include/qt/QtCore/qrect.h:120
// int width()
extern "C"
void C_ZNK5QRect5widthEv(void *this_) {
  /*return*/ ((QRect*)this_)->width();
}
// inline
// /usr/include/qt/QtCore/qrect.h:121
// int height()
extern "C"
void C_ZNK5QRect6heightEv(void *this_) {
  /*return*/ ((QRect*)this_)->height();
}
// inline
// /usr/include/qt/QtCore/qrect.h:122
// void setWidth(int)
extern "C"
void C_ZN5QRect8setWidthEi(void *this_, int w) {
  ((QRect*)this_)->setWidth(w);
}
// inline
// /usr/include/qt/QtCore/qrect.h:123
// void setHeight(int)
extern "C"
void C_ZN5QRect9setHeightEi(void *this_, int h) {
  ((QRect*)this_)->setHeight(h);
}
// inline
// /usr/include/qt/QtCore/qrect.h:124
// void setSize(const class QSize &)
extern "C"
void C_ZN5QRect7setSizeERK5QSize(void *this_, const QSize & s) {
  ((QRect*)this_)->setSize(s);
}
// /usr/include/qt/QtCore/qrect.h:131
// bool contains(const class QRect &, _Bool)
extern "C"
void C_ZNK5QRect8containsERKS_b(void *this_, const QRect & r, bool proper) {
  /*return*/ ((QRect*)this_)->contains(r, proper);
}
// /usr/include/qt/QtCore/qrect.h:132
// bool contains(const class QPoint &, _Bool)
extern "C"
void C_ZNK5QRect8containsERK6QPointb(void *this_, const QPoint & p, bool proper) {
  /*return*/ ((QRect*)this_)->contains(p, proper);
}
// inline
// /usr/include/qt/QtCore/qrect.h:133
// bool contains(int, int)
extern "C"
void C_ZNK5QRect8containsEii(void *this_, int x, int y) {
  /*return*/ ((QRect*)this_)->contains(x, y);
}
// inline
// /usr/include/qt/QtCore/qrect.h:134
// bool contains(int, int, _Bool)
extern "C"
void C_ZNK5QRect8containsEiib(void *this_, int x, int y, bool proper) {
  /*return*/ ((QRect*)this_)->contains(x, y, proper);
}
// inline
// /usr/include/qt/QtCore/qrect.h:135
// QRect united(const class QRect &)
extern "C"
void C_ZNK5QRect6unitedERKS_(void *this_, const QRect & other) {
  /*return*/ ((QRect*)this_)->united(other);
}
// inline
// /usr/include/qt/QtCore/qrect.h:136
// QRect intersected(const class QRect &)
extern "C"
void C_ZNK5QRect11intersectedERKS_(void *this_, const QRect & other) {
  /*return*/ ((QRect*)this_)->intersected(other);
}
// /usr/include/qt/QtCore/qrect.h:137
// bool intersects(const class QRect &)
extern "C"
void C_ZNK5QRect10intersectsERKS_(void *this_, const QRect & r) {
  /*return*/ ((QRect*)this_)->intersects(r);
}
// inline
// /usr/include/qt/QtCore/qrect.h:139
// QRect marginsAdded(const class QMargins &)
extern "C"
void C_ZNK5QRect12marginsAddedERK8QMargins(void *this_, const QMargins & margins) {
  /*return*/ ((QRect*)this_)->marginsAdded(margins);
}
// inline
// /usr/include/qt/QtCore/qrect.h:140
// QRect marginsRemoved(const class QMargins &)
extern "C"
void C_ZNK5QRect14marginsRemovedERK8QMargins(void *this_, const QMargins & margins) {
  /*return*/ ((QRect*)this_)->marginsRemoved(margins);
}
//  main block end
