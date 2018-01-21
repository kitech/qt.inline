//  header block begin
// /usr/include/qt/QtWidgets/qsizepolicy.h
#include <qsizepolicy.h>
#include <QtWidgets>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:96
// void QSizePolicy()
extern "C"
void* C_ZN11QSizePolicyC1Ev() {
  return new QSizePolicy();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:98
// void QSizePolicy(enum QSizePolicy::Policy, enum QSizePolicy::Policy, enum QSizePolicy::ControlType)
extern "C"
void* C_ZN11QSizePolicyC1ENS_6PolicyES0_NS_11ControlTypeE(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type) {
  return new QSizePolicy(horizontal, vertical, type);
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:104
// QSizePolicy::Policy horizontalPolicy()
extern "C"
void C_ZNK11QSizePolicy16horizontalPolicyEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->horizontalPolicy();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:105
// QSizePolicy::Policy verticalPolicy()
extern "C"
void C_ZNK11QSizePolicy14verticalPolicyEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->verticalPolicy();
}
// /usr/include/qt/QtWidgets/qsizepolicy.h:106
// QSizePolicy::ControlType controlType()
extern "C"
void C_ZNK11QSizePolicy11controlTypeEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->controlType();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:108
// void setHorizontalPolicy(enum QSizePolicy::Policy)
extern "C"
void C_ZN11QSizePolicy19setHorizontalPolicyENS_6PolicyE(void *this_, QSizePolicy::Policy d) {
  ((QSizePolicy*)this_)->setHorizontalPolicy(d);
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:109
// void setVerticalPolicy(enum QSizePolicy::Policy)
extern "C"
void C_ZN11QSizePolicy17setVerticalPolicyENS_6PolicyE(void *this_, QSizePolicy::Policy d) {
  ((QSizePolicy*)this_)->setVerticalPolicy(d);
}
// /usr/include/qt/QtWidgets/qsizepolicy.h:110
// void setControlType(enum QSizePolicy::ControlType)
extern "C"
void C_ZN11QSizePolicy14setControlTypeENS_11ControlTypeE(void *this_, QSizePolicy::ControlType type) {
  ((QSizePolicy*)this_)->setControlType(type);
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:112
// Qt::Orientations expandingDirections()
extern "C"
void C_ZNK11QSizePolicy19expandingDirectionsEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->expandingDirections();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:117
// void setHeightForWidth(_Bool)
extern "C"
void C_ZN11QSizePolicy17setHeightForWidthEb(void *this_, bool b) {
  ((QSizePolicy*)this_)->setHeightForWidth(b);
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:118
// bool hasHeightForWidth()
extern "C"
void C_ZNK11QSizePolicy17hasHeightForWidthEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->hasHeightForWidth();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:119
// void setWidthForHeight(_Bool)
extern "C"
void C_ZN11QSizePolicy17setWidthForHeightEb(void *this_, bool b) {
  ((QSizePolicy*)this_)->setWidthForHeight(b);
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:120
// bool hasWidthForHeight()
extern "C"
void C_ZNK11QSizePolicy17hasWidthForHeightEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->hasWidthForHeight();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:129
// int horizontalStretch()
extern "C"
void C_ZNK11QSizePolicy17horizontalStretchEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->horizontalStretch();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:130
// int verticalStretch()
extern "C"
void C_ZNK11QSizePolicy15verticalStretchEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->verticalStretch();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:131
// void setHorizontalStretch(int)
extern "C"
void C_ZN11QSizePolicy20setHorizontalStretchEi(void *this_, int stretchFactor) {
  ((QSizePolicy*)this_)->setHorizontalStretch(stretchFactor);
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:132
// void setVerticalStretch(int)
extern "C"
void C_ZN11QSizePolicy18setVerticalStretchEi(void *this_, int stretchFactor) {
  ((QSizePolicy*)this_)->setVerticalStretch(stretchFactor);
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:134
// bool retainSizeWhenHidden()
extern "C"
void C_ZNK11QSizePolicy20retainSizeWhenHiddenEv(void *this_) {
  /*return*/ ((QSizePolicy*)this_)->retainSizeWhenHidden();
}
// inline
// /usr/include/qt/QtWidgets/qsizepolicy.h:135
// void setRetainSizeWhenHidden(_Bool)
extern "C"
void C_ZN11QSizePolicy23setRetainSizeWhenHiddenEb(void *this_, bool retainSize) {
  ((QSizePolicy*)this_)->setRetainSizeWhenHidden(retainSize);
}
// /usr/include/qt/QtWidgets/qsizepolicy.h:137
// void transpose()
extern "C"
void C_ZN11QSizePolicy9transposeEv(void *this_) {
  ((QSizePolicy*)this_)->transpose();
}
//  main block end
