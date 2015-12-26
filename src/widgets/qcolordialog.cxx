// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qcolordialog.h
// dst-file: /src/widgets/qcolordialog.cxx
//

// header block begin =>
#include <qcolordialog.h>

extern "C" {

int QColorDialog_Class_Size()
{
  return sizeof(QColorDialog);
}

// QColorDialog(const class QColor &, class QWidget *)
QColorDialog* dector_ZN12QColorDialogC1ERK6QColorP7QWidget(const QColor & initial, QWidget * parent)
{
  // static_assert(sizeof(QColorDialog) == 32, "tyszerr");
  QColorDialog* rthis = new QColorDialog(initial, parent);
  return rthis;
}

// ~QColorDialog()
void dedtor_ZN12QColorDialogD0Ev(QColorDialog* that)
{
  QColorDialog* rthis = (QColorDialog*)that;
  delete rthis;
}

// QColorDialog(class QWidget *)
QColorDialog* dector_ZN12QColorDialogC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QColorDialog) == 32, "tyszerr");
  QColorDialog* rthis = new QColorDialog(parent);
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

