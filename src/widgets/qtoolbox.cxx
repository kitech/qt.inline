//  header block begin
// /usr/include/qt/QtWidgets/qtoolbox.h
#include <qtoolbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolBox is pure virtual: false
// QToolBox has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN8QToolBox5eventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN8QToolBox5eventEP6QEvent(void*cbfn)
// { callback_ZN8QToolBox5eventEP6QEvent_fnptr = cbfn; }
// void* callback_ZN8QToolBox12itemInsertedEi_fnptr = 0;
// extern "C" void set_callback_ZN8QToolBox12itemInsertedEi(void*cbfn)
// { callback_ZN8QToolBox12itemInsertedEi_fnptr = cbfn; }
// void* callback_ZN8QToolBox11itemRemovedEi_fnptr = 0;
// extern "C" void set_callback_ZN8QToolBox11itemRemovedEi(void*cbfn)
// { callback_ZN8QToolBox11itemRemovedEi_fnptr = cbfn; }
// void* callback_ZN8QToolBox9showEventEP10QShowEvent_fnptr = 0;
// extern "C" void set_callback_ZN8QToolBox9showEventEP10QShowEvent(void*cbfn)
// { callback_ZN8QToolBox9showEventEP10QShowEvent_fnptr = cbfn; }
// void* callback_ZN8QToolBox11changeEventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN8QToolBox11changeEventEP6QEvent(void*cbfn)
// { callback_ZN8QToolBox11changeEventEP6QEvent_fnptr = cbfn; }

class MyQToolBox : public QToolBox {
public:
  virtual ~MyQToolBox() {}
// void QToolBox(class QWidget *, Qt::WindowFlags)
MyQToolBox(QWidget * parent, QFlags<Qt::WindowType> f) : QToolBox(parent, f) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN8QToolBox5eventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    return QToolBox::event(e);
  }
  }
// void itemInserted(int)
  virtual void itemInserted(int index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"itemInserted", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , int))(callback_ZN8QToolBox12itemInsertedEi_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , index);
    // }
    QToolBox::itemInserted(index);
  }
  }
// void itemRemoved(int)
  virtual void itemRemoved(int index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"itemRemoved", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , int))(callback_ZN8QToolBox11itemRemovedEi_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , index);
    // }
    QToolBox::itemRemoved(index);
  }
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QShowEvent *))(callback_ZN8QToolBox9showEventEP10QShowEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    QToolBox::showEvent(e);
  }
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN8QToolBox11changeEventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QToolBox::changeEvent(arg0);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK8QToolBox10metaObjectEv(void *this_) {
  return (void*)((QToolBox*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:60
// [-2] void QToolBox(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN8QToolBoxC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQToolBox*)(0);
  return  new MyQToolBox(parent, f);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:61
// [-2] void ~QToolBox()
extern "C"
void C_ZN8QToolBoxD2Ev(void *this_) {
  delete (QToolBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:63
// [4] int addItem(class QWidget *, const class QString &)
extern "C"
int C_ZN8QToolBox7addItemEP7QWidgetRK7QString(void *this_, QWidget * widget, QString* text) {
  return (int)((QToolBox*)this_)->addItem(widget, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:64
// [4] int addItem(class QWidget *, const class QIcon &, const class QString &)
extern "C"
int C_ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString(void *this_, QWidget * widget, QIcon* icon, QString* text) {
  return (int)((QToolBox*)this_)->addItem(widget, *icon, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:65
// [4] int insertItem(int, class QWidget *, const class QString &)
extern "C"
int C_ZN8QToolBox10insertItemEiP7QWidgetRK7QString(void *this_, int index, QWidget * widget, QString* text) {
  return (int)((QToolBox*)this_)->insertItem(index, widget, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:66
// [4] int insertItem(int, class QWidget *, const class QIcon &, const class QString &)
extern "C"
int C_ZN8QToolBox10insertItemEiP7QWidgetRK5QIconRK7QString(void *this_, int index, QWidget * widget, QIcon* icon, QString* text) {
  return (int)((QToolBox*)this_)->insertItem(index, widget, *icon, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:68
// [-2] void removeItem(int)
extern "C"
void C_ZN8QToolBox10removeItemEi(void *this_, int index) {
  ((QToolBox*)this_)->removeItem(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:70
// [-2] void setItemEnabled(int, _Bool)
extern "C"
void C_ZN8QToolBox14setItemEnabledEib(void *this_, int index, bool enabled) {
  ((QToolBox*)this_)->setItemEnabled(index, enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:71
// [1] bool isItemEnabled(int)
extern "C"
bool C_ZNK8QToolBox13isItemEnabledEi(void *this_, int index) {
  return (bool)((QToolBox*)this_)->isItemEnabled(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:73
// [-2] void setItemText(int, const class QString &)
extern "C"
void C_ZN8QToolBox11setItemTextEiRK7QString(void *this_, int index, QString* text) {
  ((QToolBox*)this_)->setItemText(index, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:74
// [8] QString itemText(int)
extern "C"
void* C_ZNK8QToolBox8itemTextEi(void *this_, int index) {
  auto rv = ((QToolBox*)this_)->itemText(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:76
// [-2] void setItemIcon(int, const class QIcon &)
extern "C"
void C_ZN8QToolBox11setItemIconEiRK5QIcon(void *this_, int index, QIcon* icon) {
  ((QToolBox*)this_)->setItemIcon(index, *icon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:77
// [8] QIcon itemIcon(int)
extern "C"
void* C_ZNK8QToolBox8itemIconEi(void *this_, int index) {
  auto rv = ((QToolBox*)this_)->itemIcon(index);
return new QIcon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:80
// [-2] void setItemToolTip(int, const class QString &)
extern "C"
void C_ZN8QToolBox14setItemToolTipEiRK7QString(void *this_, int index, QString* toolTip) {
  ((QToolBox*)this_)->setItemToolTip(index, *toolTip);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:81
// [8] QString itemToolTip(int)
extern "C"
void* C_ZNK8QToolBox11itemToolTipEi(void *this_, int index) {
  auto rv = ((QToolBox*)this_)->itemToolTip(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:84
// [4] int currentIndex()
extern "C"
int C_ZNK8QToolBox12currentIndexEv(void *this_) {
  return (int)((QToolBox*)this_)->currentIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:85
// [8] QWidget * currentWidget()
extern "C"
void* C_ZNK8QToolBox13currentWidgetEv(void *this_) {
  return (void*)((QToolBox*)this_)->currentWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:86
// [8] QWidget * widget(int)
extern "C"
void* C_ZNK8QToolBox6widgetEi(void *this_, int index) {
  return (void*)((QToolBox*)this_)->widget(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:87
// [4] int indexOf(class QWidget *)
extern "C"
int C_ZNK8QToolBox7indexOfEP7QWidget(void *this_, QWidget * widget) {
  return (int)((QToolBox*)this_)->indexOf(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:88
// [4] int count()
extern "C"
int C_ZNK8QToolBox5countEv(void *this_) {
  return (int)((QToolBox*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:91
// [-2] void setCurrentIndex(int)
extern "C"
void C_ZN8QToolBox15setCurrentIndexEi(void *this_, int index) {
  ((QToolBox*)this_)->setCurrentIndex(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:92
// [-2] void setCurrentWidget(class QWidget *)
extern "C"
void C_ZN8QToolBox16setCurrentWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QToolBox*)this_)->setCurrentWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:95
// [-2] void currentChanged(int)
extern "C"
void C_ZN8QToolBox14currentChangedEi(void *this_, int index) {
  ((QToolBox*)this_)->currentChanged(index);
}
//  main block end
