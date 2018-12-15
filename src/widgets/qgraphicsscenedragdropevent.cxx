//  header block begin

// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneDragDropEvent is pure virtual: false
// QGraphicsSceneDragDropEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneDragDropEvent_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneDragDropEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneDragDropEvent_t qt_meta_stringdata_MyQGraphicsSceneDragDropEvent = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQGraphicsSceneDragDropEvent"
  },
  "MyQGraphicsSceneDragDropEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneDragDropEvent[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQGraphicsSceneDragDropEvent : public QGraphicsSceneDragDropEvent {
public:
  virtual ~MyQGraphicsSceneDragDropEvent() {}
// void QGraphicsSceneDragDropEvent(QEvent::Type)
MyQGraphicsSceneDragDropEvent(QEvent::Type type_) : QGraphicsSceneDragDropEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:253
// [-2] void QGraphicsSceneDragDropEvent(QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN27QGraphicsSceneDragDropEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneDragDropEvent(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:254
// [-2] void ~QGraphicsSceneDragDropEvent()
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEventD2Ev(void *this_) {
  delete (QGraphicsSceneDragDropEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:256
// [16] QPointF pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QGraphicsSceneDragDropEvent3posEv(void *this_) {
  auto rv = ((QGraphicsSceneDragDropEvent*)this_)->pos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:257
// [-2] void setPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent6setPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:259
// [16] QPointF scenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QGraphicsSceneDragDropEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneDragDropEvent*)this_)->scenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:260
// [-2] void setScenePos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent11setScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:262
// [8] QPoint screenPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QGraphicsSceneDragDropEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneDragDropEvent*)this_)->screenPos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:263
// [-2] void setScreenPos(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent12setScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:265
// [4] Qt::MouseButtons buttons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK27QGraphicsSceneDragDropEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QGraphicsSceneDragDropEvent*)this_)->buttons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:266
// [-2] void setButtons(Qt::MouseButtons)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsSceneDragDropEvent*)this_)->setButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:268
// [4] Qt::KeyboardModifiers modifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK27QGraphicsSceneDragDropEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QGraphicsSceneDragDropEvent*)this_)->modifiers();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:269
// [-2] void setModifiers(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneDragDropEvent*)this_)->setModifiers(modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:271
// [4] Qt::DropActions possibleActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK27QGraphicsSceneDragDropEvent15possibleActionsEv(void *this_) {
  return (Qt::DropActions)((QGraphicsSceneDragDropEvent*)this_)->possibleActions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:272
// [-2] void setPossibleActions(Qt::DropActions)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent18setPossibleActionsE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> actions) {
  ((QGraphicsSceneDragDropEvent*)this_)->setPossibleActions(actions);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:274
// [4] Qt::DropAction proposedAction()
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZNK27QGraphicsSceneDragDropEvent14proposedActionEv(void *this_) {
  return (Qt::DropAction)((QGraphicsSceneDragDropEvent*)this_)->proposedAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:275
// [-2] void setProposedAction(Qt::DropAction)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent17setProposedActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QGraphicsSceneDragDropEvent*)this_)->setProposedAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:276
// [-2] void acceptProposedAction()
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent20acceptProposedActionEv(void *this_) {
  ((QGraphicsSceneDragDropEvent*)this_)->acceptProposedAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:278
// [4] Qt::DropAction dropAction()
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZNK27QGraphicsSceneDragDropEvent10dropActionEv(void *this_) {
  return (Qt::DropAction)((QGraphicsSceneDragDropEvent*)this_)->dropAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:279
// [-2] void setDropAction(Qt::DropAction)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent13setDropActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QGraphicsSceneDragDropEvent*)this_)->setDropAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:281
// [8] QWidget * source()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QGraphicsSceneDragDropEvent6sourceEv(void *this_) {
  return (void*)((QGraphicsSceneDragDropEvent*)this_)->source();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:282
// [-2] void setSource(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent9setSourceEP7QWidget(void *this_, QWidget * source) {
  ((QGraphicsSceneDragDropEvent*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:284
// [8] const QMimeData * mimeData()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QGraphicsSceneDragDropEvent8mimeDataEv(void *this_) {
  return (void*)((QGraphicsSceneDragDropEvent*)this_)->mimeData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:285
// [-2] void setMimeData(const QMimeData *)
extern "C" Q_DECL_EXPORT
void C_ZN27QGraphicsSceneDragDropEvent11setMimeDataEPK9QMimeData(void *this_, const QMimeData * data) {
  ((QGraphicsSceneDragDropEvent*)this_)->setMimeData(data);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
