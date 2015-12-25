// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qtoolbar.h
// dst-file: /src/widgets/qtoolbar.cxx
//

// header block begin =>
#include <qtoolbar.h>

extern "C" {

// QToolBar(const class QString &, class QWidget *)
QToolBar* dector_ZN8QToolBarC1ERK7QStringP7QWidget(const QString & title, QWidget * parent)
{
  // static_assert(sizeof(QToolBar) == 32, "tyszerr");
  QToolBar* rthis = new QToolBar(title, parent);
  return rthis;
}

// QToolBar(class QWidget *)
QToolBar* dector_ZN8QToolBarC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QToolBar) == 32, "tyszerr");
  QToolBar* rthis = new QToolBar(parent);
  return rthis;
}

// ~QToolBar()
void dedtor_ZN8QToolBarD0Ev(QToolBar* that)
{
  QToolBar* rthis = (QToolBar*)that;
  delete rthis;
}

  // proto:  QAction * QToolBar::actionAt(int x, int y);
QAction * _ZNK8QToolBar8actionAtEii(void *that, int x, int y)
{
  QToolBar *cthat = (QToolBar *)that;
  return cthat->actionAt(x, y);
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

