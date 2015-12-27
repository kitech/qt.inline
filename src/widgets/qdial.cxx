// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qdial.h
// dst-file: /src/widgets/qdial.cxx
//

// header block begin =>
#include <qdial.h>

extern "C" {

int QDial_Class_Size()
{
  return sizeof(QDial);
}

// ~QDial()
void dedtor_ZN5QDialD0Ev(QDial* that)
{
  QDial* rthis = (QDial*)that;
  delete rthis;
}

// QDial(class QWidget *)
QDial* dector_ZN5QDialC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QDial) == 32, "tyszerr");
  QDial* rthis = new QDial(parent);
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
// QDial_SlotProxy here
class QDial_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDial_SlotProxy():QObject(){}

};
#include "src/widgets/qdial.moc"

extern "C" {
  QDial_SlotProxy* QDial_SlotProxy_new()
  {
    return new QDial_SlotProxy();
  }
};

// <= body block end

