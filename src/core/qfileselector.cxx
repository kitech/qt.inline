// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qfileselector.h
// dst-file: /src/core/qfileselector.cxx
//

// header block begin =>
#include <qfileselector.h>

extern "C" {

int QFileSelector_Class_Size()
{
  return sizeof(QFileSelector);
}

// QFileSelector(class QObject *)
QFileSelector* dector_ZN13QFileSelectorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QFileSelector) == 32, "tyszerr");
  QFileSelector* rthis = new QFileSelector(parent);
  return rthis;
}

// ~QFileSelector()
void dedtor_ZN13QFileSelectorD0Ev(QFileSelector* that)
{
  QFileSelector* rthis = (QFileSelector*)that;
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
// QFileSelector_SlotProxy here
class QFileSelector_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFileSelector_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfileselector.moc"

extern "C" {
  QFileSelector_SlotProxy* QFileSelector_SlotProxy_new()
  {
    return new QFileSelector_SlotProxy();
  }
};

// <= body block end

