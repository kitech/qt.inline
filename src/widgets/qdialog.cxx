// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qdialog.h
// dst-file: /src/widgets/qdialog.cxx
//

// header block begin =>
#include <qdialog.h>

extern "C" {

int QDialog_Class_Size()
{
  return sizeof(QDialog);
}

// ~QDialog()
void dedtor_ZN7QDialogD0Ev(QDialog* that)
{
  QDialog* rthis = (QDialog*)that;
  delete rthis;
}

// QDialog(class QWidget *, Qt::WindowFlags)
QDialog* dector_ZN7QDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QDialog) == 32, "tyszerr");
  QDialog* rthis = new QDialog(parent, f);
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

