// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qsizepolicy.h
// dst-file: /src/widgets/qsizepolicy.cxx
//

// header block begin =>
#include <qsizepolicy.h>

extern "C" {

int QSizePolicy_Class_Size()
{
  return sizeof(QSizePolicy);
}

// QSizePolicy(enum QSizePolicy::Policy, enum QSizePolicy::Policy, enum QSizePolicy::ControlType)
QSizePolicy* dector_ZN11QSizePolicyC1ENS_6PolicyES0_NS_11ControlTypeE(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type)
{
  // static_assert(sizeof(QSizePolicy) == 32, "tyszerr");
  QSizePolicy* rthis = new QSizePolicy(horizontal, vertical, type);
  return rthis;
}

// QSizePolicy()
QSizePolicy* dector_ZN11QSizePolicyC1Ev()
{
  // static_assert(sizeof(QSizePolicy) == 32, "tyszerr");
  QSizePolicy* rthis = new QSizePolicy();
  return rthis;
}

  // proto:  void QSizePolicy::transpose();
void demth_ZN11QSizePolicy9transposeEv(void *that)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->transpose();
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

