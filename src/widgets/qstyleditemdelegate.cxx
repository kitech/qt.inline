// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qstyleditemdelegate.h
// dst-file: /src/widgets/qstyleditemdelegate.cxx
//

// header block begin =>
#include <qstyleditemdelegate.h>

extern "C" {

int QStyledItemDelegate_Class_Size()
{
  return sizeof(QStyledItemDelegate);
}

// ~QStyledItemDelegate()
void dedtor_ZN19QStyledItemDelegateD0Ev(QStyledItemDelegate* that)
{
  QStyledItemDelegate* rthis = (QStyledItemDelegate*)that;
  delete rthis;
}

// QStyledItemDelegate(class QObject *)
QStyledItemDelegate* dector_ZN19QStyledItemDelegateC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QStyledItemDelegate) == 32, "tyszerr");
  QStyledItemDelegate* rthis = new QStyledItemDelegate(parent);
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
// QStyledItemDelegate_SlotProxy here
class QStyledItemDelegate_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStyledItemDelegate_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qstyleditemdelegate.moc"

extern "C" {
  QStyledItemDelegate_SlotProxy* QStyledItemDelegate_SlotProxy_new()
  {
    return new QStyledItemDelegate_SlotProxy();
  }
};

// <= body block end

