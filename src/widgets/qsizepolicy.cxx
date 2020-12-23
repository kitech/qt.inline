//  header block begin

// /usr/include/qt/QtWidgets/qsizepolicy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsizepolicy.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSizePolicy is pure virtual: false false
// QSizePolicy has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsizepolicy(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:113
// [-2] void QSizePolicy() 
// (12)qm2384431746 (20)_ZN11QSizePolicyC2Ev
/*void* qm2384431746()*/{
  ;
  this_ =  new QSizePolicy();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:116
// [-2] void QSizePolicy(QSizePolicy::Policy, QSizePolicy::Policy, QSizePolicy::ControlType) 
// (12)qm1433235332 (50)_ZN11QSizePolicyC2ENS_6PolicyES0_NS_11ControlTypeE
/*void* qm1433235332(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type_)*/{
  QSizePolicy::Policy horizontal = *(QSizePolicy::Policy*)this_; QSizePolicy::Policy vertical = *(QSizePolicy::Policy*)this_; QSizePolicy::ControlType type_ = *(QSizePolicy::ControlType*)this_;
  this_ =  new QSizePolicy(horizontal, vertical, type_);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:128
// [4] QSizePolicy::Policy horizontalPolicy() const
// (12)qm4169275924 (37)_ZNK11QSizePolicy16horizontalPolicyEv
//static
/*void qm4169275924()*/ {
  ;
  (void) ((QSizePolicy*)this_)->horizontalPolicy();
   auto xptr = (QSizePolicy::Policy (QSizePolicy::*)() const ) &QSizePolicy::horizontalPolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:129
// [4] QSizePolicy::Policy verticalPolicy() const
// (12)qm2249618644 (35)_ZNK11QSizePolicy14verticalPolicyEv
//static
/*void qm2249618644()*/ {
  ;
  (void) ((QSizePolicy*)this_)->verticalPolicy();
   auto xptr = (QSizePolicy::Policy (QSizePolicy::*)() const ) &QSizePolicy::verticalPolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:132
// [-2] void setHorizontalPolicy(QSizePolicy::Policy) 
// (12)qm1010314378 (49)_ZN11QSizePolicy19setHorizontalPolicyENS_6PolicyE
//static
/*void qm1010314378(QSizePolicy::Policy d)*/ {
  QSizePolicy::Policy d = *(QSizePolicy::Policy*)this_;
  (void) ((QSizePolicy*)this_)->setHorizontalPolicy(d);
   auto xptr = (void (QSizePolicy::*)(QSizePolicy::Policy) ) &QSizePolicy::setHorizontalPolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:133
// [-2] void setVerticalPolicy(QSizePolicy::Policy) 
// (12)qm4240126134 (47)_ZN11QSizePolicy17setVerticalPolicyENS_6PolicyE
//static
/*void qm4240126134(QSizePolicy::Policy d)*/ {
  QSizePolicy::Policy d = *(QSizePolicy::Policy*)this_;
  (void) ((QSizePolicy*)this_)->setVerticalPolicy(d);
   auto xptr = (void (QSizePolicy::*)(QSizePolicy::Policy) ) &QSizePolicy::setVerticalPolicy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:136
// [4] Qt::Orientations expandingDirections() const
// (12)qm2411688940 (40)_ZNK11QSizePolicy19expandingDirectionsEv
//static
/*void qm2411688940()*/ {
  ;
  (void) ((QSizePolicy*)this_)->expandingDirections();
   auto xptr = (QFlags<Qt::Orientation> (QSizePolicy::*)() const ) &QSizePolicy::expandingDirections;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:141
// [-2] void setHeightForWidth(bool) 
// (10)qm24279709 (37)_ZN11QSizePolicy17setHeightForWidthEb
//static
/*void qm24279709(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QSizePolicy*)this_)->setHeightForWidth(b);
   auto xptr = (void (QSizePolicy::*)(bool) ) &QSizePolicy::setHeightForWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:142
// [1] bool hasHeightForWidth() const
// (12)qm3932835325 (38)_ZNK11QSizePolicy17hasHeightForWidthEv
//static
/*void qm3932835325()*/ {
  ;
  (void) ((QSizePolicy*)this_)->hasHeightForWidth();
   auto xptr = (bool (QSizePolicy::*)() const ) &QSizePolicy::hasHeightForWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:143
// [-2] void setWidthForHeight(bool) 
// (12)qm1864268894 (37)_ZN11QSizePolicy17setWidthForHeightEb
//static
/*void qm1864268894(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QSizePolicy*)this_)->setWidthForHeight(b);
   auto xptr = (void (QSizePolicy::*)(bool) ) &QSizePolicy::setWidthForHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:144
// [1] bool hasWidthForHeight() const
// (12)qm2215004990 (38)_ZNK11QSizePolicy17hasWidthForHeightEv
//static
/*void qm2215004990()*/ {
  ;
  (void) ((QSizePolicy*)this_)->hasWidthForHeight();
   auto xptr = (bool (QSizePolicy::*)() const ) &QSizePolicy::hasWidthForHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:146
// [1] bool operator==(const QSizePolicy &) const
// (12)qm3312546462 (24)_ZNK11QSizePolicyeqERKS_
//static
/*void qm3312546462(const QSizePolicy & s)*/ {
  const QSizePolicy & s = *(const QSizePolicy *)this_;
  (void) ((QSizePolicy*)this_)->operator==(s);
  // auto xptr = (bool (QSizePolicy::*)(QSizePolicy const&) const ) &QSizePolicy::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:147
// [1] bool operator!=(const QSizePolicy &) const
// (12)qm1597073129 (24)_ZNK11QSizePolicyneERKS_
//static
/*void qm1597073129(const QSizePolicy & s)*/ {
  const QSizePolicy & s = *(const QSizePolicy *)this_;
  (void) ((QSizePolicy*)this_)->operator!=(s);
  // auto xptr = (bool (QSizePolicy::*)(QSizePolicy const&) const ) &QSizePolicy::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:153
// [4] int horizontalStretch() const
// (12)qm1707355167 (38)_ZNK11QSizePolicy17horizontalStretchEv
//static
/*void qm1707355167()*/ {
  ;
  (void) ((QSizePolicy*)this_)->horizontalStretch();
   auto xptr = (int (QSizePolicy::*)() const ) &QSizePolicy::horizontalStretch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:154
// [4] int verticalStretch() const
// (12)qm1961621350 (36)_ZNK11QSizePolicy15verticalStretchEv
//static
/*void qm1961621350()*/ {
  ;
  (void) ((QSizePolicy*)this_)->verticalStretch();
   auto xptr = (int (QSizePolicy::*)() const ) &QSizePolicy::verticalStretch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:155
// [-2] void setHorizontalStretch(int) 
// (12)qm3926363357 (40)_ZN11QSizePolicy20setHorizontalStretchEi
//static
/*void qm3926363357(int stretchFactor)*/ {
  int stretchFactor = *(int*)this_;
  (void) ((QSizePolicy*)this_)->setHorizontalStretch(stretchFactor);
   auto xptr = (void (QSizePolicy::*)(int) ) &QSizePolicy::setHorizontalStretch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:156
// [-2] void setVerticalStretch(int) 
// (12)qm1658294659 (38)_ZN11QSizePolicy18setVerticalStretchEi
//static
/*void qm1658294659(int stretchFactor)*/ {
  int stretchFactor = *(int*)this_;
  (void) ((QSizePolicy*)this_)->setVerticalStretch(stretchFactor);
   auto xptr = (void (QSizePolicy::*)(int) ) &QSizePolicy::setVerticalStretch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:158
// [1] bool retainSizeWhenHidden() const
// (12)qm2506565142 (41)_ZNK11QSizePolicy20retainSizeWhenHiddenEv
//static
/*void qm2506565142()*/ {
  ;
  (void) ((QSizePolicy*)this_)->retainSizeWhenHidden();
   auto xptr = (bool (QSizePolicy::*)() const ) &QSizePolicy::retainSizeWhenHidden;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:159
// [-2] void setRetainSizeWhenHidden(bool) 
// (12)qm1702233246 (43)_ZN11QSizePolicy23setRetainSizeWhenHiddenEb
//static
/*void qm1702233246(bool retainSize)*/ {
  bool retainSize = *(bool*)this_;
  (void) ((QSizePolicy*)this_)->setRetainSizeWhenHidden(retainSize);
   auto xptr = (void (QSizePolicy::*)(bool) ) &QSizePolicy::setRetainSizeWhenHidden;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:161
// [-2] void transpose() 
// (11)qm492676765 (28)_ZN11QSizePolicy9transposeEv
//static
/*void qm492676765()*/ {
  ;
  (void) ((QSizePolicy*)this_)->transpose();
   auto xptr = (void (QSizePolicy::*)() ) &QSizePolicy::transpose;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:166
// [4] QSizePolicy transposed() const
// (12)qm1137864496 (31)_ZNK11QSizePolicy10transposedEv
//static
/*void qm1137864496()*/ {
  ;
  (void) ((QSizePolicy*)this_)->transposed();
   auto xptr = (QSizePolicy (QSizePolicy::*)() const ) &QSizePolicy::transposed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QSizePolicyD2Ev(void *this_)*/ {
  delete (QSizePolicy*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsizepolicy
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
