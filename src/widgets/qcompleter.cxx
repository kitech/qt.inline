// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qcompleter.h
// dst-file: /src/widgets/qcompleter.cxx
//

// header block begin =>
#include <qcompleter.h>

extern "C" {

int QCompleter_Class_Size()
{
  return sizeof(QCompleter);
}

// QCompleter(class QObject *)
QCompleter* dector_ZN10QCompleterC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QCompleter) == 32, "tyszerr");
  QCompleter* rthis = new QCompleter(parent);
  return rthis;
}

// QCompleter(const class QStringList &, class QObject *)
QCompleter* dector_ZN10QCompleterC1ERK11QStringListP7QObject(const QStringList & completions, QObject * parent)
{
  // static_assert(sizeof(QCompleter) == 32, "tyszerr");
  QCompleter* rthis = new QCompleter(completions, parent);
  return rthis;
}

// ~QCompleter()
void dedtor_ZN10QCompleterD0Ev(QCompleter* that)
{
  QCompleter* rthis = (QCompleter*)that;
  delete rthis;
}

// QCompleter(class QAbstractItemModel *, class QObject *)
QCompleter* dector_ZN10QCompleterC1EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent)
{
  // static_assert(sizeof(QCompleter) == 32, "tyszerr");
  QCompleter* rthis = new QCompleter(model, parent);
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

