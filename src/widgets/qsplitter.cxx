//  header block begin
// /usr/include/qt/QtWidgets/qsplitter.h
#include <qsplitter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSplitter is pure virtual: false
// QSplitter has virtual projected: true
//  header block end

//  main block begin

class MyQSplitter : public QSplitter {
public:
  virtual ~MyQSplitter() {}
// void QSplitter(class QWidget *)
MyQSplitter(QWidget * parent) : QSplitter(parent) {}
// void QSplitter(Qt::Orientation, class QWidget *)
MyQSplitter(Qt::Orientation arg0, QWidget * parent) : QSplitter(arg0, parent) {}
// QSplitterHandle * createHandle()
  virtual QSplitterHandle * createHandle() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createHandle", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSplitterHandle *)(irv);
      // PointerPointerQSplitterHandle *
    } else {
    return QSplitter::createHandle();
  }
  }
// void childEvent(class QChildEvent *)
  virtual void childEvent(QChildEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"childEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitter::childEvent(arg0);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSplitter::event(arg0);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitter::resizeEvent(arg0);
  }
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitter::changeEvent(arg0);
  }
  }
// void moveSplitter(int, int)
  virtual void moveSplitter(int pos, int index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveSplitter", &handled, 2, (uint64_t)pos, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitter::moveSplitter(pos, index);
  }
  }
// void setRubberBand(int)
  virtual void setRubberBand(int position) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setRubberBand", &handled, 1, (uint64_t)position, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplitter::setRubberBand(position);
  }
  }
// int closestLegalPosition(int, int)
  virtual int closestLegalPosition(int arg0, int arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closestLegalPosition", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QSplitter::closestLegalPosition(arg0, arg1);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:59
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QSplitter10metaObjectEv(void *this_) {
  return (void*)((QSplitter*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:67
// [-2] void QSplitter(class QWidget *)
extern "C"
void* C_ZN9QSplitterC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSplitter*)(0);
  return  new MyQSplitter(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:68
// [-2] void QSplitter(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN9QSplitterC2EN2Qt11OrientationEP7QWidget(Qt::Orientation arg0, QWidget * parent) {
  auto _nilp = (MyQSplitter*)(0);
  return  new MyQSplitter(arg0, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:69
// [-2] void ~QSplitter()
extern "C"
void C_ZN9QSplitterD2Ev(void *this_) {
  delete (QSplitter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:71
// [-2] void addWidget(class QWidget *)
extern "C"
void C_ZN9QSplitter9addWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QSplitter*)this_)->addWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:72
// [-2] void insertWidget(int, class QWidget *)
extern "C"
void C_ZN9QSplitter12insertWidgetEiP7QWidget(void *this_, int index, QWidget * widget) {
  ((QSplitter*)this_)->insertWidget(index, widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:73
// [8] QWidget * replaceWidget(int, class QWidget *)
extern "C"
void* C_ZN9QSplitter13replaceWidgetEiP7QWidget(void *this_, int index, QWidget * widget) {
  return (void*)((QSplitter*)this_)->replaceWidget(index, widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:75
// [-2] void setOrientation(Qt::Orientation)
extern "C"
void C_ZN9QSplitter14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation arg0) {
  ((QSplitter*)this_)->setOrientation(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:76
// [4] Qt::Orientation orientation()
extern "C"
Qt::Orientation C_ZNK9QSplitter11orientationEv(void *this_) {
  return (Qt::Orientation)((QSplitter*)this_)->orientation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:78
// [-2] void setChildrenCollapsible(_Bool)
extern "C"
void C_ZN9QSplitter22setChildrenCollapsibleEb(void *this_, bool arg0) {
  ((QSplitter*)this_)->setChildrenCollapsible(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:79
// [1] bool childrenCollapsible()
extern "C"
bool C_ZNK9QSplitter19childrenCollapsibleEv(void *this_) {
  return (bool)((QSplitter*)this_)->childrenCollapsible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:81
// [-2] void setCollapsible(int, _Bool)
extern "C"
void C_ZN9QSplitter14setCollapsibleEib(void *this_, int index, bool arg1) {
  ((QSplitter*)this_)->setCollapsible(index, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:82
// [1] bool isCollapsible(int)
extern "C"
bool C_ZNK9QSplitter13isCollapsibleEi(void *this_, int index) {
  return (bool)((QSplitter*)this_)->isCollapsible(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:83
// [-2] void setOpaqueResize(_Bool)
extern "C"
void C_ZN9QSplitter15setOpaqueResizeEb(void *this_, bool opaque) {
  ((QSplitter*)this_)->setOpaqueResize(opaque);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:84
// [1] bool opaqueResize()
extern "C"
bool C_ZNK9QSplitter12opaqueResizeEv(void *this_) {
  return (bool)((QSplitter*)this_)->opaqueResize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:85
// [-2] void refresh()
extern "C"
void C_ZN9QSplitter7refreshEv(void *this_) {
  ((QSplitter*)this_)->refresh();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:87
// [8] QSize sizeHint()
extern "C"
void* C_ZNK9QSplitter8sizeHintEv(void *this_) {
  auto rv = ((QSplitter*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:88
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK9QSplitter15minimumSizeHintEv(void *this_) {
  auto rv = ((QSplitter*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:93
// [8] QByteArray saveState()
extern "C"
void* C_ZNK9QSplitter9saveStateEv(void *this_) {
  auto rv = ((QSplitter*)this_)->saveState();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:94
// [1] bool restoreState(const class QByteArray &)
extern "C"
bool C_ZN9QSplitter12restoreStateERK10QByteArray(void *this_, QByteArray* state) {
  return (bool)((QSplitter*)this_)->restoreState(*state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:96
// [4] int handleWidth()
extern "C"
int C_ZNK9QSplitter11handleWidthEv(void *this_) {
  return (int)((QSplitter*)this_)->handleWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:97
// [-2] void setHandleWidth(int)
extern "C"
void C_ZN9QSplitter14setHandleWidthEi(void *this_, int arg0) {
  ((QSplitter*)this_)->setHandleWidth(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:99
// [4] int indexOf(class QWidget *)
extern "C"
int C_ZNK9QSplitter7indexOfEP7QWidget(void *this_, QWidget * w) {
  return (int)((QSplitter*)this_)->indexOf(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:100
// [8] QWidget * widget(int)
extern "C"
void* C_ZNK9QSplitter6widgetEi(void *this_, int index) {
  return (void*)((QSplitter*)this_)->widget(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:101
// [4] int count()
extern "C"
int C_ZNK9QSplitter5countEv(void *this_) {
  return (int)((QSplitter*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:103
// [-2] void getRange(int, int *, int *)
extern "C"
void C_ZNK9QSplitter8getRangeEiPiS0_(void *this_, int index, int * arg1, int * arg2) {
  ((QSplitter*)this_)->getRange(index, arg1, arg2);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:104
// [8] QSplitterHandle * handle(int)
extern "C"
void* C_ZNK9QSplitter6handleEi(void *this_, int index) {
  return (void*)((QSplitter*)this_)->handle(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:106
// [-2] void setStretchFactor(int, int)
extern "C"
void C_ZN9QSplitter16setStretchFactorEii(void *this_, int index, int stretch) {
  ((QSplitter*)this_)->setStretchFactor(index, stretch);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:109
// [-2] void splitterMoved(int, int)
extern "C"
void C_ZN9QSplitter13splitterMovedEii(void *this_, int pos, int index) {
  ((QSplitter*)this_)->splitterMoved(pos, index);
}
//  main block end
