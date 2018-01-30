//  header block begin
// /usr/include/qt/QtWidgets/qtoolbox.h
#include <qtoolbox.h>
#include <QtWidgets>

// QToolBox is pure virtual: false
// QToolBox has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:98
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN8QToolBox5eventEP6QEvent = 0;
extern "C" void set_callback_ZN8QToolBox5eventEP6QEvent(void*cbfn)
{ callback_ZN8QToolBox5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:99
// [-2] void itemInserted(int)
extern "C"
void* callback_ZN8QToolBox12itemInsertedEi = 0;
extern "C" void set_callback_ZN8QToolBox12itemInsertedEi(void*cbfn)
{ callback_ZN8QToolBox12itemInsertedEi = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:100
// [-2] void itemRemoved(int)
extern "C"
void* callback_ZN8QToolBox11itemRemovedEi = 0;
extern "C" void set_callback_ZN8QToolBox11itemRemovedEi(void*cbfn)
{ callback_ZN8QToolBox11itemRemovedEi = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:101
// [-2] void showEvent(class QShowEvent *)
extern "C"
void* callback_ZN8QToolBox9showEventEP10QShowEvent = 0;
extern "C" void set_callback_ZN8QToolBox9showEventEP10QShowEvent(void*cbfn)
{ callback_ZN8QToolBox9showEventEP10QShowEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:102
// [-2] void changeEvent(class QEvent *)
extern "C"
void* callback_ZN8QToolBox11changeEventEP6QEvent = 0;
extern "C" void set_callback_ZN8QToolBox11changeEventEP6QEvent(void*cbfn)
{ callback_ZN8QToolBox11changeEventEP6QEvent = cbfn; }

class MyQToolBox : public QToolBox {
public:
  virtual ~MyQToolBox() {}
// void QToolBox(class QWidget *, Qt::WindowFlags)
MyQToolBox(QWidget * parent, QFlags<Qt::WindowType> f) : QToolBox(parent, f) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    if (callback_ZN8QToolBox5eventEP6QEvent != 0) {
      // callback_ZN8QToolBox5eventEP6QEvent(e);
    }
    return QToolBox::event(e);
  }
// void itemInserted(int)
  virtual void itemInserted(int index) {
    if (callback_ZN8QToolBox12itemInsertedEi != 0) {
      // callback_ZN8QToolBox12itemInsertedEi(index);
    }
    QToolBox::itemInserted(index);
  }
// void itemRemoved(int)
  virtual void itemRemoved(int index) {
    if (callback_ZN8QToolBox11itemRemovedEi != 0) {
      // callback_ZN8QToolBox11itemRemovedEi(index);
    }
    QToolBox::itemRemoved(index);
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * e) {
    if (callback_ZN8QToolBox9showEventEP10QShowEvent != 0) {
      // callback_ZN8QToolBox9showEventEP10QShowEvent(e);
    }
    QToolBox::showEvent(e);
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    if (callback_ZN8QToolBox11changeEventEP6QEvent != 0) {
      // callback_ZN8QToolBox11changeEventEP6QEvent(arg0);
    }
    QToolBox::changeEvent(arg0);
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
int C_ZN8QToolBox7addItemEP7QWidgetRK7QString(void *this_, QWidget * widget, const QString & text) {
  return (int)((QToolBox*)this_)->addItem(widget, text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:64
// [4] int addItem(class QWidget *, const class QIcon &, const class QString &)
extern "C"
int C_ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString(void *this_, QWidget * widget, const QIcon & icon, const QString & text) {
  return (int)((QToolBox*)this_)->addItem(widget, icon, text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:65
// [4] int insertItem(int, class QWidget *, const class QString &)
extern "C"
int C_ZN8QToolBox10insertItemEiP7QWidgetRK7QString(void *this_, int index, QWidget * widget, const QString & text) {
  return (int)((QToolBox*)this_)->insertItem(index, widget, text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:66
// [4] int insertItem(int, class QWidget *, const class QIcon &, const class QString &)
extern "C"
int C_ZN8QToolBox10insertItemEiP7QWidgetRK5QIconRK7QString(void *this_, int index, QWidget * widget, const QIcon & icon, const QString & text) {
  return (int)((QToolBox*)this_)->insertItem(index, widget, icon, text);
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
void C_ZN8QToolBox11setItemTextEiRK7QString(void *this_, int index, const QString & text) {
  ((QToolBox*)this_)->setItemText(index, text);
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
void C_ZN8QToolBox11setItemIconEiRK5QIcon(void *this_, int index, const QIcon & icon) {
  ((QToolBox*)this_)->setItemIcon(index, icon);
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
void C_ZN8QToolBox14setItemToolTipEiRK7QString(void *this_, int index, const QString & toolTip) {
  ((QToolBox*)this_)->setItemToolTip(index, toolTip);
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
