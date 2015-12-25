// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qsplitter.h
// dst-file: /src/widgets/qsplitter.cxx
//

// header block begin =>
#include <qsplitter.h>

extern "C" {

// QSplitter(class QWidget *)
QSplitter* dector_ZN9QSplitterC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QSplitter) == 32, "tyszerr");
  QSplitter* rthis = new QSplitter(parent);
  return rthis;
}

// QSplitter(Qt::Orientation, class QWidget *)
QSplitter* dector_ZN9QSplitterC1EN2Qt11OrientationEP7QWidget(Qt::Orientation arg1, QWidget * parent)
{
  // static_assert(sizeof(QSplitter) == 32, "tyszerr");
  QSplitter* rthis = new QSplitter(arg1, parent);
  return rthis;
}

// ~QSplitter()
void dedtor_ZN9QSplitterD0Ev(QSplitter* that)
{
  QSplitter* rthis = (QSplitter*)that;
  delete rthis;
}

// QSplitterHandle(Qt::Orientation, class QSplitter *)
QSplitterHandle* dector_ZN15QSplitterHandleC1EN2Qt11OrientationEP9QSplitter(Qt::Orientation o, QSplitter * parent)
{
  // static_assert(sizeof(QSplitterHandle) == 32, "tyszerr");
  QSplitterHandle* rthis = new QSplitterHandle(o, parent);
  return rthis;
}

// ~QSplitterHandle()
void dedtor_ZN15QSplitterHandleD0Ev(QSplitterHandle* that)
{
  QSplitterHandle* rthis = (QSplitterHandle*)that;
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

