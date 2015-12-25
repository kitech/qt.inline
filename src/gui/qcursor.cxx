// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qcursor.h
// dst-file: /src/gui/qcursor.cxx
//

// header block begin =>
#include <qcursor.h>

extern "C" {

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

