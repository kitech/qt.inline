// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qtableview.h
// dst-file: /src/widgets/qtableview.cxx
//

// header block begin =>
#include <qtableview.h>

extern "C" {

int QTableView_Class_Size()
{
  return sizeof(QTableView);
}

// ~QTableView()
void dedtor_ZN10QTableViewD0Ev(QTableView* that)
{
  QTableView* rthis = (QTableView*)that;
  delete rthis;
}

// QTableView(class QWidget *)
QTableView* dector_ZN10QTableViewC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTableView) == 32, "tyszerr");
  QTableView* rthis = new QTableView(parent);
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
// QTableView_SlotProxy here
class QTableView_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QTableView_SlotProxy():QObject(){}

};
#include "src/widgets/qtableview.moc"

extern "C" {
  QTableView_SlotProxy* QTableView_SlotProxy_new()
  {
    return new QTableView_SlotProxy();
  }
};

// <= body block end

