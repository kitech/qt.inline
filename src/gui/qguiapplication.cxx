// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qguiapplication.h
// dst-file: /src/gui/qguiapplication.cxx
//

// header block begin =>
#include <qguiapplication.h>

extern "C" {

int QGuiApplication_Class_Size()
{
  return sizeof(QGuiApplication);
}

// ~QGuiApplication()
void dedtor_ZN15QGuiApplicationD0Ev(QGuiApplication* that)
{
  QGuiApplication* rthis = (QGuiApplication*)that;
  delete rthis;
}

// QGuiApplication(int &, char **, int)
QGuiApplication* dector_ZN15QGuiApplicationC1ERiPPci(int & argc, char ** argv, int arg3)
{
  // static_assert(sizeof(QGuiApplication) == 32, "tyszerr");
  QGuiApplication* rthis = new QGuiApplication(argc, argv, arg3);
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

