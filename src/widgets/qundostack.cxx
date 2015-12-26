// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qundostack.h
// dst-file: /src/widgets/qundostack.cxx
//

// header block begin =>
#include <qundostack.h>

extern "C" {

int QUndoStack_Class_Size()
{
  return sizeof(QUndoStack);
}

// ~QUndoStack()
void dedtor_ZN10QUndoStackD0Ev(QUndoStack* that)
{
  QUndoStack* rthis = (QUndoStack*)that;
  delete rthis;
}

// QUndoStack(class QObject *)
QUndoStack* dector_ZN10QUndoStackC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QUndoStack) == 32, "tyszerr");
  QUndoStack* rthis = new QUndoStack(parent);
  return rthis;
}

int QUndoCommand_Class_Size()
{
  return sizeof(QUndoCommand);
}

// QUndoCommand(class QUndoCommand *)
QUndoCommand* dector_ZN12QUndoCommandC1EPS_(QUndoCommand * parent)
{
  // static_assert(sizeof(QUndoCommand) == 32, "tyszerr");
  QUndoCommand* rthis = new QUndoCommand(parent);
  return rthis;
}

// QUndoCommand(const class QString &, class QUndoCommand *)
QUndoCommand* dector_ZN12QUndoCommandC1ERK7QStringPS_(const QString & text, QUndoCommand * parent)
{
  // static_assert(sizeof(QUndoCommand) == 32, "tyszerr");
  QUndoCommand* rthis = new QUndoCommand(text, parent);
  return rthis;
}

// ~QUndoCommand()
void dedtor_ZN12QUndoCommandD0Ev(QUndoCommand* that)
{
  QUndoCommand* rthis = (QUndoCommand*)that;
  delete rthis;
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

