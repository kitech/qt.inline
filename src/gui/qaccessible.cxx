#include <qvariant.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qaccessible.h
// dst-file: /src/gui/qaccessible.cxx
//

// header block begin =>
#include <qatomic.h>
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

int QAccessibleTextInterface_Class_Size()
{
  return sizeof(QAccessibleTextInterface);
}

int QAccessibleEvent_Class_Size()
{
  return sizeof(QAccessibleEvent);
}

int QAccessibleActionInterface_Class_Size()
{
  return sizeof(QAccessibleActionInterface);
}

int QAccessibleInterface_Class_Size()
{
  return sizeof(QAccessibleInterface);
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

int QAccessibleStateChangeEvent_Class_Size()
{
  return sizeof(QAccessibleStateChangeEvent);
}

int QAccessibleImageInterface_Class_Size()
{
  return sizeof(QAccessibleImageInterface);
}

int QAccessibleTextInsertEvent_Class_Size()
{
  return sizeof(QAccessibleTextInsertEvent);
}

int QAccessibleValueInterface_Class_Size()
{
  return sizeof(QAccessibleValueInterface);
}

int QAccessibleTextRemoveEvent_Class_Size()
{
  return sizeof(QAccessibleTextRemoveEvent);
}

int QAccessibleTextSelectionEvent_Class_Size()
{
  return sizeof(QAccessibleTextSelectionEvent);
}

int QAccessibleTextCursorEvent_Class_Size()
{
  return sizeof(QAccessibleTextCursorEvent);
}

int QAccessibleValueChangeEvent_Class_Size()
{
  return sizeof(QAccessibleValueChangeEvent);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qaccessible_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 933, column 10>
//   // proto:  void QAccessibleTableModelChangeEvent::setFirstColumn(int col);
if (false) {
  auto f = [](int arg1) {
    ((QAccessibleTableModelChangeEvent*)0)->setFirstColumn(arg1);
  };
}
// _ZN32QAccessibleTableModelChangeEvent14setFirstColumnEi setFirstColumn(int)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 930, column 21>
//   // proto:  QAccessibleTableModelChangeEvent::ModelChangeType QAccessibleTableModelChangeEvent::modelChangeType();
if (false) {
  auto f = []() {
    ((QAccessibleTableModelChangeEvent*)0)->modelChangeType();
  };
}
// _ZNK32QAccessibleTableModelChangeEvent15modelChangeTypeEv modelChangeType()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 932, column 10>
//   // proto:  void QAccessibleTableModelChangeEvent::setFirstRow(int row);
if (false) {
  auto f = [](int arg1) {
    ((QAccessibleTableModelChangeEvent*)0)->setFirstRow(arg1);
  };
}
// _ZN32QAccessibleTableModelChangeEvent11setFirstRowEi setFirstRow(int)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 936, column 9>
//   // proto:  int QAccessibleTableModelChangeEvent::firstRow();
if (false) {
  auto f = []() {
    ((QAccessibleTableModelChangeEvent*)0)->firstRow();
  };
}
// _ZNK32QAccessibleTableModelChangeEvent8firstRowEv firstRow()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 914, column 12>
//   // proto:  void QAccessibleTableModelChangeEvent::QAccessibleTableModelChangeEvent(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType);
if (false) {
  auto f = [](QObject * arg1, QAccessibleTableModelChangeEvent::ModelChangeType arg2) {
    new QAccessibleTableModelChangeEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 921, column 12>
//   // proto:  void QAccessibleTableModelChangeEvent::QAccessibleTableModelChangeEvent(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType);
if (false) {
  auto f = [](QAccessibleInterface * arg1, QAccessibleTableModelChangeEvent::ModelChangeType arg2) {
    new QAccessibleTableModelChangeEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 935, column 10>
//   // proto:  void QAccessibleTableModelChangeEvent::setLastColumn(int col);
if (false) {
  auto f = [](int arg1) {
    ((QAccessibleTableModelChangeEvent*)0)->setLastColumn(arg1);
  };
}
// _ZN32QAccessibleTableModelChangeEvent13setLastColumnEi setLastColumn(int)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 929, column 10>
//   // proto:  void QAccessibleTableModelChangeEvent::setModelChangeType(QAccessibleTableModelChangeEvent::ModelChangeType changeType);
if (false) {
  auto f = [](QAccessibleTableModelChangeEvent::ModelChangeType arg1) {
    ((QAccessibleTableModelChangeEvent*)0)->setModelChangeType(arg1);
  };
}
// _ZN32QAccessibleTableModelChangeEvent18setModelChangeTypeENS_15ModelChangeTypeE setModelChangeType(enum QAccessibleTableModelChangeEvent::ModelChangeType)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 937, column 9>
//   // proto:  int QAccessibleTableModelChangeEvent::firstColumn();
if (false) {
  auto f = []() {
    ((QAccessibleTableModelChangeEvent*)0)->firstColumn();
  };
}
// _ZNK32QAccessibleTableModelChangeEvent11firstColumnEv firstColumn()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 939, column 9>
//   // proto:  int QAccessibleTableModelChangeEvent::lastColumn();
if (false) {
  auto f = []() {
    ((QAccessibleTableModelChangeEvent*)0)->lastColumn();
  };
}
// _ZNK32QAccessibleTableModelChangeEvent10lastColumnEv lastColumn()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 934, column 10>
//   // proto:  void QAccessibleTableModelChangeEvent::setLastRow(int row);
if (false) {
  auto f = [](int arg1) {
    ((QAccessibleTableModelChangeEvent*)0)->setLastRow(arg1);
  };
}
// _ZN32QAccessibleTableModelChangeEvent10setLastRowEi setLastRow(int)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 938, column 9>
//   // proto:  int QAccessibleTableModelChangeEvent::lastRow();
if (false) {
  auto f = []() {
    ((QAccessibleTableModelChangeEvent*)0)->lastRow();
  };
}
// _ZNK32QAccessibleTableModelChangeEvent7lastRowEv lastRow()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 663, column 12>
//   // proto:  void QAccessibleEvent::QAccessibleEvent(QObject * obj, QAccessible::Event typ);
if (false) {
  auto f = [](QObject * arg1, QAccessible::Event arg2) {
    new QAccessibleEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 698, column 14>
//   // proto:  QObject * QAccessibleEvent::object();
if (false) {
  auto f = []() {
    ((QAccessibleEvent*)0)->object();
  };
}
// _ZNK16QAccessibleEvent6objectEv object()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 701, column 10>
//   // proto:  void QAccessibleEvent::setChild(int chld);
if (false) {
  auto f = [](int arg1) {
    ((QAccessibleEvent*)0)->setChild(arg1);
  };
}
// _ZN16QAccessibleEvent8setChildEi setChild(int)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 697, column 24>
//   // proto:  QAccessible::Event QAccessibleEvent::type();
if (false) {
  auto f = []() {
    ((QAccessibleEvent*)0)->type();
  };
}
// _ZNK16QAccessibleEvent4typeEv type()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 702, column 9>
//   // proto:  int QAccessibleEvent::child();
if (false) {
  auto f = []() {
    ((QAccessibleEvent*)0)->child();
  };
}
// _ZNK16QAccessibleEvent5childEv child()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 679, column 12>
//   // proto:  void QAccessibleEvent::QAccessibleEvent(QAccessibleInterface * iface, QAccessible::Event typ);
if (false) {
  auto f = [](QAccessibleInterface * arg1, QAccessible::Event arg2) {
    new QAccessibleEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 496, column 39>
//   // proto:  QAccessibleImageInterface * QAccessibleInterface::imageInterface();
if (false) {
  auto f = []() {
    ((QAccessibleInterface*)0)->imageInterface();
  };
}
// _ZN20QAccessibleInterface14imageInterfaceEv imageInterface()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 499, column 39>
//   // proto:  QAccessibleTableInterface * QAccessibleInterface::tableInterface();
if (false) {
  auto f = []() {
    ((QAccessibleInterface*)0)->tableInterface();
  };
}
// _ZN20QAccessibleInterface14tableInterfaceEv tableInterface()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 487, column 46>
//   // proto:  QAccessibleEditableTextInterface * QAccessibleInterface::editableTextInterface();
if (false) {
  auto f = []() {
    ((QAccessibleInterface*)0)->editableTextInterface();
  };
}
// _ZN20QAccessibleInterface21editableTextInterfaceEv editableTextInterface()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 490, column 39>
//   // proto:  QAccessibleValueInterface * QAccessibleInterface::valueInterface();
if (false) {
  auto f = []() {
    ((QAccessibleInterface*)0)->valueInterface();
  };
}
// _ZN20QAccessibleInterface14valueInterfaceEv valueInterface()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 507, column 19>
//   // proto:  void * QAccessibleInterface::interface_cast(QAccessible::InterfaceType );
if (false) {
  auto f = [](QAccessible::InterfaceType arg1) {
    ((QAccessibleInterface*)0)->interface_cast(arg1);
  };
}
// _ZN20QAccessibleInterface14interface_castEN11QAccessible13InterfaceTypeE interface_cast(class QAccessible::InterfaceType)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 493, column 40>
//   // proto:  QAccessibleActionInterface * QAccessibleInterface::actionInterface();
if (false) {
  auto f = []() {
    ((QAccessibleInterface*)0)->actionInterface();
  };
}
// _ZN20QAccessibleInterface15actionInterfaceEv actionInterface()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 502, column 43>
//   // proto:  QAccessibleTableCellInterface * QAccessibleInterface::tableCellInterface();
if (false) {
  auto f = []() {
    ((QAccessibleInterface*)0)->tableCellInterface();
  };
}
// _ZN20QAccessibleInterface18tableCellInterfaceEv tableCellInterface()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 484, column 38>
//   // proto:  QAccessibleTextInterface * QAccessibleInterface::textInterface();
if (false) {
  auto f = []() {
    ((QAccessibleInterface*)0)->textInterface();
  };
}
// _ZN20QAccessibleInterface13textInterfaceEv textInterface()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 866, column 13>
//   // proto:  QString QAccessibleTextUpdateEvent::textInserted();
if (false) {
  auto f = []() {
    ((QAccessibleTextUpdateEvent*)0)->textInserted();
  };
}
// _ZNK26QAccessibleTextUpdateEvent12textInsertedEv textInserted()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 857, column 12>
//   // proto:  void QAccessibleTextUpdateEvent::QAccessibleTextUpdateEvent(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text);
if (false) {
  auto f = [](QAccessibleInterface * arg1, int arg2, const QString & arg3, const QString & arg4) {
    new QAccessibleTextUpdateEvent(arg1, arg2, arg3, arg4);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 863, column 13>
//   // proto:  QString QAccessibleTextUpdateEvent::textRemoved();
if (false) {
  auto f = []() {
    ((QAccessibleTextUpdateEvent*)0)->textRemoved();
  };
}
// _ZNK26QAccessibleTextUpdateEvent11textRemovedEv textRemoved()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 869, column 9>
//   // proto:  int QAccessibleTextUpdateEvent::changePosition();
if (false) {
  auto f = []() {
    ((QAccessibleTextUpdateEvent*)0)->changePosition();
  };
}
// _ZNK26QAccessibleTextUpdateEvent14changePositionEv changePosition()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 851, column 12>
//   // proto:  void QAccessibleTextUpdateEvent::QAccessibleTextUpdateEvent(QObject * obj, int position, const QString & oldText, const QString & text);
if (false) {
  auto f = [](QObject * arg1, int arg2, const QString & arg3, const QString & arg4) {
    new QAccessibleTextUpdateEvent(arg1, arg2, arg3, arg4);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 724, column 12>
//   // proto:  void QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QAccessibleInterface * iface, QAccessible::State state);
if (false) {
  auto f = [](QAccessibleInterface * arg1, QAccessible::State arg2) {
    new QAccessibleStateChangeEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 730, column 24>
//   // proto:  QAccessible::State QAccessibleStateChangeEvent::changedStates();
if (false) {
  auto f = []() {
    ((QAccessibleStateChangeEvent*)0)->changedStates();
  };
}
// _ZNK27QAccessibleStateChangeEvent13changedStatesEv changedStates()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 719, column 12>
//   // proto:  void QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QObject * obj, QAccessible::State state);
if (false) {
  auto f = [](QObject * arg1, QAccessible::State arg2) {
    new QAccessibleStateChangeEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 808, column 13>
//   // proto:  QString QAccessibleTextInsertEvent::textInserted();
if (false) {
  auto f = []() {
    ((QAccessibleTextInsertEvent*)0)->textInserted();
  };
}
// _ZNK26QAccessibleTextInsertEvent12textInsertedEv textInserted()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 811, column 9>
//   // proto:  int QAccessibleTextInsertEvent::changePosition();
if (false) {
  auto f = []() {
    ((QAccessibleTextInsertEvent*)0)->changePosition();
  };
}
// _ZNK26QAccessibleTextInsertEvent14changePositionEv changePosition()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 801, column 12>
//   // proto:  void QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QAccessibleInterface * iface, int position, const QString & text);
if (false) {
  auto f = [](QAccessibleInterface * arg1, int arg2, const QString & arg3) {
    new QAccessibleTextInsertEvent(arg1, arg2, arg3);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 795, column 12>
//   // proto:  void QAccessibleTextInsertEvent::QAccessibleTextInsertEvent(QObject * obj, int position, const QString & text);
if (false) {
  auto f = [](QObject * arg1, int arg2, const QString & arg3) {
    new QAccessibleTextInsertEvent(arg1, arg2, arg3);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 823, column 12>
//   // proto:  void QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QObject * obj, int position, const QString & text);
if (false) {
  auto f = [](QObject * arg1, int arg2, const QString & arg3) {
    new QAccessibleTextRemoveEvent(arg1, arg2, arg3);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 836, column 13>
//   // proto:  QString QAccessibleTextRemoveEvent::textRemoved();
if (false) {
  auto f = []() {
    ((QAccessibleTextRemoveEvent*)0)->textRemoved();
  };
}
// _ZNK26QAccessibleTextRemoveEvent11textRemovedEv textRemoved()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 829, column 12>
//   // proto:  void QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent(QAccessibleInterface * iface, int position, const QString & text);
if (false) {
  auto f = [](QAccessibleInterface * arg1, int arg2, const QString & arg3) {
    new QAccessibleTextRemoveEvent(arg1, arg2, arg3);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 839, column 9>
//   // proto:  int QAccessibleTextRemoveEvent::changePosition();
if (false) {
  auto f = []() {
    ((QAccessibleTextRemoveEvent*)0)->changePosition();
  };
}
// _ZNK26QAccessibleTextRemoveEvent14changePositionEv changePosition()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 785, column 9>
//   // proto:  int QAccessibleTextSelectionEvent::selectionEnd();
if (false) {
  auto f = []() {
    ((QAccessibleTextSelectionEvent*)0)->selectionEnd();
  };
}
// _ZNK29QAccessibleTextSelectionEvent12selectionEndEv selectionEnd()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 772, column 12>
//   // proto:  void QAccessibleTextSelectionEvent::QAccessibleTextSelectionEvent(QAccessibleInterface * iface, int start, int end);
if (false) {
  auto f = [](QAccessibleInterface * arg1, int arg2, int arg3) {
    new QAccessibleTextSelectionEvent(arg1, arg2, arg3);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 784, column 9>
//   // proto:  int QAccessibleTextSelectionEvent::selectionStart();
if (false) {
  auto f = []() {
    ((QAccessibleTextSelectionEvent*)0)->selectionStart();
  };
}
// _ZNK29QAccessibleTextSelectionEvent14selectionStartEv selectionStart()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 766, column 12>
//   // proto:  void QAccessibleTextSelectionEvent::QAccessibleTextSelectionEvent(QObject * obj, int start, int end);
if (false) {
  auto f = [](QObject * arg1, int arg2, int arg3) {
    new QAccessibleTextSelectionEvent(arg1, arg2, arg3);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 779, column 10>
//   // proto:  void QAccessibleTextSelectionEvent::setSelection(int start, int end);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QAccessibleTextSelectionEvent*)0)->setSelection(arg1, arg2);
  };
}
// _ZN29QAccessibleTextSelectionEvent12setSelectionEii setSelection(int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 748, column 12>
//   // proto:  void QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QAccessibleInterface * iface, int cursorPos);
if (false) {
  auto f = [](QAccessibleInterface * arg1, int arg2) {
    new QAccessibleTextCursorEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 755, column 10>
//   // proto:  void QAccessibleTextCursorEvent::setCursorPosition(int position);
if (false) {
  auto f = [](int arg1) {
    ((QAccessibleTextCursorEvent*)0)->setCursorPosition(arg1);
  };
}
// _ZN26QAccessibleTextCursorEvent17setCursorPositionEi setCursorPosition(int)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 756, column 9>
//   // proto:  int QAccessibleTextCursorEvent::cursorPosition();
if (false) {
  auto f = []() {
    ((QAccessibleTextCursorEvent*)0)->cursorPosition();
  };
}
// _ZNK26QAccessibleTextCursorEvent14cursorPositionEv cursorPosition()
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 742, column 12>
//   // proto:  void QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QObject * obj, int cursorPos);
if (false) {
  auto f = [](QObject * arg1, int arg2) {
    new QAccessibleTextCursorEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 882, column 12>
//   // proto:  void QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QObject * obj, const QVariant & val);
if (false) {
  auto f = [](QObject * arg1, const QVariant & arg2) {
    new QAccessibleValueChangeEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 888, column 12>
//   // proto:  void QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QAccessibleInterface * iface, const QVariant & val);
if (false) {
  auto f = [](QAccessibleInterface * arg1, const QVariant & arg2) {
    new QAccessibleValueChangeEvent(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 895, column 10>
//   // proto:  void QAccessibleValueChangeEvent::setValue(const QVariant & val);
if (false) {
  auto f = [](const QVariant & arg1) {
    ((QAccessibleValueChangeEvent*)0)->setValue(arg1);
  };
}
// _ZN27QAccessibleValueChangeEvent8setValueERK8QVariant setValue(const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtGui/qaccessible.h', line 896, column 14>
//   // proto:  QVariant QAccessibleValueChangeEvent::value();
if (false) {
  auto f = []() {
    ((QAccessibleValueChangeEvent*)0)->value();
  };
}
// _ZNK27QAccessibleValueChangeEvent5valueEv value()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

