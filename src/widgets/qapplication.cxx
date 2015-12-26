// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qapplication.h
// dst-file: /src/widgets/qapplication.cxx
//

// header block begin =>
#include <qapplication.h>

extern "C" {

int QApplication_Class_Size()
{
  return sizeof(QApplication);
}

// QApplication(int &, char **, int)
QApplication* dector_ZN12QApplicationC1ERiPPci(int & argc, char ** argv, int arg3)
{
  // static_assert(sizeof(QApplication) == 32, "tyszerr");
  QApplication* rthis = new QApplication(argc, argv, arg3);
  return rthis;
}

// ~QApplication()
void dedtor_ZN12QApplicationD0Ev(QApplication* that)
{
  QApplication* rthis = (QApplication*)that;
  delete rthis;
}

  // proto: static QWidget * QApplication::widgetAt(int x, int y);
QWidget * _ZN12QApplication8widgetAtEii(void *that, int x, int y)
{
  QApplication *cthat = (QApplication *)that;
  return cthat->widgetAt(x, y);
}

  // proto: static QWidget * QApplication::topLevelAt(int x, int y);
QWidget * _ZN12QApplication10topLevelAtEii(void *that, int x, int y)
{
  QApplication *cthat = (QApplication *)that;
  return cthat->topLevelAt(x, y);
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

