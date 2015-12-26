// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qfontdialog.h
// dst-file: /src/widgets/qfontdialog.cxx
//

// header block begin =>
#include <qfontdialog.h>

extern "C" {

int QFontDialog_Class_Size()
{
  return sizeof(QFontDialog);
}

// QFontDialog(class QWidget *)
QFontDialog* dector_ZN11QFontDialogC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QFontDialog) == 32, "tyszerr");
  QFontDialog* rthis = new QFontDialog(parent);
  return rthis;
}

// QFontDialog(const class QFont &, class QWidget *)
QFontDialog* dector_ZN11QFontDialogC1ERK5QFontP7QWidget(const QFont & initial, QWidget * parent)
{
  // static_assert(sizeof(QFontDialog) == 32, "tyszerr");
  QFontDialog* rthis = new QFontDialog(initial, parent);
  return rthis;
}

// ~QFontDialog()
void dedtor_ZN11QFontDialogD0Ev(QFontDialog* that)
{
  QFontDialog* rthis = (QFontDialog*)that;
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

