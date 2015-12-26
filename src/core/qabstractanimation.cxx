// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qabstractanimation.h
// dst-file: /src/core/qabstractanimation.cxx
//

// header block begin =>
#include <qabstractanimation.h>

extern "C" {

int QAbstractAnimation_Class_Size()
{
  return sizeof(QAbstractAnimation);
}

int QAnimationDriver_Class_Size()
{
  return sizeof(QAnimationDriver);
}

// ~QAnimationDriver()
void dedtor_ZN16QAnimationDriverD0Ev(QAnimationDriver* that)
{
  QAnimationDriver* rthis = (QAnimationDriver*)that;
  delete rthis;
}

// QAnimationDriver(class QObject *)
QAnimationDriver* dector_ZN16QAnimationDriverC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QAnimationDriver) == 32, "tyszerr");
  QAnimationDriver* rthis = new QAnimationDriver(parent);
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

