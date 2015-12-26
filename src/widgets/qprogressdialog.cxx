// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qprogressdialog.h
// dst-file: /src/widgets/qprogressdialog.cxx
//

// header block begin =>
#include <qprogressdialog.h>

extern "C" {

int QProgressDialog_Class_Size()
{
  return sizeof(QProgressDialog);
}

// QProgressDialog(const class QString &, const class QString &, int, int, class QWidget *, Qt::WindowFlags)
QProgressDialog* dector_ZN15QProgressDialogC1ERK7QStringS2_iiP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & labelText, const QString & cancelButtonText, int minimum, int maximum, QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QProgressDialog) == 32, "tyszerr");
  QProgressDialog* rthis = new QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags);
  return rthis;
}

// ~QProgressDialog()
void dedtor_ZN15QProgressDialogD0Ev(QProgressDialog* that)
{
  QProgressDialog* rthis = (QProgressDialog*)that;
  delete rthis;
}

// QProgressDialog(class QWidget *, Qt::WindowFlags)
QProgressDialog* dector_ZN15QProgressDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QProgressDialog) == 32, "tyszerr");
  QProgressDialog* rthis = new QProgressDialog(parent, flags);
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

