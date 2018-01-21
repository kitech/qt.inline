//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:297
// void QGraphicsSceneResizeEvent()
extern "C"
void* C_ZN25QGraphicsSceneResizeEventC1Ev() {
  return new QGraphicsSceneResizeEvent();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:298
// void ~QGraphicsSceneResizeEvent()
extern "C"
void C_ZN25QGraphicsSceneResizeEventD1Ev(void *this_) {
  delete (QGraphicsSceneResizeEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:300
// QSizeF oldSize()
extern "C"
void C_ZNK25QGraphicsSceneResizeEvent7oldSizeEv(void *this_) {
  /*return*/ ((QGraphicsSceneResizeEvent*)this_)->oldSize();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:301
// void setOldSize(const class QSizeF &)
extern "C"
void C_ZN25QGraphicsSceneResizeEvent10setOldSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QGraphicsSceneResizeEvent*)this_)->setOldSize(size);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:303
// QSizeF newSize()
extern "C"
void C_ZNK25QGraphicsSceneResizeEvent7newSizeEv(void *this_) {
  /*return*/ ((QGraphicsSceneResizeEvent*)this_)->newSize();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:304
// void setNewSize(const class QSizeF &)
extern "C"
void C_ZN25QGraphicsSceneResizeEvent10setNewSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QGraphicsSceneResizeEvent*)this_)->setNewSize(size);
}
//  main block end
