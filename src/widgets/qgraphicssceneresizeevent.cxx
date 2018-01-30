//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

// QGraphicsSceneResizeEvent is pure virtual: false
// QGraphicsSceneResizeEvent has virtual projected: false
//  header block end

//  main block begin

class MyQGraphicsSceneResizeEvent : public QGraphicsSceneResizeEvent {
public:
  virtual ~MyQGraphicsSceneResizeEvent() {}
// void QGraphicsSceneResizeEvent()
MyQGraphicsSceneResizeEvent() : QGraphicsSceneResizeEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:297
// [-2] void QGraphicsSceneResizeEvent()
extern "C"
void* C_ZN25QGraphicsSceneResizeEventC2Ev() {
  return  new QGraphicsSceneResizeEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:298
// [-2] void ~QGraphicsSceneResizeEvent()
extern "C"
void C_ZN25QGraphicsSceneResizeEventD2Ev(void *this_) {
  delete (QGraphicsSceneResizeEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:300
// [16] QSizeF oldSize()
extern "C"
void* C_ZNK25QGraphicsSceneResizeEvent7oldSizeEv(void *this_) {
  auto rv = ((QGraphicsSceneResizeEvent*)this_)->oldSize();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:301
// [-2] void setOldSize(const class QSizeF &)
extern "C"
void C_ZN25QGraphicsSceneResizeEvent10setOldSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QGraphicsSceneResizeEvent*)this_)->setOldSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:303
// [16] QSizeF newSize()
extern "C"
void* C_ZNK25QGraphicsSceneResizeEvent7newSizeEv(void *this_) {
  auto rv = ((QGraphicsSceneResizeEvent*)this_)->newSize();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:304
// [-2] void setNewSize(const class QSizeF &)
extern "C"
void C_ZN25QGraphicsSceneResizeEvent10setNewSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QGraphicsSceneResizeEvent*)this_)->setNewSize(size);
}
//  main block end
