//  header block begin
// /usr/include/qt/QtWidgets/qsizepolicy.h
#include <qsizepolicy.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSizePolicy is pure virtual: false
// QSizePolicy has virtual projected: false
//  header block end

//  main block begin

class MyQSizePolicy : public QSizePolicy {
public:
  virtual ~MyQSizePolicy() {}
// void QSizePolicy()
MyQSizePolicy() : QSizePolicy() {}
// void QSizePolicy(enum QSizePolicy::Policy, enum QSizePolicy::Policy, enum QSizePolicy::ControlType)
MyQSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type) : QSizePolicy(horizontal, vertical, type) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:113
// [-2] void QSizePolicy()
extern "C"
void* C_ZN11QSizePolicyC2Ev() {
  return  new QSizePolicy();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:116
// [-2] void QSizePolicy(enum QSizePolicy::Policy, enum QSizePolicy::Policy, enum QSizePolicy::ControlType)
extern "C"
void* C_ZN11QSizePolicyC2ENS_6PolicyES0_NS_11ControlTypeE(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type) {
  return  new QSizePolicy(horizontal, vertical, type);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:128
// [4] QSizePolicy::Policy horizontalPolicy()
extern "C"
QSizePolicy::Policy C_ZNK11QSizePolicy16horizontalPolicyEv(void *this_) {
  return (QSizePolicy::Policy)((QSizePolicy*)this_)->horizontalPolicy();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:129
// [4] QSizePolicy::Policy verticalPolicy()
extern "C"
QSizePolicy::Policy C_ZNK11QSizePolicy14verticalPolicyEv(void *this_) {
  return (QSizePolicy::Policy)((QSizePolicy*)this_)->verticalPolicy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:130
// [4] QSizePolicy::ControlType controlType()
extern "C"
QSizePolicy::ControlType C_ZNK11QSizePolicy11controlTypeEv(void *this_) {
  return (QSizePolicy::ControlType)((QSizePolicy*)this_)->controlType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:132
// [-2] void setHorizontalPolicy(enum QSizePolicy::Policy)
extern "C"
void C_ZN11QSizePolicy19setHorizontalPolicyENS_6PolicyE(void *this_, QSizePolicy::Policy d) {
  ((QSizePolicy*)this_)->setHorizontalPolicy(d);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:133
// [-2] void setVerticalPolicy(enum QSizePolicy::Policy)
extern "C"
void C_ZN11QSizePolicy17setVerticalPolicyENS_6PolicyE(void *this_, QSizePolicy::Policy d) {
  ((QSizePolicy*)this_)->setVerticalPolicy(d);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:134
// [-2] void setControlType(enum QSizePolicy::ControlType)
extern "C"
void C_ZN11QSizePolicy14setControlTypeENS_11ControlTypeE(void *this_, QSizePolicy::ControlType type) {
  ((QSizePolicy*)this_)->setControlType(type);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:136
// [4] Qt::Orientations expandingDirections()
extern "C"
Qt::Orientations C_ZNK11QSizePolicy19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QSizePolicy*)this_)->expandingDirections();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:141
// [-2] void setHeightForWidth(_Bool)
extern "C"
void C_ZN11QSizePolicy17setHeightForWidthEb(void *this_, bool b) {
  ((QSizePolicy*)this_)->setHeightForWidth(b);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:142
// [1] bool hasHeightForWidth()
extern "C"
bool C_ZNK11QSizePolicy17hasHeightForWidthEv(void *this_) {
  return (bool)((QSizePolicy*)this_)->hasHeightForWidth();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:143
// [-2] void setWidthForHeight(_Bool)
extern "C"
void C_ZN11QSizePolicy17setWidthForHeightEb(void *this_, bool b) {
  ((QSizePolicy*)this_)->setWidthForHeight(b);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:144
// [1] bool hasWidthForHeight()
extern "C"
bool C_ZNK11QSizePolicy17hasWidthForHeightEv(void *this_) {
  return (bool)((QSizePolicy*)this_)->hasWidthForHeight();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:153
// [4] int horizontalStretch()
extern "C"
int C_ZNK11QSizePolicy17horizontalStretchEv(void *this_) {
  return (int)((QSizePolicy*)this_)->horizontalStretch();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:154
// [4] int verticalStretch()
extern "C"
int C_ZNK11QSizePolicy15verticalStretchEv(void *this_) {
  return (int)((QSizePolicy*)this_)->verticalStretch();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:155
// [-2] void setHorizontalStretch(int)
extern "C"
void C_ZN11QSizePolicy20setHorizontalStretchEi(void *this_, int stretchFactor) {
  ((QSizePolicy*)this_)->setHorizontalStretch(stretchFactor);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:156
// [-2] void setVerticalStretch(int)
extern "C"
void C_ZN11QSizePolicy18setVerticalStretchEi(void *this_, int stretchFactor) {
  ((QSizePolicy*)this_)->setVerticalStretch(stretchFactor);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:158
// [1] bool retainSizeWhenHidden()
extern "C"
bool C_ZNK11QSizePolicy20retainSizeWhenHiddenEv(void *this_) {
  return (bool)((QSizePolicy*)this_)->retainSizeWhenHidden();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:159
// [-2] void setRetainSizeWhenHidden(_Bool)
extern "C"
void C_ZN11QSizePolicy23setRetainSizeWhenHiddenEb(void *this_, bool retainSize) {
  ((QSizePolicy*)this_)->setRetainSizeWhenHidden(retainSize);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:161
// [-2] void transpose()
extern "C"
void C_ZN11QSizePolicy9transposeEv(void *this_) {
  ((QSizePolicy*)this_)->transpose();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:166
// [4] QSizePolicy transposed()
extern "C"
void* C_ZNK11QSizePolicy10transposedEv(void *this_) {
  auto rv = ((QSizePolicy*)this_)->transposed();
return new QSizePolicy(rv);
}

extern "C"
void C_ZN11QSizePolicyD2Ev(void *this_) {
  delete (QSizePolicy*)(this_);
}
//  main block end
