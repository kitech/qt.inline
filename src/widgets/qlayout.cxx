//  header block begin
// /usr/include/qt/QtWidgets/qlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLayout is pure virtual: true
// QLayout has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQLayout : public QLayout {
public:
  virtual ~MyQLayout() {}
// void QLayout(QWidget *)
MyQLayout(QWidget * parent) : QLayout(parent) {}
// void QLayout()
MyQLayout() : QLayout() {}
// Protected Visibility=Default Availability=Available
// [-2] void widgetEvent(QEvent *)
  virtual void widgetEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"widgetEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLayout::widgetEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLayout::childEvent(e);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void addChildLayout(QLayout *)
  virtual void addChildLayout(QLayout * l) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"addChildLayout", &handled, 1, (uint64_t)l, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLayout::addChildLayout(l);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void addChildWidget(QWidget *)
  virtual void addChildWidget(QWidget * w) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"addChildWidget", &handled, 1, (uint64_t)w, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLayout::addChildWidget(w);
  }
  }

// Protected Visibility=Default Availability=Available
// [1] bool adoptLayout(QLayout *)
  virtual bool adoptLayout(QLayout * layout) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"adoptLayout", &handled, 1, (uint64_t)layout, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QLayout::adoptLayout(layout);
  }
  }

// Protected Visibility=Default Availability=Available
// [16] QRect alignmentRect(const QRect &)
  virtual QRect alignmentRect(const QRect & arg0) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"alignmentRect", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // Record Record QRect
    } else {
    return QLayout::alignmentRect(arg0);
  }
  }

// void QLayout(QLayoutPrivate &, QLayout *, QWidget *)
MyQLayout(QLayoutPrivate & d, QLayout * arg1, QWidget * arg2) : QLayout(d, arg1, arg2) {}
};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:145
// [-2] void widgetEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout11widgetEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QLayout*)this_)->QLayout::widgetEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:146
// [-2] void childEvent(QChildEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout10childEventEP11QChildEvent(void *this_, QChildEvent * e) {
  ((QLayout*)this_)->QLayout::childEvent(e);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:147
// [-2] void addChildLayout(QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout14addChildLayoutEPS_(void *this_, QLayout * l) {
  ((QLayout*)this_)->QLayout::addChildLayout(l);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:148
// [-2] void addChildWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout14addChildWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QLayout*)this_)->QLayout::addChildWidget(w);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:149
// [1] bool adoptLayout(QLayout *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QLayout11adoptLayoutEPS_(void *this_, QLayout * layout) {
  return (bool)((QLayout*)this_)->QLayout::adoptLayout(layout);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:151
// [16] QRect alignmentRect(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout13alignmentRectERK5QRect(void *this_, QRect* arg0) {
  auto rv = ((QLayout*)this_)->QLayout::alignmentRect(*arg0);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout10metaObjectEv(void *this_) {
  return (void*)((QLayout*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:63
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayout11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QLayout*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:63
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QLayout11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QLayout*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:63
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayout2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLayout::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:63
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayout6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLayout::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:80
// [-2] void QLayout(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayoutC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQLayout*)(0);
  return 0; // new MyQLayout(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:81
// [-2] void QLayout()
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayoutC2Ev() {
  auto _nilp = (MyQLayout*)(0);
  return 0; // new MyQLayout();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:82
// [-2] void ~QLayout()
extern "C" Q_DECL_EXPORT
void C_ZN7QLayoutD2Ev(void *this_) {
  delete (QLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:84
// [4] int margin()
extern "C" Q_DECL_EXPORT
int C_ZNK7QLayout6marginEv(void *this_) {
  return (int)((QLayout*)this_)->margin();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:85
// [4] int spacing()
extern "C" Q_DECL_EXPORT
int C_ZNK7QLayout7spacingEv(void *this_) {
  return (int)((QLayout*)this_)->spacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:87
// [-2] void setMargin(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout9setMarginEi(void *this_, int arg0) {
  ((QLayout*)this_)->setMargin(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:88
// [-2] void setSpacing(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout10setSpacingEi(void *this_, int arg0) {
  ((QLayout*)this_)->setSpacing(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qlayout.h:90
// [-2] void setContentsMargins(int, int, int, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout18setContentsMarginsEiiii(void *this_, int left, int top, int right, int bottom) {
  ((QLayout*)this_)->setContentsMargins(left, top, right, bottom);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qlayout.h:91
// [-2] void setContentsMargins(const QMargins &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout18setContentsMarginsERK8QMargins(void *this_, QMargins* margins) {
  ((QLayout*)this_)->setContentsMargins(*margins);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qlayout.h:92
// [-2] void getContentsMargins(int *, int *, int *, int *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZNK7QLayout18getContentsMarginsEPiS0_S0_S0_(void *this_, int * left, int * top, int * right, int * bottom) {
  ((QLayout*)this_)->getContentsMargins(left, top, right, bottom);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qlayout.h:93
// [16] QMargins contentsMargins()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout15contentsMarginsEv(void *this_) {
  auto rv = ((QLayout*)this_)->contentsMargins();
return new QMargins(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qlayout.h:94
// [16] QRect contentsRect()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout12contentsRectEv(void *this_) {
  auto rv = ((QLayout*)this_)->contentsRect();
return new QRect(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:96
// [1] bool setAlignment(QWidget *, Qt::Alignment)
extern "C" Q_DECL_EXPORT
bool C_ZN7QLayout12setAlignmentEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * w, QFlags<Qt::AlignmentFlag> alignment) {
  return (bool)((QLayout*)this_)->setAlignment(w, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:97
// [1] bool setAlignment(QLayout *, Qt::Alignment)
extern "C" Q_DECL_EXPORT
bool C_ZN7QLayout12setAlignmentEPS_6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QLayout * l, QFlags<Qt::AlignmentFlag> alignment) {
  return (bool)((QLayout*)this_)->setAlignment(l, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:100
// [-2] void setSizeConstraint(QLayout::SizeConstraint)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout17setSizeConstraintENS_14SizeConstraintE(void *this_, QLayout::SizeConstraint arg0) {
  ((QLayout*)this_)->setSizeConstraint(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:101
// [4] QLayout::SizeConstraint sizeConstraint()
extern "C" Q_DECL_EXPORT
QLayout::SizeConstraint C_ZNK7QLayout14sizeConstraintEv(void *this_) {
  return (QLayout::SizeConstraint)((QLayout*)this_)->sizeConstraint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:102
// [-2] void setMenuBar(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout10setMenuBarEP7QWidget(void *this_, QWidget * w) {
  ((QLayout*)this_)->setMenuBar(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:103
// [8] QWidget * menuBar()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout7menuBarEv(void *this_) {
  return (void*)((QLayout*)this_)->menuBar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:105
// [8] QWidget * parentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout12parentWidgetEv(void *this_) {
  return (void*)((QLayout*)this_)->parentWidget();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:107
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout10invalidateEv(void *this_) {
  ((QLayout*)this_)->invalidate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:108
// [16] QRect geometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout8geometryEv(void *this_) {
  auto rv = ((QLayout*)this_)->geometry();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:109
// [1] bool activate()
extern "C" Q_DECL_EXPORT
bool C_ZN7QLayout8activateEv(void *this_) {
  return (bool)((QLayout*)this_)->activate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:110
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout6updateEv(void *this_) {
  ((QLayout*)this_)->update();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:112
// [-2] void addWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout9addWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QLayout*)this_)->addWidget(w);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:113
// [-2] void addItem(QLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * arg0) {
  ((QLayout*)this_)->addItem(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:115
// [-2] void removeWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout12removeWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QLayout*)this_)->removeWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:116
// [-2] void removeItem(QLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout10removeItemEP11QLayoutItem(void *this_, QLayoutItem * arg0) {
  ((QLayout*)this_)->removeItem(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:118
// [4] Qt::Orientations expandingDirections()
extern "C" Q_DECL_EXPORT
Qt::Orientations C_ZNK7QLayout19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QLayout*)this_)->expandingDirections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:119
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout11minimumSizeEv(void *this_) {
  auto rv = ((QLayout*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:120
// [8] QSize maximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout11maximumSizeEv(void *this_) {
  auto rv = ((QLayout*)this_)->maximumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:121
// [-2] void setGeometry(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout11setGeometryERK5QRect(void *this_, QRect* arg0) {
  ((QLayout*)this_)->setGeometry(*arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:122
// [8] QLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout6itemAtEi(void *this_, int index) {
  return (void*)((QLayout*)this_)->itemAt(index);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:123
// [8] QLayoutItem * takeAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayout6takeAtEi(void *this_, int index) {
  return (void*)((QLayout*)this_)->takeAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:124
// [4] int indexOf(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK7QLayout7indexOfEP7QWidget(void *this_, QWidget * arg0) {
  return (int)((QLayout*)this_)->indexOf(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:125
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK7QLayout5countEv(void *this_) {
  return (int)((QLayout*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:126
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QLayout7isEmptyEv(void *this_) {
  return (bool)((QLayout*)this_)->isEmpty();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:127
// [4] QSizePolicy::ControlTypes controlTypes()
extern "C" Q_DECL_EXPORT
QSizePolicy::ControlTypes C_ZNK7QLayout12controlTypesEv(void *this_) {
  return (QSizePolicy::ControlTypes)((QLayout*)this_)->controlTypes();
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qlayout.h:130
// [8] QLayoutItem * replaceWidget(QWidget *, QWidget *, Qt::FindChildOptions)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayout13replaceWidgetEP7QWidgetS1_6QFlagsIN2Qt15FindChildOptionEE(void *this_, QWidget * from, QWidget * to, QFlags<Qt::FindChildOption> options) {
  return (void*)((QLayout*)this_)->replaceWidget(from, to, options);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:132
// [4] int totalHeightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK7QLayout19totalHeightForWidthEi(void *this_, int w) {
  return (int)((QLayout*)this_)->totalHeightForWidth(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:133
// [8] QSize totalMinimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout16totalMinimumSizeEv(void *this_) {
  auto rv = ((QLayout*)this_)->totalMinimumSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:134
// [8] QSize totalMaximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout16totalMaximumSizeEv(void *this_) {
  auto rv = ((QLayout*)this_)->totalMaximumSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:135
// [8] QSize totalSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QLayout13totalSizeHintEv(void *this_) {
  auto rv = ((QLayout*)this_)->totalSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:136
// [8] QLayout * layout()
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayout6layoutEv(void *this_) {
  return (void*)((QLayout*)this_)->layout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:138
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QLayout10setEnabledEb(void *this_, bool arg0) {
  ((QLayout*)this_)->setEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:139
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QLayout9isEnabledEv(void *this_) {
  return (bool)((QLayout*)this_)->isEnabled();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayout.h:142
// [8] QSize closestAcceptableSize(const QWidget *, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QLayout21closestAcceptableSizeEPK7QWidgetRK5QSize(const QWidget * w, QSize* s) {
  auto rv = QLayout::closestAcceptableSize(w, *s);
return new QSize(rv);
}

//  main block end
