// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qdialogbuttonbox.h
// dst-file: /src/widgets/qdialogbuttonbox.cxx
//

// header block begin =>
#include <qdialogbuttonbox.h>

extern "C" {

// ~QDialogButtonBox()
void dedtor_ZN16QDialogButtonBoxD0Ev(QDialogButtonBox* that)
{
  QDialogButtonBox* rthis = (QDialogButtonBox*)that;
  delete rthis;
}

// QDialogButtonBox(Qt::Orientation, class QWidget *)
QDialogButtonBox* dector_ZN16QDialogButtonBoxC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent)
{
  // static_assert(sizeof(QDialogButtonBox) == 32, "tyszerr");
  QDialogButtonBox* rthis = new QDialogButtonBox(orientation, parent);
  return rthis;
}

// QDialogButtonBox(StandardButtons, Qt::Orientation, class QWidget *)
QDialogButtonBox* dector_ZN16QDialogButtonBoxC1E6QFlagsINS_14StandardButtonEEN2Qt11OrientationEP7QWidget(QDialogButtonBox::StandardButton buttons, Qt::Orientation orientation, QWidget * parent)
{
  // static_assert(sizeof(QDialogButtonBox) == 32, "tyszerr");
  QDialogButtonBox* rthis = new QDialogButtonBox(buttons, orientation, parent);
  return rthis;
}

// QDialogButtonBox(class QWidget *)
QDialogButtonBox* dector_ZN16QDialogButtonBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QDialogButtonBox) == 32, "tyszerr");
  QDialogButtonBox* rthis = new QDialogButtonBox(parent);
  return rthis;
}

// QDialogButtonBox(StandardButtons, class QWidget *)
QDialogButtonBox* dector_ZN16QDialogButtonBoxC1E6QFlagsINS_14StandardButtonEEP7QWidget(QDialogButtonBox::StandardButton buttons, QWidget * parent)
{
  // static_assert(sizeof(QDialogButtonBox) == 32, "tyszerr");
  QDialogButtonBox* rthis = new QDialogButtonBox(buttons, parent);
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

