// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qslider.h
// dst-file: /src/widgets/qslider.cxx
//

// header block begin =>
#include <qslider.h>

extern "C" {

int QSlider_Class_Size()
{
  return sizeof(QSlider);
}

// ~QSlider()
void dedtor_ZN7QSliderD0Ev(QSlider* that)
{
  QSlider* rthis = (QSlider*)that;
  delete rthis;
}

// QSlider(Qt::Orientation, class QWidget *)
QSlider* dector_ZN7QSliderC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent)
{
  // static_assert(sizeof(QSlider) == 32, "tyszerr");
  QSlider* rthis = new QSlider(orientation, parent);
  return rthis;
}

// QSlider(class QWidget *)
QSlider* dector_ZN7QSliderC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QSlider) == 32, "tyszerr");
  QSlider* rthis = new QSlider(parent);
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

