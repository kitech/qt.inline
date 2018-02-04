//  header block begin
// /usr/include/qt/QtWidgets/qlayout.h
#include <qlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLayout is pure virtual: true
// QLayout has virtual projected: true
//  header block end

//  main block begin

class MyQLayout : public QLayout {
public:
  virtual ~MyQLayout() {}
// void QLayout(class QWidget *)
MyQLayout(QWidget * parent) : QLayout(parent) {}
// void QLayout()
MyQLayout() : QLayout() {}
// void widgetEvent(class QEvent *)
  virtual void widgetEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"widgetEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLayout::widgetEvent(arg0);
  }
  }
// void childEvent(class QChildEvent *)
  virtual void childEvent(QChildEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"childEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLayout::childEvent(e);
  }
  }
// void addChildLayout(class QLayout *)
  virtual void addChildLayout(QLayout * l) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"addChildLayout", &handled, 1, (uint64_t)l, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLayout::addChildLayout(l);
  }
  }
// void addChildWidget(class QWidget *)
  virtual void addChildWidget(QWidget * w) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"addChildWidget", &handled, 1, (uint64_t)w, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLayout::addChildWidget(w);
  }
  }
// bool adoptLayout(class QLayout *)
  virtual bool adoptLayout(QLayout * layout) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"adoptLayout", &handled, 1, (uint64_t)layout, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QLayout::adoptLayout(layout);
  }
  }
// QRect alignmentRect(const class QRect &)
  virtual QRect alignmentRect(const QRect & arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"alignmentRect", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // RecordRecordQRect
    } else {
    return QLayout::alignmentRect(arg0);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:63
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK7QLayout10metaObjectEv(void *this_) {
  return (void*)((QLayout*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:80
// [-2] void QLayout(class QWidget *)
extern "C"
void* C_ZN7QLayoutC1EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQLayout*)(0);
  return 0; // new MyQLayout(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:81
// [-2] void QLayout()
extern "C"
void* C_ZN7QLayoutC1Ev() {
  auto _nilp = (MyQLayout*)(0);
  return 0; // new MyQLayout();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:82
// [-2] void ~QLayout()
extern "C"
void C_ZN7QLayoutD2Ev(void *this_) {
  delete (QLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:84
// [4] int margin()
extern "C"
int C_ZNK7QLayout6marginEv(void *this_) {
  return (int)((QLayout*)this_)->margin();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:85
// [4] int spacing()
extern "C"
int C_ZNK7QLayout7spacingEv(void *this_) {
  return (int)((QLayout*)this_)->spacing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:87
// [-2] void setMargin(int)
extern "C"
void C_ZN7QLayout9setMarginEi(void *this_, int arg0) {
  ((QLayout*)this_)->setMargin(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:88
// [-2] void setSpacing(int)
extern "C"
void C_ZN7QLayout10setSpacingEi(void *this_, int arg0) {
  ((QLayout*)this_)->setSpacing(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:90
// [-2] void setContentsMargins(int, int, int, int)
extern "C"
void C_ZN7QLayout18setContentsMarginsEiiii(void *this_, int left, int top, int right, int bottom) {
  ((QLayout*)this_)->setContentsMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:91
// [-2] void setContentsMargins(const class QMargins &)
extern "C"
void C_ZN7QLayout18setContentsMarginsERK8QMargins(void *this_, QMargins* margins) {
  ((QLayout*)this_)->setContentsMargins(*margins);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:92
// [-2] void getContentsMargins(int *, int *, int *, int *)
extern "C"
void C_ZNK7QLayout18getContentsMarginsEPiS0_S0_S0_(void *this_, int * left, int * top, int * right, int * bottom) {
  ((QLayout*)this_)->getContentsMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:93
// [16] QMargins contentsMargins()
extern "C"
void* C_ZNK7QLayout15contentsMarginsEv(void *this_) {
  auto rv = ((QLayout*)this_)->contentsMargins();
return new QMargins(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:94
// [16] QRect contentsRect()
extern "C"
void* C_ZNK7QLayout12contentsRectEv(void *this_) {
  auto rv = ((QLayout*)this_)->contentsRect();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:96
// [1] bool setAlignment(class QWidget *, Qt::Alignment)
extern "C"
bool C_ZN7QLayout12setAlignmentEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * w, QFlags<Qt::AlignmentFlag> alignment) {
  return (bool)((QLayout*)this_)->setAlignment(w, alignment);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:97
// [1] bool setAlignment(class QLayout *, Qt::Alignment)
extern "C"
bool C_ZN7QLayout12setAlignmentEPS_6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QLayout * l, QFlags<Qt::AlignmentFlag> alignment) {
  return (bool)((QLayout*)this_)->setAlignment(l, alignment);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:100
// [-2] void setSizeConstraint(enum QLayout::SizeConstraint)
extern "C"
void C_ZN7QLayout17setSizeConstraintENS_14SizeConstraintE(void *this_, QLayout::SizeConstraint arg0) {
  ((QLayout*)this_)->setSizeConstraint(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:101
// [4] QLayout::SizeConstraint sizeConstraint()
extern "C"
QLayout::SizeConstraint C_ZNK7QLayout14sizeConstraintEv(void *this_) {
  return (QLayout::SizeConstraint)((QLayout*)this_)->sizeConstraint();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:102
// [-2] void setMenuBar(class QWidget *)
extern "C"
void C_ZN7QLayout10setMenuBarEP7QWidget(void *this_, QWidget * w) {
  ((QLayout*)this_)->setMenuBar(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:103
// [8] QWidget * menuBar()
extern "C"
void* C_ZNK7QLayout7menuBarEv(void *this_) {
  return (void*)((QLayout*)this_)->menuBar();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:105
// [8] QWidget * parentWidget()
extern "C"
void* C_ZNK7QLayout12parentWidgetEv(void *this_) {
  return (void*)((QLayout*)this_)->parentWidget();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:107
// [-2] void invalidate()
extern "C"
void C_ZN7QLayout10invalidateEv(void *this_) {
  ((QLayout*)this_)->invalidate();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:108
// [16] QRect geometry()
extern "C"
void* C_ZNK7QLayout8geometryEv(void *this_) {
  auto rv = ((QLayout*)this_)->geometry();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:109
// [1] bool activate()
extern "C"
bool C_ZN7QLayout8activateEv(void *this_) {
  return (bool)((QLayout*)this_)->activate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:110
// [-2] void update()
extern "C"
void C_ZN7QLayout6updateEv(void *this_) {
  ((QLayout*)this_)->update();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:112
// [-2] void addWidget(class QWidget *)
extern "C"
void C_ZN7QLayout9addWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QLayout*)this_)->addWidget(w);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:113
// [-2] void addItem(class QLayoutItem *)
extern "C"
void C_ZN7QLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * arg0) {
  ((QLayout*)this_)->addItem(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:115
// [-2] void removeWidget(class QWidget *)
extern "C"
void C_ZN7QLayout12removeWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QLayout*)this_)->removeWidget(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:116
// [-2] void removeItem(class QLayoutItem *)
extern "C"
void C_ZN7QLayout10removeItemEP11QLayoutItem(void *this_, QLayoutItem * arg0) {
  ((QLayout*)this_)->removeItem(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:118
// [4] Qt::Orientations expandingDirections()
extern "C"
Qt::Orientations C_ZNK7QLayout19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QLayout*)this_)->expandingDirections();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:119
// [8] QSize minimumSize()
extern "C"
void* C_ZNK7QLayout11minimumSizeEv(void *this_) {
  auto rv = ((QLayout*)this_)->minimumSize();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:120
// [8] QSize maximumSize()
extern "C"
void* C_ZNK7QLayout11maximumSizeEv(void *this_) {
  auto rv = ((QLayout*)this_)->maximumSize();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:121
// [-2] void setGeometry(const class QRect &)
extern "C"
void C_ZN7QLayout11setGeometryERK5QRect(void *this_, QRect* arg0) {
  ((QLayout*)this_)->setGeometry(*arg0);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:122
// [8] QLayoutItem * itemAt(int)
extern "C"
void* C_ZNK7QLayout6itemAtEi(void *this_, int index) {
  return (void*)((QLayout*)this_)->itemAt(index);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:123
// [8] QLayoutItem * takeAt(int)
extern "C"
void* C_ZN7QLayout6takeAtEi(void *this_, int index) {
  return (void*)((QLayout*)this_)->takeAt(index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:124
// [4] int indexOf(class QWidget *)
extern "C"
int C_ZNK7QLayout7indexOfEP7QWidget(void *this_, QWidget * arg0) {
  return (int)((QLayout*)this_)->indexOf(arg0);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:125
// [4] int count()
extern "C"
int C_ZNK7QLayout5countEv(void *this_) {
  return (int)((QLayout*)this_)->count();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:126
// [1] bool isEmpty()
extern "C"
bool C_ZNK7QLayout7isEmptyEv(void *this_) {
  return (bool)((QLayout*)this_)->isEmpty();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:127
// [4] QSizePolicy::ControlTypes controlTypes()
extern "C"
QSizePolicy::ControlTypes C_ZNK7QLayout12controlTypesEv(void *this_) {
  return (QSizePolicy::ControlTypes)((QLayout*)this_)->controlTypes();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:130
// [8] QLayoutItem * replaceWidget(class QWidget *, class QWidget *, Qt::FindChildOptions)
extern "C"
void* C_ZN7QLayout13replaceWidgetEP7QWidgetS1_6QFlagsIN2Qt15FindChildOptionEE(void *this_, QWidget * from, QWidget * to, QFlags<Qt::FindChildOption> options) {
  return (void*)((QLayout*)this_)->replaceWidget(from, to, options);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:132
// [4] int totalHeightForWidth(int)
extern "C"
int C_ZNK7QLayout19totalHeightForWidthEi(void *this_, int w) {
  return (int)((QLayout*)this_)->totalHeightForWidth(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:133
// [8] QSize totalMinimumSize()
extern "C"
void* C_ZNK7QLayout16totalMinimumSizeEv(void *this_) {
  auto rv = ((QLayout*)this_)->totalMinimumSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:134
// [8] QSize totalMaximumSize()
extern "C"
void* C_ZNK7QLayout16totalMaximumSizeEv(void *this_) {
  auto rv = ((QLayout*)this_)->totalMaximumSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:135
// [8] QSize totalSizeHint()
extern "C"
void* C_ZNK7QLayout13totalSizeHintEv(void *this_) {
  auto rv = ((QLayout*)this_)->totalSizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:136
// [8] QLayout * layout()
extern "C"
void* C_ZN7QLayout6layoutEv(void *this_) {
  return (void*)((QLayout*)this_)->layout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:138
// [-2] void setEnabled(_Bool)
extern "C"
void C_ZN7QLayout10setEnabledEb(void *this_, bool arg0) {
  ((QLayout*)this_)->setEnabled(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:139
// [1] bool isEnabled()
extern "C"
bool C_ZNK7QLayout9isEnabledEv(void *this_) {
  return (bool)((QLayout*)this_)->isEnabled();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:142
// [8] QSize closestAcceptableSize(const class QWidget *, const class QSize &)
extern "C"
void* C_ZN7QLayout21closestAcceptableSizeEPK7QWidgetRK5QSize(const QWidget * w, QSize* s) {
  auto rv = QLayout::closestAcceptableSize(w, *s);
return new QSize(rv);
}
//  main block end
