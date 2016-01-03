// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
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

  // proto:  bool QSizePolicy::hasHeightForWidth();
bool demth_ZNK11QSizePolicy17hasHeightForWidthEv(void *that)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
  return cthat->hasHeightForWidth();
}

  // proto:  bool QSizePolicy::retainSizeWhenHidden();
bool demth_ZNK11QSizePolicy20retainSizeWhenHiddenEv(void *that)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
  return cthat->retainSizeWhenHidden();
}

  // proto:  bool QSizePolicy::hasWidthForHeight();
bool demth_ZNK11QSizePolicy17hasWidthForHeightEv(void *that)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
  return cthat->hasWidthForHeight();
}

  // proto:  void QSizePolicy::transpose();
void demth_ZN11QSizePolicy9transposeEv(void *that)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->transpose();
}

  // proto:  void QSizePolicy::setWidthForHeight(bool b);
void demth_ZN11QSizePolicy17setWidthForHeightEb(void *that, bool b)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->setWidthForHeight(b);
}

  // proto:  void QSizePolicy::setVerticalStretch(int stretchFactor);
void demth_ZN11QSizePolicy18setVerticalStretchEi(void *that, int stretchFactor)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->setVerticalStretch(stretchFactor);
}

  // proto:  void QSizePolicy::setHorizontalPolicy(QSizePolicy::Policy d);
void demth_ZN11QSizePolicy19setHorizontalPolicyENS_6PolicyE(void *that, QSizePolicy::Policy d)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->setHorizontalPolicy(d);
}

  // proto:  void QSizePolicy::setHeightForWidth(bool b);
void demth_ZN11QSizePolicy17setHeightForWidthEb(void *that, bool b)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->setHeightForWidth(b);
}

  // proto:  void QSizePolicy::setRetainSizeWhenHidden(bool retainSize);
void demth_ZN11QSizePolicy23setRetainSizeWhenHiddenEb(void *that, bool retainSize)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->setRetainSizeWhenHidden(retainSize);
}

  // proto:  int QSizePolicy::horizontalStretch();
int demth_ZNK11QSizePolicy17horizontalStretchEv(void *that)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
  return cthat->horizontalStretch();
}

  // proto:  void QSizePolicy::setHorizontalStretch(int stretchFactor);
void demth_ZN11QSizePolicy20setHorizontalStretchEi(void *that, int stretchFactor)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->setHorizontalStretch(stretchFactor);
}

  // proto:  void QSizePolicy::setVerticalPolicy(QSizePolicy::Policy d);
void demth_ZN11QSizePolicy17setVerticalPolicyENS_6PolicyE(void *that, QSizePolicy::Policy d)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
   cthat->setVerticalPolicy(d);
}

  // proto:  int QSizePolicy::verticalStretch();
int demth_ZNK11QSizePolicy15verticalStretchEv(void *that)
{
  QSizePolicy *cthat = (QSizePolicy *)that;
  return cthat->verticalStretch();
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

