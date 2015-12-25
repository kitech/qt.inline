// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qapplication.h
// dst-file: /src/widgets/qapplication.cxx
//

// header block begin =>
#include <qapplication.h>

extern "C" {

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

