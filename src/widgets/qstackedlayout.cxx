// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qstackedlayout.h
// dst-file: /src/widgets/qstackedlayout.cxx
//

// header block begin =>
#include <qstackedlayout.h>

extern "C" {

int QStackedLayout_Class_Size()
{
  return sizeof(QStackedLayout);
}

// QStackedLayout(class QLayout *)
QStackedLayout* dector_ZN14QStackedLayoutC1EP7QLayout(QLayout * parentLayout)
{
  // static_assert(sizeof(QStackedLayout) == 32, "tyszerr");
  QStackedLayout* rthis = new QStackedLayout(parentLayout);
  return rthis;
}

// QStackedLayout(class QWidget *)
QStackedLayout* dector_ZN14QStackedLayoutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QStackedLayout) == 32, "tyszerr");
  QStackedLayout* rthis = new QStackedLayout(parent);
  return rthis;
}

// ~QStackedLayout()
void dedtor_ZN14QStackedLayoutD0Ev(QStackedLayout* that)
{
  QStackedLayout* rthis = (QStackedLayout*)that;
  delete rthis;
}

// QStackedLayout()
QStackedLayout* dector_ZN14QStackedLayoutC1Ev()
{
  // static_assert(sizeof(QStackedLayout) == 32, "tyszerr");
  QStackedLayout* rthis = new QStackedLayout();
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

