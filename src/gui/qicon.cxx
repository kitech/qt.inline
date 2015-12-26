// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qicon.h
// dst-file: /src/gui/qicon.cxx
//

// header block begin =>
#include <qicon.h>

extern "C" {

int QIcon_Class_Size()
{
  return sizeof(QIcon);
}

// QIcon(const class QIcon &)
QIcon* dector_ZN5QIconC1ERKS_(const QIcon & other)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(other);
  return rthis;
}

// QIcon(const class QPixmap &)
QIcon* dector_ZN5QIconC1ERK7QPixmap(const QPixmap & pixmap)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(pixmap);
  return rthis;
}

// QIcon(class QIconEngine *)
QIcon* dector_ZN5QIconC1EP11QIconEngine(QIconEngine * engine)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(engine);
  return rthis;
}

// QIcon()
QIcon* dector_ZN5QIconC1Ev()
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon();
  return rthis;
}

// ~QIcon()
void dedtor_ZN5QIconD0Ev(QIcon* that)
{
  QIcon* rthis = (QIcon*)that;
  delete rthis;
}

// QIcon(const class QString &)
QIcon* dector_ZN5QIconC1ERK7QString(const QString & fileName)
{
  // static_assert(sizeof(QIcon) == 32, "tyszerr");
  QIcon* rthis = new QIcon(fileName);
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

