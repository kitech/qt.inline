// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qtextedit.h
// dst-file: /src/widgets/qtextedit.cxx
//

// header block begin =>
#include <qtextedit.h>

extern "C" {

// ~QTextEdit()
void dedtor_ZN9QTextEditD0Ev(QTextEdit* that)
{
  QTextEdit* rthis = (QTextEdit*)that;
  delete rthis;
}

// QTextEdit(const class QString &, class QWidget *)
QTextEdit* dector_ZN9QTextEditC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QTextEdit) == 32, "tyszerr");
  QTextEdit* rthis = new QTextEdit(text, parent);
  return rthis;
}

// QTextEdit(class QWidget *)
QTextEdit* dector_ZN9QTextEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTextEdit) == 32, "tyszerr");
  QTextEdit* rthis = new QTextEdit(parent);
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

