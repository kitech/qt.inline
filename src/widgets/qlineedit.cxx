// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qlineedit.h
// dst-file: /src/widgets/qlineedit.cxx
//

// header block begin =>
#include <qlineedit.h>

extern "C" {

int QLineEdit_Class_Size()
{
  return sizeof(QLineEdit);
}

// QLineEdit(const class QString &, class QWidget *)
QLineEdit* dector_ZN9QLineEditC1ERK7QStringP7QWidget(const QString & arg1, QWidget * parent)
{
  // static_assert(sizeof(QLineEdit) == 32, "tyszerr");
  QLineEdit* rthis = new QLineEdit(arg1, parent);
  return rthis;
}

// ~QLineEdit()
void dedtor_ZN9QLineEditD0Ev(QLineEdit* that)
{
  QLineEdit* rthis = (QLineEdit*)that;
  delete rthis;
}

// QLineEdit(class QWidget *)
QLineEdit* dector_ZN9QLineEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QLineEdit) == 32, "tyszerr");
  QLineEdit* rthis = new QLineEdit(parent);
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

