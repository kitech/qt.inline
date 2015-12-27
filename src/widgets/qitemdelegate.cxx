// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qitemdelegate.h
// dst-file: /src/widgets/qitemdelegate.cxx
//

// header block begin =>
#include <qitemdelegate.h>

extern "C" {

int QItemDelegate_Class_Size()
{
  return sizeof(QItemDelegate);
}

// QItemDelegate(class QObject *)
QItemDelegate* dector_ZN13QItemDelegateC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QItemDelegate) == 32, "tyszerr");
  QItemDelegate* rthis = new QItemDelegate(parent);
  return rthis;
}

// ~QItemDelegate()
void dedtor_ZN13QItemDelegateD0Ev(QItemDelegate* that)
{
  QItemDelegate* rthis = (QItemDelegate*)that;
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
// QItemDelegate_SlotProxy here
class QItemDelegate_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QItemDelegate_SlotProxy():QObject(){}

};
#include "src/widgets/qitemdelegate.moc"

extern "C" {
  QItemDelegate_SlotProxy* QItemDelegate_SlotProxy_new()
  {
    return new QItemDelegate_SlotProxy();
  }
};

// <= body block end

