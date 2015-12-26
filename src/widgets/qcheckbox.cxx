// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qcheckbox.h
// dst-file: /src/widgets/qcheckbox.cxx
//

// header block begin =>
#include <qcheckbox.h>

extern "C" {

int QCheckBox_Class_Size()
{
  return sizeof(QCheckBox);
}

// ~QCheckBox()
void dedtor_ZN9QCheckBoxD0Ev(QCheckBox* that)
{
  QCheckBox* rthis = (QCheckBox*)that;
  delete rthis;
}

// QCheckBox(class QWidget *)
QCheckBox* dector_ZN9QCheckBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QCheckBox) == 32, "tyszerr");
  QCheckBox* rthis = new QCheckBox(parent);
  return rthis;
}

// QCheckBox(const class QString &, class QWidget *)
QCheckBox* dector_ZN9QCheckBoxC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QCheckBox) == 32, "tyszerr");
  QCheckBox* rthis = new QCheckBox(text, parent);
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

