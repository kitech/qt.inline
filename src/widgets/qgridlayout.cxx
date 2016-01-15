// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qgridlayout.h
// dst-file: /src/widgets/qgridlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qgridlayout.h>

extern "C" {

int QGridLayout_Class_Size()
{
  return sizeof(QGridLayout);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qgridlayout_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 95, column 17>
//   // proto:  void QGridLayout::addWidget(QWidget * w);
if (false) {
  auto f = [](QWidget * arg1) {
    ((QGridLayout*)0)->addWidget(arg1);
  };
}
// _ZN11QGridLayout9addWidgetEP7QWidget addWidget(class QWidget *)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QGridLayout_SlotProxy here
class QGridLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGridLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgridlayout.moc"

extern "C" {
  QGridLayout_SlotProxy* QGridLayout_SlotProxy_new()
  {
    return new QGridLayout_SlotProxy();
  }
};

// <= body block end

