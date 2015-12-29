// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qscrollbar.h
// dst-file: /src/widgets/qscrollbar.cxx
//

// header block begin =>
#include <qscrollbar.h>

extern "C" {

int QScrollBar_Class_Size()
{
  return sizeof(QScrollBar);
}

// QScrollBar(class QWidget *)
QScrollBar* dector_ZN10QScrollBarC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QScrollBar) == 32, "tyszerr");
  QScrollBar* rthis = new QScrollBar(parent);
  return rthis;
}

// ~QScrollBar()
void dedtor_ZN10QScrollBarD0Ev(QScrollBar* that)
{
  QScrollBar* rthis = (QScrollBar*)that;
  delete rthis;
}

// QScrollBar(Qt::Orientation, class QWidget *)
QScrollBar* dector_ZN10QScrollBarC1EN2Qt11OrientationEP7QWidget(Qt::Orientation arg1, QWidget * parent)
{
  // static_assert(sizeof(QScrollBar) == 32, "tyszerr");
  QScrollBar* rthis = new QScrollBar(arg1, parent);
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
// QScrollBar_SlotProxy here
class QScrollBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QScrollBar_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qscrollbar.moc"

extern "C" {
  QScrollBar_SlotProxy* QScrollBar_SlotProxy_new()
  {
    return new QScrollBar_SlotProxy();
  }
};

// <= body block end

