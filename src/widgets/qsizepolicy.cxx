//  header block begin
// /usr/include/qt/QtWidgets/qsizepolicy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsizepolicy.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSizePolicy is pure virtual: false
// QSizePolicy has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSizePolicy_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSizePolicy_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSizePolicy_t qt_meta_stringdata_MyQSizePolicy = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSizePolicy"
  },
  "MyQSizePolicy"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSizePolicy[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQSizePolicy : public QSizePolicy {
public:
  virtual ~MyQSizePolicy() {}
// void QSizePolicy()
MyQSizePolicy() : QSizePolicy() {}
// void QSizePolicy(QSizePolicy::Policy, QSizePolicy::Policy, QSizePolicy::ControlType)
MyQSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type_) : QSizePolicy(horizontal, vertical, type_) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:113
// [-2] void QSizePolicy()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSizePolicyC2Ev() {
  return  new QSizePolicy();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:116
// [-2] void QSizePolicy(QSizePolicy::Policy, QSizePolicy::Policy, QSizePolicy::ControlType)
extern "C" Q_DECL_EXPORT
void* C_ZN11QSizePolicyC2ENS_6PolicyES0_NS_11ControlTypeE(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical, QSizePolicy::ControlType type_) {
  return  new QSizePolicy(horizontal, vertical, type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:128
// [4] QSizePolicy::Policy horizontalPolicy()
extern "C" Q_DECL_EXPORT
QSizePolicy::Policy C_ZNK11QSizePolicy16horizontalPolicyEv(void *this_) {
  return (QSizePolicy::Policy)((QSizePolicy*)this_)->horizontalPolicy();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:129
// [4] QSizePolicy::Policy verticalPolicy()
extern "C" Q_DECL_EXPORT
QSizePolicy::Policy C_ZNK11QSizePolicy14verticalPolicyEv(void *this_) {
  return (QSizePolicy::Policy)((QSizePolicy*)this_)->verticalPolicy();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qsizepolicy.h:130
// [4] QSizePolicy::ControlType controlType()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
QSizePolicy::ControlType C_ZNK11QSizePolicy11controlTypeEv(void *this_) {
  return (QSizePolicy::ControlType)((QSizePolicy*)this_)->controlType();
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:132
// [-2] void setHorizontalPolicy(QSizePolicy::Policy)
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy19setHorizontalPolicyENS_6PolicyE(void *this_, QSizePolicy::Policy d) {
  ((QSizePolicy*)this_)->setHorizontalPolicy(d);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:133
// [-2] void setVerticalPolicy(QSizePolicy::Policy)
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy17setVerticalPolicyENS_6PolicyE(void *this_, QSizePolicy::Policy d) {
  ((QSizePolicy*)this_)->setVerticalPolicy(d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:134
// [-2] void setControlType(QSizePolicy::ControlType)
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy14setControlTypeENS_11ControlTypeE(void *this_, QSizePolicy::ControlType type_) {
  ((QSizePolicy*)this_)->setControlType(type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:136
// [4] Qt::Orientations expandingDirections()
extern "C" Q_DECL_EXPORT
Qt::Orientations C_ZNK11QSizePolicy19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QSizePolicy*)this_)->expandingDirections();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:141
// [-2] void setHeightForWidth(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy17setHeightForWidthEb(void *this_, bool b) {
  ((QSizePolicy*)this_)->setHeightForWidth(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:142
// [1] bool hasHeightForWidth()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QSizePolicy17hasHeightForWidthEv(void *this_) {
  return (bool)((QSizePolicy*)this_)->hasHeightForWidth();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:143
// [-2] void setWidthForHeight(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy17setWidthForHeightEb(void *this_, bool b) {
  ((QSizePolicy*)this_)->setWidthForHeight(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:144
// [1] bool hasWidthForHeight()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QSizePolicy17hasWidthForHeightEv(void *this_) {
  return (bool)((QSizePolicy*)this_)->hasWidthForHeight();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:146
// [1] bool operator==(const QSizePolicy &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QSizePolicyeqERKS_(void *this_, QSizePolicy* s) {
  return (bool)((QSizePolicy*)this_)->operator==(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:147
// [1] bool operator!=(const QSizePolicy &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QSizePolicyneERKS_(void *this_, QSizePolicy* s) {
  return (bool)((QSizePolicy*)this_)->operator!=(*s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:153
// [4] int horizontalStretch()
extern "C" Q_DECL_EXPORT
int C_ZNK11QSizePolicy17horizontalStretchEv(void *this_) {
  return (int)((QSizePolicy*)this_)->horizontalStretch();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:154
// [4] int verticalStretch()
extern "C" Q_DECL_EXPORT
int C_ZNK11QSizePolicy15verticalStretchEv(void *this_) {
  return (int)((QSizePolicy*)this_)->verticalStretch();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:155
// [-2] void setHorizontalStretch(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy20setHorizontalStretchEi(void *this_, int stretchFactor) {
  ((QSizePolicy*)this_)->setHorizontalStretch(stretchFactor);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:156
// [-2] void setVerticalStretch(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy18setVerticalStretchEi(void *this_, int stretchFactor) {
  ((QSizePolicy*)this_)->setVerticalStretch(stretchFactor);
}

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qsizepolicy.h:158
// [1] bool retainSizeWhenHidden()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZNK11QSizePolicy20retainSizeWhenHiddenEv(void *this_) {
  return (bool)((QSizePolicy*)this_)->retainSizeWhenHidden();
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qsizepolicy.h:159
// [-2] void setRetainSizeWhenHidden(bool)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy23setRetainSizeWhenHiddenEb(void *this_, bool retainSize) {
  ((QSizePolicy*)this_)->setRetainSizeWhenHidden(retainSize);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:161
// [-2] void transpose()
extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicy9transposeEv(void *this_) {
  ((QSizePolicy*)this_)->transpose();
}

// Public inline Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWidgets/qsizepolicy.h:166
// [4] QSizePolicy transposed()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSizePolicy10transposedEv(void *this_) {
  auto rv = ((QSizePolicy*)this_)->transposed();
return new QSizePolicy(rv);
}
#endif // QT_VERSION >= 0x050900


extern "C" Q_DECL_EXPORT
void C_ZN11QSizePolicyD2Ev(void *this_) {
  delete (QSizePolicy*)(this_);
}
//  main block end
