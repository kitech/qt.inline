// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qgraphicswidget.h
// dst-file: /src/widgets/qgraphicswidget.cxx
//

// header block begin =>
#include <qgraphicswidget.h>

extern "C" {

// QGraphicsWidget(class QGraphicsItem *, Qt::WindowFlags)
QGraphicsWidget* dector_ZN15QGraphicsWidgetC1EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * parent, Qt::WindowFlags wFlags)
{
  // static_assert(sizeof(QGraphicsWidget) == 32, "tyszerr");
  QGraphicsWidget* rthis = new QGraphicsWidget(parent, wFlags);
  return rthis;
}

// ~QGraphicsWidget()
void dedtor_ZN15QGraphicsWidgetD0Ev(QGraphicsWidget* that)
{
  QGraphicsWidget* rthis = (QGraphicsWidget*)that;
  delete rthis;
}

  // proto:  void QGraphicsWidget::setGeometry(qreal x, qreal y, qreal w, qreal h);
void _ZN15QGraphicsWidget11setGeometryEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsWidget *cthat = (QGraphicsWidget *)that;
   cthat->setGeometry(x, y, w, h);
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

