//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:67
// void QGraphicsSceneEvent(enum QEvent::Type)
extern "C"
void* C_ZN19QGraphicsSceneEventC1EN6QEvent4TypeE(QEvent::Type type) {
  return new QGraphicsSceneEvent(type);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:68
// void ~QGraphicsSceneEvent()
extern "C"
void C_ZN19QGraphicsSceneEventD1Ev(void *this_) {
  delete (QGraphicsSceneEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:70
// QWidget * widget()
extern "C"
void C_ZNK19QGraphicsSceneEvent6widgetEv(void *this_) {
  /*return*/ ((QGraphicsSceneEvent*)this_)->widget();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:71
// void setWidget(class QWidget *)
extern "C"
void C_ZN19QGraphicsSceneEvent9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGraphicsSceneEvent*)this_)->setWidget(widget);
}
//  main block end
