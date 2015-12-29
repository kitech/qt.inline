// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qsizegrip.h
// dst-file: /src/widgets/qsizegrip.cxx
//

// header block begin =>
#include <qsizegrip.h>

extern "C" {

int QSizeGrip_Class_Size()
{
  return sizeof(QSizeGrip);
}

// QSizeGrip(class QWidget *)
QSizeGrip* dector_ZN9QSizeGripC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QSizeGrip) == 32, "tyszerr");
  QSizeGrip* rthis = new QSizeGrip(parent);
  return rthis;
}

// ~QSizeGrip()
void dedtor_ZN9QSizeGripD0Ev(QSizeGrip* that)
{
  QSizeGrip* rthis = (QSizeGrip*)that;
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
// QSizeGrip_SlotProxy here
class QSizeGrip_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSizeGrip_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qsizegrip.moc"

extern "C" {
  QSizeGrip_SlotProxy* QSizeGrip_SlotProxy_new()
  {
    return new QSizeGrip_SlotProxy();
  }
};

// <= body block end

