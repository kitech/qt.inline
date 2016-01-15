// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qpushbutton.h
// dst-file: /src/widgets/qpushbutton.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qpushbutton.h>

extern "C" {

int QPushButton_Class_Size()
{
  return sizeof(QPushButton);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qpushbutton_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QPushButton_SlotProxy here
class QPushButton_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPushButton_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qpushbutton.moc"

extern "C" {
  QPushButton_SlotProxy* QPushButton_SlotProxy_new()
  {
    return new QPushButton_SlotProxy();
  }
};

// <= body block end

