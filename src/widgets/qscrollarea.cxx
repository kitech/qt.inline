// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qscrollarea.h
// dst-file: /src/widgets/qscrollarea.cxx
//

// header block begin =>
#include <qscrollarea.h>

extern "C" {

int QScrollArea_Class_Size()
{
  return sizeof(QScrollArea);
}

// QScrollArea(class QWidget *)
QScrollArea* dector_ZN11QScrollAreaC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QScrollArea) == 32, "tyszerr");
  QScrollArea* rthis = new QScrollArea(parent);
  return rthis;
}

// ~QScrollArea()
void dedtor_ZN11QScrollAreaD0Ev(QScrollArea* that)
{
  QScrollArea* rthis = (QScrollArea*)that;
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
// QScrollArea_SlotProxy here
class QScrollArea_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QScrollArea_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qscrollarea.moc"

extern "C" {
  QScrollArea_SlotProxy* QScrollArea_SlotProxy_new()
  {
    return new QScrollArea_SlotProxy();
  }
};

// <= body block end

