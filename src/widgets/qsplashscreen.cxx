// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qsplashscreen.h
// dst-file: /src/widgets/qsplashscreen.cxx
//

// header block begin =>
#include <qsplashscreen.h>

extern "C" {

// ~QSplashScreen()
void dedtor_ZN13QSplashScreenD0Ev(QSplashScreen* that)
{
  QSplashScreen* rthis = (QSplashScreen*)that;
  delete rthis;
}

// QSplashScreen(const class QPixmap &, Qt::WindowFlags)
QSplashScreen* dector_ZN13QSplashScreenC1ERK7QPixmap6QFlagsIN2Qt10WindowTypeEE(const QPixmap & pixmap, Qt::WindowFlags f)
{
  // static_assert(sizeof(QSplashScreen) == 32, "tyszerr");
  QSplashScreen* rthis = new QSplashScreen(pixmap, f);
  return rthis;
}

// QSplashScreen(class QWidget *, const class QPixmap &, Qt::WindowFlags)
QSplashScreen* dector_ZN13QSplashScreenC1EP7QWidgetRK7QPixmap6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, const QPixmap & pixmap, Qt::WindowFlags f)
{
  // static_assert(sizeof(QSplashScreen) == 32, "tyszerr");
  QSplashScreen* rthis = new QSplashScreen(parent, pixmap, f);
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

