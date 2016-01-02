// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qgraphicsanchorlayout.h
// dst-file: /src/widgets/qgraphicsanchorlayout.cxx
//

// header block begin =>
#include <qgraphicsanchorlayout.h>

extern "C" {

int QGraphicsAnchorLayout_Class_Size()
{
  return sizeof(QGraphicsAnchorLayout);
}

// QGraphicsAnchorLayout(class QGraphicsLayoutItem *)
QGraphicsAnchorLayout* dector_ZN21QGraphicsAnchorLayoutC1EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent)
{
  // static_assert(sizeof(QGraphicsAnchorLayout) == 32, "tyszerr");
  QGraphicsAnchorLayout* rthis = new QGraphicsAnchorLayout(parent);
  return rthis;
}

// ~QGraphicsAnchorLayout()
void dedtor_ZN21QGraphicsAnchorLayoutD0Ev(QGraphicsAnchorLayout* that)
{
  QGraphicsAnchorLayout* rthis = (QGraphicsAnchorLayout*)that;
  delete rthis;
}

int QGraphicsAnchor_Class_Size()
{
  return sizeof(QGraphicsAnchor);
}

// ~QGraphicsAnchor()
void dedtor_ZN15QGraphicsAnchorD0Ev(QGraphicsAnchor* that)
{
  QGraphicsAnchor* rthis = (QGraphicsAnchor*)that;
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
// QGraphicsAnchor_SlotProxy here
class QGraphicsAnchor_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsAnchor_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsanchorlayout.moc"

extern "C" {
  QGraphicsAnchor_SlotProxy* QGraphicsAnchor_SlotProxy_new()
  {
    return new QGraphicsAnchor_SlotProxy();
  }
};

// <= body block end

