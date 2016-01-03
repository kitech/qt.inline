// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qundoview.h
// dst-file: /src/widgets/qundoview.cxx
//

// header block begin =>
#include <qundoview.h>

extern "C" {

int QUndoView_Class_Size()
{
  return sizeof(QUndoView);
}

// QUndoView(class QUndoGroup *, class QWidget *)
QUndoView* dector_ZN9QUndoViewC1EP10QUndoGroupP7QWidget(QUndoGroup * group, QWidget * parent)
{
  // static_assert(sizeof(QUndoView) == 32, "tyszerr");
  QUndoView* rthis = new QUndoView(group, parent);
  return rthis;
}

// QUndoView(class QWidget *)
QUndoView* dector_ZN9QUndoViewC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QUndoView) == 32, "tyszerr");
  QUndoView* rthis = new QUndoView(parent);
  return rthis;
}

// ~QUndoView()
void dedtor_ZN9QUndoViewD0Ev(QUndoView* that)
{
  QUndoView* rthis = (QUndoView*)that;
  delete rthis;
}

// QUndoView(class QUndoStack *, class QWidget *)
QUndoView* dector_ZN9QUndoViewC1EP10QUndoStackP7QWidget(QUndoStack * stack, QWidget * parent)
{
  // static_assert(sizeof(QUndoView) == 32, "tyszerr");
  QUndoView* rthis = new QUndoView(stack, parent);
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
// QUndoView_SlotProxy here
class QUndoView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QUndoView_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qundoview.moc"

extern "C" {
  QUndoView_SlotProxy* QUndoView_SlotProxy_new()
  {
    return new QUndoView_SlotProxy();
  }
};

// <= body block end

