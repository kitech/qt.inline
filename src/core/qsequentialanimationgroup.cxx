// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qsequentialanimationgroup.h
// dst-file: /src/core/qsequentialanimationgroup.cxx
//

// header block begin =>
#include <qsequentialanimationgroup.h>

extern "C" {

int QSequentialAnimationGroup_Class_Size()
{
  return sizeof(QSequentialAnimationGroup);
}

// QSequentialAnimationGroup(class QObject *)
QSequentialAnimationGroup* dector_ZN25QSequentialAnimationGroupC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSequentialAnimationGroup) == 32, "tyszerr");
  QSequentialAnimationGroup* rthis = new QSequentialAnimationGroup(parent);
  return rthis;
}

// ~QSequentialAnimationGroup()
void dedtor_ZN25QSequentialAnimationGroupD0Ev(QSequentialAnimationGroup* that)
{
  QSequentialAnimationGroup* rthis = (QSequentialAnimationGroup*)that;
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
// QSequentialAnimationGroup_SlotProxy here
class QSequentialAnimationGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSequentialAnimationGroup_SlotProxy():QObject(){}

public slots:
  // currentAnimationChanged(class QAbstractAnimation *)
  void slot_proxy_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QAbstractAnimation * arg0);
public:
  void (*slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation)(void* rsfptr, QAbstractAnimation * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qsequentialanimationgroup.moc"

extern "C" {
  QSequentialAnimationGroup_SlotProxy* QSequentialAnimationGroup_SlotProxy_new()
  {
    return new QSequentialAnimationGroup_SlotProxy();
  }
};

void QSequentialAnimationGroup_SlotProxy::slot_proxy_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QAbstractAnimation * arg0) {
  if (this->slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation != NULL) {
    // do smth...
    this->slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(this->rsfptr, arg0);
  }
}
extern "C"
void* QSequentialAnimationGroup_SlotProxy_connect__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSequentialAnimationGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation = (decltype(that->slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation))ffifptr;
  QObject::connect((QSequentialAnimationGroup*)sender, SIGNAL(currentAnimationChanged(class QAbstractAnimation *)), that, SLOT(slot_proxy_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QAbstractAnimation * arg0)));
  return that;
}
extern "C"
void QSequentialAnimationGroup_SlotProxy_disconnect__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QSequentialAnimationGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

