// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qformlayout.h
// dst-file: /src/widgets/qformlayout.cxx
//

// header block begin =>
#include <qformlayout.h>

extern "C" {

int QFormLayout_Class_Size()
{
  return sizeof(QFormLayout);
}

// QFormLayout(class QWidget *)
QFormLayout* dector_ZN11QFormLayoutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QFormLayout) == 32, "tyszerr");
  QFormLayout* rthis = new QFormLayout(parent);
  return rthis;
}

// ~QFormLayout()
void dedtor_ZN11QFormLayoutD0Ev(QFormLayout* that)
{
  QFormLayout* rthis = (QFormLayout*)that;
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
// QFormLayout_SlotProxy here
class QFormLayout_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QFormLayout_SlotProxy():QObject(){}

};
#include "src/widgets/qformlayout.moc"

extern "C" {
  QFormLayout_SlotProxy* QFormLayout_SlotProxy_new()
  {
    return new QFormLayout_SlotProxy();
  }
};

// <= body block end

