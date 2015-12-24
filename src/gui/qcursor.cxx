// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qcursor.h
// dst-file: /src/gui/qcursor.cxx
//

// header block begin =>
#include <qcursor.h>

extern "C" {

  // proto: static void QCursor::setPos(QScreen * screen, const QPoint & p);
void _ZN7QCursor6setPosEP7QScreenRK6QPoint(void *that, QScreen * screen, const QPoint & p)

{
  QCursor *cthat = (QCursor *)that;
   cthat->setPos(screen, p);
}

  // proto: static void QCursor::setPos(const QPoint & p);
void _ZN7QCursor6setPosERK6QPoint(void *that, const QPoint & p)

{
  QCursor *cthat = (QCursor *)that;
   cthat->setPos(p);
}

  // proto:  void QCursor::QCursor(QCursor && other);
void _ZN7QCursorC1EOS_(void *that, QCursor && other)

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

