// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qaction.h
// dst-file: /src/widgets/qaction.cxx
//

// header block begin =>
#include <qaction.h>

extern "C" {

int QAction_Class_Size()
{
  return sizeof(QAction);
}

// QAction(const class QString &, class QObject *)
QAction* dector_ZN7QActionC1ERK7QStringP7QObject(const QString & text, QObject * parent)
{
  // static_assert(sizeof(QAction) == 32, "tyszerr");
  QAction* rthis = new QAction(text, parent);
  return rthis;
}

// ~QAction()
void dedtor_ZN7QActionD0Ev(QAction* that)
{
  QAction* rthis = (QAction*)that;
  delete rthis;
}

// QAction(class QObject *)
QAction* dector_ZN7QActionC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QAction) == 32, "tyszerr");
  QAction* rthis = new QAction(parent);
  return rthis;
}

// QAction(const class QIcon &, const class QString &, class QObject *)
QAction* dector_ZN7QActionC1ERK5QIconRK7QStringP7QObject(const QIcon & icon, const QString & text, QObject * parent)
{
  // static_assert(sizeof(QAction) == 32, "tyszerr");
  QAction* rthis = new QAction(icon, text, parent);
  return rthis;
}

  // proto:  void QAction::setDisabled(bool b);
void demth_ZN7QAction11setDisabledEb(void *that, bool b)
{
  QAction *cthat = (QAction *)that;
   cthat->setDisabled(b);
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

