// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qactiongroup.h
// dst-file: /src/widgets/qactiongroup.cxx
//

// header block begin =>
#include <qactiongroup.h>

extern "C" {

int QActionGroup_Class_Size()
{
  return sizeof(QActionGroup);
}

// QActionGroup(class QObject *)
QActionGroup* dector_ZN12QActionGroupC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QActionGroup) == 32, "tyszerr");
  QActionGroup* rthis = new QActionGroup(parent);
  return rthis;
}

// ~QActionGroup()
void dedtor_ZN12QActionGroupD0Ev(QActionGroup* that)
{
  QActionGroup* rthis = (QActionGroup*)that;
  delete rthis;
}

  // proto:  void QActionGroup::setDisabled(bool b);
void demth_ZN12QActionGroup11setDisabledEb(void *that, bool b)
{
  QActionGroup *cthat = (QActionGroup *)that;
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

