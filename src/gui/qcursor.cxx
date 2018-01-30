//  header block begin
// /usr/include/qt/QtGui/qcursor.h
#include <qcursor.h>
#include <QtGui>

// QCursor is pure virtual: false
// QCursor has virtual projected: false
//  header block end

//  main block begin

class MyQCursor : public QCursor {
public:
  virtual ~MyQCursor() {}
// void QCursor()
MyQCursor() : QCursor() {}
// void QCursor(Qt::CursorShape)
MyQCursor(Qt::CursorShape shape) : QCursor(shape) {}
// void QCursor(const class QBitmap &, const class QBitmap &, int, int)
MyQCursor(const QBitmap & bitmap, const QBitmap & mask, int hotX, int hotY) : QCursor(bitmap, mask, hotX, hotY) {}
// void QCursor(const class QPixmap &, int, int)
MyQCursor(const QPixmap & pixmap, int hotX, int hotY) : QCursor(pixmap, hotX, hotY) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:82
// [-2] void QCursor()
extern "C"
void* C_ZN7QCursorC2Ev() {
  return  new QCursor();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:83
// [-2] void QCursor(Qt::CursorShape)
extern "C"
void* C_ZN7QCursorC2EN2Qt11CursorShapeE(Qt::CursorShape shape) {
  return  new QCursor(shape);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:84
// [-2] void QCursor(const class QBitmap &, const class QBitmap &, int, int)
extern "C"
void* C_ZN7QCursorC2ERK7QBitmapS2_ii(const QBitmap & bitmap, const QBitmap & mask, int hotX, int hotY) {
  return  new QCursor(bitmap, mask, hotX, hotY);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:85
// [-2] void QCursor(const class QPixmap &, int, int)
extern "C"
void* C_ZN7QCursorC2ERK7QPixmapii(const QPixmap & pixmap, int hotX, int hotY) {
  return  new QCursor(pixmap, hotX, hotY);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:87
// [-2] void ~QCursor()
extern "C"
void C_ZN7QCursorD2Ev(void *this_) {
  delete (QCursor*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:95
// [-2] void swap(class QCursor &)
extern "C"
void C_ZN7QCursor4swapERS_(void *this_, QCursor & other) {
  ((QCursor*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:99
// [4] Qt::CursorShape shape()
extern "C"
Qt::CursorShape C_ZNK7QCursor5shapeEv(void *this_) {
  return (Qt::CursorShape)((QCursor*)this_)->shape();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:100
// [-2] void setShape(Qt::CursorShape)
extern "C"
void C_ZN7QCursor8setShapeEN2Qt11CursorShapeE(void *this_, Qt::CursorShape newShape) {
  ((QCursor*)this_)->setShape(newShape);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:102
// [8] const QBitmap * bitmap()
extern "C"
void* C_ZNK7QCursor6bitmapEv(void *this_) {
  return (void*)((QCursor*)this_)->bitmap();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:103
// [8] const QBitmap * mask()
extern "C"
void* C_ZNK7QCursor4maskEv(void *this_) {
  return (void*)((QCursor*)this_)->mask();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:104
// [32] QPixmap pixmap()
extern "C"
void* C_ZNK7QCursor6pixmapEv(void *this_) {
  auto rv = ((QCursor*)this_)->pixmap();
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:105
// [8] QPoint hotSpot()
extern "C"
void* C_ZNK7QCursor7hotSpotEv(void *this_) {
  auto rv = ((QCursor*)this_)->hotSpot();
return new QPoint(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:107
// [8] QPoint pos()
extern "C"
void* C_ZN7QCursor3posEv() {
  auto rv = QCursor::pos();
return new QPoint(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:108
// [8] QPoint pos(const class QScreen *)
extern "C"
void* C_ZN7QCursor3posEPK7QScreen(const QScreen * screen) {
  auto rv = QCursor::pos(screen);
return new QPoint(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:109
// [-2] void setPos(int, int)
extern "C"
void C_ZN7QCursor6setPosEii(int x, int y) {
  QCursor::setPos(x, y);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:110
// [-2] void setPos(class QScreen *, int, int)
extern "C"
void C_ZN7QCursor6setPosEP7QScreenii(QScreen * screen, int x, int y) {
  QCursor::setPos(screen, x, y);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:111
// [-2] void setPos(const class QPoint &)
extern "C"
void C_ZN7QCursor6setPosERK6QPoint(const QPoint & p) {
  QCursor::setPos(p);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:112
// [-2] void setPos(class QScreen *, const class QPoint &)
extern "C"
void C_ZN7QCursor6setPosEP7QScreenRK6QPoint(QScreen * screen, const QPoint & p) {
  QCursor::setPos(screen, p);
}
//  main block end
