// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qmenu.h
// dst-file: /src/widgets/qmenu.cxx
//

// header block begin =>
#include <qmenu.h>

extern "C" {

// QMenu(class QWidget *)
QMenu* dector_ZN5QMenuC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QMenu) == 32, "tyszerr");
  QMenu* rthis = new QMenu(parent);
  return rthis;
}

// QMenu(const class QString &, class QWidget *)
QMenu* dector_ZN5QMenuC1ERK7QStringP7QWidget(const QString & title, QWidget * parent)
{
  // static_assert(sizeof(QMenu) == 32, "tyszerr");
  QMenu* rthis = new QMenu(title, parent);
  return rthis;
}

// ~QMenu()
void dedtor_ZN5QMenuD0Ev(QMenu* that)
{
  QMenu* rthis = (QMenu*)that;
  delete rthis;
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

