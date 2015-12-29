// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qgraphicsproxywidget.h
// dst-file: /src/widgets/qgraphicsproxywidget.cxx
//

// header block begin =>
#include <qgraphicsproxywidget.h>

extern "C" {

int QGraphicsProxyWidget_Class_Size()
{
  return sizeof(QGraphicsProxyWidget);
}

// ~QGraphicsProxyWidget()
void dedtor_ZN20QGraphicsProxyWidgetD0Ev(QGraphicsProxyWidget* that)
{
  QGraphicsProxyWidget* rthis = (QGraphicsProxyWidget*)that;
  delete rthis;
}

// QGraphicsProxyWidget(class QGraphicsItem *, Qt::WindowFlags)
QGraphicsProxyWidget* dector_ZN20QGraphicsProxyWidgetC1EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * parent, Qt::WindowFlags wFlags)
{
  // static_assert(sizeof(QGraphicsProxyWidget) == 32, "tyszerr");
  QGraphicsProxyWidget* rthis = new QGraphicsProxyWidget(parent, wFlags);
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
// QGraphicsProxyWidget_SlotProxy here
class QGraphicsProxyWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsProxyWidget_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsproxywidget.moc"

extern "C" {
  QGraphicsProxyWidget_SlotProxy* QGraphicsProxyWidget_SlotProxy_new()
  {
    return new QGraphicsProxyWidget_SlotProxy();
  }
};

// <= body block end

