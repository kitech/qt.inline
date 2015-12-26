// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qkeysequenceedit.h
// dst-file: /src/widgets/qkeysequenceedit.cxx
//

// header block begin =>
#include <qkeysequenceedit.h>

extern "C" {

int QKeySequenceEdit_Class_Size()
{
  return sizeof(QKeySequenceEdit);
}

// QKeySequenceEdit(const class QKeySequence &, class QWidget *)
QKeySequenceEdit* dector_ZN16QKeySequenceEditC1ERK12QKeySequenceP7QWidget(const QKeySequence & keySequence, QWidget * parent)
{
  // static_assert(sizeof(QKeySequenceEdit) == 32, "tyszerr");
  QKeySequenceEdit* rthis = new QKeySequenceEdit(keySequence, parent);
  return rthis;
}

// ~QKeySequenceEdit()
void dedtor_ZN16QKeySequenceEditD0Ev(QKeySequenceEdit* that)
{
  QKeySequenceEdit* rthis = (QKeySequenceEdit*)that;
  delete rthis;
}

// QKeySequenceEdit(class QWidget *)
QKeySequenceEdit* dector_ZN16QKeySequenceEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QKeySequenceEdit) == 32, "tyszerr");
  QKeySequenceEdit* rthis = new QKeySequenceEdit(parent);
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

