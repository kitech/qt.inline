// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qgroupbox.h
// dst-file: /src/widgets/qgroupbox.cxx
//

// header block begin =>
#include <qgroupbox.h>

extern "C" {

int QGroupBox_Class_Size()
{
  return sizeof(QGroupBox);
}

// ~QGroupBox()
void dedtor_ZN9QGroupBoxD0Ev(QGroupBox* that)
{
  QGroupBox* rthis = (QGroupBox*)that;
  delete rthis;
}

// QGroupBox(class QWidget *)
QGroupBox* dector_ZN9QGroupBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QGroupBox) == 32, "tyszerr");
  QGroupBox* rthis = new QGroupBox(parent);
  return rthis;
}

// QGroupBox(const class QString &, class QWidget *)
QGroupBox* dector_ZN9QGroupBoxC1ERK7QStringP7QWidget(const QString & title, QWidget * parent)
{
  // static_assert(sizeof(QGroupBox) == 32, "tyszerr");
  QGroupBox* rthis = new QGroupBox(title, parent);
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

