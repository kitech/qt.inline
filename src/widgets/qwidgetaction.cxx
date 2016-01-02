// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qwidgetaction.h
// dst-file: /src/widgets/qwidgetaction.cxx
//

// header block begin =>
#include <qwidgetaction.h>

extern "C" {

int QWidgetAction_Class_Size()
{
  return sizeof(QWidgetAction);
}

// ~QWidgetAction()
void dedtor_ZN13QWidgetActionD0Ev(QWidgetAction* that)
{
  QWidgetAction* rthis = (QWidgetAction*)that;
  delete rthis;
}

// QWidgetAction(class QObject *)
QWidgetAction* dector_ZN13QWidgetActionC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QWidgetAction) == 32, "tyszerr");
  QWidgetAction* rthis = new QWidgetAction(parent);
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
// QWidgetAction_SlotProxy here
class QWidgetAction_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QWidgetAction_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qwidgetaction.moc"

extern "C" {
  QWidgetAction_SlotProxy* QWidgetAction_SlotProxy_new()
  {
    return new QWidgetAction_SlotProxy();
  }
};

// <= body block end

