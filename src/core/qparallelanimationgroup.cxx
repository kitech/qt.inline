// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qparallelanimationgroup.h
// dst-file: /src/core/qparallelanimationgroup.cxx
//

// header block begin =>
#include <qparallelanimationgroup.h>

extern "C" {

int QParallelAnimationGroup_Class_Size()
{
  return sizeof(QParallelAnimationGroup);
}

// ~QParallelAnimationGroup()
void dedtor_ZN23QParallelAnimationGroupD0Ev(QParallelAnimationGroup* that)
{
  QParallelAnimationGroup* rthis = (QParallelAnimationGroup*)that;
  delete rthis;
}

// QParallelAnimationGroup(class QObject *)
QParallelAnimationGroup* dector_ZN23QParallelAnimationGroupC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QParallelAnimationGroup) == 32, "tyszerr");
  QParallelAnimationGroup* rthis = new QParallelAnimationGroup(parent);
  return rthis;
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
// QParallelAnimationGroup_SlotProxy here
class QParallelAnimationGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QParallelAnimationGroup_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qparallelanimationgroup.moc"

extern "C" {
  QParallelAnimationGroup_SlotProxy* QParallelAnimationGroup_SlotProxy_new()
  {
    return new QParallelAnimationGroup_SlotProxy();
  }
};

// <= body block end

