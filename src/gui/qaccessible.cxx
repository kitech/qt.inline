// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qaccessible.h
// dst-file: /src/gui/qaccessible.cxx
//

// header block begin =>
#include <qaccessible.h>

extern "C" {

  // proto:  void QAccessibleTableModelChangeEvent::QAccessibleTableModelChangeEvent(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType);
void _ZN32QAccessibleTableModelChangeEventC1EP7QObjectNS_15ModelChangeTypeE(void *that, QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType)

{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
  auto _o = new(that) QAccessibleTableModelChangeEvent(obj, changeType);
}

  // proto:  void QAccessibleTableModelChangeEvent::QAccessibleTableModelChangeEvent(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType);
void _ZN32QAccessibleTableModelChangeEventC1EP20QAccessibleInterfaceNS_15ModelChangeTypeE(void *that, QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType)

{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
  auto _o = new(that) QAccessibleTableModelChangeEvent(iface, changeType);
}

  // proto:  void QAccessibleEvent::QAccessibleEvent(QObject * obj, QAccessible::Event typ);
void _ZN16QAccessibleEventC1EP7QObjectN11QAccessible5EventE(void *that, QObject * obj, QAccessible::Event typ)

{
  QAccessibleEvent *cthat = (QAccessibleEvent *)that;
  auto _o = new(that) QAccessibleEvent(obj, typ);
}

  // proto:  void QAccessibleEvent::QAccessibleEvent(QAccessibleInterface * iface, QAccessible::Event typ);
void _ZN16QAccessibleEventC1EP20QAccessibleInterfaceN11QAccessible5EventE(void *that, QAccessibleInterface * iface, QAccessible::Event typ)

{
  QAccessibleEvent *cthat = (QAccessibleEvent *)that;
  auto _o = new(that) QAccessibleEvent(iface, typ);
}

  // proto:  QAccessibleImageInterface * QAccessibleInterface::imageInterface();
QAccessibleImageInterface * _ZN20QAccessibleInterface14imageInterfaceEv(void *that)

{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->imageInterface();
}

  // proto:  QAccessibleTableInterface * QAccessibleInterface::tableInterface();
QAccessibleTableInterface * _ZN20QAccessibleInterface14tableInterfaceEv(void *that)

{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->tableInterface();
}

  // proto:  QAccessibleEditableTextInterface * QAccessibleInterface::editableTextInterface();
QAccessibleEditableTextInterface * _ZN20QAccessibleInterface21editableTextInterfaceEv(void *that)

{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->editableTextInterface();
}

  // proto:  QAccessibleValueInterface * QAccessibleInterface::valueInterface();
QAccessibleValueInterface * _ZN20QAccessibleInterface14valueInterfaceEv(void *that)

{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->valueInterface();
}

  // proto:  QAccessibleActionInterface * QAccessibleInterface::actionInterface();
QAccessibleActionInterface * _ZN20QAccessibleInterface15actionInterfaceEv(void *that)

{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->actionInterface();
}

  // proto:  QAccessibleTableCellInterface * QAccessibleInterface::tableCellInterface();
QAccessibleTableCellInterface * _ZN20QAccessibleInterface18tableCellInterfaceEv(void *that)

{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->tableCellInterface();
}

  // proto:  QAccessibleTextInterface * QAccessibleInterface::textInterface();
QAccessibleTextInterface * _ZN20QAccessibleInterface13textInterfaceEv(void *that)

{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->textInterface();
}

  // proto:  void QAccessibleTextUpdateEvent::QAccessibleTextUpdateEvent(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text);
void _ZN26QAccessibleTextUpdateEventC1EP20QAccessibleInterfaceiRK7QStringS4_(void *that, QAccessibleInterface * iface, int position, const QString & oldText, const QString & text)

{
  QAccessibleTextUpdateEvent *cthat = (QAccessibleTextUpdateEvent *)that;
  auto _o = new(that) QAccessibleTextUpdateEvent(iface, position, oldText, text);
}

  // proto:  void QAccessibleTextUpdateEvent::QAccessibleTextUpdateEvent(QObject * obj, int position, const QString & oldText, const QString & text);
void _ZN26QAccessibleTextUpdateEventC1EP7QObjectiRK7QStringS4_(void *that, QObject * obj, int position, const QString & oldText, const QString & text)

{
  QAccessibleTextUpdateEvent *cthat = (QAccessibleTextUpdateEvent *)that;
  auto _o = new(that) QAccessibleTextUpdateEvent(obj, position, oldText, text);
}

  // proto:  void QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QAccessibleInterface * iface, QAccessible::State state);
void _ZN27QAccessibleStateChangeEventC1EP20QAccessibleInterfaceN11QAccessible5StateE(void *that, QAccessibleInterface * iface, QAccessible::State state)

{
  QAccessibleStateChangeEvent *cthat = (QAccessibleStateChangeEvent *)that;
  auto _o = new(that) QAccessibleStateChangeEvent(iface, state);
}

  // proto:  void QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QObject * obj, QAccessible::State state);
void _ZN27QAccessibleStateChangeEventC1EP7QObjectN11QAccessible5StateE(void *that, QObject * obj, QAccessible::State state)

{
  QAccessibleStateChangeEvent *cthat = (QAccessibleStateChangeEvent *)that;
  auto _o = new(that) QAccessibleStateChangeEvent(obj, state);
}

  // proto:  void QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QAccessibleInterface * iface, int position, const QString & text);
void _ZN26QAccessibleTextInsertEventC1EP20QAccessibleInterfaceiRK7QString(void *that, QAccessibleInterface * iface, int position, const QString & text)

{
  QAccessibleTextInsertEvent *cthat = (QAccessibleTextInsertEvent *)that;
  auto _o = new(that) QAccessibleTextInsertEvent(iface, position, text);
}

  // proto:  void QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QObject * obj, int position, const QString & text);
void _ZN26QAccessibleTextInsertEventC1EP7QObjectiRK7QString(void *that, QObject * obj, int position, const QString & text)

{
  QAccessibleTextInsertEvent *cthat = (QAccessibleTextInsertEvent *)that;
  auto _o = new(that) QAccessibleTextInsertEvent(obj, position, text);
}

  // proto:  void QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QObject * obj, int position, const QString & text);
void _ZN26QAccessibleTextRemoveEventC1EP7QObjectiRK7QString(void *that, QObject * obj, int position, const QString & text)

{
  QAccessibleTextRemoveEvent *cthat = (QAccessibleTextRemoveEvent *)that;
  auto _o = new(that) QAccessibleTextRemoveEvent(obj, position, text);
}

  // proto:  void QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QAccessibleInterface * iface, int position, const QString & text);
void _ZN26QAccessibleTextRemoveEventC1EP20QAccessibleInterfaceiRK7QString(void *that, QAccessibleInterface * iface, int position, const QString & text)

{
  QAccessibleTextRemoveEvent *cthat = (QAccessibleTextRemoveEvent *)that;
  auto _o = new(that) QAccessibleTextRemoveEvent(iface, position, text);
}

  // proto:  void QAccessibleTextSelectionEvent::QAccessibleTextSelectionEvent(QAccessibleInterface * iface, int start, int end);
void _ZN29QAccessibleTextSelectionEventC1EP20QAccessibleInterfaceii(void *that, QAccessibleInterface * iface, int start, int end)

{
  QAccessibleTextSelectionEvent *cthat = (QAccessibleTextSelectionEvent *)that;
  auto _o = new(that) QAccessibleTextSelectionEvent(iface, start, end);
}

  // proto:  void QAccessibleTextSelectionEvent::QAccessibleTextSelectionEvent(QObject * obj, int start, int end);
void _ZN29QAccessibleTextSelectionEventC1EP7QObjectii(void *that, QObject * obj, int start, int end)

{
  QAccessibleTextSelectionEvent *cthat = (QAccessibleTextSelectionEvent *)that;
  auto _o = new(that) QAccessibleTextSelectionEvent(obj, start, end);
}

  // proto:  void QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QAccessibleInterface * iface, int cursorPos);
void _ZN26QAccessibleTextCursorEventC1EP20QAccessibleInterfacei(void *that, QAccessibleInterface * iface, int cursorPos)

{
  QAccessibleTextCursorEvent *cthat = (QAccessibleTextCursorEvent *)that;
  auto _o = new(that) QAccessibleTextCursorEvent(iface, cursorPos);
}

  // proto:  void QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QObject * obj, int cursorPos);
void _ZN26QAccessibleTextCursorEventC1EP7QObjecti(void *that, QObject * obj, int cursorPos)

{
  QAccessibleTextCursorEvent *cthat = (QAccessibleTextCursorEvent *)that;
  auto _o = new(that) QAccessibleTextCursorEvent(obj, cursorPos);
}

  // proto:  void QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QObject * obj, const QVariant & val);
void _ZN27QAccessibleValueChangeEventC1EP7QObjectRK8QVariant(void *that, QObject * obj, const QVariant & val)

{
  QAccessibleValueChangeEvent *cthat = (QAccessibleValueChangeEvent *)that;
  auto _o = new(that) QAccessibleValueChangeEvent(obj, val);
}

  // proto:  void QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QAccessibleInterface * iface, const QVariant & val);
void _ZN27QAccessibleValueChangeEventC1EP20QAccessibleInterfaceRK8QVariant(void *that, QAccessibleInterface * iface, const QVariant & val)

{
  QAccessibleValueChangeEvent *cthat = (QAccessibleValueChangeEvent *)that;
  auto _o = new(that) QAccessibleValueChangeEvent(iface, val);
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
// <= body block end

