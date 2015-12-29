// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qerrormessage.h
// dst-file: /src/widgets/qerrormessage.cxx
//

// header block begin =>
#include <qerrormessage.h>

extern "C" {

int QErrorMessage_Class_Size()
{
  return sizeof(QErrorMessage);
}

// QErrorMessage(class QWidget *)
QErrorMessage* dector_ZN13QErrorMessageC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QErrorMessage) == 32, "tyszerr");
  QErrorMessage* rthis = new QErrorMessage(parent);
  return rthis;
}

// ~QErrorMessage()
void dedtor_ZN13QErrorMessageD0Ev(QErrorMessage* that)
{
  QErrorMessage* rthis = (QErrorMessage*)that;
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
// QErrorMessage_SlotProxy here
class QErrorMessage_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QErrorMessage_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qerrormessage.moc"

extern "C" {
  QErrorMessage_SlotProxy* QErrorMessage_SlotProxy_new()
  {
    return new QErrorMessage_SlotProxy();
  }
};

// <= body block end

