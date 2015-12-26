// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtGui/qaccessible.h
// dst-file: /src/gui/qaccessible.cxx
//

// header block begin =>
#include <qaccessible.h>

extern "C" {

int QAccessible_Class_Size()
{
  return sizeof(QAccessible);
}

int QAccessibleTableModelChangeEvent_Class_Size()
{
  return sizeof(QAccessibleTableModelChangeEvent);
}

// QAccessibleTableModelChangeEvent(class QObject *, enum QAccessibleTableModelChangeEvent::ModelChangeType)
QAccessibleTableModelChangeEvent* dector_ZN32QAccessibleTableModelChangeEventC1EP7QObjectNS_15ModelChangeTypeE(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType)
{
  // static_assert(sizeof(QAccessibleTableModelChangeEvent) == 48, "tyszerr");
  QAccessibleTableModelChangeEvent* rthis = new QAccessibleTableModelChangeEvent(obj, changeType);
  return rthis;
}

// QAccessibleTableModelChangeEvent(class QAccessibleInterface *, enum QAccessibleTableModelChangeEvent::ModelChangeType)
QAccessibleTableModelChangeEvent* dector_ZN32QAccessibleTableModelChangeEventC1EP20QAccessibleInterfaceNS_15ModelChangeTypeE(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType)
{
  // static_assert(sizeof(QAccessibleTableModelChangeEvent) == 48, "tyszerr");
  QAccessibleTableModelChangeEvent* rthis = new QAccessibleTableModelChangeEvent(iface, changeType);
  return rthis;
}

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

int QAccessibleTextInterface_Class_Size()
{
  return sizeof(QAccessibleTextInterface);
}

int QAccessibleEvent_Class_Size()
{
  return sizeof(QAccessibleEvent);
}

// QAccessibleEvent(class QObject *, class QAccessible::Event)
QAccessibleEvent* dector_ZN16QAccessibleEventC1EP7QObjectN11QAccessible5EventE(QObject * obj, QAccessible::Event typ)
{
  // static_assert(sizeof(QAccessibleEvent) == 32, "tyszerr");
  QAccessibleEvent* rthis = new QAccessibleEvent(obj, typ);
  return rthis;
}

// ~QAccessibleEvent()
void dedtor_ZN16QAccessibleEventD0Ev(QAccessibleEvent* that)
{
  QAccessibleEvent* rthis = (QAccessibleEvent*)that;
  delete rthis;
}

// QAccessibleEvent(class QAccessibleInterface *, class QAccessible::Event)
QAccessibleEvent* dector_ZN16QAccessibleEventC1EP20QAccessibleInterfaceN11QAccessible5EventE(QAccessibleInterface * iface, QAccessible::Event typ)
{
  // static_assert(sizeof(QAccessibleEvent) == 32, "tyszerr");
  QAccessibleEvent* rthis = new QAccessibleEvent(iface, typ);
  return rthis;
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

int QAccessibleActionInterface_Class_Size()
{
  return sizeof(QAccessibleActionInterface);
}

int QAccessibleInterface_Class_Size()
{
  return sizeof(QAccessibleInterface);
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

int QAccessibleEditableTextInterface_Class_Size()
{
  return sizeof(QAccessibleEditableTextInterface);
}

int QAccessibleTableCellInterface_Class_Size()
{
  return sizeof(QAccessibleTableCellInterface);
}

int QAccessibleTableInterface_Class_Size()
{
  return sizeof(QAccessibleTableInterface);
}

int QAccessibleTextUpdateEvent_Class_Size()
{
  return sizeof(QAccessibleTextUpdateEvent);
}

// QAccessibleTextUpdateEvent(class QAccessibleInterface *, int, const class QString &, const class QString &)
QAccessibleTextUpdateEvent* dector_ZN26QAccessibleTextUpdateEventC1EP20QAccessibleInterfaceiRK7QStringS4_(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text)
{
  // static_assert(sizeof(QAccessibleTextUpdateEvent) == 56, "tyszerr");
  QAccessibleTextUpdateEvent* rthis = new QAccessibleTextUpdateEvent(iface, position, oldText, text);
  return rthis;
}

// QAccessibleTextUpdateEvent(class QObject *, int, const class QString &, const class QString &)
QAccessibleTextUpdateEvent* dector_ZN26QAccessibleTextUpdateEventC1EP7QObjectiRK7QStringS4_(QObject * obj, int position, const QString & oldText, const QString & text)
{
  // static_assert(sizeof(QAccessibleTextUpdateEvent) == 56, "tyszerr");
  QAccessibleTextUpdateEvent* rthis = new QAccessibleTextUpdateEvent(obj, position, oldText, text);
  return rthis;
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

int QAccessibleStateChangeEvent_Class_Size()
{
  return sizeof(QAccessibleStateChangeEvent);
}

// QAccessibleStateChangeEvent(class QAccessibleInterface *, class QAccessible::State)
QAccessibleStateChangeEvent* dector_ZN27QAccessibleStateChangeEventC1EP20QAccessibleInterfaceN11QAccessible5StateE(QAccessibleInterface * iface, QAccessible::State state)
{
  // static_assert(sizeof(QAccessibleStateChangeEvent) == 40, "tyszerr");
  QAccessibleStateChangeEvent* rthis = new QAccessibleStateChangeEvent(iface, state);
  return rthis;
}

// QAccessibleStateChangeEvent(class QObject *, class QAccessible::State)
QAccessibleStateChangeEvent* dector_ZN27QAccessibleStateChangeEventC1EP7QObjectN11QAccessible5StateE(QObject * obj, QAccessible::State state)
{
  // static_assert(sizeof(QAccessibleStateChangeEvent) == 40, "tyszerr");
  QAccessibleStateChangeEvent* rthis = new QAccessibleStateChangeEvent(obj, state);
  return rthis;
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

int QAccessibleImageInterface_Class_Size()
{
  return sizeof(QAccessibleImageInterface);
}

int QAccessibleTextInsertEvent_Class_Size()
{
  return sizeof(QAccessibleTextInsertEvent);
}

// QAccessibleTextInsertEvent(class QAccessibleInterface *, int, const class QString &)
QAccessibleTextInsertEvent* dector_ZN26QAccessibleTextInsertEventC1EP20QAccessibleInterfaceiRK7QString(QAccessibleInterface * iface, int position, const QString & text)
{
  // static_assert(sizeof(QAccessibleTextInsertEvent) == 48, "tyszerr");
  QAccessibleTextInsertEvent* rthis = new QAccessibleTextInsertEvent(iface, position, text);
  return rthis;
}

// QAccessibleTextInsertEvent(class QObject *, int, const class QString &)
QAccessibleTextInsertEvent* dector_ZN26QAccessibleTextInsertEventC1EP7QObjectiRK7QString(QObject * obj, int position, const QString & text)
{
  // static_assert(sizeof(QAccessibleTextInsertEvent) == 48, "tyszerr");
  QAccessibleTextInsertEvent* rthis = new QAccessibleTextInsertEvent(obj, position, text);
  return rthis;
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

int QAccessibleValueInterface_Class_Size()
{
  return sizeof(QAccessibleValueInterface);
}

int QAccessibleTextRemoveEvent_Class_Size()
{
  return sizeof(QAccessibleTextRemoveEvent);
}

// QAccessibleTextRemoveEvent(class QObject *, int, const class QString &)
QAccessibleTextRemoveEvent* dector_ZN26QAccessibleTextRemoveEventC1EP7QObjectiRK7QString(QObject * obj, int position, const QString & text)
{
  // static_assert(sizeof(QAccessibleTextRemoveEvent) == 48, "tyszerr");
  QAccessibleTextRemoveEvent* rthis = new QAccessibleTextRemoveEvent(obj, position, text);
  return rthis;
}

// QAccessibleTextRemoveEvent(class QAccessibleInterface *, int, const class QString &)
QAccessibleTextRemoveEvent* dector_ZN26QAccessibleTextRemoveEventC1EP20QAccessibleInterfaceiRK7QString(QAccessibleInterface * iface, int position, const QString & text)
{
  // static_assert(sizeof(QAccessibleTextRemoveEvent) == 48, "tyszerr");
  QAccessibleTextRemoveEvent* rthis = new QAccessibleTextRemoveEvent(iface, position, text);
  return rthis;
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

int QAccessibleTextSelectionEvent_Class_Size()
{
  return sizeof(QAccessibleTextSelectionEvent);
}

// QAccessibleTextSelectionEvent(class QAccessibleInterface *, int, int)
QAccessibleTextSelectionEvent* dector_ZN29QAccessibleTextSelectionEventC1EP20QAccessibleInterfaceii(QAccessibleInterface * iface, int start, int end)
{
  // static_assert(sizeof(QAccessibleTextSelectionEvent) == 40, "tyszerr");
  QAccessibleTextSelectionEvent* rthis = new QAccessibleTextSelectionEvent(iface, start, end);
  return rthis;
}

// QAccessibleTextSelectionEvent(class QObject *, int, int)
QAccessibleTextSelectionEvent* dector_ZN29QAccessibleTextSelectionEventC1EP7QObjectii(QObject * obj, int start, int end)
{
  // static_assert(sizeof(QAccessibleTextSelectionEvent) == 40, "tyszerr");
  QAccessibleTextSelectionEvent* rthis = new QAccessibleTextSelectionEvent(obj, start, end);
  return rthis;
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

int QAccessibleTextCursorEvent_Class_Size()
{
  return sizeof(QAccessibleTextCursorEvent);
}

// QAccessibleTextCursorEvent(class QAccessibleInterface *, int)
QAccessibleTextCursorEvent* dector_ZN26QAccessibleTextCursorEventC1EP20QAccessibleInterfacei(QAccessibleInterface * iface, int cursorPos)
{
  // static_assert(sizeof(QAccessibleTextCursorEvent) == 32, "tyszerr");
  QAccessibleTextCursorEvent* rthis = new QAccessibleTextCursorEvent(iface, cursorPos);
  return rthis;
}

// QAccessibleTextCursorEvent(class QObject *, int)
QAccessibleTextCursorEvent* dector_ZN26QAccessibleTextCursorEventC1EP7QObjecti(QObject * obj, int cursorPos)
{
  // static_assert(sizeof(QAccessibleTextCursorEvent) == 32, "tyszerr");
  QAccessibleTextCursorEvent* rthis = new QAccessibleTextCursorEvent(obj, cursorPos);
  return rthis;
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

int QAccessibleValueChangeEvent_Class_Size()
{
  return sizeof(QAccessibleValueChangeEvent);
}

// QAccessibleValueChangeEvent(class QObject *, const class QVariant &)
QAccessibleValueChangeEvent* dector_ZN27QAccessibleValueChangeEventC1EP7QObjectRK8QVariant(QObject * obj, const QVariant & val)
{
  // static_assert(sizeof(QAccessibleValueChangeEvent) == 48, "tyszerr");
  QAccessibleValueChangeEvent* rthis = new QAccessibleValueChangeEvent(obj, val);
  return rthis;
}

// QAccessibleValueChangeEvent(class QAccessibleInterface *, const class QVariant &)
QAccessibleValueChangeEvent* dector_ZN27QAccessibleValueChangeEventC1EP20QAccessibleInterfaceRK8QVariant(QAccessibleInterface * iface, const QVariant & val)
{
  // static_assert(sizeof(QAccessibleValueChangeEvent) == 48, "tyszerr");
  QAccessibleValueChangeEvent* rthis = new QAccessibleValueChangeEvent(iface, val);
  return rthis;
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

