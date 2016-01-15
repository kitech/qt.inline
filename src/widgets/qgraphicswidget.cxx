#include <qrect.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qgraphicswidget.h
// dst-file: /src/widgets/qgraphicswidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qgraphicswidget.h>

extern "C" {

int QGraphicsWidget_Class_Size()
{
  return sizeof(QGraphicsWidget);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qgraphicswidget_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 105, column 19>
//   // proto:  QRectF QGraphicsWidget::rect();
if (false) {
  auto f = []() {
    ((QGraphicsWidget*)0)->rect();
  };
}
// _ZNK15QGraphicsWidget4rectEv rect()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 100, column 17>
//   // proto:  void QGraphicsWidget::resize(qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsWidget*)0)->resize(arg1, arg2);
  };
}
// _ZN15QGraphicsWidget6resizeEdd resize(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicswidget.h', line 104, column 17>
//   // proto:  void QGraphicsWidget::setGeometry(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsWidget*)0)->setGeometry(arg1, arg2, arg3, arg4);
  };
}
// _ZN15QGraphicsWidget11setGeometryEdddd setGeometry(qreal, qreal, qreal, qreal)
} // <= main block end

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

