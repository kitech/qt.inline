// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qgraphicssceneevent.h
// dst-file: /src/widgets/qgraphicssceneevent.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicssceneevent.h>


#include <qpoint.h>
#include <qnamespace.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qgraphicssceneevent_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsSceneMoveEvent_Class_Size()
{
  return sizeof(QGraphicsSceneMoveEvent);
}

extern "C"
int QGraphicsSceneContextMenuEvent_Class_Size()
{
  return sizeof(QGraphicsSceneContextMenuEvent);
}

extern "C"
int QGraphicsSceneMouseEvent_Class_Size()
{
  return sizeof(QGraphicsSceneMouseEvent);
}

extern "C"
int QGraphicsSceneHelpEvent_Class_Size()
{
  return sizeof(QGraphicsSceneHelpEvent);
}

extern "C"
int QGraphicsSceneHoverEvent_Class_Size()
{
  return sizeof(QGraphicsSceneHoverEvent);
}

extern "C"
int QGraphicsSceneWheelEvent_Class_Size()
{
  return sizeof(QGraphicsSceneWheelEvent);
}

extern "C"
int QGraphicsSceneDragDropEvent_Class_Size()
{
  return sizeof(QGraphicsSceneDragDropEvent);
}

extern "C"
int QGraphicsSceneEvent_Class_Size()
{
  return sizeof(QGraphicsSceneEvent);
}

extern "C"
int QGraphicsSceneResizeEvent_Class_Size()
{
  return sizeof(QGraphicsSceneResizeEvent);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 311, column 13>
//   // proto:  QPointF QGraphicsSceneMoveEvent::newPos();
// _ZNK23QGraphicsSceneMoveEvent6newPosEv newPos()
extern "C"
QPointF*
C_ZNK23QGraphicsSceneMoveEvent6newPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMoveEvent*)qthis)->newPos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 308, column 13>
//   // proto:  QPointF QGraphicsSceneMoveEvent::oldPos();
// _ZNK23QGraphicsSceneMoveEvent6oldPosEv oldPos()
extern "C"
QPointF*
C_ZNK23QGraphicsSceneMoveEvent6oldPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMoveEvent*)qthis)->oldPos();
  return new QPointF(ret); // 5
}
//   // proto:  void QGraphicsSceneMoveEvent::~QGraphicsSceneMoveEvent();
extern "C"
void C_ZN23QGraphicsSceneMoveEventD2Ev(void *qthis) {
  delete (QGraphicsSceneMoveEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 312, column 10>
//   // proto:  void QGraphicsSceneMoveEvent::setNewPos(const QPointF & pos);
// _ZN23QGraphicsSceneMoveEvent9setNewPosERK7QPointF setNewPos(const class QPointF &)
extern "C"
void
C_ZN23QGraphicsSceneMoveEvent9setNewPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneMoveEvent*)qthis)->setNewPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 305, column 5>
//   // proto:  void QGraphicsSceneMoveEvent::QGraphicsSceneMoveEvent();
extern "C"
QGraphicsSceneMoveEvent*
C_ZN23QGraphicsSceneMoveEventC2Ev() {
  auto ret = new QGraphicsSceneMoveEvent();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 309, column 10>
//   // proto:  void QGraphicsSceneMoveEvent::setOldPos(const QPointF & pos);
// _ZN23QGraphicsSceneMoveEvent9setOldPosERK7QPointF setOldPos(const class QPointF &)
extern "C"
void
C_ZN23QGraphicsSceneMoveEvent9setOldPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneMoveEvent*)qthis)->setOldPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 181, column 12>
//   // proto:  QGraphicsSceneContextMenuEvent::Reason QGraphicsSceneContextMenuEvent::reason();
// _ZNK30QGraphicsSceneContextMenuEvent6reasonEv reason()
extern "C"
QGraphicsSceneContextMenuEvent::Reason
C_ZNK30QGraphicsSceneContextMenuEvent6reasonEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneContextMenuEvent*)qthis)->reason();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 172, column 13>
//   // proto:  QPointF QGraphicsSceneContextMenuEvent::scenePos();
// _ZNK30QGraphicsSceneContextMenuEvent8scenePosEv scenePos()
extern "C"
QPointF*
C_ZNK30QGraphicsSceneContextMenuEvent8scenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneContextMenuEvent*)qthis)->scenePos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 178, column 27>
//   // proto:  Qt::KeyboardModifiers QGraphicsSceneContextMenuEvent::modifiers();
// _ZNK30QGraphicsSceneContextMenuEvent9modifiersEv modifiers()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZNK30QGraphicsSceneContextMenuEvent9modifiersEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneContextMenuEvent*)qthis)->modifiers();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
//   // proto:  void QGraphicsSceneContextMenuEvent::~QGraphicsSceneContextMenuEvent();
extern "C"
void C_ZN30QGraphicsSceneContextMenuEventD2Ev(void *qthis) {
  delete (QGraphicsSceneContextMenuEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 179, column 10>
//   // proto:  void QGraphicsSceneContextMenuEvent::setModifiers(Qt::KeyboardModifiers modifiers);
// _ZN30QGraphicsSceneContextMenuEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE setModifiers(Qt::KeyboardModifiers)
extern "C"
void
C_ZN30QGraphicsSceneContextMenuEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *qthis,
Qt::KeyboardModifiers* arg1) {
  ((QGraphicsSceneContextMenuEvent*)qthis)->setModifiers(*((Qt::KeyboardModifiers*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 182, column 10>
//   // proto:  void QGraphicsSceneContextMenuEvent::setReason(QGraphicsSceneContextMenuEvent::Reason reason);
// _ZN30QGraphicsSceneContextMenuEvent9setReasonENS_6ReasonE setReason(enum QGraphicsSceneContextMenuEvent::Reason)
extern "C"
void
C_ZN30QGraphicsSceneContextMenuEvent9setReasonENS_6ReasonE(void *qthis,
QGraphicsSceneContextMenuEvent::Reason arg1) {
  ((QGraphicsSceneContextMenuEvent*)qthis)->setReason(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 169, column 13>
//   // proto:  QPointF QGraphicsSceneContextMenuEvent::pos();
// _ZNK30QGraphicsSceneContextMenuEvent3posEv pos()
extern "C"
QPointF*
C_ZNK30QGraphicsSceneContextMenuEvent3posEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneContextMenuEvent*)qthis)->pos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 166, column 14>
//   // proto:  void QGraphicsSceneContextMenuEvent::QGraphicsSceneContextMenuEvent(QEvent::Type type);
extern "C"
QGraphicsSceneContextMenuEvent*
C_ZN30QGraphicsSceneContextMenuEventC2EN6QEvent4TypeE(QEvent::Type arg1) {
  auto ret = new QGraphicsSceneContextMenuEvent(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 176, column 10>
//   // proto:  void QGraphicsSceneContextMenuEvent::setScreenPos(const QPoint & pos);
// _ZN30QGraphicsSceneContextMenuEvent12setScreenPosERK6QPoint setScreenPos(const class QPoint &)
extern "C"
void
C_ZN30QGraphicsSceneContextMenuEvent12setScreenPosERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QGraphicsSceneContextMenuEvent*)qthis)->setScreenPos(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 170, column 10>
//   // proto:  void QGraphicsSceneContextMenuEvent::setPos(const QPointF & pos);
// _ZN30QGraphicsSceneContextMenuEvent6setPosERK7QPointF setPos(const class QPointF &)
extern "C"
void
C_ZN30QGraphicsSceneContextMenuEvent6setPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneContextMenuEvent*)qthis)->setPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 175, column 12>
//   // proto:  QPoint QGraphicsSceneContextMenuEvent::screenPos();
// _ZNK30QGraphicsSceneContextMenuEvent9screenPosEv screenPos()
extern "C"
QPoint*
C_ZNK30QGraphicsSceneContextMenuEvent9screenPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneContextMenuEvent*)qthis)->screenPos();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 173, column 10>
//   // proto:  void QGraphicsSceneContextMenuEvent::setScenePos(const QPointF & pos);
// _ZN30QGraphicsSceneContextMenuEvent11setScenePosERK7QPointF setScenePos(const class QPointF &)
extern "C"
void
C_ZN30QGraphicsSceneContextMenuEvent11setScenePosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneContextMenuEvent*)qthis)->setScenePos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 120, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setFlags(Qt::MouseEventFlags );
// _ZN24QGraphicsSceneMouseEvent8setFlagsE6QFlagsIN2Qt14MouseEventFlagEE setFlags(Qt::MouseEventFlags)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent8setFlagsE6QFlagsIN2Qt14MouseEventFlagEE(void *qthis,
Qt::MouseEventFlags* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setFlags(*((Qt::MouseEventFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 86, column 12>
//   // proto:  QPoint QGraphicsSceneMouseEvent::screenPos();
// _ZNK24QGraphicsSceneMouseEvent9screenPosEv screenPos()
extern "C"
QPoint*
C_ZNK24QGraphicsSceneMouseEvent9screenPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->screenPos();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 116, column 26>
//   // proto:  Qt::MouseEventSource QGraphicsSceneMouseEvent::source();
// _ZNK24QGraphicsSceneMouseEvent6sourceEv source()
extern "C"
Qt::MouseEventSource
C_ZNK24QGraphicsSceneMouseEvent6sourceEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->source();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 77, column 14>
//   // proto:  void QGraphicsSceneMouseEvent::QGraphicsSceneMouseEvent(QEvent::Type type);
extern "C"
QGraphicsSceneMouseEvent*
C_ZN24QGraphicsSceneMouseEventC2EN6QEvent4TypeE(QEvent::Type arg1) {
  auto ret = new QGraphicsSceneMouseEvent(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 110, column 21>
//   // proto:  Qt::MouseButton QGraphicsSceneMouseEvent::button();
// _ZNK24QGraphicsSceneMouseEvent6buttonEv button()
extern "C"
Qt::MouseButton
C_ZNK24QGraphicsSceneMouseEvent6buttonEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->button();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 101, column 13>
//   // proto:  QPointF QGraphicsSceneMouseEvent::lastScenePos();
// _ZNK24QGraphicsSceneMouseEvent12lastScenePosEv lastScenePos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneMouseEvent12lastScenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->lastScenePos();
  return new QPointF(ret); // 5
}
//   // proto:  void QGraphicsSceneMouseEvent::~QGraphicsSceneMouseEvent();
extern "C"
void C_ZN24QGraphicsSceneMouseEventD2Ev(void *qthis) {
  delete (QGraphicsSceneMouseEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 95, column 12>
//   // proto:  QPoint QGraphicsSceneMouseEvent::buttonDownScreenPos(Qt::MouseButton button);
// _ZNK24QGraphicsSceneMouseEvent19buttonDownScreenPosEN2Qt11MouseButtonE buttonDownScreenPos(Qt::MouseButton)
extern "C"
QPoint*
C_ZNK24QGraphicsSceneMouseEvent19buttonDownScreenPosEN2Qt11MouseButtonE(void *qthis,
Qt::MouseButton* arg1) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->buttonDownScreenPos(*((Qt::MouseButton*)arg1));
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 80, column 13>
//   // proto:  QPointF QGraphicsSceneMouseEvent::pos();
// _ZNK24QGraphicsSceneMouseEvent3posEv pos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneMouseEvent3posEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->pos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 119, column 25>
//   // proto:  Qt::MouseEventFlags QGraphicsSceneMouseEvent::flags();
// _ZNK24QGraphicsSceneMouseEvent5flagsEv flags()
extern "C"
QFlags<Qt::MouseEventFlag>*
C_ZNK24QGraphicsSceneMouseEvent5flagsEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->flags();
  return new QFlags<Qt::MouseEventFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 108, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setButtons(Qt::MouseButtons buttons);
// _ZN24QGraphicsSceneMouseEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE setButtons(Qt::MouseButtons)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *qthis,
Qt::MouseButtons* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setButtons(*((Qt::MouseButtons*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 107, column 22>
//   // proto:  Qt::MouseButtons QGraphicsSceneMouseEvent::buttons();
// _ZNK24QGraphicsSceneMouseEvent7buttonsEv buttons()
extern "C"
QFlags<Qt::MouseButton>*
C_ZNK24QGraphicsSceneMouseEvent7buttonsEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->buttons();
  return new QFlags<Qt::MouseButton>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 93, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setButtonDownScenePos(Qt::MouseButton button, const QPointF & pos);
// _ZN24QGraphicsSceneMouseEvent21setButtonDownScenePosEN2Qt11MouseButtonERK7QPointF setButtonDownScenePos(Qt::MouseButton, const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent21setButtonDownScenePosEN2Qt11MouseButtonERK7QPointF(void *qthis,
Qt::MouseButton* arg1,
const QPointF* arg2) {
  ((QGraphicsSceneMouseEvent*)qthis)->setButtonDownScenePos(*((Qt::MouseButton*)arg1),
*((const QPointF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 99, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setLastPos(const QPointF & pos);
// _ZN24QGraphicsSceneMouseEvent10setLastPosERK7QPointF setLastPos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent10setLastPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setLastPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 102, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setLastScenePos(const QPointF & pos);
// _ZN24QGraphicsSceneMouseEvent15setLastScenePosERK7QPointF setLastScenePos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent15setLastScenePosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setLastScenePos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 104, column 12>
//   // proto:  QPoint QGraphicsSceneMouseEvent::lastScreenPos();
// _ZNK24QGraphicsSceneMouseEvent13lastScreenPosEv lastScreenPos()
extern "C"
QPoint*
C_ZNK24QGraphicsSceneMouseEvent13lastScreenPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->lastScreenPos();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 114, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setModifiers(Qt::KeyboardModifiers modifiers);
// _ZN24QGraphicsSceneMouseEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE setModifiers(Qt::KeyboardModifiers)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *qthis,
Qt::KeyboardModifiers* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setModifiers(*((Qt::KeyboardModifiers*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 87, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setScreenPos(const QPoint & pos);
// _ZN24QGraphicsSceneMouseEvent12setScreenPosERK6QPoint setScreenPos(const class QPoint &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent12setScreenPosERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setScreenPos(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 89, column 13>
//   // proto:  QPointF QGraphicsSceneMouseEvent::buttonDownPos(Qt::MouseButton button);
// _ZNK24QGraphicsSceneMouseEvent13buttonDownPosEN2Qt11MouseButtonE buttonDownPos(Qt::MouseButton)
extern "C"
QPointF*
C_ZNK24QGraphicsSceneMouseEvent13buttonDownPosEN2Qt11MouseButtonE(void *qthis,
Qt::MouseButton* arg1) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->buttonDownPos(*((Qt::MouseButton*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 105, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setLastScreenPos(const QPoint & pos);
// _ZN24QGraphicsSceneMouseEvent16setLastScreenPosERK6QPoint setLastScreenPos(const class QPoint &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent16setLastScreenPosERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setLastScreenPos(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 96, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setButtonDownScreenPos(Qt::MouseButton button, const QPoint & pos);
// _ZN24QGraphicsSceneMouseEvent22setButtonDownScreenPosEN2Qt11MouseButtonERK6QPoint setButtonDownScreenPos(Qt::MouseButton, const class QPoint &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent22setButtonDownScreenPosEN2Qt11MouseButtonERK6QPoint(void *qthis,
Qt::MouseButton* arg1,
const QPoint* arg2) {
  ((QGraphicsSceneMouseEvent*)qthis)->setButtonDownScreenPos(*((Qt::MouseButton*)arg1),
*((const QPoint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 90, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setButtonDownPos(Qt::MouseButton button, const QPointF & pos);
// _ZN24QGraphicsSceneMouseEvent16setButtonDownPosEN2Qt11MouseButtonERK7QPointF setButtonDownPos(Qt::MouseButton, const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent16setButtonDownPosEN2Qt11MouseButtonERK7QPointF(void *qthis,
Qt::MouseButton* arg1,
const QPointF* arg2) {
  ((QGraphicsSceneMouseEvent*)qthis)->setButtonDownPos(*((Qt::MouseButton*)arg1),
*((const QPointF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 92, column 13>
//   // proto:  QPointF QGraphicsSceneMouseEvent::buttonDownScenePos(Qt::MouseButton button);
// _ZNK24QGraphicsSceneMouseEvent18buttonDownScenePosEN2Qt11MouseButtonE buttonDownScenePos(Qt::MouseButton)
extern "C"
QPointF*
C_ZNK24QGraphicsSceneMouseEvent18buttonDownScenePosEN2Qt11MouseButtonE(void *qthis,
Qt::MouseButton* arg1) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->buttonDownScenePos(*((Qt::MouseButton*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 111, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setButton(Qt::MouseButton button);
// _ZN24QGraphicsSceneMouseEvent9setButtonEN2Qt11MouseButtonE setButton(Qt::MouseButton)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent9setButtonEN2Qt11MouseButtonE(void *qthis,
Qt::MouseButton* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setButton(*((Qt::MouseButton*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 84, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setScenePos(const QPointF & pos);
// _ZN24QGraphicsSceneMouseEvent11setScenePosERK7QPointF setScenePos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent11setScenePosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setScenePos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 113, column 27>
//   // proto:  Qt::KeyboardModifiers QGraphicsSceneMouseEvent::modifiers();
// _ZNK24QGraphicsSceneMouseEvent9modifiersEv modifiers()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZNK24QGraphicsSceneMouseEvent9modifiersEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->modifiers();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 117, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setSource(Qt::MouseEventSource source);
// _ZN24QGraphicsSceneMouseEvent9setSourceEN2Qt16MouseEventSourceE setSource(Qt::MouseEventSource)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent9setSourceEN2Qt16MouseEventSourceE(void *qthis,
Qt::MouseEventSource* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setSource(*((Qt::MouseEventSource*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 98, column 13>
//   // proto:  QPointF QGraphicsSceneMouseEvent::lastPos();
// _ZNK24QGraphicsSceneMouseEvent7lastPosEv lastPos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneMouseEvent7lastPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->lastPos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 83, column 13>
//   // proto:  QPointF QGraphicsSceneMouseEvent::scenePos();
// _ZNK24QGraphicsSceneMouseEvent8scenePosEv scenePos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneMouseEvent8scenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneMouseEvent*)qthis)->scenePos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 81, column 10>
//   // proto:  void QGraphicsSceneMouseEvent::setPos(const QPointF & pos);
// _ZN24QGraphicsSceneMouseEvent6setPosERK7QPointF setPos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneMouseEvent6setPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneMouseEvent*)qthis)->setPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 230, column 10>
//   // proto:  void QGraphicsSceneHelpEvent::setScenePos(const QPointF & pos);
// _ZN23QGraphicsSceneHelpEvent11setScenePosERK7QPointF setScenePos(const class QPointF &)
extern "C"
void
C_ZN23QGraphicsSceneHelpEvent11setScenePosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneHelpEvent*)qthis)->setScenePos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 232, column 12>
//   // proto:  QPoint QGraphicsSceneHelpEvent::screenPos();
// _ZNK23QGraphicsSceneHelpEvent9screenPosEv screenPos()
extern "C"
QPoint*
C_ZNK23QGraphicsSceneHelpEvent9screenPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHelpEvent*)qthis)->screenPos();
  return new QPoint(ret); // 5
}
//   // proto:  void QGraphicsSceneHelpEvent::~QGraphicsSceneHelpEvent();
extern "C"
void C_ZN23QGraphicsSceneHelpEventD2Ev(void *qthis) {
  delete (QGraphicsSceneHelpEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 233, column 10>
//   // proto:  void QGraphicsSceneHelpEvent::setScreenPos(const QPoint & pos);
// _ZN23QGraphicsSceneHelpEvent12setScreenPosERK6QPoint setScreenPos(const class QPoint &)
extern "C"
void
C_ZN23QGraphicsSceneHelpEvent12setScreenPosERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QGraphicsSceneHelpEvent*)qthis)->setScreenPos(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 226, column 14>
//   // proto:  void QGraphicsSceneHelpEvent::QGraphicsSceneHelpEvent(QEvent::Type type);
extern "C"
QGraphicsSceneHelpEvent*
C_ZN23QGraphicsSceneHelpEventC2EN6QEvent4TypeE(QEvent::Type arg1) {
  auto ret = new QGraphicsSceneHelpEvent(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 229, column 13>
//   // proto:  QPointF QGraphicsSceneHelpEvent::scenePos();
// _ZNK23QGraphicsSceneHelpEvent8scenePosEv scenePos()
extern "C"
QPointF*
C_ZNK23QGraphicsSceneHelpEvent8scenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHelpEvent*)qthis)->scenePos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 199, column 13>
//   // proto:  QPointF QGraphicsSceneHoverEvent::scenePos();
// _ZNK24QGraphicsSceneHoverEvent8scenePosEv scenePos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneHoverEvent8scenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHoverEvent*)qthis)->scenePos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 206, column 10>
//   // proto:  void QGraphicsSceneHoverEvent::setLastPos(const QPointF & pos);
// _ZN24QGraphicsSceneHoverEvent10setLastPosERK7QPointF setLastPos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneHoverEvent10setLastPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneHoverEvent*)qthis)->setLastPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 214, column 27>
//   // proto:  Qt::KeyboardModifiers QGraphicsSceneHoverEvent::modifiers();
// _ZNK24QGraphicsSceneHoverEvent9modifiersEv modifiers()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZNK24QGraphicsSceneHoverEvent9modifiersEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHoverEvent*)qthis)->modifiers();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 205, column 13>
//   // proto:  QPointF QGraphicsSceneHoverEvent::lastPos();
// _ZNK24QGraphicsSceneHoverEvent7lastPosEv lastPos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneHoverEvent7lastPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHoverEvent*)qthis)->lastPos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 208, column 13>
//   // proto:  QPointF QGraphicsSceneHoverEvent::lastScenePos();
// _ZNK24QGraphicsSceneHoverEvent12lastScenePosEv lastScenePos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneHoverEvent12lastScenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHoverEvent*)qthis)->lastScenePos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 212, column 10>
//   // proto:  void QGraphicsSceneHoverEvent::setLastScreenPos(const QPoint & pos);
// _ZN24QGraphicsSceneHoverEvent16setLastScreenPosERK6QPoint setLastScreenPos(const class QPoint &)
extern "C"
void
C_ZN24QGraphicsSceneHoverEvent16setLastScreenPosERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QGraphicsSceneHoverEvent*)qthis)->setLastScreenPos(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 215, column 10>
//   // proto:  void QGraphicsSceneHoverEvent::setModifiers(Qt::KeyboardModifiers modifiers);
// _ZN24QGraphicsSceneHoverEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE setModifiers(Qt::KeyboardModifiers)
extern "C"
void
C_ZN24QGraphicsSceneHoverEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *qthis,
Qt::KeyboardModifiers* arg1) {
  ((QGraphicsSceneHoverEvent*)qthis)->setModifiers(*((Qt::KeyboardModifiers*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 200, column 10>
//   // proto:  void QGraphicsSceneHoverEvent::setScenePos(const QPointF & pos);
// _ZN24QGraphicsSceneHoverEvent11setScenePosERK7QPointF setScenePos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneHoverEvent11setScenePosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneHoverEvent*)qthis)->setScenePos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 197, column 10>
//   // proto:  void QGraphicsSceneHoverEvent::setPos(const QPointF & pos);
// _ZN24QGraphicsSceneHoverEvent6setPosERK7QPointF setPos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneHoverEvent6setPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneHoverEvent*)qthis)->setPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 202, column 12>
//   // proto:  QPoint QGraphicsSceneHoverEvent::screenPos();
// _ZNK24QGraphicsSceneHoverEvent9screenPosEv screenPos()
extern "C"
QPoint*
C_ZNK24QGraphicsSceneHoverEvent9screenPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHoverEvent*)qthis)->screenPos();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 211, column 12>
//   // proto:  QPoint QGraphicsSceneHoverEvent::lastScreenPos();
// _ZNK24QGraphicsSceneHoverEvent13lastScreenPosEv lastScreenPos()
extern "C"
QPoint*
C_ZNK24QGraphicsSceneHoverEvent13lastScreenPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHoverEvent*)qthis)->lastScreenPos();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 209, column 10>
//   // proto:  void QGraphicsSceneHoverEvent::setLastScenePos(const QPointF & pos);
// _ZN24QGraphicsSceneHoverEvent15setLastScenePosERK7QPointF setLastScenePos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneHoverEvent15setLastScenePosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneHoverEvent*)qthis)->setLastScenePos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 196, column 13>
//   // proto:  QPointF QGraphicsSceneHoverEvent::pos();
// _ZNK24QGraphicsSceneHoverEvent3posEv pos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneHoverEvent3posEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneHoverEvent*)qthis)->pos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 203, column 10>
//   // proto:  void QGraphicsSceneHoverEvent::setScreenPos(const QPoint & pos);
// _ZN24QGraphicsSceneHoverEvent12setScreenPosERK6QPoint setScreenPos(const class QPoint &)
extern "C"
void
C_ZN24QGraphicsSceneHoverEvent12setScreenPosERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QGraphicsSceneHoverEvent*)qthis)->setScreenPos(*((const QPoint*)arg1));
}
//   // proto:  void QGraphicsSceneHoverEvent::~QGraphicsSceneHoverEvent();
extern "C"
void C_ZN24QGraphicsSceneHoverEventD2Ev(void *qthis) {
  delete (QGraphicsSceneHoverEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 193, column 14>
//   // proto:  void QGraphicsSceneHoverEvent::QGraphicsSceneHoverEvent(QEvent::Type type);
extern "C"
QGraphicsSceneHoverEvent*
C_ZN24QGraphicsSceneHoverEventC2EN6QEvent4TypeE(QEvent::Type arg1) {
  auto ret = new QGraphicsSceneHoverEvent(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 152, column 21>
//   // proto:  Qt::Orientation QGraphicsSceneWheelEvent::orientation();
// _ZNK24QGraphicsSceneWheelEvent11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK24QGraphicsSceneWheelEvent11orientationEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneWheelEvent*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 153, column 10>
//   // proto:  void QGraphicsSceneWheelEvent::setOrientation(Qt::Orientation orientation);
// _ZN24QGraphicsSceneWheelEvent14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN24QGraphicsSceneWheelEvent14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QGraphicsSceneWheelEvent*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 134, column 13>
//   // proto:  QPointF QGraphicsSceneWheelEvent::pos();
// _ZNK24QGraphicsSceneWheelEvent3posEv pos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneWheelEvent3posEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneWheelEvent*)qthis)->pos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 144, column 10>
//   // proto:  void QGraphicsSceneWheelEvent::setButtons(Qt::MouseButtons buttons);
// _ZN24QGraphicsSceneWheelEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE setButtons(Qt::MouseButtons)
extern "C"
void
C_ZN24QGraphicsSceneWheelEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *qthis,
Qt::MouseButtons* arg1) {
  ((QGraphicsSceneWheelEvent*)qthis)->setButtons(*((Qt::MouseButtons*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 143, column 22>
//   // proto:  Qt::MouseButtons QGraphicsSceneWheelEvent::buttons();
// _ZNK24QGraphicsSceneWheelEvent7buttonsEv buttons()
extern "C"
QFlags<Qt::MouseButton>*
C_ZNK24QGraphicsSceneWheelEvent7buttonsEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneWheelEvent*)qthis)->buttons();
  return new QFlags<Qt::MouseButton>(ret); // 5
}
//   // proto:  void QGraphicsSceneWheelEvent::~QGraphicsSceneWheelEvent();
extern "C"
void C_ZN24QGraphicsSceneWheelEventD2Ev(void *qthis) {
  delete (QGraphicsSceneWheelEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 150, column 10>
//   // proto:  void QGraphicsSceneWheelEvent::setDelta(int delta);
// _ZN24QGraphicsSceneWheelEvent8setDeltaEi setDelta(int)
extern "C"
void
C_ZN24QGraphicsSceneWheelEvent8setDeltaEi(void *qthis,
int arg1) {
  ((QGraphicsSceneWheelEvent*)qthis)->setDelta(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 138, column 10>
//   // proto:  void QGraphicsSceneWheelEvent::setScenePos(const QPointF & pos);
// _ZN24QGraphicsSceneWheelEvent11setScenePosERK7QPointF setScenePos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneWheelEvent11setScenePosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneWheelEvent*)qthis)->setScenePos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 131, column 14>
//   // proto:  void QGraphicsSceneWheelEvent::QGraphicsSceneWheelEvent(QEvent::Type type);
extern "C"
QGraphicsSceneWheelEvent*
C_ZN24QGraphicsSceneWheelEventC2EN6QEvent4TypeE(QEvent::Type arg1) {
  auto ret = new QGraphicsSceneWheelEvent(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 135, column 10>
//   // proto:  void QGraphicsSceneWheelEvent::setPos(const QPointF & pos);
// _ZN24QGraphicsSceneWheelEvent6setPosERK7QPointF setPos(const class QPointF &)
extern "C"
void
C_ZN24QGraphicsSceneWheelEvent6setPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneWheelEvent*)qthis)->setPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 141, column 10>
//   // proto:  void QGraphicsSceneWheelEvent::setScreenPos(const QPoint & pos);
// _ZN24QGraphicsSceneWheelEvent12setScreenPosERK6QPoint setScreenPos(const class QPoint &)
extern "C"
void
C_ZN24QGraphicsSceneWheelEvent12setScreenPosERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QGraphicsSceneWheelEvent*)qthis)->setScreenPos(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 149, column 9>
//   // proto:  int QGraphicsSceneWheelEvent::delta();
// _ZNK24QGraphicsSceneWheelEvent5deltaEv delta()
extern "C"
int
C_ZNK24QGraphicsSceneWheelEvent5deltaEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneWheelEvent*)qthis)->delta();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 147, column 10>
//   // proto:  void QGraphicsSceneWheelEvent::setModifiers(Qt::KeyboardModifiers modifiers);
// _ZN24QGraphicsSceneWheelEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE setModifiers(Qt::KeyboardModifiers)
extern "C"
void
C_ZN24QGraphicsSceneWheelEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *qthis,
Qt::KeyboardModifiers* arg1) {
  ((QGraphicsSceneWheelEvent*)qthis)->setModifiers(*((Qt::KeyboardModifiers*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 146, column 27>
//   // proto:  Qt::KeyboardModifiers QGraphicsSceneWheelEvent::modifiers();
// _ZNK24QGraphicsSceneWheelEvent9modifiersEv modifiers()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZNK24QGraphicsSceneWheelEvent9modifiersEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneWheelEvent*)qthis)->modifiers();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 137, column 13>
//   // proto:  QPointF QGraphicsSceneWheelEvent::scenePos();
// _ZNK24QGraphicsSceneWheelEvent8scenePosEv scenePos()
extern "C"
QPointF*
C_ZNK24QGraphicsSceneWheelEvent8scenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneWheelEvent*)qthis)->scenePos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 140, column 12>
//   // proto:  QPoint QGraphicsSceneWheelEvent::screenPos();
// _ZNK24QGraphicsSceneWheelEvent9screenPosEv screenPos()
extern "C"
QPoint*
C_ZNK24QGraphicsSceneWheelEvent9screenPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneWheelEvent*)qthis)->screenPos();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 272, column 14>
//   // proto:  QWidget * QGraphicsSceneDragDropEvent::source();
// _ZNK27QGraphicsSceneDragDropEvent6sourceEv source()
extern "C"
void*
C_ZNK27QGraphicsSceneDragDropEvent6sourceEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->source();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 250, column 13>
//   // proto:  QPointF QGraphicsSceneDragDropEvent::scenePos();
// _ZNK27QGraphicsSceneDragDropEvent8scenePosEv scenePos()
extern "C"
QPointF*
C_ZNK27QGraphicsSceneDragDropEvent8scenePosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->scenePos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 248, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setPos(const QPointF & pos);
// _ZN27QGraphicsSceneDragDropEvent6setPosERK7QPointF setPos(const class QPointF &)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent6setPosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setPos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 269, column 20>
//   // proto:  Qt::DropAction QGraphicsSceneDragDropEvent::dropAction();
// _ZNK27QGraphicsSceneDragDropEvent10dropActionEv dropAction()
extern "C"
Qt::DropAction
C_ZNK27QGraphicsSceneDragDropEvent10dropActionEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->dropAction();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 254, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setScreenPos(const QPoint & pos);
// _ZN27QGraphicsSceneDragDropEvent12setScreenPosERK6QPoint setScreenPos(const class QPoint &)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent12setScreenPosERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setScreenPos(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 265, column 20>
//   // proto:  Qt::DropAction QGraphicsSceneDragDropEvent::proposedAction();
// _ZNK27QGraphicsSceneDragDropEvent14proposedActionEv proposedAction()
extern "C"
Qt::DropAction
C_ZNK27QGraphicsSceneDragDropEvent14proposedActionEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->proposedAction();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 257, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setButtons(Qt::MouseButtons buttons);
// _ZN27QGraphicsSceneDragDropEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE setButtons(Qt::MouseButtons)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *qthis,
Qt::MouseButtons* arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setButtons(*((Qt::MouseButtons*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 259, column 27>
//   // proto:  Qt::KeyboardModifiers QGraphicsSceneDragDropEvent::modifiers();
// _ZNK27QGraphicsSceneDragDropEvent9modifiersEv modifiers()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZNK27QGraphicsSceneDragDropEvent9modifiersEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->modifiers();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 262, column 21>
//   // proto:  Qt::DropActions QGraphicsSceneDragDropEvent::possibleActions();
// _ZNK27QGraphicsSceneDragDropEvent15possibleActionsEv possibleActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK27QGraphicsSceneDragDropEvent15possibleActionsEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->possibleActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 247, column 13>
//   // proto:  QPointF QGraphicsSceneDragDropEvent::pos();
// _ZNK27QGraphicsSceneDragDropEvent3posEv pos()
extern "C"
QPointF*
C_ZNK27QGraphicsSceneDragDropEvent3posEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->pos();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 253, column 12>
//   // proto:  QPoint QGraphicsSceneDragDropEvent::screenPos();
// _ZNK27QGraphicsSceneDragDropEvent9screenPosEv screenPos()
extern "C"
QPoint*
C_ZNK27QGraphicsSceneDragDropEvent9screenPosEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->screenPos();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 275, column 22>
//   // proto:  const QMimeData * QGraphicsSceneDragDropEvent::mimeData();
// _ZNK27QGraphicsSceneDragDropEvent8mimeDataEv mimeData()
extern "C"
void*
C_ZNK27QGraphicsSceneDragDropEvent8mimeDataEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->mimeData();
  return (void*)ret;
}
//   // proto:  void QGraphicsSceneDragDropEvent::~QGraphicsSceneDragDropEvent();
extern "C"
void C_ZN27QGraphicsSceneDragDropEventD2Ev(void *qthis) {
  delete (QGraphicsSceneDragDropEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 263, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setPossibleActions(Qt::DropActions actions);
// _ZN27QGraphicsSceneDragDropEvent18setPossibleActionsE6QFlagsIN2Qt10DropActionEE setPossibleActions(Qt::DropActions)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent18setPossibleActionsE6QFlagsIN2Qt10DropActionEE(void *qthis,
Qt::DropActions* arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setPossibleActions(*((Qt::DropActions*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 276, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setMimeData(const QMimeData * data);
// _ZN27QGraphicsSceneDragDropEvent11setMimeDataEPK9QMimeData setMimeData(const class QMimeData *)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent11setMimeDataEPK9QMimeData(void *qthis,
const QMimeData * arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setMimeData(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 270, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setDropAction(Qt::DropAction action);
// _ZN27QGraphicsSceneDragDropEvent13setDropActionEN2Qt10DropActionE setDropAction(Qt::DropAction)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent13setDropActionEN2Qt10DropActionE(void *qthis,
Qt::DropAction* arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setDropAction(*((Qt::DropAction*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 266, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setProposedAction(Qt::DropAction action);
// _ZN27QGraphicsSceneDragDropEvent17setProposedActionEN2Qt10DropActionE setProposedAction(Qt::DropAction)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent17setProposedActionEN2Qt10DropActionE(void *qthis,
Qt::DropAction* arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setProposedAction(*((Qt::DropAction*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 273, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setSource(QWidget * source);
// _ZN27QGraphicsSceneDragDropEvent9setSourceEP7QWidget setSource(class QWidget *)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent9setSourceEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setSource(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 251, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setScenePos(const QPointF & pos);
// _ZN27QGraphicsSceneDragDropEvent11setScenePosERK7QPointF setScenePos(const class QPointF &)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent11setScenePosERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setScenePos(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 267, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::acceptProposedAction();
// _ZN27QGraphicsSceneDragDropEvent20acceptProposedActionEv acceptProposedAction()
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent20acceptProposedActionEv(void *qthis) {
  ((QGraphicsSceneDragDropEvent*)qthis)->acceptProposedAction();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 260, column 10>
//   // proto:  void QGraphicsSceneDragDropEvent::setModifiers(Qt::KeyboardModifiers modifiers);
// _ZN27QGraphicsSceneDragDropEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE setModifiers(Qt::KeyboardModifiers)
extern "C"
void
C_ZN27QGraphicsSceneDragDropEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *qthis,
Qt::KeyboardModifiers* arg1) {
  ((QGraphicsSceneDragDropEvent*)qthis)->setModifiers(*((Qt::KeyboardModifiers*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 256, column 22>
//   // proto:  Qt::MouseButtons QGraphicsSceneDragDropEvent::buttons();
// _ZNK27QGraphicsSceneDragDropEvent7buttonsEv buttons()
extern "C"
QFlags<Qt::MouseButton>*
C_ZNK27QGraphicsSceneDragDropEvent7buttonsEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneDragDropEvent*)qthis)->buttons();
  return new QFlags<Qt::MouseButton>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 244, column 14>
//   // proto:  void QGraphicsSceneDragDropEvent::QGraphicsSceneDragDropEvent(QEvent::Type type);
extern "C"
QGraphicsSceneDragDropEvent*
C_ZN27QGraphicsSceneDragDropEventC2EN6QEvent4TypeE(QEvent::Type arg1) {
  auto ret = new QGraphicsSceneDragDropEvent(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 59, column 14>
//   // proto:  void QGraphicsSceneEvent::QGraphicsSceneEvent(QEvent::Type type);
extern "C"
QGraphicsSceneEvent*
C_ZN19QGraphicsSceneEventC2EN6QEvent4TypeE(QEvent::Type arg1) {
  auto ret = new QGraphicsSceneEvent(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 62, column 14>
//   // proto:  QWidget * QGraphicsSceneEvent::widget();
// _ZNK19QGraphicsSceneEvent6widgetEv widget()
extern "C"
void*
C_ZNK19QGraphicsSceneEvent6widgetEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneEvent*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 63, column 10>
//   // proto:  void QGraphicsSceneEvent::setWidget(QWidget * widget);
// _ZN19QGraphicsSceneEvent9setWidgetEP7QWidget setWidget(class QWidget *)
extern "C"
void
C_ZN19QGraphicsSceneEvent9setWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QGraphicsSceneEvent*)qthis)->setWidget(arg1);
}
//   // proto:  void QGraphicsSceneEvent::~QGraphicsSceneEvent();
extern "C"
void C_ZN19QGraphicsSceneEventD2Ev(void *qthis) {
  delete (QGraphicsSceneEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 295, column 12>
//   // proto:  QSizeF QGraphicsSceneResizeEvent::newSize();
// _ZNK25QGraphicsSceneResizeEvent7newSizeEv newSize()
extern "C"
QSizeF*
C_ZNK25QGraphicsSceneResizeEvent7newSizeEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneResizeEvent*)qthis)->newSize();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 292, column 12>
//   // proto:  QSizeF QGraphicsSceneResizeEvent::oldSize();
// _ZNK25QGraphicsSceneResizeEvent7oldSizeEv oldSize()
extern "C"
QSizeF*
C_ZNK25QGraphicsSceneResizeEvent7oldSizeEv(void *qthis) {
  auto ret =
  ((QGraphicsSceneResizeEvent*)qthis)->oldSize();
  return new QSizeF(ret); // 5
}
//   // proto:  void QGraphicsSceneResizeEvent::~QGraphicsSceneResizeEvent();
extern "C"
void C_ZN25QGraphicsSceneResizeEventD2Ev(void *qthis) {
  delete (QGraphicsSceneResizeEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 296, column 10>
//   // proto:  void QGraphicsSceneResizeEvent::setNewSize(const QSizeF & size);
// _ZN25QGraphicsSceneResizeEvent10setNewSizeERK6QSizeF setNewSize(const class QSizeF &)
extern "C"
void
C_ZN25QGraphicsSceneResizeEvent10setNewSizeERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QGraphicsSceneResizeEvent*)qthis)->setNewSize(*((const QSizeF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 289, column 5>
//   // proto:  void QGraphicsSceneResizeEvent::QGraphicsSceneResizeEvent();
extern "C"
QGraphicsSceneResizeEvent*
C_ZN25QGraphicsSceneResizeEventC2Ev() {
  auto ret = new QGraphicsSceneResizeEvent();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicssceneevent.h', line 293, column 10>
//   // proto:  void QGraphicsSceneResizeEvent::setOldSize(const QSizeF & size);
// _ZN25QGraphicsSceneResizeEvent10setOldSizeERK6QSizeF setOldSize(const class QSizeF &)
extern "C"
void
C_ZN25QGraphicsSceneResizeEvent10setOldSizeERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QGraphicsSceneResizeEvent*)qthis)->setOldSize(*((const QSizeF*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

