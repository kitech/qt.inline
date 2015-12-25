// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qgraphicsgridlayout.h
// dst-file: /src/widgets/qgraphicsgridlayout.cxx
//

// header block begin =>
#include <qgraphicsgridlayout.h>

extern "C" {

// ~QGraphicsGridLayout()
void dedtor_ZN19QGraphicsGridLayoutD0Ev(QGraphicsGridLayout* that)
{
  QGraphicsGridLayout* rthis = (QGraphicsGridLayout*)that;
  delete rthis;
}

// QGraphicsGridLayout(class QGraphicsLayoutItem *)
QGraphicsGridLayout* dector_ZN19QGraphicsGridLayoutC1EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent)
{
  // static_assert(sizeof(QGraphicsGridLayout) == 32, "tyszerr");
  QGraphicsGridLayout* rthis = new QGraphicsGridLayout(parent);
  return rthis;
}

  // proto:  void QGraphicsGridLayout::addItem(QGraphicsLayoutItem * item, int row, int column, Qt::Alignment alignment);
void _ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemii6QFlagsIN2Qt13AlignmentFlagEE(void *that, QGraphicsLayoutItem * item, int row, int column, Qt::Alignment alignment)
{
  QGraphicsGridLayout *cthat = (QGraphicsGridLayout *)that;
   cthat->addItem(item, row, column, alignment);
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

