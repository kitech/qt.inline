// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtGui/qcursor.h
// dst-file: /src/gui/qcursor.cxx
//

// header block begin =>
#include <qcursor.h>

extern "C" {

int QCursor_Class_Size()
{
  return sizeof(QCursor);
}

// QCursor(const class QBitmap &, const class QBitmap &, int, int)
QCursor* dector_ZN7QCursorC1ERK7QBitmapS2_ii(const QBitmap & bitmap, const QBitmap & mask, int hotX, int hotY)
{
  // static_assert(sizeof(QCursor) == 32, "tyszerr");
  QCursor* rthis = new QCursor(bitmap, mask, hotX, hotY);
  return rthis;
}

// QCursor(const class QPixmap &, int, int)
QCursor* dector_ZN7QCursorC1ERK7QPixmapii(const QPixmap & pixmap, int hotX, int hotY)
{
  // static_assert(sizeof(QCursor) == 32, "tyszerr");
  QCursor* rthis = new QCursor(pixmap, hotX, hotY);
  return rthis;
}

// ~QCursor()
void dedtor_ZN7QCursorD0Ev(QCursor* that)
{
  QCursor* rthis = (QCursor*)that;
  delete rthis;
}

// QCursor(const class QCursor &)
QCursor* dector_ZN7QCursorC1ERKS_(const QCursor & cursor)
{
  // static_assert(sizeof(QCursor) == 32, "tyszerr");
  QCursor* rthis = new QCursor(cursor);
  return rthis;
}

// QCursor(class QCursor &&)
QCursor* dector_ZN7QCursorC1EOS_(QCursor && other)
{
  // static_assert(sizeof(QCursor) == 32, "tyszerr");
  QCursor* rthis = new QCursor(other);
  return rthis;
}

// QCursor(Qt::CursorShape)
QCursor* dector_ZN7QCursorC1EN2Qt11CursorShapeE(Qt::CursorShape shape)
{
  // static_assert(sizeof(QCursor) == 32, "tyszerr");
  QCursor* rthis = new QCursor(shape);
  return rthis;
}

// QCursor()
QCursor* dector_ZN7QCursorC1Ev()
{
  // static_assert(sizeof(QCursor) == 32, "tyszerr");
  QCursor* rthis = new QCursor();
  return rthis;
}

  // proto: static void QCursor::setPos(QScreen * screen, const QPoint & p);
void demth_ZN7QCursor6setPosEP7QScreenRK6QPoint(void *that, QScreen * screen, const QPoint & p)
{
  QCursor *cthat = (QCursor *)that;
   cthat->setPos(screen, p);
}

  // proto: static void QCursor::setPos(const QPoint & p);
void demth_ZN7QCursor6setPosERK6QPoint(void *that, const QPoint & p)
{
  QCursor *cthat = (QCursor *)that;
   cthat->setPos(p);
}

  // proto:  void QCursor::QCursor(QCursor && other);
void demth_ZN7QCursorC1EOS_(void *that, QCursor && other)
{
  QCursor *cthat = (QCursor *)that;
  auto _o = new(that) QCursor(other);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

