// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
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

  // proto:  void QAccessibleTableModelChangeEvent::setFirstColumn(int col);
void demth_ZN32QAccessibleTableModelChangeEvent14setFirstColumnEi(void *that, int col)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
   cthat->setFirstColumn(col);
}

  // proto:  void QAccessibleTableModelChangeEvent::setFirstRow(int row);
void demth_ZN32QAccessibleTableModelChangeEvent11setFirstRowEi(void *that, int row)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
   cthat->setFirstRow(row);
}

  // proto:  int QAccessibleTableModelChangeEvent::firstRow();
int demth_ZNK32QAccessibleTableModelChangeEvent8firstRowEv(void *that)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
  return cthat->firstRow();
}

  // proto:  void QAccessibleTableModelChangeEvent::QAccessibleTableModelChangeEvent(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType);
void demth_ZN32QAccessibleTableModelChangeEventC1EP7QObjectNS_15ModelChangeTypeE(void *that, QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
  auto _o = new(that) QAccessibleTableModelChangeEvent(obj, changeType);
}

  // proto:  void QAccessibleTableModelChangeEvent::QAccessibleTableModelChangeEvent(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType);
void demth_ZN32QAccessibleTableModelChangeEventC1EP20QAccessibleInterfaceNS_15ModelChangeTypeE(void *that, QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
  auto _o = new(that) QAccessibleTableModelChangeEvent(iface, changeType);
}

  // proto:  void QAccessibleTableModelChangeEvent::setLastColumn(int col);
void demth_ZN32QAccessibleTableModelChangeEvent13setLastColumnEi(void *that, int col)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
   cthat->setLastColumn(col);
}

  // proto:  void QAccessibleTableModelChangeEvent::setModelChangeType(QAccessibleTableModelChangeEvent::ModelChangeType changeType);
void demth_ZN32QAccessibleTableModelChangeEvent18setModelChangeTypeENS_15ModelChangeTypeE(void *that, QAccessibleTableModelChangeEvent::ModelChangeType changeType)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
   cthat->setModelChangeType(changeType);
}

  // proto:  int QAccessibleTableModelChangeEvent::firstColumn();
int demth_ZNK32QAccessibleTableModelChangeEvent11firstColumnEv(void *that)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
  return cthat->firstColumn();
}

  // proto:  int QAccessibleTableModelChangeEvent::lastColumn();
int demth_ZNK32QAccessibleTableModelChangeEvent10lastColumnEv(void *that)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
  return cthat->lastColumn();
}

  // proto:  void QAccessibleTableModelChangeEvent::setLastRow(int row);
void demth_ZN32QAccessibleTableModelChangeEvent10setLastRowEi(void *that, int row)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
   cthat->setLastRow(row);
}

  // proto:  int QAccessibleTableModelChangeEvent::lastRow();
int demth_ZNK32QAccessibleTableModelChangeEvent7lastRowEv(void *that)
{
  QAccessibleTableModelChangeEvent *cthat = (QAccessibleTableModelChangeEvent *)that;
  return cthat->lastRow();
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
void demth_ZN16QAccessibleEventC1EP7QObjectN11QAccessible5EventE(void *that, QObject * obj, QAccessible::Event typ)
{
  QAccessibleEvent *cthat = (QAccessibleEvent *)that;
  auto _o = new(that) QAccessibleEvent(obj, typ);
}

  // proto:  QObject * QAccessibleEvent::object();
QObject * demth_ZNK16QAccessibleEvent6objectEv(void *that)
{
  QAccessibleEvent *cthat = (QAccessibleEvent *)that;
  return cthat->object();
}

  // proto:  void QAccessibleEvent::setChild(int chld);
void demth_ZN16QAccessibleEvent8setChildEi(void *that, int chld)
{
  QAccessibleEvent *cthat = (QAccessibleEvent *)that;
   cthat->setChild(chld);
}

  // proto:  int QAccessibleEvent::child();
int demth_ZNK16QAccessibleEvent5childEv(void *that)
{
  QAccessibleEvent *cthat = (QAccessibleEvent *)that;
  return cthat->child();
}

  // proto:  void QAccessibleEvent::QAccessibleEvent(QAccessibleInterface * iface, QAccessible::Event typ);
void demth_ZN16QAccessibleEventC1EP20QAccessibleInterfaceN11QAccessible5EventE(void *that, QAccessibleInterface * iface, QAccessible::Event typ)
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
QAccessibleImageInterface * demth_ZN20QAccessibleInterface14imageInterfaceEv(void *that)
{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->imageInterface();
}

  // proto:  QAccessibleTableInterface * QAccessibleInterface::tableInterface();
QAccessibleTableInterface * demth_ZN20QAccessibleInterface14tableInterfaceEv(void *that)
{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->tableInterface();
}

  // proto:  QAccessibleEditableTextInterface * QAccessibleInterface::editableTextInterface();
QAccessibleEditableTextInterface * demth_ZN20QAccessibleInterface21editableTextInterfaceEv(void *that)
{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->editableTextInterface();
}

  // proto:  QAccessibleValueInterface * QAccessibleInterface::valueInterface();
QAccessibleValueInterface * demth_ZN20QAccessibleInterface14valueInterfaceEv(void *that)
{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->valueInterface();
}

  // proto:  void * QAccessibleInterface::interface_cast(QAccessible::InterfaceType );
void * demth_ZN20QAccessibleInterface14interface_castEN11QAccessible13InterfaceTypeE(void *that, QAccessible::InterfaceType arg1)
{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->interface_cast(arg1);
}

  // proto:  QAccessibleActionInterface * QAccessibleInterface::actionInterface();
QAccessibleActionInterface * demth_ZN20QAccessibleInterface15actionInterfaceEv(void *that)
{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->actionInterface();
}

  // proto:  QAccessibleTableCellInterface * QAccessibleInterface::tableCellInterface();
QAccessibleTableCellInterface * demth_ZN20QAccessibleInterface18tableCellInterfaceEv(void *that)
{
  QAccessibleInterface *cthat = (QAccessibleInterface *)that;
  return cthat->tableCellInterface();
}

  // proto:  QAccessibleTextInterface * QAccessibleInterface::textInterface();
QAccessibleTextInterface * demth_ZN20QAccessibleInterface13textInterfaceEv(void *that)
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

  // proto:  QString QAccessibleTextUpdateEvent::textInserted();
QString* demth_ZNK26QAccessibleTextUpdateEvent12textInsertedEv(void *that)
{
  QAccessibleTextUpdateEvent *cthat = (QAccessibleTextUpdateEvent *)that;
  auto recret = cthat->textInserted();
  return new QString(recret);
}

  // proto:  void QAccessibleTextUpdateEvent::QAccessibleTextUpdateEvent(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text);
void demth_ZN26QAccessibleTextUpdateEventC1EP20QAccessibleInterfaceiRK7QStringS4_(void *that, QAccessibleInterface * iface, int position, const QString & oldText, const QString & text)
{
  QAccessibleTextUpdateEvent *cthat = (QAccessibleTextUpdateEvent *)that;
  auto _o = new(that) QAccessibleTextUpdateEvent(iface, position, oldText, text);
}

  // proto:  QString QAccessibleTextUpdateEvent::textRemoved();
QString* demth_ZNK26QAccessibleTextUpdateEvent11textRemovedEv(void *that)
{
  QAccessibleTextUpdateEvent *cthat = (QAccessibleTextUpdateEvent *)that;
  auto recret = cthat->textRemoved();
  return new QString(recret);
}

  // proto:  int QAccessibleTextUpdateEvent::changePosition();
int demth_ZNK26QAccessibleTextUpdateEvent14changePositionEv(void *that)
{
  QAccessibleTextUpdateEvent *cthat = (QAccessibleTextUpdateEvent *)that;
  return cthat->changePosition();
}

  // proto:  void QAccessibleTextUpdateEvent::QAccessibleTextUpdateEvent(QObject * obj, int position, const QString & oldText, const QString & text);
void demth_ZN26QAccessibleTextUpdateEventC1EP7QObjectiRK7QStringS4_(void *that, QObject * obj, int position, const QString & oldText, const QString & text)
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
void demth_ZN27QAccessibleStateChangeEventC1EP20QAccessibleInterfaceN11QAccessible5StateE(void *that, QAccessibleInterface * iface, QAccessible::State state)
{
  QAccessibleStateChangeEvent *cthat = (QAccessibleStateChangeEvent *)that;
  auto _o = new(that) QAccessibleStateChangeEvent(iface, state);
}

  // proto:  void QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QObject * obj, QAccessible::State state);
void demth_ZN27QAccessibleStateChangeEventC1EP7QObjectN11QAccessible5StateE(void *that, QObject * obj, QAccessible::State state)
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

  // proto:  QString QAccessibleTextInsertEvent::textInserted();
QString* demth_ZNK26QAccessibleTextInsertEvent12textInsertedEv(void *that)
{
  QAccessibleTextInsertEvent *cthat = (QAccessibleTextInsertEvent *)that;
  auto recret = cthat->textInserted();
  return new QString(recret);
}

  // proto:  int QAccessibleTextInsertEvent::changePosition();
int demth_ZNK26QAccessibleTextInsertEvent14changePositionEv(void *that)
{
  QAccessibleTextInsertEvent *cthat = (QAccessibleTextInsertEvent *)that;
  return cthat->changePosition();
}

  // proto:  void QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QAccessibleInterface * iface, int position, const QString & text);
void demth_ZN26QAccessibleTextInsertEventC1EP20QAccessibleInterfaceiRK7QString(void *that, QAccessibleInterface * iface, int position, const QString & text)
{
  QAccessibleTextInsertEvent *cthat = (QAccessibleTextInsertEvent *)that;
  auto _o = new(that) QAccessibleTextInsertEvent(iface, position, text);
}

  // proto:  void QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QObject * obj, int position, const QString & text);
void demth_ZN26QAccessibleTextInsertEventC1EP7QObjectiRK7QString(void *that, QObject * obj, int position, const QString & text)
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
void demth_ZN26QAccessibleTextRemoveEventC1EP7QObjectiRK7QString(void *that, QObject * obj, int position, const QString & text)
{
  QAccessibleTextRemoveEvent *cthat = (QAccessibleTextRemoveEvent *)that;
  auto _o = new(that) QAccessibleTextRemoveEvent(obj, position, text);
}

  // proto:  QString QAccessibleTextRemoveEvent::textRemoved();
QString* demth_ZNK26QAccessibleTextRemoveEvent11textRemovedEv(void *that)
{
  QAccessibleTextRemoveEvent *cthat = (QAccessibleTextRemoveEvent *)that;
  auto recret = cthat->textRemoved();
  return new QString(recret);
}

  // proto:  void QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QAccessibleInterface * iface, int position, const QString & text);
void demth_ZN26QAccessibleTextRemoveEventC1EP20QAccessibleInterfaceiRK7QString(void *that, QAccessibleInterface * iface, int position, const QString & text)
{
  QAccessibleTextRemoveEvent *cthat = (QAccessibleTextRemoveEvent *)that;
  auto _o = new(that) QAccessibleTextRemoveEvent(iface, position, text);
}

  // proto:  int QAccessibleTextRemoveEvent::changePosition();
int demth_ZNK26QAccessibleTextRemoveEvent14changePositionEv(void *that)
{
  QAccessibleTextRemoveEvent *cthat = (QAccessibleTextRemoveEvent *)that;
  return cthat->changePosition();
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

  // proto:  int QAccessibleTextSelectionEvent::selectionEnd();
int demth_ZNK29QAccessibleTextSelectionEvent12selectionEndEv(void *that)
{
  QAccessibleTextSelectionEvent *cthat = (QAccessibleTextSelectionEvent *)that;
  return cthat->selectionEnd();
}

  // proto:  void QAccessibleTextSelectionEvent::QAccessibleTextSelectionEvent(QAccessibleInterface * iface, int start, int end);
void demth_ZN29QAccessibleTextSelectionEventC1EP20QAccessibleInterfaceii(void *that, QAccessibleInterface * iface, int start, int end)
{
  QAccessibleTextSelectionEvent *cthat = (QAccessibleTextSelectionEvent *)that;
  auto _o = new(that) QAccessibleTextSelectionEvent(iface, start, end);
}

  // proto:  int QAccessibleTextSelectionEvent::selectionStart();
int demth_ZNK29QAccessibleTextSelectionEvent14selectionStartEv(void *that)
{
  QAccessibleTextSelectionEvent *cthat = (QAccessibleTextSelectionEvent *)that;
  return cthat->selectionStart();
}

  // proto:  void QAccessibleTextSelectionEvent::QAccessibleTextSelectionEvent(QObject * obj, int start, int end);
void demth_ZN29QAccessibleTextSelectionEventC1EP7QObjectii(void *that, QObject * obj, int start, int end)
{
  QAccessibleTextSelectionEvent *cthat = (QAccessibleTextSelectionEvent *)that;
  auto _o = new(that) QAccessibleTextSelectionEvent(obj, start, end);
}

  // proto:  void QAccessibleTextSelectionEvent::setSelection(int start, int end);
void demth_ZN29QAccessibleTextSelectionEvent12setSelectionEii(void *that, int start, int end)
{
  QAccessibleTextSelectionEvent *cthat = (QAccessibleTextSelectionEvent *)that;
   cthat->setSelection(start, end);
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
void demth_ZN26QAccessibleTextCursorEventC1EP20QAccessibleInterfacei(void *that, QAccessibleInterface * iface, int cursorPos)
{
  QAccessibleTextCursorEvent *cthat = (QAccessibleTextCursorEvent *)that;
  auto _o = new(that) QAccessibleTextCursorEvent(iface, cursorPos);
}

  // proto:  void QAccessibleTextCursorEvent::setCursorPosition(int position);
void demth_ZN26QAccessibleTextCursorEvent17setCursorPositionEi(void *that, int position)
{
  QAccessibleTextCursorEvent *cthat = (QAccessibleTextCursorEvent *)that;
   cthat->setCursorPosition(position);
}

  // proto:  int QAccessibleTextCursorEvent::cursorPosition();
int demth_ZNK26QAccessibleTextCursorEvent14cursorPositionEv(void *that)
{
  QAccessibleTextCursorEvent *cthat = (QAccessibleTextCursorEvent *)that;
  return cthat->cursorPosition();
}

  // proto:  void QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QObject * obj, int cursorPos);
void demth_ZN26QAccessibleTextCursorEventC1EP7QObjecti(void *that, QObject * obj, int cursorPos)
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
void demth_ZN27QAccessibleValueChangeEventC1EP7QObjectRK8QVariant(void *that, QObject * obj, const QVariant & val)
{
  QAccessibleValueChangeEvent *cthat = (QAccessibleValueChangeEvent *)that;
  auto _o = new(that) QAccessibleValueChangeEvent(obj, val);
}

  // proto:  void QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QAccessibleInterface * iface, const QVariant & val);
void demth_ZN27QAccessibleValueChangeEventC1EP20QAccessibleInterfaceRK8QVariant(void *that, QAccessibleInterface * iface, const QVariant & val)
{
  QAccessibleValueChangeEvent *cthat = (QAccessibleValueChangeEvent *)that;
  auto _o = new(that) QAccessibleValueChangeEvent(iface, val);
}

  // proto:  void QAccessibleValueChangeEvent::setValue(const QVariant & val);
void demth_ZN27QAccessibleValueChangeEvent8setValueERK8QVariant(void *that, const QVariant & val)
{
  QAccessibleValueChangeEvent *cthat = (QAccessibleValueChangeEvent *)that;
   cthat->setValue(val);
}

  // proto:  QVariant QAccessibleValueChangeEvent::value();
QVariant* demth_ZNK27QAccessibleValueChangeEvent5valueEv(void *that)
{
  QAccessibleValueChangeEvent *cthat = (QAccessibleValueChangeEvent *)that;
  auto recret = cthat->value();
  return new QVariant(recret);
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

