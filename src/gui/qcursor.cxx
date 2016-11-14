// /usr/include/qt/QtGui/qcursor.h
#include <qcursor.h>
#include <QtGui>

// /usr/include/qt/QtGui/qcursor.h:81
// void QCursor()
extern "C"
void* C_ZN7QCursorC1Ev() {
  return new QCursor();
}
// /usr/include/qt/QtGui/qcursor.h:82
// void QCursor(Qt::CursorShape)
extern "C"
void* C_ZN7QCursorC1EN2Qt11CursorShapeE(Qt::CursorShape shape) {
  return new QCursor(shape);
}
// /usr/include/qt/QtGui/qcursor.h:83
// void QCursor(const class QBitmap &, const class QBitmap &, int, int)
extern "C"
void* C_ZN7QCursorC1ERK7QBitmapS2_ii(const QBitmap & bitmap, const QBitmap & mask, int hotX, int hotY) {
  return new QCursor(bitmap, mask, hotX, hotY);
}
// /usr/include/qt/QtGui/qcursor.h:84
// void QCursor(const class QPixmap &, int, int)
extern "C"
void* C_ZN7QCursorC1ERK7QPixmapii(const QPixmap & pixmap, int hotX, int hotY) {
  return new QCursor(pixmap, hotX, hotY);
}
// /usr/include/qt/QtGui/qcursor.h:86
// void ~QCursor()
extern "C"
void C_ZN7QCursorD1Ev(void *this_) {
  delete (QCursor*)(this_);
}
// inline
// /usr/include/qt/QtGui/qcursor.h:94
// void swap(class QCursor &)
extern "C"
void C_ZN7QCursor4swapERS_(void *this_, QCursor & other) {
  ((QCursor*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qcursor.h:98
// Qt::CursorShape shape()
extern "C"
void C_ZNK7QCursor5shapeEv(void *this_) {
  /*return*/ ((QCursor*)this_)->shape();
}
// /usr/include/qt/QtGui/qcursor.h:99
// void setShape(Qt::CursorShape)
extern "C"
void C_ZN7QCursor8setShapeEN2Qt11CursorShapeE(void *this_, Qt::CursorShape newShape) {
  ((QCursor*)this_)->setShape(newShape);
}
// /usr/include/qt/QtGui/qcursor.h:101
// const QBitmap * bitmap()
extern "C"
void C_ZNK7QCursor6bitmapEv(void *this_) {
  /*return*/ ((QCursor*)this_)->bitmap();
}
// /usr/include/qt/QtGui/qcursor.h:102
// const QBitmap * mask()
extern "C"
void C_ZNK7QCursor4maskEv(void *this_) {
  /*return*/ ((QCursor*)this_)->mask();
}
// /usr/include/qt/QtGui/qcursor.h:103
// QPixmap pixmap()
extern "C"
void C_ZNK7QCursor6pixmapEv(void *this_) {
  /*return*/ ((QCursor*)this_)->pixmap();
}
// /usr/include/qt/QtGui/qcursor.h:104
// QPoint hotSpot()
extern "C"
void C_ZNK7QCursor7hotSpotEv(void *this_) {
  /*return*/ ((QCursor*)this_)->hotSpot();
}
// static
// /usr/include/qt/QtGui/qcursor.h:106
// QPoint pos()
extern "C"
void C_ZN7QCursor3posEv() {
  /*return*/ QCursor::pos();
}
// static
// /usr/include/qt/QtGui/qcursor.h:107
// QPoint pos(const class QScreen *)
extern "C"
void C_ZN7QCursor3posEPK7QScreen(const QScreen * screen) {
  /*return*/ QCursor::pos(screen);
}
// static
// /usr/include/qt/QtGui/qcursor.h:108
// void setPos(int, int)
extern "C"
void C_ZN7QCursor6setPosEii(int x, int y) {
  QCursor::setPos(x, y);
}
// static
// /usr/include/qt/QtGui/qcursor.h:109
// void setPos(class QScreen *, int, int)
extern "C"
void C_ZN7QCursor6setPosEP7QScreenii(QScreen * screen, int x, int y) {
  QCursor::setPos(screen, x, y);
}
// static inline
// /usr/include/qt/QtGui/qcursor.h:110
// void setPos(const class QPoint &)
extern "C"
void C_ZN7QCursor6setPosERK6QPoint(const QPoint & p) {
  QCursor::setPos(p);
}
// static inline
// /usr/include/qt/QtGui/qcursor.h:111
// void setPos(class QScreen *, const class QPoint &)
extern "C"
void C_ZN7QCursor6setPosEP7QScreenRK6QPoint(QScreen * screen, const QPoint & p) {
  QCursor::setPos(screen, p);
}