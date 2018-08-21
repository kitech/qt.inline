//  header block begin
// /usr/include/qt/QtWidgets/qsplitter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsplitter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSplitter is pure virtual: false
// QSplitter has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSplitter : public QSplitter {
public:
  virtual ~MyQSplitter() {}
// void QSplitter(QWidget *)
MyQSplitter(QWidget * parent) : QSplitter(parent) {}
// void QSplitter(Qt::Orientation, QWidget *)
MyQSplitter(Qt::Orientation arg0, QWidget * parent) : QSplitter(arg0, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] QSplitterHandle * createHandle()
  virtual QSplitterHandle * createHandle() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createHandle", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSplitterHandle *)(irv);
      // Pointer Pointer QSplitterHandle *
    } else {
    return QSplitter::createHandle();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitter::childEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSplitter::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitter::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitter::changeEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void moveSplitter(int, int)
  virtual void moveSplitter(int pos, int index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveSplitter", &handled, 2, (uint64_t)pos, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitter::moveSplitter(pos, index);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setRubberBand(int)
  virtual void setRubberBand(int position) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setRubberBand", &handled, 1, (uint64_t)position, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitter::setRubberBand(position);
  }
  }

// Protected Visibility=Default Availability=Available
// [4] int closestLegalPosition(int, int)
  virtual int closestLegalPosition(int arg0, int arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closestLegalPosition", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QSplitter::closestLegalPosition(arg0, arg1);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:112
// [8] QSplitterHandle * createHandle()
extern "C" Q_DECL_EXPORT
void* C_ZN9QSplitter12createHandleEv(void *this_) {
  return (void*)((QSplitter*)this_)->QSplitter::createHandle();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:114
// [-2] void childEvent(QChildEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter10childEventEP11QChildEvent(void *this_, QChildEvent * arg0) {
  ((QSplitter*)this_)->QSplitter::childEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:116
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QSplitter5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QSplitter*)this_)->QSplitter::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:117
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QSplitter*)this_)->QSplitter::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:119
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QSplitter*)this_)->QSplitter::changeEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:120
// [-2] void moveSplitter(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter12moveSplitterEii(void *this_, int pos, int index) {
  ((QSplitter*)this_)->QSplitter::moveSplitter(pos, index);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:121
// [-2] void setRubberBand(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter13setRubberBandEi(void *this_, int position) {
  ((QSplitter*)this_)->QSplitter::setRubberBand(position);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:122
// [4] int closestLegalPosition(int, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QSplitter20closestLegalPositionEii(void *this_, int arg0, int arg1) {
  return (int)((QSplitter*)this_)->QSplitter::closestLegalPosition(arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSplitter10metaObjectEv(void *this_) {
  return (void*)((QSplitter*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSplitter11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSplitter*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QSplitter11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSplitter*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSplitter2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSplitter::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSplitter6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSplitter::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:67
// [-2] void QSplitter(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSplitterC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSplitter*)(0);
  return  new MyQSplitter(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:68
// [-2] void QSplitter(Qt::Orientation, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSplitterC2EN2Qt11OrientationEP7QWidget(Qt::Orientation arg0, QWidget * parent) {
  auto _nilp = (MyQSplitter*)(0);
  return  new MyQSplitter(arg0, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:69
// [-2] void ~QSplitter()
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitterD2Ev(void *this_) {
  delete (QSplitter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:71
// [-2] void addWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter9addWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QSplitter*)this_)->addWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:72
// [-2] void insertWidget(int, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter12insertWidgetEiP7QWidget(void *this_, int index, QWidget * widget) {
  ((QSplitter*)this_)->insertWidget(index, widget);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWidgets/qsplitter.h:73
// [8] QWidget * replaceWidget(int, QWidget *)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZN9QSplitter13replaceWidgetEiP7QWidget(void *this_, int index, QWidget * widget) {
  return (void*)((QSplitter*)this_)->replaceWidget(index, widget);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:75
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation arg0) {
  ((QSplitter*)this_)->setOrientation(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:76
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK9QSplitter11orientationEv(void *this_) {
  return (Qt::Orientation)((QSplitter*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:78
// [-2] void setChildrenCollapsible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter22setChildrenCollapsibleEb(void *this_, bool arg0) {
  ((QSplitter*)this_)->setChildrenCollapsible(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:79
// [1] bool childrenCollapsible()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSplitter19childrenCollapsibleEv(void *this_) {
  return (bool)((QSplitter*)this_)->childrenCollapsible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:81
// [-2] void setCollapsible(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter14setCollapsibleEib(void *this_, int index, bool arg1) {
  ((QSplitter*)this_)->setCollapsible(index, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:82
// [1] bool isCollapsible(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSplitter13isCollapsibleEi(void *this_, int index) {
  return (bool)((QSplitter*)this_)->isCollapsible(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:83
// [-2] void setOpaqueResize(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter15setOpaqueResizeEb(void *this_, bool opaque) {
  ((QSplitter*)this_)->setOpaqueResize(opaque);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:84
// [1] bool opaqueResize()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSplitter12opaqueResizeEv(void *this_) {
  return (bool)((QSplitter*)this_)->opaqueResize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:85
// [-2] void refresh()
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter7refreshEv(void *this_) {
  ((QSplitter*)this_)->refresh();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:87
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSplitter8sizeHintEv(void *this_) {
  auto rv = ((QSplitter*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:88
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSplitter15minimumSizeHintEv(void *this_) {
  auto rv = ((QSplitter*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:90
// [-2] QList<int> sizes()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK9QSplitter5sizesEv(void *this_) {
  auto rv = ((QSplitter*)this_)->sizes();
return new QList<int>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:91
// [-2] void setSizes(const QList<int> &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter8setSizesERK5QListIiE(void *this_, QList<int>* list) {
  ((QSplitter*)this_)->setSizes(*list);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:93
// [8] QByteArray saveState()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSplitter9saveStateEv(void *this_) {
  auto rv = ((QSplitter*)this_)->saveState();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:94
// [1] bool restoreState(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QSplitter12restoreStateERK10QByteArray(void *this_, QByteArray* state) {
  return (bool)((QSplitter*)this_)->restoreState(*state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:96
// [4] int handleWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK9QSplitter11handleWidthEv(void *this_) {
  return (int)((QSplitter*)this_)->handleWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:97
// [-2] void setHandleWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter14setHandleWidthEi(void *this_, int arg0) {
  ((QSplitter*)this_)->setHandleWidth(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:99
// [4] int indexOf(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK9QSplitter7indexOfEP7QWidget(void *this_, QWidget * w) {
  return (int)((QSplitter*)this_)->indexOf(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:100
// [8] QWidget * widget(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSplitter6widgetEi(void *this_, int index) {
  return (void*)((QSplitter*)this_)->widget(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:101
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK9QSplitter5countEv(void *this_) {
  return (int)((QSplitter*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:103
// [-2] void getRange(int, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK9QSplitter8getRangeEiPiS0_(void *this_, int index, int * arg1, int * arg2) {
  ((QSplitter*)this_)->getRange(index, arg1, arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:104
// [8] QSplitterHandle * handle(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSplitter6handleEi(void *this_, int index) {
  return (void*)((QSplitter*)this_)->handle(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:106
// [-2] void setStretchFactor(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter16setStretchFactorEii(void *this_, int index, int stretch) {
  ((QSplitter*)this_)->setStretchFactor(index, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:109
// [-2] void splitterMoved(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QSplitter13splitterMovedEii(void *this_, int pos, int index) {
  ((QSplitter*)this_)->splitterMoved(pos, index);
}

//  main block end
