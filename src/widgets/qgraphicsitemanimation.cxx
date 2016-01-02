// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qgraphicsitemanimation.h
// dst-file: /src/widgets/qgraphicsitemanimation.cxx
//

// header block begin =>
#include <qgraphicsitemanimation.h>

extern "C" {

int QGraphicsItemAnimation_Class_Size()
{
  return sizeof(QGraphicsItemAnimation);
}

// QGraphicsItemAnimation(class QObject *)
QGraphicsItemAnimation* dector_ZN22QGraphicsItemAnimationC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsItemAnimation) == 32, "tyszerr");
  QGraphicsItemAnimation* rthis = new QGraphicsItemAnimation(parent);
  return rthis;
}

// ~QGraphicsItemAnimation()
void dedtor_ZN22QGraphicsItemAnimationD0Ev(QGraphicsItemAnimation* that)
{
  QGraphicsItemAnimation* rthis = (QGraphicsItemAnimation*)that;
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
// QGraphicsItemAnimation_SlotProxy here
class QGraphicsItemAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsItemAnimation_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsitemanimation.moc"

extern "C" {
  QGraphicsItemAnimation_SlotProxy* QGraphicsItemAnimation_SlotProxy_new()
  {
    return new QGraphicsItemAnimation_SlotProxy();
  }
};

// <= body block end

