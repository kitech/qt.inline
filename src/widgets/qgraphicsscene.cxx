// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qgraphicsscene.h
// dst-file: /src/widgets/qgraphicsscene.cxx
//

// header block begin =>
#include <qgraphicsscene.h>

extern "C" {

int QGraphicsScene_Class_Size()
{
  return sizeof(QGraphicsScene);
}

// QGraphicsScene(const class QRectF &, class QObject *)
QGraphicsScene* dector_ZN14QGraphicsSceneC1ERK6QRectFP7QObject(const QRectF & sceneRect, QObject * parent)
{
  // static_assert(sizeof(QGraphicsScene) == 32, "tyszerr");
  QGraphicsScene* rthis = new QGraphicsScene(sceneRect, parent);
  return rthis;
}

// QGraphicsScene(class QObject *)
QGraphicsScene* dector_ZN14QGraphicsSceneC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsScene) == 32, "tyszerr");
  QGraphicsScene* rthis = new QGraphicsScene(parent);
  return rthis;
}

// ~QGraphicsScene()
void dedtor_ZN14QGraphicsSceneD0Ev(QGraphicsScene* that)
{
  QGraphicsScene* rthis = (QGraphicsScene*)that;
  delete rthis;
}

// QGraphicsScene(qreal, qreal, qreal, qreal, class QObject *)
QGraphicsScene* dector_ZN14QGraphicsSceneC1EddddP7QObject(double x, double y, double width, double height, QObject * parent)
{
  // static_assert(sizeof(QGraphicsScene) == 32, "tyszerr");
  QGraphicsScene* rthis = new QGraphicsScene(x, y, width, height, parent);
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

