// /usr/include/qt/QtCore/qrect.h
#include <qrect.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qrect.h:506
// void QRectF()
extern "C"
void* C_ZN6QRectFC1Ev() {
  return new QRectF();
}
// inline
// /usr/include/qt/QtCore/qrect.h:507
// void QRectF(const class QPointF &, const class QSizeF &)
extern "C"
void* C_ZN6QRectFC1ERK7QPointFRK6QSizeF(const QPointF & topleft, const QSizeF & size) {
  return new QRectF(topleft, size);
}
// inline
// /usr/include/qt/QtCore/qrect.h:508
// void QRectF(const class QPointF &, const class QPointF &)
extern "C"
void* C_ZN6QRectFC1ERK7QPointFS2_(const QPointF & topleft, const QPointF & bottomRight) {
  return new QRectF(topleft, bottomRight);
}
// inline
// /usr/include/qt/QtCore/qrect.h:509
// void QRectF(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN6QRectFC1Edddd(qreal left, qreal top, qreal width, qreal height) {
  return new QRectF(left, top, width, height);
}
// inline
// /usr/include/qt/QtCore/qrect.h:510
// void QRectF(const class QRect &)
extern "C"
void* C_ZN6QRectFC1ERK5QRect(const QRect & rect) {
  return new QRectF(rect);
}
// inline
// /usr/include/qt/QtCore/qrect.h:512
// bool isNull()
extern "C"
void C_ZNK6QRectF6isNullEv(void *this_) {
  /*return*/ ((QRectF*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qrect.h:513
// bool isEmpty()
extern "C"
void C_ZNK6QRectF7isEmptyEv(void *this_) {
  /*return*/ ((QRectF*)this_)->isEmpty();
}
// inline
// /usr/include/qt/QtCore/qrect.h:514
// bool isValid()
extern "C"
void C_ZNK6QRectF7isValidEv(void *this_) {
  /*return*/ ((QRectF*)this_)->isValid();
}
// /usr/include/qt/QtCore/qrect.h:515
// QRectF normalized()
extern "C"
void C_ZNK6QRectF10normalizedEv(void *this_) {
  /*return*/ ((QRectF*)this_)->normalized();
}
// inline
// /usr/include/qt/QtCore/qrect.h:517
// qreal left()
extern "C"
void C_ZNK6QRectF4leftEv(void *this_) {
  /*return*/ ((QRectF*)this_)->left();
}
// inline
// /usr/include/qt/QtCore/qrect.h:518
// qreal top()
extern "C"
void C_ZNK6QRectF3topEv(void *this_) {
  /*return*/ ((QRectF*)this_)->top();
}
// inline
// /usr/include/qt/QtCore/qrect.h:519
// qreal right()
extern "C"
void C_ZNK6QRectF5rightEv(void *this_) {
  /*return*/ ((QRectF*)this_)->right();
}
// inline
// /usr/include/qt/QtCore/qrect.h:520
// qreal bottom()
extern "C"
void C_ZNK6QRectF6bottomEv(void *this_) {
  /*return*/ ((QRectF*)this_)->bottom();
}
// inline
// /usr/include/qt/QtCore/qrect.h:522
// qreal x()
extern "C"
void C_ZNK6QRectF1xEv(void *this_) {
  /*return*/ ((QRectF*)this_)->x();
}
// inline
// /usr/include/qt/QtCore/qrect.h:523
// qreal y()
extern "C"
void C_ZNK6QRectF1yEv(void *this_) {
  /*return*/ ((QRectF*)this_)->y();
}
// inline
// /usr/include/qt/QtCore/qrect.h:524
// void setLeft(qreal)
extern "C"
void C_ZN6QRectF7setLeftEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setLeft(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:525
// void setTop(qreal)
extern "C"
void C_ZN6QRectF6setTopEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setTop(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:526
// void setRight(qreal)
extern "C"
void C_ZN6QRectF8setRightEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setRight(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:527
// void setBottom(qreal)
extern "C"
void C_ZN6QRectF9setBottomEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setBottom(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:528
// void setX(qreal)
extern "C"
void C_ZN6QRectF4setXEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setX(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:529
// void setY(qreal)
extern "C"
void C_ZN6QRectF4setYEd(void *this_, qreal pos) {
  ((QRectF*)this_)->setY(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:531
// QPointF topLeft()
extern "C"
void C_ZNK6QRectF7topLeftEv(void *this_) {
  /*return*/ ((QRectF*)this_)->topLeft();
}
// inline
// /usr/include/qt/QtCore/qrect.h:532
// QPointF bottomRight()
extern "C"
void C_ZNK6QRectF11bottomRightEv(void *this_) {
  /*return*/ ((QRectF*)this_)->bottomRight();
}
// inline
// /usr/include/qt/QtCore/qrect.h:533
// QPointF topRight()
extern "C"
void C_ZNK6QRectF8topRightEv(void *this_) {
  /*return*/ ((QRectF*)this_)->topRight();
}
// inline
// /usr/include/qt/QtCore/qrect.h:534
// QPointF bottomLeft()
extern "C"
void C_ZNK6QRectF10bottomLeftEv(void *this_) {
  /*return*/ ((QRectF*)this_)->bottomLeft();
}
// inline
// /usr/include/qt/QtCore/qrect.h:535
// QPointF center()
extern "C"
void C_ZNK6QRectF6centerEv(void *this_) {
  /*return*/ ((QRectF*)this_)->center();
}
// inline
// /usr/include/qt/QtCore/qrect.h:537
// void setTopLeft(const class QPointF &)
extern "C"
void C_ZN6QRectF10setTopLeftERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->setTopLeft(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:538
// void setBottomRight(const class QPointF &)
extern "C"
void C_ZN6QRectF14setBottomRightERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->setBottomRight(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:539
// void setTopRight(const class QPointF &)
extern "C"
void C_ZN6QRectF11setTopRightERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->setTopRight(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:540
// void setBottomLeft(const class QPointF &)
extern "C"
void C_ZN6QRectF13setBottomLeftERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->setBottomLeft(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:542
// void moveLeft(qreal)
extern "C"
void C_ZN6QRectF8moveLeftEd(void *this_, qreal pos) {
  ((QRectF*)this_)->moveLeft(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:543
// void moveTop(qreal)
extern "C"
void C_ZN6QRectF7moveTopEd(void *this_, qreal pos) {
  ((QRectF*)this_)->moveTop(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:544
// void moveRight(qreal)
extern "C"
void C_ZN6QRectF9moveRightEd(void *this_, qreal pos) {
  ((QRectF*)this_)->moveRight(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:545
// void moveBottom(qreal)
extern "C"
void C_ZN6QRectF10moveBottomEd(void *this_, qreal pos) {
  ((QRectF*)this_)->moveBottom(pos);
}
// inline
// /usr/include/qt/QtCore/qrect.h:546
// void moveTopLeft(const class QPointF &)
extern "C"
void C_ZN6QRectF11moveTopLeftERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->moveTopLeft(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:547
// void moveBottomRight(const class QPointF &)
extern "C"
void C_ZN6QRectF15moveBottomRightERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->moveBottomRight(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:548
// void moveTopRight(const class QPointF &)
extern "C"
void C_ZN6QRectF12moveTopRightERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->moveTopRight(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:549
// void moveBottomLeft(const class QPointF &)
extern "C"
void C_ZN6QRectF14moveBottomLeftERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->moveBottomLeft(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:550
// void moveCenter(const class QPointF &)
extern "C"
void C_ZN6QRectF10moveCenterERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->moveCenter(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:552
// void translate(qreal, qreal)
extern "C"
void C_ZN6QRectF9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QRectF*)this_)->translate(dx, dy);
}
// inline
// /usr/include/qt/QtCore/qrect.h:553
// void translate(const class QPointF &)
extern "C"
void C_ZN6QRectF9translateERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->translate(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:555
// QRectF translated(qreal, qreal)
extern "C"
void C_ZNK6QRectF10translatedEdd(void *this_, qreal dx, qreal dy) {
  /*return*/ ((QRectF*)this_)->translated(dx, dy);
}
// inline
// /usr/include/qt/QtCore/qrect.h:556
// QRectF translated(const class QPointF &)
extern "C"
void C_ZNK6QRectF10translatedERK7QPointF(void *this_, const QPointF & p) {
  /*return*/ ((QRectF*)this_)->translated(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:558
// QRectF transposed()
extern "C"
void C_ZNK6QRectF10transposedEv(void *this_) {
  /*return*/ ((QRectF*)this_)->transposed();
}
// inline
// /usr/include/qt/QtCore/qrect.h:560
// void moveTo(qreal, qreal)
extern "C"
void C_ZN6QRectF6moveToEdd(void *this_, qreal x, qreal y) {
  ((QRectF*)this_)->moveTo(x, y);
}
// inline
// /usr/include/qt/QtCore/qrect.h:561
// void moveTo(const class QPointF &)
extern "C"
void C_ZN6QRectF6moveToERK7QPointF(void *this_, const QPointF & p) {
  ((QRectF*)this_)->moveTo(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:563
// void setRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QRectF7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QRectF*)this_)->setRect(x, y, w, h);
}
// inline
// /usr/include/qt/QtCore/qrect.h:564
// void getRect(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK6QRectF7getRectEPdS0_S0_S0_(void *this_, qreal * x, qreal * y, qreal * w, qreal * h) {
  ((QRectF*)this_)->getRect(x, y, w, h);
}
// inline
// /usr/include/qt/QtCore/qrect.h:566
// void setCoords(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QRectF9setCoordsEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QRectF*)this_)->setCoords(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qrect.h:567
// void getCoords(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK6QRectF9getCoordsEPdS0_S0_S0_(void *this_, qreal * x1, qreal * y1, qreal * x2, qreal * y2) {
  ((QRectF*)this_)->getCoords(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qrect.h:569
// void adjust(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN6QRectF6adjustEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QRectF*)this_)->adjust(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qrect.h:570
// QRectF adjusted(qreal, qreal, qreal, qreal)
extern "C"
void C_ZNK6QRectF8adjustedEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  /*return*/ ((QRectF*)this_)->adjusted(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qrect.h:572
// QSizeF size()
extern "C"
void C_ZNK6QRectF4sizeEv(void *this_) {
  /*return*/ ((QRectF*)this_)->size();
}
// inline
// /usr/include/qt/QtCore/qrect.h:573
// qreal width()
extern "C"
void C_ZNK6QRectF5widthEv(void *this_) {
  /*return*/ ((QRectF*)this_)->width();
}
// inline
// /usr/include/qt/QtCore/qrect.h:574
// qreal height()
extern "C"
void C_ZNK6QRectF6heightEv(void *this_) {
  /*return*/ ((QRectF*)this_)->height();
}
// inline
// /usr/include/qt/QtCore/qrect.h:575
// void setWidth(qreal)
extern "C"
void C_ZN6QRectF8setWidthEd(void *this_, qreal w) {
  ((QRectF*)this_)->setWidth(w);
}
// inline
// /usr/include/qt/QtCore/qrect.h:576
// void setHeight(qreal)
extern "C"
void C_ZN6QRectF9setHeightEd(void *this_, qreal h) {
  ((QRectF*)this_)->setHeight(h);
}
// inline
// /usr/include/qt/QtCore/qrect.h:577
// void setSize(const class QSizeF &)
extern "C"
void C_ZN6QRectF7setSizeERK6QSizeF(void *this_, const QSizeF & s) {
  ((QRectF*)this_)->setSize(s);
}
// /usr/include/qt/QtCore/qrect.h:584
// bool contains(const class QRectF &)
extern "C"
void C_ZNK6QRectF8containsERKS_(void *this_, const QRectF & r) {
  /*return*/ ((QRectF*)this_)->contains(r);
}
// /usr/include/qt/QtCore/qrect.h:585
// bool contains(const class QPointF &)
extern "C"
void C_ZNK6QRectF8containsERK7QPointF(void *this_, const QPointF & p) {
  /*return*/ ((QRectF*)this_)->contains(p);
}
// inline
// /usr/include/qt/QtCore/qrect.h:586
// bool contains(qreal, qreal)
extern "C"
void C_ZNK6QRectF8containsEdd(void *this_, qreal x, qreal y) {
  /*return*/ ((QRectF*)this_)->contains(x, y);
}
// inline
// /usr/include/qt/QtCore/qrect.h:587
// QRectF united(const class QRectF &)
extern "C"
void C_ZNK6QRectF6unitedERKS_(void *this_, const QRectF & other) {
  /*return*/ ((QRectF*)this_)->united(other);
}
// inline
// /usr/include/qt/QtCore/qrect.h:588
// QRectF intersected(const class QRectF &)
extern "C"
void C_ZNK6QRectF11intersectedERKS_(void *this_, const QRectF & other) {
  /*return*/ ((QRectF*)this_)->intersected(other);
}
// /usr/include/qt/QtCore/qrect.h:589
// bool intersects(const class QRectF &)
extern "C"
void C_ZNK6QRectF10intersectsERKS_(void *this_, const QRectF & r) {
  /*return*/ ((QRectF*)this_)->intersects(r);
}
// inline
// /usr/include/qt/QtCore/qrect.h:591
// QRectF marginsAdded(const class QMarginsF &)
extern "C"
void C_ZNK6QRectF12marginsAddedERK9QMarginsF(void *this_, const QMarginsF & margins) {
  /*return*/ ((QRectF*)this_)->marginsAdded(margins);
}
// inline
// /usr/include/qt/QtCore/qrect.h:592
// QRectF marginsRemoved(const class QMarginsF &)
extern "C"
void C_ZNK6QRectF14marginsRemovedERK9QMarginsF(void *this_, const QMarginsF & margins) {
  /*return*/ ((QRectF*)this_)->marginsRemoved(margins);
}
// inline
// /usr/include/qt/QtCore/qrect.h:604
// QRect toRect()
extern "C"
void C_ZNK6QRectF6toRectEv(void *this_) {
  /*return*/ ((QRectF*)this_)->toRect();
}
// /usr/include/qt/QtCore/qrect.h:605
// QRect toAlignedRect()
extern "C"
void C_ZNK6QRectF13toAlignedRectEv(void *this_) {
  /*return*/ ((QRectF*)this_)->toAlignedRect();
}