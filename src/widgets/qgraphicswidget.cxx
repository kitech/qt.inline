// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qgraphicswidget.h
// dst-file: /src/widgets/qgraphicswidget.cxx
//

// header block begin =>
#include <qgraphicswidget.h>

extern "C" {

int QGraphicsWidget_Class_Size()
{
  return sizeof(QGraphicsWidget);
}

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

  // proto:  QRectF QGraphicsWidget::rect();
QRectF* demth_ZNK15QGraphicsWidget4rectEv(void *that)
{
  QGraphicsWidget *cthat = (QGraphicsWidget *)that;
  auto recret = cthat->rect();
  return new QRectF(recret);
}

  // proto:  void QGraphicsWidget::resize(qreal w, qreal h);
void demth_ZN15QGraphicsWidget6resizeEdd(void *that, double w, double h)
{
  QGraphicsWidget *cthat = (QGraphicsWidget *)that;
   cthat->resize(w, h);
}

  // proto:  void QGraphicsWidget::setGeometry(qreal x, qreal y, qreal w, qreal h);
void demth_ZN15QGraphicsWidget11setGeometryEdddd(void *that, double x, double y, double w, double h)
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
// QGraphicsWidget_SlotProxy here
class QGraphicsWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsWidget_SlotProxy():QObject(){}

public slots:
  // layoutChanged()
  void slot_proxy_func__ZN15QGraphicsWidget13layoutChangedEv();
public:
  void (*slot_func__ZN15QGraphicsWidget13layoutChangedEv)(void* rsfptr) = NULL;
public slots:
  // geometryChanged()
  void slot_proxy_func__ZN15QGraphicsWidget15geometryChangedEv();
public:
  void (*slot_func__ZN15QGraphicsWidget15geometryChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicswidget.moc"

extern "C" {
  QGraphicsWidget_SlotProxy* QGraphicsWidget_SlotProxy_new()
  {
    return new QGraphicsWidget_SlotProxy();
  }
};

void QGraphicsWidget_SlotProxy::slot_proxy_func__ZN15QGraphicsWidget13layoutChangedEv() {
  if (this->slot_func__ZN15QGraphicsWidget13layoutChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsWidget13layoutChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsWidget_SlotProxy_connect__ZN15QGraphicsWidget13layoutChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsWidget13layoutChangedEv = (decltype(that->slot_func__ZN15QGraphicsWidget13layoutChangedEv))ffifptr;
  QObject::connect((QGraphicsWidget*)sender, SIGNAL(layoutChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsWidget13layoutChangedEv()));
  return that;
}
extern "C"
void QGraphicsWidget_SlotProxy_disconnect__ZN15QGraphicsWidget13layoutChangedEv(QGraphicsWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsWidget_SlotProxy::slot_proxy_func__ZN15QGraphicsWidget15geometryChangedEv() {
  if (this->slot_func__ZN15QGraphicsWidget15geometryChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsWidget15geometryChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsWidget_SlotProxy_connect__ZN15QGraphicsWidget15geometryChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsWidget15geometryChangedEv = (decltype(that->slot_func__ZN15QGraphicsWidget15geometryChangedEv))ffifptr;
  QObject::connect((QGraphicsWidget*)sender, SIGNAL(geometryChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsWidget15geometryChangedEv()));
  return that;
}
extern "C"
void QGraphicsWidget_SlotProxy_disconnect__ZN15QGraphicsWidget15geometryChangedEv(QGraphicsWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

