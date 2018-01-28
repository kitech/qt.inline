//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

// QGraphicsSceneEvent is pure virtual: false
//  header block end

//  main block begin

class MyQGraphicsSceneEvent : public QGraphicsSceneEvent {
public:
MyQGraphicsSceneEvent(QEvent::Type type) : QGraphicsSceneEvent(type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:67
// [-2] void QGraphicsSceneEvent(enum QEvent::Type)
extern "C"
void* C_ZN19QGraphicsSceneEventC1EN6QEvent4TypeE(QEvent::Type type) {
  (MyQGraphicsSceneEvent*)(0);
  return  new MyQGraphicsSceneEvent(type);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:68
// [-2] void ~QGraphicsSceneEvent()
extern "C"
void C_ZN19QGraphicsSceneEventD1Ev(void *this_) {
  delete (QGraphicsSceneEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:70
// [8] QWidget * widget()
extern "C"
void* C_ZNK19QGraphicsSceneEvent6widgetEv(void *this_) {
  return (void*)((QGraphicsSceneEvent*)this_)->widget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:71
// [-2] void setWidget(class QWidget *)
extern "C"
void C_ZN19QGraphicsSceneEvent9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGraphicsSceneEvent*)this_)->setWidget(widget);
}
//  main block end
