// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qfocusframe.h
// dst-file: /src/widgets/qfocusframe.cxx
//

// header block begin =>
#include <qfocusframe.h>

extern "C" {

int QFocusFrame_Class_Size()
{
  return sizeof(QFocusFrame);
}

// ~QFocusFrame()
void dedtor_ZN11QFocusFrameD0Ev(QFocusFrame* that)
{
  QFocusFrame* rthis = (QFocusFrame*)that;
  delete rthis;
}

// QFocusFrame(class QWidget *)
QFocusFrame* dector_ZN11QFocusFrameC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QFocusFrame) == 32, "tyszerr");
  QFocusFrame* rthis = new QFocusFrame(parent);
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
// QFocusFrame_SlotProxy here
class QFocusFrame_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFocusFrame_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qfocusframe.moc"

extern "C" {
  QFocusFrame_SlotProxy* QFocusFrame_SlotProxy_new()
  {
    return new QFocusFrame_SlotProxy();
  }
};

// <= body block end

