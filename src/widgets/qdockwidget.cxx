// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qdockwidget.h
// dst-file: /src/widgets/qdockwidget.cxx
//

// header block begin =>
#include <qdockwidget.h>

extern "C" {

// ~QDockWidget()
void dedtor_ZN11QDockWidgetD0Ev(QDockWidget* that)
{
  QDockWidget* rthis = (QDockWidget*)that;
  delete rthis;
}

// QDockWidget(class QWidget *, Qt::WindowFlags)
QDockWidget* dector_ZN11QDockWidgetC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QDockWidget) == 32, "tyszerr");
  QDockWidget* rthis = new QDockWidget(parent, flags);
  return rthis;
}

// QDockWidget(const class QString &, class QWidget *, Qt::WindowFlags)
QDockWidget* dector_ZN11QDockWidgetC1ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & title, QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QDockWidget) == 32, "tyszerr");
  QDockWidget* rthis = new QDockWidget(title, parent, flags);
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

