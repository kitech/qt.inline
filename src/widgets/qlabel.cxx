// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qlabel.h
// dst-file: /src/widgets/qlabel.cxx
//

// header block begin =>
#include <qlabel.h>

extern "C" {

int QLabel_Class_Size()
{
  return sizeof(QLabel);
}

// QLabel(const class QString &, class QWidget *, Qt::WindowFlags)
QLabel* dector_ZN6QLabelC1ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & text, QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QLabel) == 32, "tyszerr");
  QLabel* rthis = new QLabel(text, parent, f);
  return rthis;
}

// ~QLabel()
void dedtor_ZN6QLabelD0Ev(QLabel* that)
{
  QLabel* rthis = (QLabel*)that;
  delete rthis;
}

// QLabel(class QWidget *, Qt::WindowFlags)
QLabel* dector_ZN6QLabelC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QLabel) == 32, "tyszerr");
  QLabel* rthis = new QLabel(parent, f);
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

